// NASA ASCEND Website JavaScript

// Smooth scrolling for navigation links
document.addEventListener('DOMContentLoaded', function() {
    // Navigation smooth scroll
    const navLinks = document.querySelectorAll('.nav-menu a[href^="#"]');
    
    navLinks.forEach(link => {
        link.addEventListener('click', function(e) {
            e.preventDefault();
            const targetId = this.getAttribute('href');
            const targetSection = document.querySelector(targetId);
            
            if (targetSection) {
                const offsetTop = targetSection.offsetTop - 80; // Account for fixed navbar
                window.scrollTo({
                    top: offsetTop,
                    behavior: 'smooth'
                });
            }
        });
    });

    // Animate stats on scroll
    const animateStats = () => {
        const stats = document.querySelectorAll('.stat-number');
        const statsSection = document.querySelector('.mission-stats');
        
        if (!statsSection) return;
        
        const observer = new IntersectionObserver((entries) => {
            entries.forEach(entry => {
                if (entry.isIntersecting) {
                    stats.forEach(stat => {
                        const target = parseInt(stat.getAttribute('data-target'));
                        animateValue(stat, 0, target, 2000);
                    });
                    observer.unobserve(entry.target);
                }
            });
        }, { threshold: 0.5 });
        
        observer.observe(statsSection);
    };

    // Counter animation function
    function animateValue(element, start, end, duration) {
        let startTimestamp = null;
        const step = (timestamp) => {
            if (!startTimestamp) startTimestamp = timestamp;
            const progress = Math.min((timestamp - startTimestamp) / duration, 1);
            
            // Easing function for smooth animation
            const easeOutQuart = 1 - Math.pow(1 - progress, 4);
            
            const current = Math.floor(start + (end - start) * easeOutQuart);
            
            // Format number with K suffix for thousands
            if (end >= 100 && element.textContent.includes('K')) {
                element.textContent = Math.floor(current / 10) + 'K';
            } else {
                element.textContent = current;
            }
            
            if (progress < 1) {
                window.requestAnimationFrame(step);
            } else {
                element.textContent = end;
            }
        };
        window.requestAnimationFrame(step);
    }

    // Navbar background on scroll
    const navbar = document.querySelector('.navbar');
    let lastScroll = 0;
    
    window.addEventListener('scroll', () => {
        const currentScroll = window.pageYOffset;
        
        if (currentScroll > 100) {
            navbar.style.background = 'rgba(10, 14, 39, 0.98)';
            navbar.style.boxShadow = '0 2px 20px rgba(0, 0, 0, 0.5)';
        } else {
            navbar.style.background = 'rgba(10, 14, 39, 0.95)';
            navbar.style.boxShadow = 'none';
        }
        
        lastScroll = currentScroll;
    });

    // Intersection Observer for fade-in animations
    const observerOptions = {
        threshold: 0.1,
        rootMargin: '0px 0px -50px 0px'
    };

    const observer = new IntersectionObserver((entries) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                entry.target.style.opacity = '1';
                entry.target.style.transform = 'translateY(0)';
            }
        });
    }, observerOptions);

    // Observe all sections and cards
    const sections = document.querySelectorAll('section');
    const cards = document.querySelectorAll('.feature-card, .mission-card, .video-card, .team-section');
    
    sections.forEach(section => {
        section.style.opacity = '0';
        section.style.transform = 'translateY(30px)';
        section.style.transition = 'opacity 0.6s ease-out, transform 0.6s ease-out';
        observer.observe(section);
    });
    
    cards.forEach((card, index) => {
        card.style.opacity = '0';
        card.style.transform = 'translateY(30px)';
        card.style.transition = `opacity 0.6s ease-out ${index * 0.1}s, transform 0.6s ease-out ${index * 0.1}s`;
        observer.observe(card);
    });

    // Initialize stats animation
    animateStats();

    // Active section highlighting in navigation
    const sectionsList = document.querySelectorAll('section[id]');
    
    window.addEventListener('scroll', () => {
        let current = '';
        
        sectionsList.forEach(section => {
            const sectionTop = section.offsetTop;
            const sectionHeight = section.clientHeight;
            if (window.pageYOffset >= (sectionTop - 200)) {
                current = section.getAttribute('id');
            }
        });

        navLinks.forEach(link => {
            link.classList.remove('active');
            if (link.getAttribute('href') === `#${current}`) {
                link.classList.add('active');
            }
        });
    });

    // Video hover effects
    const videoCards = document.querySelectorAll('.video-card');
    videoCards.forEach(card => {
        card.addEventListener('mouseenter', function() {
            this.style.transform = 'translateY(-10px) scale(1.02)';
        });
        
        card.addEventListener('mouseleave', function() {
            this.style.transform = 'translateY(0) scale(1)';
        });
    });

    // Mission card click effects
    const missionCards = document.querySelectorAll('.mission-card');
    missionCards.forEach(card => {
        card.addEventListener('click', function() {
            // Remove active class from all cards
            missionCards.forEach(c => c.classList.remove('active'));
            // Add active class to clicked card
            this.classList.add('active');
        });
    });

    // Mobile menu toggle
    const createMobileMenu = () => {
        const nav = document.querySelector('.navbar');
        const navMenu = document.querySelector('.nav-menu');
        const navContainer = document.querySelector('.nav-container');
        
        if (window.innerWidth <= 768) {
            if (!document.querySelector('.menu-toggle')) {
                const toggle = document.createElement('button');
                toggle.className = 'menu-toggle';
                toggle.innerHTML = '☰';
                toggle.setAttribute('aria-label', 'Toggle menu');
                navContainer.appendChild(toggle);
                
                toggle.addEventListener('click', () => {
                    navMenu.classList.toggle('active');
                    toggle.innerHTML = navMenu.classList.contains('active') ? '✕' : '☰';
                });

                // Close menu when clicking on a link
                navLinks.forEach(link => {
                    link.addEventListener('click', () => {
                        navMenu.classList.remove('active');
                        toggle.innerHTML = '☰';
                    });
                });
            }
        } else {
            const toggle = document.querySelector('.menu-toggle');
            if (toggle) {
                toggle.remove();
            }
            navMenu.classList.remove('active');
            navMenu.style.display = 'flex';
        }
    };

    // Check window size on load and resize
    createMobileMenu();
    window.addEventListener('resize', createMobileMenu);

    // Parallax effect for hero section
    window.addEventListener('scroll', () => {
        const scrolled = window.pageYOffset;
        const hero = document.querySelector('.hero');
        if (hero) {
            const rate = scrolled * 0.5;
            hero.style.transform = `translateY(${rate}px)`;
        }
    });

    // Add loading animation for videos
    const videoContainers = document.querySelectorAll('.video-container');
    videoContainers.forEach(container => {
        const iframe = container.querySelector('iframe');
        if (iframe) {
            iframe.addEventListener('load', function() {
                container.style.opacity = '1';
            });
            container.style.opacity = '0.7';
            container.style.transition = 'opacity 0.3s ease';
        }
    });

    // Console message for NASA ASCEND
    console.log('%cNASA ASCEND - Phoenix College', 'color: #FC3D21; font-size: 20px; font-weight: bold;');
    console.log('%cReach for the Stars! 🚀', 'color: #FFD700; font-size: 14px;');

    // Initialize telemetry data visualizations
    initializeTelemetryCharts();
    
    // Simulate real-time data updates
    startTelemetryUpdates();
});

