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

//  
//  5|---------d-----d----------|
//  4|a--b----------------------|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
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
//  5|----------------------d--a|
//  0
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
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A5, tempo);
//
//5|-----b-----F-----e-d------|
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|-d-----d------------------|
//0
//0
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
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
//5|--------------d--a-----b--|
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
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B5, tempo);
    delay(delayo);
    delay(delayo);
//
//5|---F-----e-d--------------|
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
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
//5|-F----e---g--------F-----d|
//0
//0
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
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
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
//
//5|-dd--F--d--------d-----d-d|
//4|-----------b--b-b---------|
//0
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
//
//5|d--F--d--------d-----d-dd-|
//4|---------b--b-b-----------|
//0
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
//
//5|-F--d--------d-----d--d--F|
//4|-------b-bb-b-------------|
//0
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
//
//5|--d--------d-----d-dd--F--|
//4|-----b-bb-b---------------|
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
//
//5|d--------d-----d-dd--g--F-|
//4|---b-bb-b-----------------|
//0
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
//
//5|-d-dd--e-----d-dd--g--F--d|
//0
//0
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_G5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
//
//5|-dd-de-----d--d--F--d-----|
//4|-----------------------b-b|
//0
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
//
//5|---d-----d-dd-dg--F--d-dd-|
//4|b-b-----------------------|
//0
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_G5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
//
//5|-e-----d-dd-dg--F-Fd-dd---|
//4|-------------------------b|
//0
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_G5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
//
//5|-----d-dd-dg--F--d-dd--d-e|
//4|-a------------------------|
//0
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_G5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
//
//5|---b-----a-bF----ed-----d-|
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A5, tempo);
    delay(delayo);
    play(NOTE_B5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
//
//5|-b-bb--a-aF----ed----dd-db|
//0
//0
    delay(delayo);
    play(NOTE_B5, tempo);
    delay(delayo);
    play(NOTE_B5, tempo);
    play(NOTE_B5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A5, tempo);
    delay(delayo);
    play(NOTE_A5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_B5, tempo);
//
//5|--b--a-aF----ed-----d-db--|
//0
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_B5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A5, tempo);
    delay(delayo);
    play(NOTE_A5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_B5, tempo);
    delay(delayo);
    delay(delayo);
//
//5|---a-aF----ed----ed-------|
//0
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A5, tempo);
    delay(delayo);
    play(NOTE_A5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|-------e--e--e--e---------|
//4|----a-b-------------------|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
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
//
//5|-----e--F-----e-----------|
//4|-aa-b---------------------|
//0
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
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
//
//5|---e--e-----e-------------|
//4|a-b--------------------bb-|
//0
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
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
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
//
//5|-e-ee--e--d--------------e|
//4|b--------------------aa-b-|
//0
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
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
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
//
//5|--e--e--e--------------e--|
//4|-------------------aa-b---|
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
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
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
//
//5|F-----e--------------e--e-|
//4|------------------a-b-----|
//0
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
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
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
//
//5|----d--------------e--F---|
//4|----------------a-b-------|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
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
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|--d-----d-ed----d---------|
//4|--------------b-----b--a--|
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
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
//5|------e--d----d-----------|
//4|F----F------b-----b--a--F-|
//0
    play(NOTE_FS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS4, tempo);
    delay(delayo);
//
//5|----e--d----d-------------|
//4|----------b-----b--a--F---|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|--e--d----d---------------|
//4|--------b-----b--a-----a--|
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
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
//
//0
//4|---a-aa-aa--a--a-b---a-aa-|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
//
//5|----------d--d-----e-ee-ee|
//4|aa-aa-ab------------------|
//0
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_E5, tempo);
//
//5|----------d--d-----e-ee-ee|
//4|aa-aa-ab------------------|
//0
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_E5, tempo);
//
//5|e-Fe--d-----d----dF-FF-FF-|
//4|---------b----------------|
//0
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
//
//5|gF-ed-----------F-FF-FF-gF|
//0
//0
    play(NOTE_G5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_G5, tempo);
    play(NOTE_FS5, tempo);
//
//5|-ed----------dF-FF-FF-gF-e|
//0
//0
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
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
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_G5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
//
//5|d-----------F-FF-FF-gF-ed-|
//0
//0
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_G5, tempo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_D5, tempo);
    delay(delayo);
//
//5|----e-----d--------e--e--e|
//4|---------------aa-b-------|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
//
//5|--e--------------e--F-----|
//4|-------------aa-b---------|
//0
    delay(delayo);
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
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|e--------------e--e-----e-|
//4|------------a-b-----------|
//0
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
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
//
//5|-------------e-ee--e--d---|
//4|---------bb-b-------------|
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
    play(NOTE_B4, tempo);
    play(NOTE_B4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    play(NOTE_E5, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|-----------e--e--e--e-----|
//4|-------aa-b---------------|
//0
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
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|---------e--F-----e-------|
//4|-----aa-b-----------------|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|-------e--e-----d---------|
//4|----a-b-------------------|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
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
//5|-----e--F-----d-----------|
//4|--a-b------------F--------|
//0
    delay(delayo);
    delay(delayo);
    play(NOTE_A4, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D5, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|---------------e--------F-|
//4|e-----d-----d-e-----------|
//3|---------a-b--------------|
    play(NOTE_E4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_D4, tempo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A3, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    play(NOTE_D4, tempo);
    delay(delayo);
    play(NOTE_E4, tempo);
    play(NOTE_E5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS5, tempo);
    delay(delayo);
//
//5|-------a------------------|
//4|-------------e------------|
//0
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_A5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_E4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
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
//5|-----------F--------g-----|
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
    play(NOTE_FS5, tempo);
    delay(delayo);
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



  }
}
