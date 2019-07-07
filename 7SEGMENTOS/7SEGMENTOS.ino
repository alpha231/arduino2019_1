void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  for(int numero=0; numero<=99; numero++){
    if((numero>=0&&numero<=9) || numero%10==0){
      if(numero%10==0){
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
      }
      if(numero>=0&&numero<=9){
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
      }
    }
    if((numero>=10&&numero<=19) || numero%10==1){
      if(numero%10==1){
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
      }
      if(numero>=10&&numero<=19){
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
      }
    }
    if((numero>=20&&numero<=29) || numero%10==2){
      if(numero%10==2){
        digitalWrite(0, LOW);
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
      }
      if(numero>=20&&numero<=29){
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
      }
    }
    if((numero>=30&&numero<=39) || numero%10==3){
      if(numero%10==3){
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
      }
      if(numero>=30&&numero<=39){
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
      }
    }
    if((numero>=40&&numero<=49) || numero%10==4){
      if(numero%10==4){
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
      }
      if(numero>=40&&numero<=49){
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
      }
    }
    if((numero>=50&&numero<=59) || numero%10==5){
      if(numero%10==5){
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
      }
      if(numero>=50&&numero<=59){
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
      }
    }
    if((numero>=60&&numero<=69) || numero%10==6){
      if(numero%10==6){
        digitalWrite(0, LOW);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
      }
      if(numero>=60&&numero<=69){
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
      }
    }
    if((numero>=70&&numero<=79) || numero%10==7){
      if(numero%10==7){
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
      }
      if(numero>=70&&numero<=79){
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
      }
    }
    if((numero>=80&&numero<=89) || numero%10==8){
      if(numero%10==8){
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
      }
      if(numero>=80&&numero<=89){
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
      }
    }
    if((numero>=90&&numero<=99) || numero%10==9){
      if(numero%10==9){
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
      }
      if(numero>=90&&numero<=99){
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
      }
    }
    delay(300);
  }
}
