#include <WiFiManager.h>

void setup() {
  Serial.begin(115200);
    
      WiFiManager wm;
        
          // Opcjonalnie: zresetuj zapisane dane
            // wm.resetSettings();
              
                // Uruchamia AP "ESP32-Config" jeśli nie ma zapisanej sieci
                  bool connected = wm.autoConnect("ESP32-Config", "haslo123");
                    
                      if (!connected) {
                          Serial.println("Nie udało się połączyć!");
                              ESP.restart();
                                }
                                  
                                    Serial.println("Połączono z WiFi!");
                                      Serial.println(WiFi.localIP());
                                      }

                                      void loop() {
                                        // twój kod
                                        }
