

# Arduino-Pattern-8servos ![arduinoThumb](https://github.com/ICAREMAKER/Arduino---Fonts/assets/107696317/1e80c0a0-27bd-4b96-a6e1-88ef7eca9098) ![C++-Logo wine](https://github.com/ICAREMAKER/Arduino---Fonts/assets/107696317/882aa901-1f05-43d5-9574-60db4e7b6537)

## INITIALE()

```C
 void INITIALE()
 {
int Pos1[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos2[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int Pos3[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos4[8] = {180, 180, 180, 180, 180, 180, 180, 180};
int Pos5[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos6[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int Pos7[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos8[8] = {180, 180, 180, 180, 180, 180, 180, 180};

for (int s = 0; s < 8; s++) {
  servo1.write(Pos1[s]);
  servo2.write(Pos2[s]);
  servo3.write(Pos3[s]);
  servo4.write(Pos4[s]);
  servo5.write(Pos5[s]);
  servo6.write(Pos6[s]);
  servo7.write(Pos7[s]);
  servo8.write(Pos8[s]);
  delay(200);
    Serial.println(s);
  }
 }
```
## DANCE1()

 ```C
 void DANCE1()
 {
int Pos1[8] = {90, 90, 45, 135, 135, 45, 45, 90};
int Pos2[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int Pos3[8] = {90, 45, 45, 135, 135, 45, 45, 90};
int Pos4[8] = {180, 180, 180, 180, 180, 180, 180, 180};
int Pos5[8] = {90, 45, 45, 135, 135, 45, 45, 90};
int Pos6[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int Pos7[8] = {90, 45, 45, 135, 135, 45, 45, 90};
int Pos8[8] = {180, 180, 180, 180, 180, 180, 180, 180};

for (int s = 0; s < 8; s++) {
  servo1.write(Pos1[s]);
  servo2.write(Pos2[s]);
  servo3.write(Pos3[s]);
  servo4.write(Pos4[s]);
  servo5.write(Pos5[s]);
  servo6.write(Pos6[s]);
  servo7.write(Pos7[s]);
  servo8.write(Pos8[s]);
  delay(200);
    Serial.println(s);
  }
 }
```
## COUCOU()

```C
void COUCOU()
 {
int Pos1[8] = {90, 90, 135, 90, 135, 90, 135, 90};
int Pos2[8] = {0, 180, 180, 180, 180, 180, 180, 0};
int Pos3[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos4[8] = {180, 180, 180, 180, 180, 180, 180, 180};
int Pos5[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos6[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int Pos7[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos8[8] = {180, 180, 180, 180, 180, 180, 180, 180};

for (int s = 0; s < 8; s++) { //J'envoie colonne par colonne la position des servos
  servo1.write(Pos1[s]);
	servo2.write(Pos2[s]);
	servo3.write(Pos3[s]);
	servo4.write(Pos4[s]);
	servo5.write(Pos5[s]);
	servo6.write(Pos6[s]);
	servo7.write(Pos7[s]);
	servo8.write(Pos8[s]);
	delay(200);
    Serial.println(s);
  }
 }
```
## AVANCE()

```C
void AVANCE()
 {
int Pos1[10] = {45, 45, 135, 135, 90,         90, 90, 90, 90, 45};
int Pos2[10] = {0, 0, 90, 0, 0,               0, 0, 0, 0, 0};
int Pos3[10] = {135, 135, 90, 90, 90,         90, 90, 90, 90, 45,};
int Pos4[10] = {90, 180, 180, 180, 180,       180, 180, 180, 180, 180};
int Pos5[10] = {90, 90, 90, 90, 135,          45, 45, 45, 45, 90};
int Pos6[10] = {0, 0, 0, 0, 0,                90, 0, 0, 0, 0};
int Pos7[10] = {90, 90, 90, 90, 135,          135, 135, 45, 45, 90};
int Pos8[10] = {180, 180, 180, 180, 180,      180, 180, 90, 180, 180};

for (int s = 0; s < 10; s++) {
  servo1.write(Pos1[s]);
  servo2.write(Pos2[s]);
  servo3.write(Pos3[s]);
  servo4.write(Pos4[s]);
  servo5.write(Pos5[s]);
  servo6.write(Pos6[s]);
  servo7.write(Pos7[s]);
  servo8.write(Pos8[s]);
  delay(200);
    Serial.println(s);
  }
 }
```

