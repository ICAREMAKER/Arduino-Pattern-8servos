/* 
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /        __________   _________   ___________   __________    _________                             /
   /       /___   ___/  /   _____/  /  _____   /  /  _____   \  /  ______/       \\            //      /
   /          /  /     /  /        /  /    /  /  /  /    /  /  /  /_____        \\             //      /
   /         /  /     /  /        /  /____/  /  /  /___/  /   /  ______/   \\\   \\    []    //   ///  /
   /     ___/  /__   /  /_____   /   ____   /  /   ___   \   /  /_____        \\\\--]]]/\[[[--////     /
   /    /________/  /________/  /__/    /__/  /__/    \__/  /________/         /////--][][--\\\\\      /
   /                                                                         //   //--][][--\\   \\    /
   /   ______________________________________________________________           //    ][][    \\       /
   /                                                                                                   /
   /                                                                                                   /
   /  This program is free software for arduino; you can redistribute it and/or modify.                /
   /  Ce programme pour Arduino est libre et gratuit ; vous pouvez le distribuez et/ou le modifier.    /
   /                                                                                                   /
   / Another codes / Autres codes:                                                                     /
   / https://www.icaremaker.com                                                                        /
   / Mail: ionocraft@hotmail.fr                                                                        /
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
*/

#include <Servo.h>

Servo servo1;				// Je nomme mes servomoteurs
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;

// Je positionne mes 8 servomoteurs par défaut à 90° sur l'ensemble de mes 8 clefs de mouvements
int Pos1[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos2[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos3[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos4[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos5[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos6[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos7[8] = {90, 90, 90, 90, 90, 90, 90, 90};
int Pos8[8] = {90, 90, 90, 90, 90, 90, 90, 90};

void setup() { // Au demarrage...

  servo1.attach(2);     	    // Je connecte mes servomoteurs aux broches n°... de l'Arduino
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
  servo7.attach(8);
  servo8.attach(9);

  Serial.begin(9600);

  for (int s = 0; s < 8; s++) { // Je lis ma séquence d'animation par defaut (c'est à dire, tout à 90°)
    servo1.write(Pos1[s]);
	servo2.write(Pos2[s]);
	servo3.write(Pos3[s]);
	servo4.write(Pos4[s]);
	servo5.write(Pos5[s]);
	servo6.write(Pos6[s]);
	servo7.write(Pos7[s]);
	servo8.write(Pos8[s]);
	delay(500);
    Serial.print(s);
	Serial.println();
  }
}

void loop() { // Dans ma boucle de lecture...
  // je lance une serie d'animation
INITIALE();
COUCOU();
INITIALE();
DANCE1();
INITIALE();
AVANCE();
}
/////////////////////////////////////////////////////////////////////////////////
////////CREATION DES CYCLES D'ANIMATION//////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////
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
 //////////////////////////////////////////////////////
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
  //////////////////////////////////////////////////////
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
