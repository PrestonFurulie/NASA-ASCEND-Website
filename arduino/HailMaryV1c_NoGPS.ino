/*   (        )     )           )  (        )              )   (     (                       
   )\ )  ( /(  ( /(        ( /(  )\ )  ( /(       (   ( /(   )\ )  )\ )       (            
  (()/(  )\()) )\())  (    )\())(()/(  )\())      )\  )\()) (()/( (()/(  (    )\ )    (    
   /(_))((_)\ ((_)\   )\  ((_)\  /(_))((_)\     (((_)((_)\   /(_)) /(_)) )\  (()/(    )\   
  (_))   _((_)  ((_) ((_)  _((_)(_))  __((_)    )\___  ((_) (_))  (_))  ((_)  /(_))_ ((_)  
  | _ \ | || | / _ \ | __|| \| ||_ _| \ \/ /   ((/ __|/ _ \ | |   | |   | __|(_)) __|| __| 
  |  _/ | __ || (_) || _| | .` | | |   >  <     | (__| (_) || |__ | |__ | _|   | (_ || _|  
  |_|   |_||_| \___/ |___||_|\_||___| /_/\_\     \___|\___/ |____||____||___|   \___||___|
          _____                    _____                    _____                    _____          
         /\    \                  /\    \                  /\    \                  /\    \         
        /::\____\                /::\    \                /::\    \                /::\    \        
       /::::|   |               /::::\    \              /::::\    \              /::::\    \       
      /:::::|   |              /::::::\    \            /::::::\    \            /::::::\    \      
     /::::::|   |             /:::/\:::\    \          /:::/\:::\    \          /:::/\:::\    \     
    /:::/|::|   |            /:::/__\:::\    \        /:::/__\:::\    \        /:::/__\:::\    \    
   /:::/ |::|   |           /::::\   \:::\    \       \:::\   \:::\    \      /::::\   \:::\    \   
  /:::/  |::|   | _____    /::::::\   \:::\    \    ___\:::\   \:::\    \    /::::::\   \:::\    \  
 /:::/   |::|   |/\    \  /:::/\:::\   \:::\    \  /\   \:::\   \:::\    \  /:::/\:::\   \:::\    \ 
/:: /    |::|   /::\____\/:::/  \:::\   \:::\____\/::\   \:::\   \:::\____\/:::/  \:::\   \:::\____\
\::/    /|::|  /:::/    /\::/    \:::\  /:::/    /\:::\   \:::\   \::/    /\::/    \:::\  /:::/    /
 \/____/ |::| /:::/    /  \/____/ \:::\/:::/    /  \:::\   \:::\   \/____/  \/____/ \:::\/:::/    / 
         |::|/:::/    /            \::::::/    /    \:::\   \:::\    \               \::::::/    /  
         |::::::/    /              \::::/    /      \:::\   \:::\____\               \::::/    /   
         |:::::/    /               /:::/    /        \:::\  /:::/    /               /:::/    /    
         |::::/    /               /:::/    /          \:::\/:::/    /               /:::/    /     
         /:::/    /               /:::/    /            \::::::/    /               /:::/    /      
        /:::/    /               /:::/    /              \::::/    /               /:::/    /       
        \::/    /                \::/    /                \::/    /                \::/    /        
         \/____/                  \/____/                  \/____/                  \/____/                                                                                                                                                                                                                                                                        
_____/\\\\\\\\\________/\\\\\\\\\\\__________/\\\\\\\\\__/\\\\\\\\\\\\\\\__/\\\\\_____/\\\__/\\\\\\\\\\\\____        
 ___/\\\\\\\\\\\\\____/\\\/////////\\\_____/\\\////////__\/\\\///////////__\/\\\\\\___\/\\\_\/\\\////////\\\__       
  __/\\\/////////\\\__\//\\\______\///____/\\\/___________\/\\\_____________\/\\\/\\\__\/\\\_\/\\\______\//\\\_      
   _\/\\\_______\/\\\___\////\\\__________/\\\_____________\/\\\\\\\\\\\_____\/\\\//\\\_\/\\\_\/\\\_______\/\\\_     
    _\/\\\\\\\\\\\\\\\______\////\\\______\/\\\_____________\/\\\///////______\/\\\\//\\\\/\\\_\/\\\_______\/\\\_    
     _\/\\\/////////\\\_________\////\\\___\//\\\____________\/\\\_____________\/\\\_\//\\\/\\\_\/\\\_______\/\\\_   
      _\/\\\_______\/\\\__/\\\______\//\\\___\///\\\__________\/\\\_____________\/\\\__\//\\\\\\_\/\\\_______/\\\__  
       _\/\\\_______\/\\\_\///\\\\\\\\\\\/______\////\\\\\\\\\_\/\\\\\\\\\\\\\\\_\/\\\___\//\\\\\_\/\\\\\\\\\\\\/___ 
        _\///________\///____\///////////___________\/////////__\///////////////__\///_____\/////__\////////////_____
HailMaryV1c - No GPS Version
2025-10-17
PC NASA ASCEND
Contributors: Angela Trainor, Marquis Muza, Ethan Pierson, Preston Furulie

PREVIOUS COMMENTS
- hailMary_BufferedVersion_BNO055.ino ; Merged from V04 with BNO055 integration
- Based on 2025_03_28_hailmerged_V05b_debug_WORKING.ino

CHANGELOG V1c - No GPS Version
- Clean version without GPS integration
- Enhanced documentation and comments
- Improved error handling and validation
- Optimized for high-altitude balloon missions
- Uses millis() timestamps for time-series analysis

 ▄▄▄▄▄  ▄▄▄▄▄▄   ▄▄   ▄▄▄▄   ▄    ▄ ▄▄▄▄▄▄
 █   ▀█ █        ██   █   ▀▄ ██  ██ █     
 █▄▄▄▄▀ █▄▄▄▄▄  █  █  █    █ █ ██ █ █▄▄▄▄▄
 █   ▀▄ █       █▄▄█  █    █ █ ▀▀ █ █     
 █    ▀ █▄▄▄▄▄ █    █ █▄▄▄▀  █    █ █▄▄▄▄▄
//////////////////////////////////////////

SEARCH HOTKEY RESERVED CHARS < hotkey >
------------------------------------------
set data-record rate:  < qaz1 > i.e., The global "sample rate" [Data write rate], in milliseconds, is specified by the writeInterval variable.
bmp debug fns:         < p;/ > 

------------------------------------------

GENERAL GENERAL GENERAL
- Baud rate is 115200. Make sure that's your baud rate in the arduino IDE.

SENSORS SENSORS SENSORS
- BMP is the barometric pressure sensor.
- BNO is the inertial measurment unit (gyroscope and magnetometer).
- AS7331 are the UV sensors (4 units).

DEBUG DEBUG DEBUG
- The main loop has two debug lines for recording write rate. Be sure they are commented-out for usual operation (and for launch!).
- logData has an debug line to mark data start.

FUNCTIONS FUNCTIONS FUNCTIONS
- logData gets the values and assigns them to variables which become our data structure.
  ~ It adds the data points to the buffer
  ~ It calls writeDataPointToSD which checks sdWorking flag. When false, it adds the data point to the buffer. When true, it calls writeDataPointToFile.
  ~ If the SD card is online then it writes directly 

FUNCTION DEPENDENCIES, i.e., FUNCTIONS THAT CALL OTHER OTHER FUCTIONS WITHIN THEIR DECLAIRATION
- writeDataPointToSD calls writeDataPointToFile inside its declaration
- logData calls getUVdata, validateData, addToBuffer, and writeDataPointToSD

// END README /////////////////////////////////////////////////////*/

