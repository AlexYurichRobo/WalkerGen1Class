// #include <Arduino.h>
#include "WalkerLegs.h"

// //переменные для чтения информации из монитора порта/
// //String strData = "";
// bool recievedFlag;
// int intVar;

WalkerLegs hutOnChickenLegs(87, 89, 86, 82);

void setup()
{
  // включаем монитор порта
  Serial.begin(9600);

  //инициализируем сервоприводы
  hutOnChickenLegs.begin();
  hutOnChickenLegs.setDelays(10, 1500);
}

void loop()
{
  hutOnChickenLegs.forwardSlow();
  hutOnChickenLegs.stopSlow();
  hutOnChickenLegs.backwardSlow();
  hutOnChickenLegs.stopSlow();
}