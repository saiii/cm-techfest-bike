#include <Arduino.h> 

/* BOARD INFO */
String DEVICE_NAME      = "BIKE-001"; 

/* WIFI INFO */ 
String WIFI_SSID        = "ampere";
String WIFI_PASSWORD    = "espertap";

/* MQTT INFO */ 
String MQTT_HOST        = "mqtt.cmmc.io";
String MQTT_USERNAME    = "";
String MQTT_PASSWORD    = "";
String MQTT_CLIENT_ID   = "";
String MQTT_PREFIX      = "CM_TECHFEST/";

int    MQTT_PORT        = 1883;
int PUBLISH_EVERY       = 1L * 1000;
int MQTT_CONNECT_TIMEOUT= 10; 
