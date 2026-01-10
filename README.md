# NASA ASCEND - Phoenix College Website

Official website for the NASA ASCEND (Arizona Space Grant High-Altitude Ballooning Program) at Phoenix College.

## 🚀 Project Overview

This is a comprehensive, NASA-inspired website showcasing the high-altitude ballooning program at Phoenix College. The site features mission telemetry data, team information, video content, and a secure student portal for restricted content access.

## ✨ Features

- **NASA-Inspired Design**: Space-themed UI with animated starfield backgrounds
- **Mission Telemetry Dashboard**: Real-time data visualization with altitude, temperature, pressure, and GPS tracking
- **Payload Specifications**: Detailed technical information about mission hardware
- **Team Showcases**: Complete team rosters from Fall 2025 back to Spring 2021
- **Video Gallery**: Embedded YouTube videos and restricted Google Drive content
- **Student Portal**: Secure access system for Maricopa Community College students
- **Responsive Design**: Mobile-optimized for all devices
- **Interactive Charts**: Canvas-based data visualizations for mission data

## 📁 Project Structure

```
NASA-ASCEND-Website/
├── index.html          # Main HTML file
├── styles.css          # All CSS styling
├── script.js           # JavaScript functionality
├── README.md           # This file
├── netlify.toml        # Netlify deployment config
└── .gitignore          # Git ignore file
```

## 🛠️ Technologies Used

- **HTML5**: Semantic markup
- **CSS3**: Custom properties, animations, responsive design
- **JavaScript (Vanilla)**: No frameworks, pure JS for performance
- **Google Fonts**: Orbitron (headings) & Roboto (body)
- **Canvas API**: Data visualization charts

## 🚀 Deployment Options

### Option 1: GitHub Pages (Recommended - Free)

1. **Push to GitHub:**
   ```bash
   git init
   git add .
   git commit -m "Initial commit: NASA ASCEND website"
   git branch -M main
   git remote add origin https://github.com/yourusername/nasa-ascend-website.git
   git push -u origin main
   ```

2. **Enable GitHub Pages:**
   - Go to repository Settings → Pages
   - Source: Deploy from branch
   - Branch: `main` / `root`
   - Click Save
   - Your site will be live at: `https://yourusername.github.io/nasa-ascend-website/`

### Option 2: Netlify (Recommended - Free & Fast)

1. **Via Netlify Dashboard:**
   - Go to [netlify.com](https://netlify.com)
   - Click "Add new site" → "Import an existing project"
   - Connect your GitHub repository
   - Build settings:
     - Build command: (leave empty - static site)
     - Publish directory: `/` (root)
   - Click "Deploy site"

2. **Via Netlify CLI:**
   ```bash
   npm install -g netlify-cli
   netlify login
   netlify deploy --prod
   ```

3. **Custom Domain:**
   - Add your domain in Netlify dashboard
   - Update DNS records as instructed
   - SSL certificate is automatic

### Option 3: Vercel

1. **Via Vercel Dashboard:**
   - Go to [vercel.com](https://vercel.com)
   - Import your GitHub repository
   - Framework Preset: Other
   - Root Directory: `./`
   - Click Deploy

2. **Via Vercel CLI:**
   ```bash
   npm install -g vercel
   vercel
   ```

### Option 4: Traditional Web Hosting

1. **Upload Files:**
   - Upload `index.html`, `styles.css`, and `script.js` to your web server
   - Ensure all files are in the root directory or same folder
   - Access via your domain: `https://nasaascend.net`

2. **Recommended Hosts:**
   - **Namecheap**: Shared hosting
   - **Bluehost**: WordPress hosting (can host static sites)
   - **AWS S3 + CloudFront**: Scalable static hosting
   - **Google Cloud Storage**: Similar to AWS

## 🔒 Student Portal Setup

The Student Portal requires Google Drive file restrictions:

1. **Google Drive Configuration:**
   - Open Google Drive → Right-click video file
   - Click "Share" → "Change to restricted"
   - Set to: "Only people in Maricopa Community College District"
   - OR manually add: `@maricopa.edu` and `@phoenixcollege.edu` domains
   - Ensure "Anyone with the link" is **disabled**

2. **File ID:**
   - Current file ID: `1sYE3K5CmfcvAx23ppqsUi0n2jDLxYpdG`
   - Update in `index.html` if file changes

## 📊 Customization

### Update Mission Data

Edit telemetry values in `index.html`:
- Search for `telemetry-points`, `current-altitude`, etc.
- Update values in the data cards

### Modify Team Information

Team data is in the "Teams" section of `index.html`:
- Find `<div class="team-section">` for each semester
- Update team member names and roles

### Change Colors

Edit CSS variables in `styles.css`:
```css
:root {
    --nasa-red: #FC3D21;
    --nasa-blue: #0B3D91;
    --accent-gold: #FFD700;
    /* ... */
}
```

### Add New Videos

In the Videos section, add new video cards:
```html
<div class="video-card">
    <div class="video-container">
        <iframe src="YOUTUBE_EMBED_URL"></iframe>
    </div>
    <h3>Video Title</h3>
    <p>Description</p>
</div>
```

## 🎨 Design Features

- **Animated Starfield**: CSS-based starry background
- **Smooth Scrolling**: Native smooth scroll behavior
- **Intersection Observer**: Fade-in animations on scroll
- **Real-time Data**: Simulated telemetry updates every 5 seconds
- **Responsive Charts**: Canvas-based data visualizations
- **Modal System**: Student portal with backdrop blur

## 📱 Browser Support

- Chrome/Edge: ✅ Full support
- Firefox: ✅ Full support
- Safari: ✅ Full support
- Mobile browsers: ✅ Responsive design

## 🔧 Development

### Local Development

1. **Clone repository:**
   ```bash
   git clone https://github.com/yourusername/nasa-ascend-website.git
   cd nasa-ascend-website
   ```

2. **Open in browser:**
   - Simply open `index.html` in your browser
   - Or use a local server:
     ```bash
     # Python 3
     python -m http.server 8000
     
     # Node.js (with http-server)
     npx http-server
     
     # VS Code Live Server extension
     ```

3. **Edit files:**
   - `index.html`: Structure and content
   - `styles.css`: All styling
   - `script.js`: Interactivity and charts

## 📝 Content Updates

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

## 🐛 Troubleshooting

### Videos Not Loading
- Check if YouTube URLs are correct
- Ensure Google Drive file is shared correctly
- Verify iframe permissions

### Charts Not Displaying
- Check browser console for errors
- Ensure canvas elements exist in DOM
- Verify JavaScript is loaded

### Student Portal Not Working
- Verify Google Drive file sharing settings
- Check file ID is correct
- Test with Maricopa.edu account

## 📞 Support

For issues or questions:
- **Email**: ascend@phoenixcollege.edu
- **Website**: https://nasaascend.net
- **GitHub Issues**: Create an issue in the repository

## 📄 License

© 2025 Phoenix College NASA ASCEND Program. All rights reserved.

## 🙏 Acknowledgments

- **NASA**: For the Space Grant program
- **Arizona Space Grant Consortium**: Funding and support
- **Phoenix College**: Institutional support
- **All ASCEND Team Members**: Past and present contributors

---

**Built with 🚀 for the stars**
