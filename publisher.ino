#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "SUMS";
const char* password = "sums@@@@";
const char* mqtt_server = "broker.hivemq.com";

WiFiClient espClient;
PubSubClient client(espClient);

void setup_wifi() {
  delay(10);
  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
}

void loop() {
  if (!client.connected()) {
    client.connect("ESP32Publisher");
  }
  client.loop();
  client.publish("esp32/test", "Hello from Device A");
  Serial.println("Message sent: Hello from Device A");
  delay(5000);
}