/////////////////////////////////////////////////////////////////////
// GLOBAL ///////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
#include <Arduino.h>  // Arduino libraries used
#include <Wire.h>
#include <SparkFun_AS7331.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include "Adafruit_BMP3XX.h"
#include <SD.h>
#include <Adafruit_BNO055.h>  // Added BNO055 library
#include <utility/imumaths.h>  // For vector math with BNO055

#define BMP_SCK 13  // SPI Interface of BMP
#define BMP_MISO 12
#define BMP_MOSI 11
#define BMP_CS 10

#define SEALEVELPRESSURE_HPA (1013.25)
#define BUFFER_SIZE 20  // Size of data buffer for SD card writes

#define BNO055_ADDR 0x28  // I2C address for BNO055 (0101001b)
#define BNO055_SAMPLERATE_DELAY_MS 100 // How often to read BNO055 data (ms)

SfeAS7331ArdI2C myUVSensor1;  // UV objects
SfeAS7331ArdI2C myUVSensor2;
SfeAS7331ArdI2C myUVSensor3;
SfeAS7331ArdI2C myUVSensor4;

Adafruit_BMP3XX bmp;  //pressure and temperature sensor

Adafruit_BNO055 bno = Adafruit_BNO055(1, BNO055_ADDR);  //orientation sensor

File dataFile; // file

double UV1A, UV1B, UV1C;  //UV data vars
double UV2A, UV2B, UV2C;
double UV3A, UV3B, UV3C;
double UV4A, UV4B, UV4C;

// BNO055 sensor data variables
float gyroX, gyroY, gyroZ;  // Angular velocity
float accelX, accelY, accelZ;  // Linear acceleration

// Store previous values for validation
double prevUV1A, prevUV1B, prevUV1C;
double prevUV2A, prevUV2B, prevUV2C;
double prevUV3A, prevUV3B, prevUV3C;
double prevUV4A, prevUV4B, prevUV4C;
uint32_t prevPressure;
float prevTemperature;
float prevAltitude;

// Previous orientation sensor values
float prevGyroX, prevGyroY, prevGyroZ;
float prevAccelX, prevAccelY, prevAccelZ;

unsigned long elapsed;                    // Time Constant
unsigned long lastWriteTime = 0;          // Last time data was logged
const unsigned long writeInterval = 500;  // Log data every n ms < qaz1 >

// Buffer for data in case of SD write failures
// We define a new data structure DataPoint. this allows us to implement a buffer.
struct DataPoint {
  unsigned long timestamp;     // millis() timestamp for time-series analysis
  double uvValues[12];       // All UV readings
  uint32_t pressure;         // Pressure
  float temperature;         // Temperature
  float altitude;            // Altitude
  float gyroValues[3];       // Angular velocity (x, y, z)
  float accelValues[3];      // Acceleration (x, y, z)
  boolean valid;
};

DataPoint dataBuffer[BUFFER_SIZE];
int bufferIndex = 0;
int bufferCount = 0;

// Global error flag system
bool uvSensor1Working = true;  // uv sensor flags 1-4
bool uvSensor2Working = true;
bool uvSensor3Working = true;
bool uvSensor4Working = true;
bool bmpWorking = true;        // bmp sensor flag
bool sdCardWorking = true;     // SD card flag
bool bnoWorking = true;        // BNO055 sensor flag


