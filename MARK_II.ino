//pin2=enable 1
//pin3=enable 2
//pin4=Input1
//pin5=Input2
//pin6=Input3
//pin7=Input4

//pin0(RX<-)<=>TXD



char data;

void setup() {

//Begin Comunication with boad rate 9600  
Serial.begin(9600);  

//enable 1 always high
pinMode(2,OUTPUT);
digitalWrite(2,HIGH);

//enable 2 always high
pinMode(3,OUTPUT);
digitalWrite(3,HIGH);

//Other pins
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);




}

void loop() {

 if(Serial.available()>0){
  
    data=Serial.read();
    
      if(data=='1')      
        {
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
        }
      if(data=='2')
        {
          digitalWrite(4,LOW);
          digitalWrite(6,LOW);
        }
       if(data=='3')
        {
          digitalWrite(6,HIGH);
          digitalWrite(5,HIGH);
        }
       if(data=='4')
        {
          digitalWrite(6,LOW);
          digitalWrite(5,LOW);
        }
      if(data=='7')
        {
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
        }
     if(data=='8')
        {
          digitalWrite(5,LOW);
          digitalWrite(7,LOW);
        }
      if(data=='5')
        {
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
         }
       if(data=='6')
         {
          digitalWrite(4,LOW);
          digitalWrite(7,LOW);
         }
  }
}
//Mańczak 2017r.
