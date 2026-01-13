// NASA ASCEND Mission Data - 2024 & 2025
// This file contains all mission data for the student portal

const missionData = {
    missions: [
        {
            id: "2025-001",
            name: "Atmospheric Study Mission",
            date: "2025-01-15",
            status: "Active",
            type: "Atmospheric Research",
            gpsEnabled: true,
            duration: "4.2 hours",
            maxAltitude: "28,500m",
            minTemperature: "-52°C",
            dataPoints: 45678,
            files: [
                {
                    name: "Mission_2025_001.csv",
                    size: "2.3 MB",
                    uploadDate: "2025-01-17 10:30",
                    status: "Processed"
                },
                {
                    name: "Temperature_Profile_2025_001.txt",
                    size: "1.8 MB",
                    uploadDate: "2025-01-17 11:15",
                    status: "Processed"
                }
            ],
            description: "High-altitude atmospheric study focusing on temperature and pressure profiles at extreme altitudes.",
            team: ["Preston Furulie", "Angela Trainor", "Marquis Muza", "Ethan Pierson"],
            progress: 75
        },
        {
            id: "2024-012",
            name: "UV Radiation Measurement",
            date: "2024-12-08",
            status: "Completed",
            type: "UV Research",
            gpsEnabled: false,
            duration: "3.8 hours",
            maxAltitude: "26,200m",
            minTemperature: "-48°C",
            dataPoints: 38942,
            files: [
                {
                    name: "UV_Data_2024_012.csv",
                    size: "1.9 MB",
                    uploadDate: "2024-12-09 09:45",
                    status: "Processed"
                },
                {
                    name: "UV_Analysis_Report.pdf",
                    size: "856 KB",
                    uploadDate: "2024-12-10 14:22",
                    status: "Processed"
                }
            ],
            description: "Multi-spectral UV radiation measurement using AS7331 sensors at various altitudes.",
            team: ["Preston Furulie", "Angela Trainor", "Marquis Muza"],
            progress: 100
        },
        {
            id: "2024-011",
            name: "Temperature Profile Analysis",
            date: "2024-11-20",
            status: "In Review",
            type: "Temperature Research",
            gpsEnabled: true,
            duration: "4.1 hours",
            maxAltitude: "27,800m",
            minTemperature: "-51°C",
            dataPoints: 42156,
            files: [
                {
                    name: "Temp_Profile_2024_011.csv",
                    size: "2.1 MB",
                    uploadDate: "2024-11-21 08:30",
                    status: "Processed"
                },
                {
                    name: "Pressure_Data_2024_011.csv",
                    size: "1.7 MB",
                    uploadDate: "2024-11-21 09:15",
                    status: "Processed"
                }
            ],
            description: "Comprehensive temperature and pressure profile analysis for atmospheric modeling.",
            team: ["Preston Furulie", "Ethan Pierson", "Angela Trainor"],
            progress: 90
        },
        {
            id: "2024-010",
            name: "Motion Sensor Calibration",
            date: "2024-10-15",
            status: "Completed",
            type: "Sensor Calibration",
            gpsEnabled: true,
            duration: "2.9 hours",
            maxAltitude: "22,100m",
            minTemperature: "-42°C",
            dataPoints: 28456,
            files: [
                {
                    name: "IMU_Data_2024_010.csv",
                    size: "1.4 MB",
                    uploadDate: "2024-10-16 10:20",
                    status: "Processed"
                },
                {
                    name: "Calibration_Report.pdf",
                    size: "1.2 MB",
                    uploadDate: "2024-10-17 16:45",
                    status: "Processed"
                }
            ],
            description: "BNO055 IMU sensor calibration and motion data collection at various altitudes.",
            team: ["Marquis Muza", "Preston Furulie"],
            progress: 100
        },
        {
            id: "2024-009",
            name: "GPS Accuracy Study",
            date: "2024-09-28",
            status: "Completed",
            type: "GPS Research",
            gpsEnabled: true,
            duration: "4.5 hours",
            maxAltitude: "29,100m",
            minTemperature: "-54°C",
            dataPoints: 52341,
            files: [
                {
                    name: "GPS_Data_2024_009.csv",
                    size: "2.8 MB",
                    uploadDate: "2024-09-29 11:30",
                    status: "Processed"
                },
                {
                    name: "GPS_Analysis.xlsx",
                    size: "1.1 MB",
                    uploadDate: "2024-09-30 14:15",
                    status: "Processed"
                }
            ],
            description: "GPS accuracy and signal strength analysis at extreme altitudes.",
            team: ["Preston Furulie", "Angela Trainor", "Ethan Pierson"],
            progress: 100
        },
        {
            id: "2024-008",
            name: "Pressure Altitude Correlation",
            date: "2024-08-22",
            status: "Completed",
            type: "Pressure Research",
            gpsEnabled: false,
            duration: "3.6 hours",
            maxAltitude: "25,400m",
            minTemperature: "-47°C",
            dataPoints: 35678,
            files: [
                {
                    name: "Pressure_Data_2024_008.csv",
                    size: "1.6 MB",
                    uploadDate: "2024-08-23 09:45",
                    status: "Processed"
                }
            ],
            description: "BMP390 pressure sensor data correlation with altitude measurements.",
            team: ["Ethan Pierson", "Marquis Muza"],
            progress: 100
        }
    ],
    
    // Sample data points for charts
    chartData: {
        temperatureProfile: [
            { altitude: 0, temperature: 25 },
            { altitude: 1000, temperature: 18 },
            { altitude: 2000, temperature: 11 },
            { altitude: 3000, temperature: 4 },
            { altitude: 4000, temperature: -3 },
            { altitude: 5000, temperature: -10 },
            { altitude: 6000, temperature: -17 },
            { altitude: 7000, temperature: -24 },
            { altitude: 8000, temperature: -31 },
            { altitude: 9000, temperature: -38 },
            { altitude: 10000, temperature: -45 },
            { altitude: 11000, temperature: -50 },
            { altitude: 12000, temperature: -52 },
            { altitude: 13000, temperature: -52 },
            { altitude: 14000, temperature: -51 },
            { altitude: 15000, temperature: -50 },
            { altitude: 16000, temperature: -49 },
            { altitude: 17000, temperature: -48 },
            { altitude: 18000, temperature: -47 },
            { altitude: 19000, temperature: -46 },
            { altitude: 20000, temperature: -45 },
            { altitude: 21000, temperature: -44 },
            { altitude: 22000, temperature: -43 },
            { altitude: 23000, temperature: -42 },
            { altitude: 24000, temperature: -41 },
            { altitude: 25000, temperature: -40 },
            { altitude: 26000, temperature: -39 },
            { altitude: 27000, temperature: -38 },
            { altitude: 28000, temperature: -37 }
        ],
        
        pressureProfile: [
            { altitude: 0, pressure: 1013 },
            { altitude: 1000, pressure: 900 },
            { altitude: 2000, pressure: 795 },
            { altitude: 3000, pressure: 701 },
            { altitude: 4000, pressure: 616 },
            { altitude: 5000, pressure: 540 },
            { altitude: 6000, pressure: 472 },
            { altitude: 7000, pressure: 411 },
            { altitude: 8000, pressure: 356 },
            { altitude: 9000, pressure: 308 },
            { altitude: 10000, pressure: 265 },
            { altitude: 11000, pressure: 227 },
            { altitude: 12000, pressure: 194 },
            { altitude: 13000, pressure: 165 },
            { altitude: 14000, pressure: 140 },
            { altitude: 15000, pressure: 119 },
            { altitude: 16000, pressure: 100 },
            { altitude: 17000, pressure: 84 },
            { altitude: 18000, pressure: 70 },
            { altitude: 19000, pressure: 58 },
            { altitude: 20000, pressure: 48 },
            { altitude: 21000, pressure: 39 },
            { altitude: 22000, pressure: 32 },
            { altitude: 23000, pressure: 26 },
            { altitude: 24000, pressure: 21 },
            { altitude: 25000, pressure: 17 },
            { altitude: 26000, pressure: 14 },
            { altitude: 27000, pressure: 11 },
            { altitude: 28000, pressure: 9 }
        ],
        
        uvRadiation: [
            { wavelength: "UV-A", intensity: 12 },
            { wavelength: "UV-B", intensity: 8 },
            { wavelength: "UV-C", intensity: 2 },
            { wavelength: "Total", intensity: 22 }
        ],
        
        missionTimeline: [
            { month: "Jan 2024", missions: 1 },
            { month: "Feb 2024", missions: 0 },
            { month: "Mar 2024", missions: 1 },
            { month: "Apr 2024", missions: 0 },
            { month: "May 2024", missions: 1 },
            { month: "Jun 2024", missions: 0 },
            { month: "Jul 2024", missions: 1 },
            { month: "Aug 2024", missions: 1 },
            { month: "Sep 2024", missions: 1 },
            { month: "Oct 2024", missions: 1 },
            { month: "Nov 2024", missions: 1 },
            { month: "Dec 2024", missions: 1 },
            { month: "Jan 2025", missions: 1 }
        ]
    },
    
    // Statistics
    statistics: {
        totalMissions: 12,
        activeMissions: 1,
        completedMissions: 10,
        inReviewMissions: 1,
        totalDataPoints: 247171,
        totalDataSize: "15.2 GB",
        averageAltitude: "26,200m",
        maxAltitude: "29,100m",
        minTemperature: "-54°C",
        averageDuration: "3.8 hours",
        teamMembers: 4
    }
};

