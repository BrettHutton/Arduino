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
  if (digitalRead(INPUT_5) == PRESSED) {




//  "Happier"
//  
//  5|----------------------d-c-|
//  4|a-g---a-g---g-f-g-f-------|
//  0
    play(NOTE_A4, tempo);
    delay(delayo); 
     play(NOTE_G4, tempo);
    delay(delayo); 
    delay(delayo); 
    delay(delayo); 
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo); 
    delay(delayo); 
    delay(delayo); 
    play(NOTE_G4, tempo);
    delay(delayo); 
    play(NOTE_F4, tempo);
    delay(delayo); 
    play(NOTE_G4, tempo);
    delay(delayo); 
     play(NOTE_F4, tempo);
    delay(delayo); 
    delay(delayo); 
    delay(delayo); 
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo); 
//  
//  5|------------d-c-----------|
//  4|a-g-f-gaa-------a-g-f-gag-|
//  0
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo); 
    play(NOTE_F4, tempo);
    delay(delayo); 
    play(NOTE_G4, tempo);
     play(NOTE_A4, tempo);
     play(NOTE_A4, tempo);
    delay(delayo); 
    delay(delayo); 
    delay(delayo); 
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo); 
     play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo); 
    play(NOTE_F4, tempo);
    delay(delayo); 
    play(NOTE_G4, tempo);
     play(NOTE_A4, tempo);
     play(NOTE_G4, tempo);
    delay(delayo); 
//  
//  0
//  4|--f---fdf-g-f-----fdf-g-f-|
//  0
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
//  
//  5|--------ccc---------------|
//  4|g-e--------a-gag-fgf-fff-d|
//  0
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_E4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_G4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_D4, tempo);
//  
//  0
//  4|ff-dfg-a----f-----fdf-g-f-|
//  0
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
//  
//  5|--------------------ccc---|
//  4|----fdf-g-f-g-e--------a-g|
//  0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_E4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
//  
//  0
//  4|ag-fgf-fff-dff-dfg-a--f---|
//  0
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_G4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|--------c-d--cd--cd--c----|
//  0
//  0
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
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|------c-d-e-d-c-----------|
//  4|----------------a---g---f-|
//  0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
//  
//  5|----c-d--cd--cd--c--------|
//  0
//  0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
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
//  
//  5|--c-d-e-d-c---------d-e-d-|
//  4|------------a---f---------|
//  0
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
//  
//  5|c-------------------------|
//  4|--a---g---f---------f--f--|
//  0
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
//  
//  5|-------------------c------|
//  4|f--g--a---f--f--f-----a---|
//  0
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|------d-e-d-c-------------|
//  4|f--f----------a---g---f--e|
//  0
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E4, tempo);
//  
//  0
//  4|--c-a-g---a-g---g-f-g-f---|
//  0
    delay(delayo);
    delay(delayo);
    play(NOTE_C4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|d-c-------------d-c-------|
//  4|----a-g-f-gaa-------a-g-f-|
//  0
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
//  
//  0
//  4|gag---f---fdf-g-f-----fdf-|
//  0
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
//  
//  5|------------ccc-----------|
//  4|g-f-g-e--------a-gag-fgf-f|
//  0
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_E4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_G4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
//  
//  0
//  4|ff-dff-dfg-a----f-----fdf-|
//  0
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
//  
//  5|------------------------cc|
//  4|g-f-----fdf-g-f-g-e-------|
//  0
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_E4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
//  
//  5|c-------------------------|
//  4|-a-gag-fgf-fff-dff-dfg-a--|
//  0
    play(NOTE_C5, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_G4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_F4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
//  
//  5|------------c-d--cd--cd--c|
//  4|f-------------------------|
//  0
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
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
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
//  
//  5|----------c-d-e-d-c-------|
//  4|--------------------a---f-|
//  0
    delay(delayo);
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
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
//  
//  5|--d-e-d-c---------------c-|
//  4|----------a---g---f-------|
//  0
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
//  
//  5|d--cd--cd--c----------c-d-|
//  0
//  0
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
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
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
//  
//  5|e-d-c---------d-e-d-c-----|
//  4|------a---f-----------a---|
//  0
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  0
//  4|g---f---------f--f--f--g--|
//  0
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
//  
//  5|-------------c------------|
//  4|a---f--f--f-----a---f--f--|
//  0
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
//  
//  5|d-e-d-c-------------------|
//  4|--------a---g---f--e--c-a-|
//  0
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
//  
//  5|--------------------d-c---|
//  4|g---a-g---g-f-g-f-------a-|
//  0
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
//  
//  5|----------d-c-------------|
//  4|g-f-gaa-------a-g-f-gag---|
//  0
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|d-c-----------------d-e---|
//  4|----a-g-f-gag---f---------|
//  0
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|e--dc-------f-f-a-------g-|
//  0
//  0
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F5, tempo);
    delay(delayo);
    play(NOTE_F5, tempo);
    delay(delayo);
    play(NOTE_A5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G5, tempo);
    delay(delayo);
//  
//  5|------f---------d-e---f---|
//  0
//  0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|------f---------d-e---f---|
//  0
//  0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|f-a-------g-------f-------|
//  0
//  0
    play(NOTE_F5, tempo);
    delay(delayo);
    play(NOTE_A5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  0
//  4|--------a-g---a-g---g-f-g-|
//  0
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
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
//  
//  5|----d-c-------------d-c---|
//  4|f-------a-g-f-gaa-------a-|
//  0
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
//  
//  0
//  4|g-f-gag-------------a-g---|
//  0
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
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
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|----------------d-c-------|
//  4|a-g---g-f-g-f-------a-g-f-|
//  0
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
//  
//  5|------d-c-----------------|
//  4|gaa-------a-g-f-gag---f---|
//  0
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  5|----c-d--cd--cf--ed--ccd--|
//  0
//  0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_F5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
//  
//  5|--c-d-e-d-c---------d-e-d-|
//  4|------------a---f---------|
//  0
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
//  
//  5|c---------------c-d--cd--c|
//  4|--a---g---f---------------|
//  0
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
//  
//  5|f--cf--gg-f---c-d-e-d-c---|
//  4|------------------------a-|
//  0
    play(NOTE_F5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    play(NOTE_F5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G5, tempo);
    play(NOTE_G5, tempo);
    delay(delayo);
    play(NOTE_F5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
//  
//  5|------d-e-d-c-------------|
//  4|--f-----------a---g---f---|
//  0
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//  
//  0
//  4|------f--f--f--g--a---f--f|
//  0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
//  
//  5|-----c------------d-e-d-c-|
//  4|--f-----a---f--f----------|
//  0
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
//  
//  0
//  4|a---g---f--e--c-a-g---a-g-|
//  0
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
//  
//  5|------------d-c-----------|
//  4|--g-f-g-f-------a-g-f-gaa-|
//  0
    delay(delayo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_C5, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    delay(delayo);
    play(NOTE_F4, tempo);
    delay(delayo);
    play(NOTE_G4, tempo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
//  
//  
//  
//  


























//  
//  
//  
//  


























//  
//  
//  
//  


























//  
//  
//  
//  


























//  
//  
//  
//  


























//  
//  
//  
//  


























//  
//  
//  
//  




























    }
}
