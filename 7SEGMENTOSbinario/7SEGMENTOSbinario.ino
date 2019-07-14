#define A_1 3
#define B_1 0
#define C_1 1
#define D_1 2
#define A_2 11
#define B_2 8
#define C_2 9
#define D_2 10

void setup() {
  pinMode(A_1, OUTPUT);
  pinMode(B_1, OUTPUT);
  pinMode(C_1, OUTPUT);
  pinMode(D_1, OUTPUT);
  pinMode(A_2, OUTPUT);
  pinMode(B_2, OUTPUT);
  pinMode(C_2, OUTPUT);
  pinMode(D_2, OUTPUT);
}

void loop() {
  
  for(int n=0; n<=99; n++){
    int decena=n/10;
    int unidad=n%10;
    
    int m1,m2,m3,m4;
    m1=unidad%2;
    unidad-=m1;
    m2=unidad/2%2;
    unidad-=m2;
    m3=unidad/2/2%2;
    unidad-=m3;
    m4=unidad/2/2/2%2;
    
    int n1,n2,n3,n4;
    n1=decena%2;
    decena-=n1;
    n2=decena/2%2;
    decena-=n2;
    n3=decena/2/2%2;
    decena-=n3;
    n4=decena/2/2/2%2;
    
    digitalWrite(A_1, m1);
    digitalWrite(B_1, m2);
    digitalWrite(C_1, m3);
    digitalWrite(D_1, m4);
    digitalWrite(A_2, n1);
    digitalWrite(B_2, n2);
    digitalWrite(C_2, n3);
    digitalWrite(D_2, n4);
    delay(250);
  }
}
