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
//  5|--------D-----D-D-D-D---C-|
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
    play(NOTE_DS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
//
//  5|----------D-C---C---------|
//  4|--b---G-G-----------G-G-F-|
//
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_FS4, tempo);
    delay(delayo);
//
//5|----C-------C-D-----------|
//4|----------------b---A---A-|
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS4, tempo);
    delay(delayo);
//
//5|------D---C-----------D-C-|
//4|G-G-G---------b---G-G-----|
//
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
//
//5|--C-------------C-------C-|
//4|------G-G-F---------------|
//
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_FS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
//
//5|D-------------------------|
//4|--b---A---A-A-A-A-C-D-D-C-|
//3|------------G-G-G---------|
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS4, tempo);
    delay(delayo);
    play(NOTE_AS4, tempo);    play(NOTE_GS3, tempo);
    delay(delayo);
    play(NOTE_AS4, tempo);    play(NOTE_GS3, tempo);
    delay(delayo);
    play(NOTE_AS4, tempo);    play(NOTE_GS3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
//
//
//4|D---------C-C---C---------|
//3|--------b-----b---------b-|
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
//
//
//4|C-C---C---C---C---C-D-C---|
//3|----b-------b---b-------b-|
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
//
//
//4|----C-D-D-C-D---------C-C-|
//3|G-------------------b-----|
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
//
//
//4|--C---------C-C---C-------|
//3|b---------b-----b---b-G-G-|
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
//
//
//4|C---C-D-C-------D-D-C-C-D-|
//3|--b-------b-G-------------|
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
//
//
//4|--G---D---D---------------|
//3|------------------b-----G-|
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
//
//
//4|------------C-------------|
//3|G---G---G-------b---A---G-|
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
//
//
//4|--D-D-C-C-D---G---D---C---|
//
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//4|------------------------C-|
//3|----b-----G-G---G---G-----|
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
//
//
//4|--------------C-D-D-C-D---|
//3|--b---A---G---------------|
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//4|------C-C---C---------C-C-|
//3|G---b-----b-----F---b-----|
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
//
//
//4|--C-------C---C-D-C-------|
//3|b-----F-----b-------b-G---|
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_FS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//4|C-D-D-C-D---------C-C---C-|
//3|------------G---b-----b---|
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
//
//
//4|--------C-C---C-------C---|
//3|--F---b-----b---b-F-----b-|
    delay(delayo);
    delay(delayo);
    play(NOTE_FS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_FS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
//
//
//4|C-D-C-------D-D-C-C-D---G-|
//3|------b-G-----------------|
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
//
//
//4|--D---D-------------------|
//3|--------------b-----G-G---|
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//4|--------C---------------D-|
//3|G---G-------b---A---G-----|
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
//
//
//4|D-C-C-D---G---D---C-------|
//
    play(NOTE_DS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|------------------------D-|
//
//3|b-----G-G---G---G---------|
    play(NOTE_B3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS3, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
//
//5|----D-D-D-D---C-----------|
//4|------------------b---G-G-|
//
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
//
//5|D-C---C-------------C-----|
//4|----------G-G-F-----------|
//
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_FS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|--C-D-----------------D---|
//4|------b---A---A-G-G-G-----|
//
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_AS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//5|C-----------D-C---C-------|
//4|----b---G-G-----------G-G-|
//
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
//
//5|------C-------C-D---------|
//4|F-----------------b---G---|
//
    play(NOTE_FS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_CS5, tempo);
    delay(delayo);
    play(NOTE_DS5, tempo);
    delay(delayo);
    play(NOTE_B4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
//
//
//4|G-G-G-G-------------------|
//
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    play(NOTE_GS4, tempo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
    delay(delayo);
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