/////////////////////////////////////////////////////////////////////
// SETUP METHOD /////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
void setup() {
  pinMode(53, OUTPUT);         // Hardware protocol for SD Read/Write
  digitalWrite(53, HIGH); 

  Serial.begin(115200);        // Baud-rate(s)
  
  // Waits for serial, but times-out after 5 seconds
  unsigned long startTime = millis();
  while(!Serial && (millis() - startTime < 5000)){
    delay(100);
  }
  
  Serial.println("\n\n======= STARTING SENSOR INITIALIZATION =======");
  
  // Initializes I2C bus before anything else
  Wire.begin();
  delay(1000);  // Give I2C bus 1000ms to stabilize

  UVTest();                     // UV Sensor
  UVSetup();

  bmpTestnSetup();              // Pressure Sensor

  bnoTestnSetup();              // Orientation Sensor

  sdReaderTest();               // SD Read/Write
  writeHeader();
  
  Serial.println("======= INITIALIZATION COMPLETE =======");
  
  // Initial test readings
  Serial.println("\n--- INITIAL SENSOR READINGS ---");
  
  if (bnoWorking) {
    bnoSerialTest();
  } else {
    Serial.println("BNO055 not working, skipping test");
  }
  
  if (bmpWorking) {
    bmpSerialTest();
  } else {
    Serial.println("BMP not working, skipping test");
  }
  
  Serial.println("Starting main loop...\n");
}

/////////////////////////////////////////////////////////////////////
// Main Method /////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
void loop() {
  unsigned long currentTime = millis();
  
  // Only log data at the specified interval
  if (currentTime - lastWriteTime >= writeInterval) {
    // Log data
    logData();
    lastWriteTime = currentTime;
    
    // Optional: Debug output for write rate, uncomment the following two lines to use.
    // Serial.print("Data logged at: ");
    // Serial.println(currentTime);
  }

  // Periodically flush the buffer to SD card (We use integer division and multiplication to avoid drift).
  if ((currentTime / 5000) * 5000 == currentTime) { // Every 5 seconds exactly
    flushBuffer();
  }
  
  // Optional: Uncomment "// bmpSerialTest();" "UVSerialTest();" below for debugging/testing
  if (currentTime - lastWriteTime >= 2000) { // Less frequent than data logging
    // Only run these tests occasionally to avoid slowing down main functionality
   if ((currentTime / 10000) * 10000 == currentTime) { // Every 10 seconds
      Serial.println("\n--- PERIODIC SENSOR TEST ---");
      if (bnoWorking) bnoSerialTest();
      // bmpSerialTest();
      // UVSerialTest();
      Serial.println("----------------------------\n");
    }
  }
}

/////////////////////////////////////////////////////////////////
/*FUNCTIONS < JUMP-TO KEY >
    1)  writeHeader <  >
    2)  logData <  >
    3)  sdReaderTest <  >
    4)  bmpTestnSetup <  >
    5)  UVTest <  >
    6)  UVSetup <  >
    7)  getUVdata <  >
    8)  logUVdata <  >
    9)  bmpSerialTester <  >
    10) UVSerialTester <  >
    11) flushBuffer <  >
    12) addToBuffer <  >
    13) validateData <  >
    14) writeDataPointToSD <  >
    15) writeDataPointToFile <  >
    16) bnoTestnSetup    // New function for BNO055 setup <  >
    17) getBNOdata       // New function to get BNO055 data
    18) bnoSerialTest    // New function for BNO055 testing
  */
/////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
// 1) writeHeader //////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
void writeHeader() {  // Write header(creates and writes header of csv file collumns)
  Serial.println("running writeHeader()");
  boolean isWritten = false;                        // If it doesn't exist yet,
  
  // Try up to 3 times to write the header
  for (int attempt = 0; attempt < 3 && !isWritten; attempt++) {
    dataFile = SD.open("data.csv", FILE_WRITE);     // Global object initialized.
    Serial.println("ran partial 1 writeHeader()");  // Let's terminal know header is being written.
    
    // Tester If-Else Statement
    if (dataFile) {
      dataFile.println("elapsed(ms),UV_value1A,UV_value1B,UV_value1C,UV_value2A,UV_value2B,UV_value2C,UV_value3A,UV_value3B,UV_value3C, UV_value4A,UV_value4B,UV_value4C, pressure_bmp390, temp_bmp390, alt_bmp390, gyro_X, gyro_Y, gyro_Z, accel_X, accel_Y, accel_Z");
      dataFile.flush();                  // Save changes to the file
      dataFile.close();                  // Close the file
      Serial.println("HEADER PRINTED");  // Let's us know in terminal that CSV file made & initialized for data recording.
      isWritten = true;
    }
    else {
      Serial.println("Error opening data.csv for writing header, attempt " + String(attempt + 1));
      delay(500); // Wait before retrying
    }
  }
  
  if (!isWritten) {
    Serial.println("Failed to write header after multiple attempts");
    sdCardWorking = false;  // Mark SD card as not working
  }
}

