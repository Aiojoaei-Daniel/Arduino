int led1= 2;

int ledA=3;
int ledB=4;
int ledC=5;
int ledD=6; 
int ledE=7;
int ledF=8;
int ledG=9;
int D1=10;
int D2=11;
int D3=12;
int D4=13;
int n=1;
int m=1;
int x=1;
int i=1;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(ledA, OUTPUT);     
  pinMode(ledB, OUTPUT);     
  pinMode(ledC, OUTPUT);     
  pinMode(ledD, OUTPUT);     
  pinMode(ledE, OUTPUT);     
  pinMode(ledF, OUTPUT);     
  pinMode(ledG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT); 


}
void loop() {
                               //NUMERE 0-9
  while(n==1){
    digitalWrite(D4, LOW);
  //0
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, HIGH);   
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, LOW);   
  delay(500);
   //1 
  digitalWrite(ledA, LOW);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, LOW);   
  digitalWrite(ledE, LOW);   
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, LOW);   
  delay(500); 

  //2
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, LOW);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, HIGH);   
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, LOW);   
  delay(500);
  //3 
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, LOW);   
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, HIGH);   
  delay(500); 
   //4
  digitalWrite(ledA, LOW);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, LOW);   
  digitalWrite(ledE, LOW);   
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);   
  delay(500); 
  //5
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, LOW);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, LOW);   
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);   
  delay(500); 
  //6
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, LOW);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, HIGH);   
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);   
  delay(500);
   //7 
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, LOW);   
  digitalWrite(ledE, LOW);   
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, LOW);   
  delay(500); 
   //8 
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, HIGH);   
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);   
  delay(500); 
   //9 
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, LOW);   
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);   
  delay(500);
  x++;
  
  }
   while(x==1){
    digitalWrite(D3, LOW);
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, HIGH);   
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, LOW);   
  delay(500);
  }
    while(m==1){
     digitalWrite(D2, LOW);
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, HIGH);   
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, LOW);   
  delay(500);
  }
  while(i==1){  
     digitalWrite(D1, LOW); 
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH);   
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, HIGH);   
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, LOW);   
  delay(500);
  }
  }
