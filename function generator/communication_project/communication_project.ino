int fm = 1000;         //frequency of the signal
float Fs = 500.0;  //sampling frequency
int sig[500];       //to store signal
float t;                                
                                    

void setup() {
  Serial.begin(19200);
  pinMode(10, OUTPUT);
  for (int i = 0; i < 500; i++)
  {
    t = (float) i / Fs;                                       //creating time isntance to find the 500 samples
    sig[i] = (int)(127 * (sin(2 * 3.14 *fm * t) + 1)); //calculating the sin value at each time instance
  }
}

void loop() {
  for (int i = 0; i < 500; i++) {
    analogWrite(10, sig[i]);
    delay(2);       //time interval
    Serial.println(i);
  }
} 