////////////////////// FUNCTION_2: LOG_DATA ////////////////////////////
void logData() {
  // Only print this in debug mode as it affects timing
  // Serial.println("logDATA starts");
  
  // Create a new data point
  DataPoint newDataPoint;
  newDataPoint.timestamp = millis();
  newDataPoint.valid = false;
  
  // Get UV data
  if (getUVdata()) {
    // Store UV values in the data point
    newDataPoint.uvValues[0] = UV1A;
    newDataPoint.uvValues[1] = UV1B;
    newDataPoint.uvValues[2] = UV1C;
    newDataPoint.uvValues[3] = UV2A;
    newDataPoint.uvValues[4] = UV2B;
    newDataPoint.uvValues[5] = UV2C;
    newDataPoint.uvValues[6] = UV3A;
    newDataPoint.uvValues[7] = UV3B;
    newDataPoint.uvValues[8] = UV3C;
    newDataPoint.uvValues[9] = UV4A;
    newDataPoint.uvValues[10] = UV4B;
    newDataPoint.uvValues[11] = UV4C;
  } else {
    Serial.println("Failed to get UV data");
    // return; // Skip this iteration if UV data failed completely // DONT UNCOMMENT THIS UNLESS THE UV SENSORS ARE FOOLPROOF
  }
  
  // Get BMP data
  if (bmpWorking && bmp.performReading()) {
    newDataPoint.pressure = bmp.pressure;
    newDataPoint.temperature = bmp.temperature;
    newDataPoint.altitude = bmp.readAltitude(SEALEVELPRESSURE_HPA);
  } else {
    Serial.println("Failed to perform BMP reading or BMP not working");
    // Use previous values as fallback
    newDataPoint.pressure = prevPressure;
    newDataPoint.temperature = prevTemperature;
    newDataPoint.altitude = prevAltitude;
  }
  
  // Get BNO055 data
  if (getBNOdata()) {
    // Store orientation sensor values in the data point
    newDataPoint.gyroValues[0] = gyroX;
    newDataPoint.gyroValues[1] = gyroY;
    newDataPoint.gyroValues[2] = gyroZ;
    newDataPoint.accelValues[0] = accelX;
    newDataPoint.accelValues[1] = accelY;
    newDataPoint.accelValues[2] = accelZ;
    newDataPoint.valid = true; // Mark as valid if we have BNO data
  } else {
    Serial.println("Failed to get BNO055 data or BNO not working");
    // Use previous values as fallback
    newDataPoint.gyroValues[0] = prevGyroX;
    newDataPoint.gyroValues[1] = prevGyroY;
    newDataPoint.gyroValues[2] = prevGyroZ;
    newDataPoint.accelValues[0] = prevAccelX;
    newDataPoint.accelValues[1] = prevAccelY;
    newDataPoint.accelValues[2] = prevAccelZ;
    
    // Still mark as valid if we have previous values or other sensor data
    newDataPoint.valid = (prevGyroX != 0 || prevGyroY != 0 || prevGyroZ != 0 || 
                          prevAccelX != 0 || prevAccelY != 0 || prevAccelZ != 0 ||
                          newDataPoint.pressure != 0 || newDataPoint.temperature != 0);
  }
  
  // Validate the data
  validateData(&newDataPoint);
  
  // Add to buffer
  addToBuffer(newDataPoint);
  
  // Try to write directly to SD card if it's working
  if (sdCardWorking) {
    writeDataPointToSD(newDataPoint);
  }
}

//////////////////////////////////////////////////////////////////////
///////////////// FUNCTION_3: sdReaderTest ////////////////////////
////////////////////////////////////////////////////////////////////

void sdReaderTest() {
  if (!SD.begin(53)) {
    Serial.println("Card failed, or not present");  // Check for Micro SD.
    sdCardWorking = false;
    return;  // Instead of exit(0)
  }
  Serial.println("Card initialized.");  // Card is Initialized /w Chosen CS(pin 53) for SPI protocol
  sdCardWorking = true;
}

////////////////////// FUNCTION_4: bmpTestnSetup ////////////////////////////
void bmpTestnSetup() {
  Serial.println("Adafruit BMP388 / BMP390 test");

  if (!bmp.begin_SPI(BMP_CS, BMP_SCK, BMP_MISO, BMP_MOSI)) {  // software SPI mode test
    Serial.println("Could not find a valid BMP3 sensor, check wiring!");
    bmpWorking = false;
    return;  // Instead of while(1)
  }
  Serial.println("Pressure Sensor Working!");

  bmp.setTemperatureOversampling(BMP3_OVERSAMPLING_8X);  // Set up oversampling and filter initialization
  bmp.setPressureOversampling(BMP3_OVERSAMPLING_4X);
  bmp.setIIRFilterCoeff(BMP3_IIR_FILTER_COEFF_3);  
  bmp.setOutputDataRate(BMP3_ODR_50_HZ);
  
  // Initialize previous values if sensor is working
  if (bmp.performReading()) {
    prevPressure = bmp.pressure;
    prevTemperature = bmp.temperature;
    prevAltitude = bmp.readAltitude(SEALEVELPRESSURE_HPA);
  }
}

////////////////////// FUNCTION_5: UVTest //////////////////////////////
void UVTest() {  // Tester for UV Sensor
  Serial.println("UV Sensor Test Begin.");
  Wire.begin();

  if (myUVSensor1.begin(0x74) == false) {  // Initialize sensors and run default setup.
    Serial.println("Sensor failed to begin. Please check your wiring!");
    Serial.println("Halting...");
    uvSensor1Working = false;
  } else {
    Serial.println("UV Sensor 1 working.");
  }

  if (myUVSensor2.begin(0x75) == false) {
    Serial.println("Sensor failed to begin. Please check your wiring!");
    Serial.println("Halting...");
    uvSensor2Working = false;
  } else {
    Serial.println("UV Sensor 2 working.");
  }

  if (myUVSensor3.begin(0x76) == false) {
    Serial.println("Sensor failed to begin. Please check your wiring!");
    Serial.println("Halting...");
    uvSensor3Working = false;
  } else {
    Serial.println("UV Sensor 3 working.");
  }

  if (myUVSensor4.begin(0x77) == false) {
    Serial.println("Sensor failed to begin. Please check your wiring!");
    Serial.println("Halting...");
    uvSensor4Working = false;
  } else {
    Serial.println("UV Sensor 4 working.");
  }
  
  Serial.println("UV Sensors initialization complete.");
}

