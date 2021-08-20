#include <Arduino.h>
test;
uint16_t adc = 0;

void setup() 
{
  Serial.begin(9600);
  ADMUX = (1<REFS0);
  ADCSRA = (1<<ADEN) | (1<<ADSC) | (1<<ADATE) | (1<<ADIF) |(1<<ADIE);
  ADSCRB = (1<<ADSP0) | (1<<ADSP1) | (1<<ADSP2);
  
}

void loop() {
  Serial.print("ADC_value: ");
  Serial.println(adc);
  delay(1000);
}

ISR(ADC_vect)
{
  adc = ADC;
}