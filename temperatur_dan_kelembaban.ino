#define BLYNK_PRINT Serial

#include <DHT.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>

char auth[] = "YourAuthToken";
char ssid[] = "YourNetworkName";
char pass[] = "YourPassword";

#define DHTPIN 14;
#define DHTTYPE DHT11;

DHT dht (DHTPIN, DHTTYPE);
BlynkTimer timer;

void sendSensor(){
float humidity = dht.readHumidity();
float temperature = dht.readTemperature();

//isnan itu sama aja seperti "is not a number" dan berbentuk nol
if (isnan(h) || (isnan(t)){
  Serial.println("failed to read temperature and humidity")
}

Blynk.virtualWrite (V1, t);
Blynk.virtualWrite (V2, h);

}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth, pass, ssid);
  dht.begin();
  timer.setInterval(1000, sendSensor);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
  timer.run();
}