////////////////////// FUNCTION_6: UVSetup ////////////////////////////////
void UVSetup() {
  // Set measurement mode and change device operating mode to measure.
  if (uvSensor1Working && myUVSensor1.prepareMeasurement(MEAS_MODE_CMD) == false) {
    Serial.println("Sensor 1 did not get set properly.");
    Serial.println("Halting...");
    uvSensor1Working = false;
  }

  if (uvSensor2Working && myUVSensor2.prepareMeasurement(MEAS_MODE_CMD) == false) {
    Serial.println("Sensor 2 did not get set properly.");
    Serial.println("Halting...");
    uvSensor2Working = false;
  }

  if (uvSensor3Working && myUVSensor3.prepareMeasurement(MEAS_MODE_CMD) == false) {
    Serial.println("Sensor 3 did not get set properly.");
    Serial.println("Halting...");
    uvSensor3Working = false;
  }

  if (uvSensor4Working && myUVSensor4.prepareMeasurement(MEAS_MODE_CMD) == false) {
    Serial.println("Sensor 4 did not get set properly.");
    Serial.println("Halting...");
    uvSensor4Working = false;
  }

  Serial.println("Set working sensors to command mode.");
}
///////////////////////////////////////////////////
//////FUNCTION_7: getUVdata //////////////////////
/////////////////////////////////////////////////

boolean getUVdata() {
  boolean success = true;
  
  // Start measurements on all working sensors
  if (uvSensor1Working && ksfTkErrOk != myUVSensor1.setStartState(true)) {
    Serial.println("Error starting reading on sensor 1!");
    success = false;
  }
  
  if (uvSensor2Working && ksfTkErrOk != myUVSensor2.setStartState(true)) {
    Serial.println("Error starting reading on sensor 2!");
    success = false;
  }
  
  if (uvSensor3Working && ksfTkErrOk != myUVSensor3.setStartState(true)) {
    Serial.println("Error starting reading on sensor 3!");
    success = false;
  }
  
  if (uvSensor4Working && ksfTkErrOk != myUVSensor4.setStartState(true)) {
    Serial.println("Error starting reading on sensor 4!");
    success = false;
  }
  
  // Calculate maximum conversion time for working sensors
  int maxConversionTime = 0;
  if (uvSensor1Working) maxConversionTime = max(maxConversionTime, myUVSensor1.getConversionTimeMillis());
  if (uvSensor2Working) maxConversionTime = max(maxConversionTime, myUVSensor2.getConversionTimeMillis());
  if (uvSensor3Working) maxConversionTime = max(maxConversionTime, myUVSensor3.getConversionTimeMillis());
  if (uvSensor4Working) maxConversionTime = max(maxConversionTime, myUVSensor4.getConversionTimeMillis());
  
  // Wait once for all sensors
  if (maxConversionTime > 0) {
    delay(2 + maxConversionTime);
  }
  
  // Store previous values before updating
  prevUV1A = UV1A; prevUV1B = UV1B; prevUV1C = UV1C;
  prevUV2A = UV2A; prevUV2B = UV2B; prevUV2C = UV2C;
  prevUV3A = UV3A; prevUV3B = UV3B; prevUV3C = UV3C;
  prevUV4A = UV4A; prevUV4B = UV4B; prevUV4C = UV4C;
  
  // Read values from working sensors
  if (uvSensor1Working) {
    if (ksfTkErrOk != myUVSensor1.readAllUV()) {
      Serial.println("Error reading UV1");
      UV1A = UV1B = UV1C = -999; // Error value
    } else {
      UV1A = myUVSensor1.getUVA();
      UV1B = myUVSensor1.getUVB(); 
      UV1C = myUVSensor1.getUVC();
    }
  } else {
    UV1A = UV1B = UV1C = -999; // Error value
  }
  
  if (uvSensor2Working) {
    if (ksfTkErrOk != myUVSensor2.readAllUV()) {
      Serial.println("Error reading UV2");
      UV2A = UV2B = UV2C = -999; // Error value
    } else {
      UV2A = myUVSensor2.getUVA();
      UV2B = myUVSensor2.getUVB(); 
      UV2C = myUVSensor2.getUVC();
    }
  } else {
    UV2A = UV2B = UV2C = -999; // Error value
  }
  
  if (uvSensor3Working) {
    if (ksfTkErrOk != myUVSensor3.readAllUV()) {
      Serial.println("Error reading UV3");
      UV3A = UV3B = UV3C = -999; // Error value
    } else {
      UV3A = myUVSensor3.getUVA();
      UV3B = myUVSensor3.getUVB(); 
      UV3C = myUVSensor3.getUVC();
    }
  } else {
    UV3A = UV3B = UV3C = -999; // Error value
  }
  
  if (uvSensor4Working) {
    if (ksfTkErrOk != myUVSensor4.readAllUV()) {
      Serial.println("Error reading UV4");
      UV4A = UV4B = UV4C = -999; // Error value
    } else {
      UV4A = myUVSensor4.getUVA();
      UV4B = myUVSensor4.getUVB(); 
      UV4C = myUVSensor4.getUVC();
    }
  } else {
    UV4A = UV4B = UV4C = -999; // Error value
  }
  
  // Return false only if all sensors failed
  return (uvSensor1Working || uvSensor2Working || uvSensor3Working || uvSensor4Working);
}

////////////////////// FUNCTION_8: logUVdata //////////////////////////
void logUVdata(File file) {
  // Log sensor data for UV
  file.print(UV1A);
  file.print(",");
  file.print(UV1B);
  file.print(",");
  file.print(UV1C);
  file.print(",");

  file.print(UV2A);
  file.print(",");
  file.print(UV2B);
  file.print(",");
  file.print(UV2C);
  file.print(",");

  file.print(UV3A);
  file.print(",");
  file.print(UV3B);
  file.print(",");
  file.print(UV3C);
  file.print(",");

  file.print(UV4A);
  file.print(",");
  file.print(UV4B);
  file.print(",");
  file.print(UV4C);
  file.print(",");
}

////////////////////////////////////////////////////
///////FUNCTIONS_9-10:_SERIAL_TESTS////////////////
//////////////////////////////////////////////////