// Telemetry Data Visualization
function initializeTelemetryCharts() {
    // Altitude Chart
    const altitudeCanvas = document.getElementById('altitudeChartCanvas');
    if (altitudeCanvas) {
        drawAltitudeChart(altitudeCanvas);
    }

    // Temperature Chart
    const tempCanvas = document.getElementById('tempChartCanvas');
    if (tempCanvas) {
        drawTemperatureChart(tempCanvas);
    }
}

function drawAltitudeChart(canvas) {
    const ctx = canvas.getContext('2d');
    const width = canvas.parentElement.offsetWidth;
    const height = 300;
    canvas.width = width;
    canvas.height = height;

    // Sample altitude data (simulated)
    const altitudes = [0, 5000, 10000, 15000, 20000, 25000, 28500, 28000, 25000, 20000, 15000, 10000, 5000, 0];
    const times = altitudes.map((_, i) => i * 20); // minutes

    ctx.strokeStyle = '#FFD700';
    ctx.lineWidth = 3;
    ctx.beginPath();

    const maxAlt = Math.max(...altitudes);
    const padding = 40;

    altitudes.forEach((alt, i) => {
        const x = (i / (altitudes.length - 1)) * (width - padding * 2) + padding;
        const y = height - padding - (alt / maxAlt) * (height - padding * 2);
        
        if (i === 0) {
            ctx.moveTo(x, y);
        } else {
            ctx.lineTo(x, y);
        }
    });

    ctx.stroke();

    // Add grid lines
    ctx.strokeStyle = 'rgba(255, 255, 255, 0.1)';
    ctx.lineWidth = 1;
    for (let i = 0; i <= 5; i++) {
        const y = padding + (i / 5) * (height - padding * 2);
        ctx.beginPath();
        ctx.moveTo(padding, y);
        ctx.lineTo(width - padding, y);
        ctx.stroke();
    }

    // Labels
    ctx.fillStyle = '#FFFFFF';
    ctx.font = '12px Roboto';
    ctx.fillText('Altitude (m)', padding, padding - 10);
    ctx.fillText('0', padding - 20, height - padding);
    ctx.fillText(Math.round(maxAlt).toString(), padding - 30, padding);
}

