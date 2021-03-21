int led1=2;
int led2=3;
int t=100,T=1000; 
int nr;
int n;
String vt;
String myS;
String ms1="Ce led vrei sa aprinzi?(red/blue)";
String ms3="De cate ori vrei sa se aprinda?(<50 nu poti selecta viteza)";
String ms6="Ce viteza vrei sa aiba?(repede>>incet sau incet>>repede)";
String ms2="Ai aprins ledul ";
String ms4=" ori.";
String ms5=" de ";


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  Serial.println(ms1);
  while(Serial.available()==0){
    
  }
  myS=Serial.readString();
  Serial.println(ms3);
  while(Serial.available()==0){
    
  }
  nr=Serial.parseInt();

  Serial.println(ms6);
  while(Serial.available()==0){
    
  }
  vt=Serial.readString();
  
  if(vt=="repede>>incet" && nr>=50){
  if(myS=="red"){
    t=1;
    for(n=1;n<=nr;n++){
    digitalWrite(led1, HIGH);
    delay(t);
    digitalWrite(led1, LOW);
    delay(t);
    t=t+1;
    }
  }
  else if(myS=="blue"){
    t=1;
    for(n=1;n<=nr;n++){
    digitalWrite(led2, HIGH);
    delay(t);
    digitalWrite(led2, LOW);
    delay(t);
    t=t+1;
    }
  }
  }
  else if(vt=="incet>>repede" && nr>=50){
    if(myS=="red"){
    t=5000;
    for(n=1;n<=nr;n++){
    digitalWrite(led1, HIGH);
    delay(t);
    digitalWrite(led1, LOW);
    delay(t);
    t=t/2;
    }
  }
  else if(myS=="blue"){
    t=5000;
    for(n=1;n<=nr;n++){
    digitalWrite(led2, HIGH);
    delay(t);
    digitalWrite(led2, LOW);
    delay(t);
    t=t/2;
    }
  }
    t=t/2;
  }
    if(myS=="red" && nr<50){
    for(n=1;n<=nr;n++){
    digitalWrite(led1, HIGH);
    delay(t);
    digitalWrite(led1, LOW);
    delay(t);
    }
  }
  else if(myS=="blue" && nr<50){
    for(n=1;n<=nr;n++){
    digitalWrite(led2, HIGH);
    delay(t);
    digitalWrite(led2, LOW);
    delay(t);
    }
  }
  
  Serial.print(ms2);
  Serial.print(myS);
  Serial.print(ms5);
  Serial.print(nr);
  Serial.println(ms4);
  delay(T);
}