////////////////////// FUNCTION_9: bmpSerialTest /////////////////////////
void bmpSerialTest() {
  // Error Test for Pressure Sensor
  if (!bmpWorking) {
    Serial.println("BMP sensor not working");
    return;
  }
  
  if (!bmp.performReading()) {
    Serial.println("Failed to perform reading :(");
    return;
  }

  Serial.print("Temperature = ");
  Serial.print(bmp.temperature);
  Serial.println(" *C");

  Serial.print("Pressure = ");
  Serial.print(bmp.pressure / 100.0);
  Serial.println(" hPa");

  Serial.print("Approx. Altitude = ");
  Serial.print(bmp.readAltitude(SEALEVELPRESSURE_HPA));
  Serial.println(" m");

  Serial.println();
}

////////////////////// FUNCTION_10: UVSerialTest ///////////////////////
void UVSerialTest() {
  if (!getUVdata()) {
    Serial.println("Failed to get any UV data");
    return;
  }
  
  // Print data for each sensor if available
  if (uvSensor1Working) {
    Serial.print("UVA_1:");
    Serial.print(UV1A);
    Serial.print(" UVB_1:");
    Serial.print(UV1B);
    Serial.print(" UVC_1:");
    Serial.println(UV1C);
  }
  
  if (uvSensor2Working) {
    Serial.print("UVA_2:");
    Serial.print(UV2A);
    Serial.print(" UVB_2:");
    Serial.print(UV2B);
    Serial.print(" UVC_2:");
    Serial.println(UV2C);
  }
  
  if (uvSensor3Working) {
    Serial.print("UVA_3:");
    Serial.print(UV3A);
    Serial.print(" UVB_3:");
    Serial.print(UV3B);
    Serial.print(" UVC_3:");
    Serial.println(UV3C);
  }
  
  if (uvSensor4Working) {
    Serial.print("UVA_4:");
    Serial.print(UV4A);
    Serial.print(" UVB_4:");
    Serial.print(UV4B);
    Serial.print(" UVC_4:");
    Serial.println(UV4C);
  }
}

////////////////////// FUNCTION_11: flushBuffer ///////////////////////
void flushBuffer() {
  if (bufferCount == 0 || !sdCardWorking) {
    return; // Nothing to flush or SD card not working
  }
  
  dataFile = SD.open("data.csv", FILE_WRITE);
  if (!dataFile) {
    Serial.println("Error opening data.csv for buffer flush");
    return;
  }
  
  // Calculate starting index based on circular buffer
  int startIdx = (bufferIndex - bufferCount + BUFFER_SIZE) % BUFFER_SIZE;
  
  for (int i = 0; i < bufferCount; i++) {
    int idx = (startIdx + i) % BUFFER_SIZE;
    if (dataBuffer[idx].valid) {
      writeDataPointToFile(dataBuffer[idx], dataFile);
    }
  }
  
  dataFile.flush();
  dataFile.close();
  
  // Clear buffer after successful write
  bufferCount = 0;
  
  Serial.println("Buffer flushed to SD card");
}

////////////////////// FUNCTION_12: addToBuffer ///////////////////////
void addToBuffer(DataPoint data) {
  dataBuffer[bufferIndex] = data;
  bufferIndex = (bufferIndex + 1) % BUFFER_SIZE;
  if (bufferCount < BUFFER_SIZE) {
    bufferCount++;
  }
}

////////////////////// FUNCTION_13: validateData ///////////////////////
void validateData(DataPoint* data) {
  // Validate UV data - check for extreme or NaN values
  for (int i = 0; i < 12; i++) {
    if (isnan(data->uvValues[i]) || data->uvValues[i] < -1000) {
      // Replace with previous value if current reading is invalid
      switch (i) {
        case 0: data->uvValues[i] = prevUV1A; break;
        case 1: data->uvValues[i] = prevUV1B; break;
        case 2: data->uvValues[i] = prevUV1C; break;
        case 3: data->uvValues[i] = prevUV2A; break;
        case 4: data->uvValues[i] = prevUV2B; break;
        case 5: data->uvValues[i] = prevUV2C; break;
        case 6: data->uvValues[i] = prevUV3A; break;
        case 7: data->uvValues[i] = prevUV3B; break;
        case 8: data->uvValues[i] = prevUV3C; break;
        case 9: data->uvValues[i] = prevUV4A; break;
        case 10: data->uvValues[i] = prevUV4B; break;
        case 11: data->uvValues[i] = prevUV4C; break;
      }
    }
  }
  
  // Validate pressure (reasonable ranges for high-altitude balloon)
  if (isnan(data->pressure) || data->pressure < 1000 || data->pressure > 120000) {
    data->pressure = prevPressure;
  } else {
    prevPressure = data->pressure;
  }
  
  // Validate temperature (reasonable range: -60°C to +50°C for high-altitude)
  if (isnan(data->temperature) || data->temperature < -60 || data->temperature > 50) {
    data->temperature = prevTemperature;
  } else {
    prevTemperature = data->temperature;
  }
  
  // Validate altitude (reasonable range: -500m to 40000m for high-altitude)
  if (isnan(data->altitude) || data->altitude < -500 || data->altitude > 40000) {
    data->altitude = prevAltitude;
  } else {
    prevAltitude = data->altitude;
  }
  
  // Validate BNO055 data - check for extreme values or NaN
  // Angular velocity validation (typical range: -2000 to 2000 deg/s)
  for (int i = 0; i < 3; i++) {
    if (isnan(data->gyroValues[i]) || data->gyroValues[i] < -2000 || data->gyroValues[i] > 2000) {
      // Replace with previous value if current reading is invalid
      switch (i) {
        case 0: data->gyroValues[i] = prevGyroX; break;
        case 1: data->gyroValues[i] = prevGyroY; break;
        case 2: data->gyroValues[i] = prevGyroZ; break;
      }
    } else {
      // Update previous values if current reading is valid
      switch (i) {
        case 0: prevGyroX = data->gyroValues[i]; break;
        case 1: prevGyroY = data->gyroValues[i]; break;
        case 2: prevGyroZ = data->gyroValues[i]; break;
      }
    }
  }
  
  // Acceleration validation (typical range: -80 to 80 m/s² for high-altitude)
  for (int i = 0; i < 3; i++) {
    if (isnan(data->accelValues[i]) || data->accelValues[i] < -80 || data->accelValues[i] > 80) {
      // Replace with previous value if current reading is invalid
      switch (i) {
        case 0: data->accelValues[i] = prevAccelX; break;
        case 1: data->accelValues[i] = prevAccelY; break;
        case 2: data->accelValues[i] = prevAccelZ; break;
      }
    } else {
      // Update previous values if current reading is valid
      switch (i) {
        case 0: prevAccelX = data->accelValues[i]; break;
        case 1: prevAccelY = data->accelValues[i]; break;
        case 2: prevAccelZ = data->accelValues[i]; break;
      }
    }
  }
}

