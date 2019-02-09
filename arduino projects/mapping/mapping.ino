void setup() {

 Serial.begin(9600);    // initialize the baud rate  of arduino 9600
}

void loop() {

  int val;
  int x;
  x=analogRead(0);
  val=map(x,0,1023,0,36000);   //the value of x is mapped ( divided) into 1023 parts such the min value of x=0 and max value is 1023 , here we further mapped the 
  Serial.println(val);
  Serial.println(x);
}
