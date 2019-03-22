#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


#define BLYNK_PRINT Serial
// You should get Auth Token in the Blynk App.

// Go to the Project Settings (nut icon).

char auth[] = "d78822a422a34453a7843598e6f9eb49";
 
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "J.A.R.V.I.S. 2";
char pass[] = "SLouw_F!";

int LED = D8; // Define LED as an Integer (whole numbers) and pin D8 on Wemos D1 Mini Pro

void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(LED, OUTPUT); //Set the LED (D8) as an output
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run(); 
}

// BLYNK_CONNECTED() 
// {
//     Blynk.syncAll();
// }

// // This function will be called every time button Widget
// // in Blynk app writes values to the Virtual Pin V3
// BLYNK_WRITE(V3) {
//  int pinValue = param.asInt(); // Assigning incoming value from pin V3 to a variable
//  int ledValue = digitalRead(LED);
//  BLYNK_PRINT.write(ledValue);
//  if (pinValue == 1) {
//     digitalWrite(LED, HIGH); // Turn LED on.
//     BLYNK_PRINT.write("ON\n");
//   } else {
//     digitalWrite(LED, LOW); // Turn LED off.
//     BLYNK_PRINT.write("OFF\n");
//  }
// }