////////////////////// FUNCTION_14: writeDataPointToSD ///////////////////////
void writeDataPointToSD(DataPoint data) {
  if (!sdCardWorking) {
    return;
  }
  
  dataFile = SD.open("data.csv", FILE_WRITE);
  if (!dataFile) {
    Serial.println("Error opening data.csv for writing");
    // Add to buffer instead
    return;
  }
  
  writeDataPointToFile(data, dataFile);
  dataFile.flush();
  dataFile.close();
}

////////////////////// FUNCTION_15: writeDataPointToFile ///////////////////////
void writeDataPointToFile(DataPoint data, File file) {
  file.print(data.timestamp);
  file.print(",");
  
  // Write UV values
  for (int i = 0; i < 12; i++) {
    file.print(data.uvValues[i]);
    file.print(",");
  }
  
  // Write BMP values
  file.print(data.pressure);
  file.print(",");
  file.print(data.temperature);
  file.print(",");
  file.print(data.altitude);
  file.print(",");
  
  // Write BNO055 values
  // Angular velocity (gyro)
  file.print(data.gyroValues[0]);
  file.print(",");
  file.print(data.gyroValues[1]);
  file.print(",");
  file.print(data.gyroValues[2]);
  file.print(",");
  
  // Acceleration
  file.print(data.accelValues[0]);
  file.print(",");
  file.print(data.accelValues[1]);
  file.print(",");
  file.println(data.accelValues[2]);
}

////////////////////// FUNCTION_16: bnoTestnSetup /////////////////////// < p;/1 >
void bnoTestnSetup() {
  Serial.println("Adafruit BNO055 orientation sensor test");
  
  // Give I2C bus a moment to stabilize
  delay(1000);
  
  // Initialize the sensor with explicit I2C address
  // Note: BNO055 NDOF mode is 12, but we'll use default mode and set it later
  if (!bno.begin()) {
    Serial.println("Could not find a valid BNO055 sensor, check wiring or I2C address!");
    Serial.print("Looking for sensor at address 0x");
    Serial.println(BNO055_ADDR, HEX);
    bnoWorking = false;
  }else;
  
  
  Serial.println("BNO055 Orientation Sensor found!");
  
  // Print some diagnostic info
  Serial.print("Temperature: ");
  Serial.println(bno.getTemp());
  
  // Use external crystal for better accuracy
  Serial.println("Setting to use external crystal...");
  bno.setExtCrystalUse(true);
  delay(50);
  
  // Set to NDOF mode (9-axis fusion) - mode 12
  Serial.println("Setting to NDOF mode...");
  bno.setMode(12);  // NDOF mode value
  delay(100); // Give it time to switch modes
  
  // Verify mode change
  uint8_t currentMode = bno.getMode();
  Serial.print("Current mode: 0x");
  Serial.println(currentMode, HEX);
  
  if (currentMode != 12) {  // NDOF mode value
    Serial.println("Failed to set NDOF mode! Will retry...");
    bno.setMode(12);  // NDOF mode value
    delay(200);
    currentMode = bno.getMode();
    Serial.print("Mode after retry: 0x");
    Serial.println(currentMode, HEX);
  }
  
  // Initialize previous values
  sensors_event_t gyroEvent;
  sensors_event_t accelEvent;
  
  // Take initial reading
  if (getBNOdata()) {
    Serial.println("Successfully retrieved initial BNO055 data:");
    Serial.print("Gyro: X:");
    Serial.print(gyroX);
    Serial.print(" Y:");
    Serial.print(gyroY);
    Serial.print(" Z:");
    Serial.println(gyroZ);
    
    Serial.print("Accel: X:");
    Serial.print(accelX);
    Serial.print(" Y:");
    Serial.print(accelY);
    Serial.print(" Z:");
    Serial.println(accelZ);
    
    prevGyroX = gyroX;
    prevGyroY = gyroY;
    prevGyroZ = gyroZ;
    prevAccelX = accelX;
    prevAccelY = accelY;
    prevAccelZ = accelZ;
  } else {
    Serial.println("Failed to get initial BNO055 data!");
  }
}

