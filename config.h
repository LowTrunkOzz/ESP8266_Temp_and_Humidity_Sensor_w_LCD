


#define DHTPIN 3         //define as DHTPIN the Pin 3 used to connect the Sensor
#define DHTTYPE DHT11    //define the sensor used(DHT11)
DHT dht(DHTPIN, DHTTYPE);//create an instance of DHT
const char* host = "iot-web";
const char* ssid     = "SSID";
const char* password = "Password";