function drawTemperatureChart(canvas) {
    const ctx = canvas.getContext('2d');
    const width = canvas.parentElement.offsetWidth;
    const height = 300;
    canvas.width = width;
    canvas.height = height;

    // Sample temperature data (simulated - showing temperature drop with altitude)
    const temperatures = [25, 10, -5, -20, -35, -45, -56, -55, -50, -40, -25, -10, 5, 20];
    const altitudes = [0, 5000, 10000, 15000, 20000, 25000, 28500, 28000, 25000, 20000, 15000, 10000, 5000, 0];

    ctx.strokeStyle = '#FC3D21';
    ctx.lineWidth = 3;
    ctx.beginPath();

    const minTemp = Math.min(...temperatures);
    const maxTemp = Math.max(...temperatures);
    const tempRange = maxTemp - minTemp;
    const padding = 40;

    temperatures.forEach((temp, i) => {
        const x = (i / (temperatures.length - 1)) * (width - padding * 2) + padding;
        const y = height - padding - ((temp - minTemp) / tempRange) * (height - padding * 2);
        
        if (i === 0) {
            ctx.moveTo(x, y);
        } else {
            ctx.lineTo(x, y);
        }
    });

    ctx.stroke();

    // Add grid lines
    ctx.strokeStyle = 'rgba(255, 255, 255, 0.1)';
    ctx.lineWidth = 1;
    for (let i = 0; i <= 5; i++) {
        const y = padding + (i / 5) * (height - padding * 2);
        ctx.beginPath();
        ctx.moveTo(padding, y);
        ctx.lineTo(width - padding, y);
        ctx.stroke();
    }

    // Labels
    ctx.fillStyle = '#FFFFFF';
    ctx.font = '12px Roboto';
    ctx.fillText('Temperature (°C)', padding, padding - 10);
    ctx.fillText(Math.round(minTemp).toString(), padding - 30, height - padding);
    ctx.fillText(Math.round(maxTemp).toString(), padding - 30, padding);
}

// Simulate real-time telemetry updates
function startTelemetryUpdates() {
    const updateInterval = 5000; // Update every 5 seconds

    setInterval(() => {
        // Update telemetry points (simulate data collection)
        const telemetryEl = document.getElementById('telemetry-points');
        if (telemetryEl) {
            const current = parseInt(telemetryEl.textContent.replace(/,/g, ''));
            const increment = Math.floor(Math.random() * 50) + 10;
            telemetryEl.textContent = (current + increment).toLocaleString();
        }

        // Update current altitude (small variations)
        const altitudeEl = document.getElementById('current-altitude');
        if (altitudeEl) {
            const current = parseInt(altitudeEl.textContent);
            const variation = Math.floor(Math.random() * 100) - 50;
            const newAlt = Math.max(28000, Math.min(29000, current + variation));
            altitudeEl.textContent = newAlt.toLocaleString();
        }

        // Update temperature (small variations)
        const tempEl = document.getElementById('temperature');
        if (tempEl) {
            const current = parseFloat(tempEl.textContent);
            const variation = (Math.random() * 2) - 1;
            const newTemp = (current + variation).toFixed(1);
            tempEl.textContent = newTemp;
        }

        // Update pressure (small variations)
        const pressureEl = document.getElementById('pressure');
        if (pressureEl) {
            const current = parseFloat(pressureEl.textContent);
            const variation = (Math.random() * 0.1) - 0.05;
            const newPressure = Math.max(2.0, Math.min(2.5, current + variation)).toFixed(1);
            pressureEl.textContent = newPressure;
        }

        // Update humidity (very small variations)
        const humidityEl = document.getElementById('humidity');
        if (humidityEl) {
            const current = parseFloat(humidityEl.textContent);
            const variation = (Math.random() * 0.01) - 0.005;
            const newHumidity = Math.max(0, Math.min(0.1, current + variation)).toFixed(3);
            humidityEl.textContent = newHumidity;
        }

        // Update GPS signal (small variations)
        const gpsEl = document.getElementById('gps-signal');
        if (gpsEl) {
            const current = parseFloat(gpsEl.textContent);
            const variation = (Math.random() * 2) - 1;
            const newGPS = Math.max(95, Math.min(100, current + variation)).toFixed(1);
            gpsEl.textContent = newGPS;
        }
    }, updateInterval);
}