////////////////////// FUNCTION_17: getBNOdata /////////////////////// < p;/2 >
boolean getBNOdata() {
  if (!bnoWorking) {
    Serial.println("BNO055 not marked as working, skipping data collection");
    return false;
  }
  
  // Store previous values
  prevGyroX = gyroX;
  prevGyroY = gyroY;
  prevGyroZ = gyroZ;
  prevAccelX = accelX;
  prevAccelY = accelY;
  prevAccelZ = accelZ;
  
  // Check if sensor is in the correct mode (NDOF mode = 12)
  if (bno.getMode() != 12) {
    Serial.println("BNO055 not in NDOF mode! Attempting to correct...");
    bno.setMode(12);  // NDOF mode value
    delay(100);
  }
  
  // Check calibration status
  uint8_t system_status, self_test_results, system_error;
  bno.getSystemStatus(&system_status, &self_test_results, &system_error);
  
  if (system_status == 0) {
    Serial.println("BNO055 system status is 0, sensor might be inactive");
    return false;
  }
  
  // Get angular velocity vector (gyro)
  sensors_event_t gyroEvent;
  bool gyroSuccess = bno.getEvent(&gyroEvent, Adafruit_BNO055::VECTOR_GYROSCOPE);
  
  if (!gyroSuccess) {
    Serial.println("Failed to get gyroscope event!");
  }
  
  // Get acceleration vector
  sensors_event_t accelEvent;
  bool accelSuccess = bno.getEvent(&accelEvent, Adafruit_BNO055::VECTOR_ACCELEROMETER);
  
  if (!accelSuccess) {
    Serial.println("Failed to get accelerometer event!");
  }
  
  // If both failed, return false
  if (!gyroSuccess && !accelSuccess) {
    Serial.println("Failed to get any BNO055 data");
    return false;
  }
  
  // Check if reading was suspicious (all exactly zero)
  if (gyroSuccess && gyroEvent.gyro.x == 0 && gyroEvent.gyro.y == 0 && gyroEvent.gyro.z == 0) {
    Serial.println("Warning: All gyro values are exactly zero, which is suspicious");
    // Don't update values with zeros
    gyroSuccess = false;
  }
  
  if (accelSuccess && accelEvent.acceleration.x == 0 && accelEvent.acceleration.y == 0 && 
      accelEvent.acceleration.z == 0) {
    Serial.println("Warning: All accel values are exactly zero, which is suspicious");
    // Don't update values with zeros
    accelSuccess = false;
  }
  
  // Update global variables with new readings if successful
  if (gyroSuccess) {
    gyroX = gyroEvent.gyro.x;
    gyroY = gyroEvent.gyro.y;
    gyroZ = gyroEvent.gyro.z;
  } else if (prevGyroX != 0 || prevGyroY != 0 || prevGyroZ != 0) {
    // Use previous non-zero values if available
    gyroX = prevGyroX;
    gyroY = prevGyroY;
    gyroZ = prevGyroZ;
  }
  
  if (accelSuccess) {
    accelX = accelEvent.acceleration.x;
    accelY = accelEvent.acceleration.y;
    accelZ = accelEvent.acceleration.z;
  } else if (prevAccelX != 0 || prevAccelY != 0 || prevAccelZ != 0) {
    // Use previous non-zero values if available
    accelX = prevAccelX;
    accelY = prevAccelY;
    accelZ = prevAccelZ;
  }
  
  // Try direct vector reading as a fallback
  if (!gyroSuccess && !accelSuccess) {
    Serial.println("Trying direct vector reading as fallback...");
    
    // Read raw vector data directly from registers
    imu::Vector<3> gyro = bno.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);
    imu::Vector<3> accel = bno.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
    
    // Check if we got non-zero values
    if (gyro.x() != 0 || gyro.y() != 0 || gyro.z() != 0) {
      gyroX = gyro.x();
      gyroY = gyro.y();
      gyroZ = gyro.z();
      Serial.println("Got valid gyro data from direct vector reading");
    }
    
    if (accel.x() != 0 || accel.y() != 0 || accel.z() != 0) {
      accelX = accel.x();
      accelY = accel.y();
      accelZ = accel.z();
      Serial.println("Got valid accel data from direct vector reading");
    }
  }
  
  return true;
}

////////////////////// FUNCTION_18: bnoSerialTest /////////////////////// < p;/1 >
void bnoSerialTest() {
  if (!bnoWorking) {
    Serial.println("BNO055 sensor not working");
    return;
  }
  
  // Check system status
  uint8_t system_status, self_test_results, system_error;
  bno.getSystemStatus(&system_status, &self_test_results, &system_error);
  
  Serial.print("BNO055 System Status: 0x");
  Serial.print(system_status, HEX);
  Serial.print(" Self-Test: 0x");
  Serial.print(self_test_results, HEX);
  Serial.print(" System Error: 0x");
  Serial.println(system_error, HEX);
  
  // Check operation mode
  Serial.print("Current Operation Mode: 0x");
  Serial.println(bno.getMode(), HEX);
  
  // Try to read data
  if (!getBNOdata()) {
    Serial.println("Failed to get BNO055 data");
    return;
  }
  
  // Print gyroscope data
  Serial.print("Gyro: X: ");
  Serial.print(gyroX, 4);
  Serial.print(" Y: ");
  Serial.print(gyroY, 4);
  Serial.print(" Z: ");
  Serial.print(gyroZ, 4);
  Serial.println(" rad/s");
  
  // Print accelerometer data
  Serial.print("Accel: X: ");
  Serial.print(accelX, 4);
  Serial.print(" Y: ");
  Serial.print(accelY, 4);
  Serial.print(" Z: ");
  Serial.print(accelZ, 4);
  Serial.println(" m/s²");
  
  // Print system calibration status
  uint8_t system, gyro, accel, mag;
  system = gyro = accel = mag = 0;
  bno.getCalibration(&system, &gyro, &accel, &mag);
  
  Serial.print("Calibration: Sys=");
  Serial.print(system);
  Serial.print(" Gyro=");
  Serial.print(gyro);
  Serial.print(" Accel=");
  Serial.print(accel);
  Serial.print(" Mag=");
  Serial.println(mag);
  
  // Try direct vector reading
  imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);
  Serial.print("Orientation: X: ");
  Serial.print(euler.x());
  Serial.print(" Y: ");
  Serial.print(euler.y());
  Serial.print(" Z: ");
  Serial.println(euler.z());
  
  Serial.println();
}
