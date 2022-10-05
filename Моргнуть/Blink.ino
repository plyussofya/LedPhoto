#define led_pin 3
#define sensor_pin A2

int max = 0;
int min = 1024;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}
void loop() {
  int val = analogRead(sensor_pin);
  Serial.println(val);
  if (max < val)
    max = val;
  if (min > val)
    min = val;
  Serial.println(max);
  Serial.println(min);
  
  if ((max + min)/2 > val){
      digitalWrite(led_pin, LOW);    
    }
   else {
      digitalWrite(led_pin, HIGH);   
    }                      
}