// FAQ Toggle Function
function toggleFAQ(button) {
    const faqItem = button.closest('.faq-item');
    const isActive = faqItem.classList.contains('active');
    
    // Close all FAQ items
    document.querySelectorAll('.faq-item').forEach(item => {
        item.classList.remove('active');
    });
    
    // Open clicked item if it wasn't active
    if (!isActive) {
        faqItem.classList.add('active');
    }
}

// Student Portal Functions
function openStudentPortal(event) {
    if (event) {
        event.preventDefault();
    }
    const portal = document.getElementById('student-portal');
    if (portal) {
        portal.classList.add('active');
        document.body.style.overflow = 'hidden'; // Prevent background scrolling
        // Scroll to portal if needed
        portal.scrollIntoView({ behavior: 'smooth', block: 'center' });
    }
}

function closeStudentPortal() {
    const portal = document.getElementById('student-portal');
    if (portal) {
        portal.classList.remove('active');
        document.body.style.overflow = ''; // Restore scrolling
    }
}

// Track access attempts (for analytics/security)
function trackAccess(accessType) {
    console.log(`Access attempt: ${accessType}`);
    // Here you could send analytics data to a backend
    // Example: fetch('/api/track-access', { method: 'POST', body: JSON.stringify({ type: accessType, timestamp: Date.now() }) });
    
    // For now, just log it
    if (accessType === 'drive_direct') {
        console.log('User attempting to access Field Team Footage via Google Drive');
    } else if (accessType === 'ascend_drive') {
        console.log('User attempting to access full ASCEND Drive');
    }
}

// Close portal when clicking outside
document.addEventListener('DOMContentLoaded', function() {
    const portal = document.getElementById('student-portal');
    const portalContent = document.querySelector('.portal-content');
    
    if (portal) {
        // Close when clicking the backdrop (outside the modal content)
        portal.addEventListener('click', function(event) {
            if (event.target === portal) {
                closeStudentPortal();
            }
        });

        // Prevent closing when clicking inside the modal content
        if (portalContent) {
            portalContent.addEventListener('click', function(event) {
                event.stopPropagation();
            });
        }

        // Close on Escape key
        document.addEventListener('keydown', function(event) {
            if (event.key === 'Escape' && portal.classList.contains('active')) {
                closeStudentPortal();
            }
        });
    }

    // Handle Student Portal link in navigation
    const portalLinks = document.querySelectorAll('a[href="#student-portal"]');
    portalLinks.forEach(link => {
        link.addEventListener('click', function(e) {
            e.preventDefault();
            openStudentPortal(e);
        });
    });
});

// Add CSS for active nav link
const style = document.createElement('style');
style.textContent = `
    .nav-menu a.active {
        color: var(--nasa-red) !important;
    }
    .nav-menu a.active::after {
        width: 100% !important;
    }
    @media (max-width: 768px) {
        .nav-menu {
            position: absolute;
            top: 100%;
            left: 0;
            width: 100%;
            background: rgba(10, 14, 39, 0.98);
            flex-direction: column;
            padding: 1rem;
            border-top: 1px solid rgba(252, 61, 33, 0.3);
            display: none;
        }
        .nav-menu.active {
            display: flex;
        }
        .menu-toggle {
            display: block !important;
        }
    }
`;
document.head.appendChild(style);
