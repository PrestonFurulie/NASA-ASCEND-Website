// NASA ASCEND - Login Authentication

document.addEventListener('DOMContentLoaded', function() {
    const loginForm = document.getElementById('loginForm');
    const errorMessage = document.getElementById('errorMessage');
    const emailInput = document.getElementById('email');
    const passwordInput = document.getElementById('password');
    
    if (!loginForm || !emailInput || !passwordInput || !errorMessage) {
        return;
    }

    // If the user already has an active session, send them straight to the dashboard
    const isAuthenticated = sessionStorage.getItem('nasaAscendAuth') === 'true';
    const existingUser = sessionStorage.getItem('nasaAscendUser');
    if (isAuthenticated && existingUser) {
        window.location.href = 'dashboard.html';
        return;
    }
    
    const VALID_PASSWORD = 'PCNasa!';
    
    loginForm.addEventListener('submit', function(e) {
        e.preventDefault();
        
        // Clear previous error
        errorMessage.classList.remove('show');
        errorMessage.textContent = '';
        
        const email = emailInput.value.trim().toLowerCase();
        const password = passwordInput.value;
        
        // Validate email domain
        if (!email.endsWith('@maricopa.edu')) {
            showError('Access denied. Use an authorized @maricopa.edu email address.');
            return;
        }
        
        // Validate password
        if (password !== VALID_PASSWORD) {
            showError('Invalid password. Please try again.');
            return;
        }
        
        // Successful login - store session and redirect
        sessionStorage.setItem('nasaAscendUser', email);
        sessionStorage.setItem('nasaAscendAuth', 'true');
        
        window.location.href = 'dashboard.html';
    });

    emailInput.addEventListener('input', () => {
        errorMessage.classList.remove('show');
        errorMessage.textContent = '';
    });

    passwordInput.addEventListener('input', () => {
        errorMessage.classList.remove('show');
        errorMessage.textContent = '';
    });
    
    function showError(message) {
        errorMessage.textContent = message;
        errorMessage.classList.add('show');
        
        loginForm.style.animation = 'shake 0.5s';
        setTimeout(() => {
            loginForm.style.animation = '';
        }, 500);
    }
});

// Add shake animation
const style = document.createElement('style');
style.textContent = `
    @keyframes shake {
        0%, 100% { transform: translateX(0); }
        10%, 30%, 50%, 70%, 90% { transform: translateX(-5px); }
        20%, 40%, 60%, 80% { transform: translateX(5px); }
    }
`;
document.head.appendChild(style);
