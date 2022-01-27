#include <ESP8266WiFi.h>
#include "Credentials.h"

#define timeout_limit (1000 * 30)

int timeout_check = 0;


void setup(){
  WiFi.begin(__SSID__, __PSWD__);
  
  Serial.begin(115200);
  Serial.print("\nConnecting");
  
  while (WiFi.status() != WL_CONNECTED){
    if (timeout_check <= timeout_limit){
      delay(500);
      Serial.print(".");
      timeout_check += 500;
    }else{
      Serial.print("\nConnection Timeout");
      break;
    }
  }
  
  if (WiFi.status() == WL_CONNECTED){
    Serial.print("\nConnected, IP address: ");
    Serial.println(WiFi.localIP());
  }
  
}

void loop() {}
