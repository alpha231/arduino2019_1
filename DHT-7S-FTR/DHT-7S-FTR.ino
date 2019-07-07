#include "DHT.h"

#define PIN 2
#define DHTTYPE DHT11

DHT dht(A1, DHT11);
int button=0;
int n=0;

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A2, INPUT);
  Serial.begin(1200);
  dht.begin();
}

void loop() {
  /*button+=digitalRead(A2);
  if(button==3) button=0;*/

  int h = dht.readHumidity();
  
  int t = dht.readTemperature();
  
  int sensorValue = analogRead(A0);
  float l = (100-(sensorValue * 100.0) / 1023.0);
  
  /*switch(button){
    case 0:
    n=h;
    Serial.println(digitalRead(A2));
    break;
    
    case 1:*/
    n=l;
    /*Serial.println(digitalRead(A2));
    break;
    
    case 2:
    n=l;
    Serial.println(digitalRead(A2));
    break;
  }*/
  
  if((n>=0&&n<=9) || n%10==0){
    if(n%10==0){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    if(n>=0&&n<=9){
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
  }
  if((n>=10&&n<=19) || n%10==1){
    if(n%10==1){
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    if(n>=10&&n<=19){
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
  }
  if((n>=20&&n<=29) || n%10==2){
    if(n%10==2){
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    if(n>=20&&n<=29){
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
  }
  if((n>=30&&n<=39) || n%10==3){
    if(n%10==3){
      digitalWrite(0, HIGH);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    if(n>=30&&n<=39){
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
  }
  if((n>=40&&n<=49) || n%10==4){
    if(n%10==4){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    if(n>=40&&n<=49){
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  }
  if((n>=50&&n<=59) || n%10==5){
    if(n%10==5){
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    if(n>=50&&n<=59){
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  }
  if((n>=60&&n<=69) || n%10==6){
    if(n%10==6){
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    if(n>=60&&n<=69){
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  }
  if((n>=70&&n<=79) || n%10==7){
    if(n%10==7){
      digitalWrite(0, HIGH);
      digitalWrite(1, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    if(n>=70&&n<=79){
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  }
  if((n>=80&&n<=89) || n%10==8){
    if(n%10==8){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
    }
    if(n>=80&&n<=89){
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
    }
  }
  if((n>=90&&n<=99) || n%10==9){
    if(n%10==9){
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
    }
    if(n>=90&&n<=99){
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
    }
    delay(100);
  }
}
