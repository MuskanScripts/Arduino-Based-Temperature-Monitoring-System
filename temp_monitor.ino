
---

### `temp_monitor.ino`

```cpp
#include "DHT.h"

#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

#define LED_PIN 13      // Onboard LED for alert
#define TEMP_THRESHOLD 30  // Threshold temperature in Celsius

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" *C");

    if (temperature > TEMP_THRESHOLD) {
      digitalWrite(LED_PIN, HIGH);  // Turn LED on
    } else {
      digitalWrite(LED_PIN, LOW);   // Turn LED off
    }
  }

  delay(2000); // Wait 2 seconds between readings
}
