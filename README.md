# NASA ASCEND - Phoenix College Website

Official website for the NASA ASCEND (Arizona Space Grant High-Altitude Ballooning Program) at Phoenix College.

## Project Overview

This is a comprehensive, NASA-inspired website showcasing the high-altitude ballooning program at Phoenix College. The site features mission telemetry data, team information, video content, and a secure student portal for restricted Google Drive content access.

## Features

- **NASA-Inspired Design**: Space-themed UI with animated starfield backgrounds
- **Mission Telemetry Dashboard**: Real-time data visualization with altitude, temperature, pressure, and GPS tracking
- **Payload Specifications**: Detailed technical information about mission hardware
- **Team Showcases**: Complete team rosters from Fall 2025 back to Spring 2021
- **Video Gallery**: Embedded YouTube videos and restricted Google Drive content
- **Student Portal**: Secure access system for Maricopa Community College students (Google Drive behind login)
- **Responsive Design**: Mobile-optimized for all devices
- **Interactive Charts**: Canvas-based data visualizations for mission data

## Project Structure

```
NASA-ASCEND-Website/
├── index.html          # Main HTML file
├── styles.css          # All CSS styling
├── script.js           # JavaScript functionality
├── README.md           # This file
├── images/             # Image assets
│   └── fall2025/       # Fall 2025 mission images
├── arduino/            # Arduino code
└── hardware/           # Hardware documentation
```

## Technologies Used

- **HTML5**: Semantic markup
- **CSS3**: Custom properties, animations, responsive design
- **JavaScript (Vanilla)**: No frameworks, pure JS for performance
- **Google Fonts**: Orbitron (headings) & Roboto (body)
- **Canvas API**: Data visualization charts

## Student Portal Setup

The Student Portal provides secure access to Google Drive content restricted to Maricopa Community College students.

### Google Drive Configuration

1. **Set File Restrictions:**
   - Open Google Drive → Right-click video/file
   - Click "Share" → "Change to restricted"
   - Set to: "Only people in Maricopa Community College District"
   - OR manually add: `@maricopa.edu` and `@phoenixcollege.edu` domains
   - Ensure "Anyone with the link" is **disabled**

2. **Update File ID:**
   - Current file ID: `1sYE3K5CmfcvAx23ppqsUi0n2jDLxYpdG`
   - Update in `index.html` if file changes (search for "student-portal")

## Local Development

1. **Open in browser:**
   - Simply open `index.html` in your browser
   - Or use a local server:
     ```bash
     # Python 3
     python -m http.server 8000
     
     # Node.js (with http-server)
     npx http-server
     ```

2. **Edit files:**
   - `index.html`: Structure and content
   - `styles.css`: All styling
   - `script.js`: Interactivity and charts

## Content Updates

### Adding New Missions

1. Add mission card in "Mission Highlights" section
2. Update mission comparison table
3. Add telemetry data if available

### Updating Team Information

1. Find the appropriate team section
2. Update team members and roles
3. Mark current team with `current-team` class

### Modifying Telemetry Data

1. Update values in data cards
2. Modify chart data in `script.js` functions
3. Adjust update intervals if needed

## Browser Support

- Chrome/Edge: ✅ Full support
- Firefox: ✅ Full support
- Safari: ✅ Full support
- Mobile browsers: ✅ Responsive design

## Support

For issues or questions:
- **Email**: ascend@phoenixcollege.edu
- **Website**: https://nasaascend.net

## License

© 2025 Phoenix College NASA ASCEND Program. All rights reserved.

## Acknowledgments

- **NASA**: For the Space Grant program
- **Arizona Space Grant Consortium**: Funding and support
- **Phoenix College**: Institutional support
- **All ASCEND Team Members**: Past and present contributors

---

**Built with 🚀 for the stars**
