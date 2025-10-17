# NASA ASCEND Program Website

A comprehensive web platform for Phoenix College's NASA ASCEND high-altitude ballooning project, featuring Arduino data collection systems, student dashboard, and mission management.

## 🚀 Features

### Public Website
- **Modern Design**: Responsive Bootstrap 5 interface with space-themed styling
- **Project Showcase**: Complete overview of the ASCEND program
- **Arduino Code Downloads**: GPS, No-GPS, and Original versions
- **Mission Statistics**: Real-time data visualization
- **Team Information**: Program details and contact information

### Student Dashboard
- **Secure Login**: Authentication system for team members
- **Mission Management**: Create, track, and manage balloon missions
- **Data Upload**: Drag-and-drop file upload for mission data
- **Data Visualization**: Interactive charts and analysis tools
- **Resource Library**: Access to code, documentation, and guides
- **Profile Management**: Student account settings and statistics

## 📁 Project Structure

```
NASA-ASCEND-Website/
├── index.html              # Main public website
├── dashboard.html          # Student dashboard
├── arduino/               # Arduino code files
│   ├── HailMaryV1b.ino    # Original working version
│   ├── HailMaryV1c_GPS.ino # GPS-integrated version
│   └── HailMaryV1c_NoGPS.ino # Simplified version
└── README.md              # This file
```

## 🔧 Arduino Code

### HailMaryV1c_GPS.ino
- Complete version with GPS integration
- UTC timestamps for accurate time-series analysis
- GPS coordinates for trajectory mapping
- All sensors: BMP390, BNO055, AS7331 (x4)

### HailMaryV1c_NoGPS.ino
- Simplified version without GPS
- Uses millis() for timestamps
- Enhanced documentation
- Perfect for basic missions

### HailMaryV1b.ino
- Original working version
- Safe backup and reference implementation
- All sensors with error handling

## 🌐 Deployment

### GitHub Pages
1. Create a new repository on GitHub
2. Upload all files to the repository
3. Enable GitHub Pages in repository settings
4. Set source to "Deploy from a branch" → "main" → "/ (root)"
5. Your website will be live at `https://username.github.io/repository-name`

### Local Development
1. Clone the repository
2. Open `index.html` in a web browser
3. For dashboard testing, open `dashboard.html`
4. Use demo credentials: `student@phoenixcollege.edu` / `student123`

## 🎯 Demo Access

### Student Dashboard
- **Email**: student@phoenixcollege.edu
- **Password**: student123

### Features Available
- Mission management and tracking
- Data upload and visualization
- Arduino code downloads
- Resource library access
- Profile management

## 📊 Mission Data

The system collects comprehensive data from high-altitude balloon missions:

- **Environmental Data**: Pressure, temperature, altitude profiles
- **Motion Data**: Gyroscope and accelerometer readings
- **UV Radiation**: Multi-spectral UV measurements
- **GPS Tracking**: Real-time position and trajectory data
- **Timestamps**: Precise UTC timing for data correlation

## 🛠️ Technology Stack

- **Frontend**: HTML5, CSS3, JavaScript, Bootstrap 5
- **Charts**: Chart.js for data visualization
- **Icons**: Bootstrap Icons
- **Storage**: Local Storage for demo data
- **Hosting**: GitHub Pages (static hosting)

## 👥 Team Members

- **Preston Furulie**: Project Lead, Arduino Development, Hardware Integration
- **Angela Trainor**: Software Engineer, Data Analysis, Visualization
- **Marquis Muza**: Hardware Engineer, Sensor Integration, PCB Design
- **Ethan Pierson**: Data Scientist, Mission Analysis, Statistics

## 📈 Mission Statistics

- **12 Missions Completed**
- **28,500m Peak Altitude Achieved**
- **-52°C Minimum Temperature Recorded**
- **4.2 hours Average Flight Duration**
- **45,678 Data Points Collected**

## 🔗 Links

- **Phoenix College**: https://www.phoenixcollege.edu/
- **Arizona Space Grant**: https://spacegrant.arizona.edu/
- **NASA ASCEND Program**: Contact ascend@phoenixcollege.edu

## 📄 License

Phoenix College NASA ASCEND Project - Educational Use

## 🤝 Contributing

This project is part of the Phoenix College NASA ASCEND program. For questions or collaboration opportunities, please contact the team at ascend@phoenixcollege.edu.

---

**Built with ❤️ by the Phoenix College NASA ASCEND Team**
