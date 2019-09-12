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
  
//  4|------dcd-------------DdD-|
//  3|g-----------g---D---------|
//
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_C4, tempo);
    play(NOTE_D4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    play(NOTE_C4, tempo);
    play(NOTE_DS4, tempo);
    delay(delayo);
//
//  4|d-c---------DdD-----------|
//  3|------D-----------g---f---|
//
    play(NOTE_D4, tempo);
    delay(delayo);
    play(NOTE_C4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);    play(NOTE_F3, tempo);
    play(NOTE_C4, tempo);
    play(NOTE_DS4, tempo);
    delay(delayo);
//
//4|--c-c-----c-------dcd-----|
//3|---A--A-a---g-----------g-|
//
    delay(delayo);
    delay(delayo);
    play(NOTE_C4, tempo);
    delay(delayo);
    play(NOTE_C4, tempo);    play(NOTE_AS3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    play(NOTE_A3, tempo);
    play(NOTE_C4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_C4, tempo);
    play(NOTE_D4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
//
//4|--c-c-----c-------dcd-----|
//3|---A--A-a---g-----------g-|
//
    delay(delayo);
    delay(delayo);
    play(NOTE_C4, tempo);
    delay(delayo);
    play(NOTE_C4, tempo);    play(NOTE_AS3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    play(NOTE_A3, tempo);
    play(NOTE_C4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_C4, tempo);
    play(NOTE_D4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
//
//4|--------DdD-d-c---------Dd|
//3|--D---------------D-------|
//
    delay(delayo);
    delay(delayo);
    play(NOTE_DS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_D4, tempo);
    delay(delayo);
    play(NOTE_C4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    play(NOTE_D4, tempo);
//
//4|D-------------c-c-----c---|
//3|----g---f------A--A-a---A-|
//
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C4, tempo);    play(NOTE_AS3, tempo);
    delay(delayo);
    play(NOTE_C4, tempo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_C4, tempo);
    play(NOTE_AS3, tempo);
    delay(delayo);
//
//4|------c------cd-c---------|
//3|----aA------A-----A-a-g---|
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    play(NOTE_AS3, tempo);
    play(NOTE_C4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    play(NOTE_C4, tempo);
    play(NOTE_D4, tempo);
    delay(delayo);
    play(NOTE_C4, tempo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//4|D---d-----------dDdcd-----|
//
//
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D4, tempo);
    play(NOTE_DS4, tempo);
    play(NOTE_D4, tempo);
    play(NOTE_C4, tempo);
    play(NOTE_D4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//3|----------g-----------f---|
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
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//3|d---A---a---f---d---------|
//
//
    play(NOTE_D3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D3, tempo);
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
//3|------------g-g--a-A--a---|
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
    play(NOTE_G3, tempo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//3|d---A---a---f---d---------|
//
//
    play(NOTE_D3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D3, tempo);
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
//3|g-----------------g-g--a-A|
//
//
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    play(NOTE_AS3, tempo);
//
//3|--g---------------------g-|
//
//
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
//
//3|g--a-A--a--g-f--d---------|
//
//
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    play(NOTE_F3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D3, tempo);
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
//3|----aAa--g-f--f-----------|
//
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    play(NOTE_AS3, tempo);
    play(NOTE_A3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    play(NOTE_F3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_F3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
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
//3|fDd-------g-g--a-A--a--g-f|
//
//
    play(NOTE_F3, tempo);
    play(NOTE_DS3, tempo);
    play(NOTE_D3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    play(NOTE_G3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    play(NOTE_A3, tempo);


  }
}
