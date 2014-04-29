/*
  Analog input, analog output, serial output
 
 Reads an analog input pin, maps the result to a range from 0 to 255
 and uses the result to set the pulsewidth modulation (PWM) of an output pin.
 Also prints the results to the serial monitor.
 

 */
const int analogOutPinR = 6; // Analog output pin that the LED is attached to
const int analogOutPinG = 5; // Analog output pin that the LED is attached to
const int analogOutPinB = 11; // Analog output pin that the LED is attached to

// 8,9,10,12 as outputs
const int motoPin1 = 8;
const int motoPin2 = 9;
const int motoPin3 = 10;
const int motoPin4 = 12;

const int mydelay = 4;

int outputValueR = 0;        // value output to the PWM (analog out)
int outputValueG = 0;        // value output to the PWM (analog out)
int outputValueB = 0;        // value output to the PWM (analog out)

int max_bright = 50;
int incomingByte = 0;	// for incoming serial data


void setup() {
  pinMode(motoPin1, INPUT);      // sets the digital pin as output
  pinMode(motoPin2, INPUT);      // sets the digital pin as output
  pinMode(motoPin3, INPUT);      // sets the digital pin as output
  pinMode(motoPin4, INPUT);      // sets the digital pin as output
  
  digitalWrite(motoPin1, HIGH);       // turn on pullup resistors
  digitalWrite(motoPin2, HIGH);       // turn on pullup resistors
  digitalWrite(motoPin3, HIGH);       // turn on pullup resistors
  digitalWrite(motoPin4, HIGH);       // turn on pullup resistors

   analogWrite(analogOutPinR, outputValueR);        
   analogWrite(analogOutPinB, outputValueB);           
   analogWrite(analogOutPinG, outputValueG);           


  // initialize serial communications at 9600 bps:
  Serial.begin(38400); 
}

void loop() {
// 
//  while(outputValueR < max_bright)
//  {
//    analogWrite(analogOutPinR, outputValueR);        
//    delay(mydelay);      
//    outputValueR = outputValueR + 1;
//  }
//  while(outputValueR > 0)
//  {
//    analogWrite(analogOutPinR, outputValueR);           
//    delay(mydelay);      
//    outputValueR = outputValueR - 1;
//  }
//    outputValueR = 0;
//    analogWrite(analogOutPinR, outputValueR);           
//   
// 	// send data only when you receive data:
//    while(Serial.available() == 0);
//    // read the incoming byte:
//    incomingByte = Serial.read();
//    Serial.flush();
//   

  while(outputValueR < max_bright)
  {
    analogWrite(analogOutPinR, outputValueR);        
    delay(mydelay);      
    outputValueR = outputValueR + 1;
  }
  while(outputValueR > 0)
  {
    analogWrite(analogOutPinR, outputValueR);           
    delay(mydelay);      
    outputValueR = outputValueR - 1;
  }
    outputValueR = 0;
    analogWrite(analogOutPinR, outputValueR);     
   
  while(outputValueG < max_bright)
  {
    analogWrite(analogOutPinG, outputValueG);           
    delay(mydelay);      
    outputValueG = outputValueG + 1;
  }
  while(outputValueG > 0)
  {
    analogWrite(analogOutPinG, outputValueG);           
    delay(mydelay);      
    outputValueG = outputValueG - 1;
  }
    outputValueG = 0;
    analogWrite(analogOutPinG, outputValueG);           

  while(outputValueB < max_bright)
  {
    analogWrite(analogOutPinB, outputValueB);           
    delay(mydelay);      
    outputValueB = outputValueB + 1;
  }
  while(outputValueB > 0)
  {
    analogWrite(analogOutPinB, outputValueB);           
    delay(mydelay);      
    outputValueB = outputValueB - 1;
  }
    outputValueB = 0;
    analogWrite(analogOutPinB, outputValueB);           


}