// Data management functions
class MissionDataManager {
    constructor() {
        this.data = missionData;
        this.initializeStorage();
    }
    
    initializeStorage() {
        // Store data in localStorage for persistence
        if (!localStorage.getItem('nasa-ascend-data')) {
            localStorage.setItem('nasa-ascend-data', JSON.stringify(this.data));
        } else {
            this.data = JSON.parse(localStorage.getItem('nasa-ascend-data'));
        }
    }
    
    getMissions() {
        return this.data.missions;
    }
    
    getMissionById(id) {
        return this.data.missions.find(mission => mission.id === id);
    }
    
    getActiveMissions() {
        return this.data.missions.filter(mission => mission.status === 'Active');
    }
    
    getCompletedMissions() {
        return this.data.missions.filter(mission => mission.status === 'Completed');
    }
    
    getMissionsByYear(year) {
        return this.data.missions.filter(mission => mission.date.startsWith(year));
    }
    
    getChartData() {
        return this.data.chartData;
    }
    
    getStatistics() {
        return this.data.statistics;
    }
    
    addMission(mission) {
        this.data.missions.push(mission);
        this.updateStorage();
    }
    
    updateMission(id, updates) {
        const mission = this.getMissionById(id);
        if (mission) {
            Object.assign(mission, updates);
            this.updateStorage();
        }
    }
    
