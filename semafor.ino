// ca doar nu e prost
// deci o sa fie rosu la pietoni si verde/galben? la masini, dupa verde pietoni rosu masini si la final verde masini(30 sec) si dupa  
//masinile pot trece tot timpul cat e galben(pietonul are rosu)
// dupa ce pietonul apasa butonul, semafoarele se fac galben intermitent ambele // dupa verde pieton, rosu masini
//dupa galben intermitent la ambele // dupa verde masini // rosu pietonoi // urmand iar galben masini rosu pietoni
// sa adaug si buzzer pentru cand mai este putin sa se termine o culoare la pietoni
int ledg=7;
int ledg2=10;
int ledr=5;
int ledr2=8;
int ledo=6;
int ledo2=9;
int time1=10;
float time2=100;
int time3=2;
int readp=2 ;              
int valb;
int n=1;
int m=1;
int buzz=11;

void setup() {
  pinMode(buzz, OUTPUT);
  pinMode(ledr, OUTPUT);
  pinMode(ledo, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledr2, OUTPUT);
  pinMode(ledo2, OUTPUT);
  pinMode(ledg2, OUTPUT);
  pinMode(readp, INPUT);    // digital read
  Serial.begin(9600);
}

void loop() {

  valb=digitalRead(readp);        //1 si daca e apasat 0
  Serial.println(valb);
  
  while(valb==1){               // portocaliu pentru masini, rosu pentru pietoni
    digitalWrite(ledo, HIGH);   //masini
    delayMicroseconds(time1);
    digitalWrite(ledo, LOW);
    delayMicroseconds(time1);
    
    digitalWrite(ledr2, HIGH);   //pieton
    delayMicroseconds(time1);
    digitalWrite(ledr2, LOW);
    delayMicroseconds(time1);
    valb=digitalRead(readp); 
  }
  if(valb==0){                          //   portocaliu pentru masina si sofer cateva secunde
    while(n<=15){
    digitalWrite(ledo, HIGH);   //masina
    delay(time2);
    digitalWrite(ledo, LOW);
    delay(time2);
    
    digitalWrite(ledo2, HIGH);  //pieton
    delay(time2);
    digitalWrite(ledo2, LOW);
    delay(time2);
    n++;
    time2=time2-6.6;
    }   
  }
  time2=100;
  while(n<=1500){                         // rosu pentru masini si verde pentru pietoni
    digitalWrite(ledr, HIGH);   //masina
    delay(time3);
    digitalWrite(ledr, LOW);
    delay(time3);
    
    digitalWrite(ledg2, HIGH);   // pieton
    delay(time3);
    digitalWrite(ledg2, LOW);
    delay(time3);
    n++;
  }

    while(n<=1516){                      // portocaliu pentru masina si sofer cateva secunde
    digitalWrite(ledo, HIGH);   //masina
    delay(time2);
    digitalWrite(ledo, LOW);
    delay(time2);
    
    digitalWrite(ledo2, HIGH);  //pieton
    delay(time2);
    digitalWrite(ledo2, LOW);
    delay(time2);
    
    digitalWrite(buzz, HIGH);    // BUZZER ACTIV
    delay(time2);
    digitalWrite(buzz, LOW);
    delay(time2);
    
    n++;
    time2=time2-6.6;
    }   

    while(m<=1500){                         // verde pentru masini si rosu pentru pietoni
    digitalWrite(ledg, HIGH);   //masini
    delay(time3);
    digitalWrite(ledg, LOW);
    delay(time3);
    
    digitalWrite(ledr2, HIGH);   //pieton
    delay(time3);
    digitalWrite(ledr2, LOW);
    delay(time3);
    m++;
  }
  
  if(n==1517){      // reseteaza n si m
    n=0;
    m=1;
    time2=75;
  }
  
}
