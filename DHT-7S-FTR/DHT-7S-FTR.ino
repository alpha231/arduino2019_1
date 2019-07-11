#include <DHT.h>

#define PINlight A0
#define PINdht A1
#define PINbutton A2
#define PINled A3

#define A_1 0
#define B_1 1
#define C_1 2
#define D_1 3
#define A_2 4
#define B_2 5
#define C_2 6
#define D_2 7

#define DHTTYPE DHT11

DHT dht(PINdht, DHTTYPE);
int button=0;
int n=0;

void setup() {
  pinMode(A_1, OUTPUT);
  pinMode(B_1, OUTPUT);
  pinMode(C_1, OUTPUT);
  pinMode(D_1, OUTPUT);
  pinMode(A_2, OUTPUT);
  pinMode(B_2, OUTPUT);
  pinMode(C_2, OUTPUT);
  pinMode(D_2, OUTPUT);
  pinMode(PINlight, INPUT);
  pinMode(PINbutton, INPUT);
  pinMode(PINled, OUTPUT);
  Serial.begin(1200);
  dht.begin();
}

void loop() {
  button+=digitalRead(PINbutton);
  if(button==3) button=0;

  int h = dht.readHumidity();
  
  int t = dht.readTemperature();
  
  int sensorValue = analogRead(PINlight);
  float l = (100-(sensorValue * 100.0) / 1023.0);
  
  switch(button){
    case 0:
    n=h;
    Serial.println(n);
    break;
    
    case 1:
    n=l;
    Serial.println(l);
    break;
    
    case 2:
    n=t;
    Serial.println(n);
    break;
  }
  
  if ((n >= 0 && n <= 9) || n % 10 == 0) {
    if (n % 10 == 0) {
      digitalWrite(A_1, LOW);
      digitalWrite(B_1, LOW);
      digitalWrite(C_1, LOW);
      digitalWrite(D_1, LOW);
    }
    if (n >= 0 && n <= 9) {
      digitalWrite(A_2, LOW);
      digitalWrite(B_2, LOW);
      digitalWrite(C_2, LOW);
      digitalWrite(D_2, LOW);
    }
  }
  if ((n >= 10 && n <= 19) || n % 10 == 1) {
    if (n % 10 == 1) {
      digitalWrite(A_1, HIGH);
      digitalWrite(B_1, LOW);
      digitalWrite(C_1, LOW);
      digitalWrite(D_1, LOW);
    }
    if (n >= 10 && n <= 19) {
      digitalWrite(A_2, HIGH);
      digitalWrite(B_2, LOW);
      digitalWrite(C_2, LOW);
      digitalWrite(D_2, LOW);
    }
  }
  if ((n >= 20 && n <= 29) || n % 10 == 2) {
    if (n % 10 == 2) {
      digitalWrite(A_1, LOW);
      digitalWrite(B_1, HIGH);
      digitalWrite(C_1, LOW);
      digitalWrite(D_1, LOW);
    }
    if (n >= 20 && n <= 29) {
      digitalWrite(A_2, LOW);
      digitalWrite(B_2, HIGH);
      digitalWrite(C_2, LOW);
      digitalWrite(D_2, LOW);
    }
  }
  if ((n >= 30 && n <= 39) || n % 10 == 3) {
    if (n % 10 == 3) {
      digitalWrite(A_1, HIGH);
      digitalWrite(B_1, HIGH);
      digitalWrite(C_1, LOW);
      digitalWrite(D_1, LOW);
    }
    if (n >= 30 && n <= 39) {
      digitalWrite(A_2, HIGH);
      digitalWrite(B_2, HIGH);
      digitalWrite(C_2, LOW);
      digitalWrite(D_2, LOW);
    }
  }
  if ((n >= 40 && n <= 49) || n % 10 == 4) {
    if (n % 10 == 4) {
      digitalWrite(A_1, LOW);
      digitalWrite(B_1, LOW);
      digitalWrite(C_1, HIGH);
      digitalWrite(D_1, LOW);
    }
    if (n >= 40 && n <= 49) {
      digitalWrite(A_2, LOW);
      digitalWrite(B_2, LOW);
      digitalWrite(C_2, HIGH);
      digitalWrite(D_2, LOW);
    }
  }
  if ((n >= 50 && n <= 59) || n % 10 == 5) {
    if (n % 10 == 5) {
      digitalWrite(A_1, HIGH);
      digitalWrite(B_1, LOW);
      digitalWrite(C_1, HIGH);
      digitalWrite(D_1, LOW);
    }
    if (n >= 50 && n <= 59) {
      digitalWrite(A_2, HIGH);
      digitalWrite(B_2, LOW);
      digitalWrite(C_2, HIGH);
      digitalWrite(D_2, LOW);
    }
  }
  if ((n >= 60 && n <= 69) || n % 10 == 6) {
    if (n % 10 == 6) {
      digitalWrite(A_1, LOW);
      digitalWrite(B_1, HIGH);
      digitalWrite(C_1, HIGH);
      digitalWrite(D_1, LOW);
    }
    if (n >= 60 && n <= 69) {
      digitalWrite(A_2, LOW);
      digitalWrite(B_2, HIGH);
      digitalWrite(C_2, HIGH);
      digitalWrite(D_2, LOW);
    }
  }
  if ((n >= 70 && n <= 79) || n % 10 == 7) {
    if (n % 10 == 7) {
      digitalWrite(A_1, HIGH);
      digitalWrite(B_1, HIGH);
      digitalWrite(C_1, HIGH);
      digitalWrite(D_1, LOW);
    }
    if (n >= 70 && n <= 79) {
      digitalWrite(A_2, HIGH);
      digitalWrite(B_2, HIGH);
      digitalWrite(C_2, HIGH);
      digitalWrite(D_2, LOW);
    }
  }
  if ((n >= 80 && n <= 89) || n % 10 == 8) {
    if (n % 10 == 8) {
      digitalWrite(A_1, LOW);
      digitalWrite(B_1, LOW);
      digitalWrite(C_1, LOW);
      digitalWrite(D_1, HIGH);
    }
    if (n >= 80 && n <= 89) {
      digitalWrite(A_2, LOW);
      digitalWrite(B_2, LOW);
      digitalWrite(C_2, LOW);
      digitalWrite(D_2, HIGH);
    }
  }
  if ((n >= 90 && n <= 99) || n % 10 == 9) {
    if (n % 10 == 9) {
      digitalWrite(A_1, HIGH);
      digitalWrite(B_1, LOW);
      digitalWrite(C_1, LOW);
      digitalWrite(D_1, HIGH);
    }
    if (n >= 90 && n <= 99) {
      digitalWrite(A_2, HIGH);
      digitalWrite(B_2, LOW);
      digitalWrite(C_2, LOW);
      digitalWrite(D_2, HIGH);
    }
  }
  delay(100);
}