    addFileToMission(missionId, file) {
        const mission = this.getMissionById(missionId);
        if (mission) {
            mission.files.push(file);
            this.updateStorage();
        }
    }
    
    updateStorage() {
        localStorage.setItem('nasa-ascend-data', JSON.stringify(this.data));
    }
    
    // Generate sample data for new missions
    generateSampleData(missionId) {
        const mission = this.getMissionById(missionId);
        if (!mission) return null;
        
        return {
            temperature: this.generateTemperatureData(mission.maxAltitude),
            pressure: this.generatePressureData(mission.maxAltitude),
            uv: this.generateUVData(),
            motion: this.generateMotionData()
        };
    }
    
    generateTemperatureData(maxAltitude) {
        const data = [];
        const steps = Math.floor(maxAltitude / 1000);
        
        for (let i = 0; i <= steps; i++) {
            const altitude = i * 1000;
            const temperature = 25 - (altitude * 0.0065) - (altitude > 11000 ? (altitude - 11000) * 0.001 : 0);
            data.push({ altitude, temperature: Math.round(temperature * 10) / 10 });
        }
        
        return data;
    }
    
    generatePressureData(maxAltitude) {
        const data = [];
        const steps = Math.floor(maxAltitude / 1000);
        
        for (let i = 0; i <= steps; i++) {
            const altitude = i * 1000;
            const pressure = 1013 * Math.exp(-altitude / 8000);
            data.push({ altitude, pressure: Math.round(pressure * 10) / 10 });
        }
        
        return data;
    }
    
    generateUVData() {
        return {
            uva: Math.random() * 15 + 5,
            uvb: Math.random() * 10 + 3,
            uvc: Math.random() * 5 + 1,
            total: Math.random() * 25 + 10
        };
    }
    
    generateMotionData() {
        return {
            acceleration: {
                x: (Math.random() - 0.5) * 2,
                y: (Math.random() - 0.5) * 2,
                z: (Math.random() - 0.5) * 2
            },
            gyroscope: {
                x: (Math.random() - 0.5) * 10,
                y: (Math.random() - 0.5) * 10,
                z: (Math.random() - 0.5) * 10
            },
            magnetometer: {
                x: (Math.random() - 0.5) * 100,
                y: (Math.random() - 0.5) * 100,
                z: (Math.random() - 0.5) * 100
            }
        };
    }
}

// Initialize global data manager
window.missionDataManager = new MissionDataManager();


