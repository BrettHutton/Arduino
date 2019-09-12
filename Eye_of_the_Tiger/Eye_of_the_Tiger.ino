#include "LightUp.h"
 
void setup()
{
  
}
 
void play(int note, int time) {
  tone(OUTPUT_F, note);
  delay(time);
  noTone(OUTPUT_F);
  delay(50);
}
 
void loop()
{
  int tempo;
  int delayo;
  
  tempo = 150;
  delayo = 50;
  if (digitalRead(INPUT_2) == PRESSED) {




//"eye of the tiger"
//  
//  0
//  4|b-------b--a--b---------b-|
//0
    play(NOTE_B4, tempo);  
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    play(NOTE_B4, tempo);  
    delay(delayo);    
    delay(delayo);    
    delay(delayo);     
    delay(delayo);    
    delay(delayo);    
    play(NOTE_B4, tempo);  
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    play(NOTE_B4, tempo);  
    delay(delayo);    
//
//  0
//  4|-a--b---------b--F--g-----|
//0
    delay(delayo);    
    play(NOTE_A4, tempo);  
    delay(delayo);    
    delay(delayo);    
    play(NOTE_B4, tempo);  
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    play(NOTE_B4, tempo);  
    delay(delayo);    
    delay(delayo);    
    play(NOTE_FS4, tempo);  
    delay(delayo);    
    delay(delayo);    
    play(NOTE_G4, tempo);  
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
    delay(delayo);    
//
//0
//4|------------b-----bbb--a--|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
//
//0
//4|b-------bbb--a--b-------bb|
//0
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
//
//5|----------------------cce-|
//4|b--F--g-----------------b-|
//0
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    play(NOTE_E5, tempo);    play(NOTE_B4, tempo);
    delay(delayo);
//
//5|----------d---------------|
//4|--------b--b--------a-g-b-|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
//
//0
//4|a---g---------aa-a----a-b-|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
//
//5|----------------------de--|
//4|a-g-g---------------b-----|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
//
//0
//4|b-a-g-b--a--a-g---eg--a---|
//0
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//4|a-a-a---a-gb--------------|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|------------------c-------|
//4|--b-----------------------|
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//4|--------a---------------b-|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
//
//0
//4|--------------b-----------|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|----c---------------------|
//4|--------------------a-----|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//4|----------b---------a---b-|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
//
//5|--c-c-cc------------------|
//4|----------b-a-g-g-a-b-a---|
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|------c---c-c-c-----------|
//4|a---b-----------b-ag--b-a-|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
//
//5|------------c---c-cc------|
//4|a-----a---b-----------b-a-|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
//
//5|------------------c-----c-|
//4|g-g-a-b-a---a---b----b----|
//0
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
//
//5|d--c--d-e-----------------|
//4|--------------------b-ga--|
//0
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
//
//0
//4|g-------------------------|
//0
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|----------d---------------|
//4|--------b--b--------a-g-b-|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
//
//0
//4|a---g---------aa-a----a-b-|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
//
//5|----------------------de--|
//4|a-g-g-----bbba--b---b-----|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
//
//0
//4|b-a-g-b--a--a-g---eg--a---|
//0
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//4|a-a-a---a-gb----------a---|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|----c-c-cc----------------|
//4|b-----------b-a-g-g-a-b-a-|
//0
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
//
//5|--------c---c-c-c---------|
//4|--a---b-----------b-ag--b-|
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
//
//5|--------------c---c-cc----|
//4|a-a-----a---b-----------b-|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
//
//5|--------------------c-----|
//4|a-g-g-a-b-a---a---b----b--|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
//
//5|c-d--c--d-e---------------|
//0
//0
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//4|------------b-ga--g-g-----|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//4|----------------------b---|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//4|----b--a--b---------b--a--|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
//
//0
//4|----b--a--b---------b--a--|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
//
//0
//4|--------b-------b--a--b---|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//4|------b--a--b---------b--F|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS4, tempo);
//
//5|-----------------d--e-----|
//4|--g-------------b---------|
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//0
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);


    }
}
