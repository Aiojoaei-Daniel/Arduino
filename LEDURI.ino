//ar trebui sa faca ce face joc_leduri prima varianta
//varinta mai scurta a joc de leduri
int led1=2;
int led2=3;
int led3=4;
int led4=5;
int ledr=6;
int t=200,tt=2000,T=100;
int x=1,n,j;
float pinA=A0,valS, valBUT;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);  
  pinMode(ledr, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(pinA, INPUT);
  Serial.begin(9600);
}
void loop() {
  n=1;
  if(x==1 ||x==3 ||x==5 ||x==7 ||x==9){
  valBUT=analogRead(pinA);
  Serial.println(valBUT);
  delay(T);
  Serial.println("BOOM");
  x++;
  if(valBUT>100){
    t=200;
  }
  }
   //LED1
   if(n==1 && x==2){
   if(valBUT<100){
      t=tt;
      n=2;
      x=0;
  }
  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  x++;
  }
   //LED2
   if(n==1 && x==4){
   if(valBUT<100){
      t=tt;
      n=2;
      x=1;
  }
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  x++;
  }
      //ledr
   if(n==1 && x==6){
   if(valBUT<100){
      t=tt;
      x=1;
      }
  digitalWrite(ledr, HIGH);
  delay(t);
  digitalWrite(ledr, LOW);
    x++;
   }
   //LED3
   if(n==1 && x==8){
   if(valBUT<100){
      t=tt;
      n=2;
      x=1;
       }
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  x++;
   }
  //LED4
  if(n==1 && x==10){
  if(valBUT<100){
      t=tt;
      x=1;
       }
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  x++;
   }
   if(x==11){
    x=1;
   }
}
