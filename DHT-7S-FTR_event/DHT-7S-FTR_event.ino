#include <DHT.h>
#include <Eventually.h>

#define PINlight A0
#define PINdht A1
#define PINbutton A2
#define PINled A3
#define DHTTYPE DHT11

DHT dht(PINdht, DHTTYPE);
EvtManager mgr;

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(PINlight, INPUT);
  pinMode(PINbutton, INPUT);
  pinMode(PINled, OUTPUT);
  Serial.begin(9600);
  dht.begin();
  Humedad();
}
bool Humedad() {
  mgr.resetContext();
  mgr.addListener(new EvtTimeListener(500, true, (EvtAction)ReadHumidity));
  mgr.addListener(new EvtPinListener(PINbutton, (EvtAction)Luz));
  BlinkLed();
  return true;
}
bool Luz() {
  mgr.resetContext();
  mgr.addListener(new EvtTimeListener(1000, true, (EvtAction)ReadLight));
  mgr.addListener(new EvtPinListener(PINbutton, (EvtAction)Temp));
  BlinkLed();
  return true;
}
bool Temp() {
  mgr.resetContext();
  mgr.addListener(new EvtTimeListener(500, true, (EvtAction)ReadTemp));
  mgr.addListener(new EvtPinListener(PINbutton, (EvtAction)Humedad));
  BlinkLed();
  return true;
}
void ReadHumidity() {
  int n = 0;
  n = dht.readHumidity();
  Serial.println(n);
  Display(n);
}
void ReadLight() {
  int sensorValue = analogRead(PINlight);
  float l = 0;
  l = (100-(sensorValue * 100.0) / 1023.0);
  Serial.println(l);
  Display(l);
}
void ReadTemp() {
  int n = 0;
  n = dht.readTemperature();
  Serial.println(n);
  Display(n);
}
void BlinkLed(){
  //delay(1000);
  digitalWrite(PINled, HIGH);
  delay(100);
  digitalWrite(PINled, LOW);
}
void Display(int n) {
  if ((n >= 0 && n <= 9) || n % 10 == 0) {
    if (n % 10 == 0) {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    if (n >= 0 && n <= 9) {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
  }
  if ((n >= 10 && n <= 19) || n % 10 == 1) {
    if (n % 10 == 1) {
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    if (n >= 10 && n <= 19) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
  }
  if ((n >= 20 && n <= 29) || n % 10 == 2) {
    if (n % 10 == 2) {
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    if (n >= 20 && n <= 29) {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
  }
  if ((n >= 30 && n <= 39) || n % 10 == 3) {
    if (n % 10 == 3) {
      digitalWrite(0, HIGH);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    if (n >= 30 && n <= 39) {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
  }
  if ((n >= 40 && n <= 49) || n % 10 == 4) {
    if (n % 10 == 4) {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    if (n >= 40 && n <= 49) {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  }
  if ((n >= 50 && n <= 59) || n % 10 == 5) {
    if (n % 10 == 5) {
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    if (n >= 50 && n <= 59) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  }
  if ((n >= 60 && n <= 69) || n % 10 == 6) {
    if (n % 10 == 6) {
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    if (n >= 60 && n <= 69) {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  }
  if ((n >= 70 && n <= 79) || n % 10 == 7) {
    if (n % 10 == 7) {
      digitalWrite(0, HIGH);
      digitalWrite(1, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    if (n >= 70 && n <= 79) {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  }
  if ((n >= 80 && n <= 89) || n % 10 == 8) {
    if (n % 10 == 8) {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
    }
    if (n >= 80 && n <= 89) {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
    }
  }
  if ((n >= 90 && n <= 99) || n % 10 == 9) {
    if (n % 10 == 9) {
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
    }
    if (n >= 90 && n <= 99) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
    }
  }
}
USE_EVENTUALLY_LOOP(mgr)
