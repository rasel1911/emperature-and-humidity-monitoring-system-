#include <DHT.h>
#include <LiquidCrystal.h>
#define DHTPIN 7        
#define DHTTYPE DHT22   

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);          
  dht.begin();               
  lcd.print("Temp & Humid");
  delay(2000);               
  lcd.clear();
}

void loop() {
  float temperature = dht.readTemperature();    
  float humidity = dht.readHumidity();          

  if (isnan(temperature) || isnan(humidity)) {
    lcd.setCursor(0, 0);
    lcd.print("Sensor error!");
    return;
  }

  // Display Temperature
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature, 1); 
  lcd.print((char)223);      
  lcd.print("C");

  // Display Humidity
  lcd.setCursor(0, 1);
  lcd.print("Hum:  ");
  lcd.print(humidity, 1);    
  lcd.print("%");

  delay(2000); 
}
