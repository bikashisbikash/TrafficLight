// implementation file
#include <iostream>
#include <cstdlib>
#include "TrafficLight.h"

using namespace std;

TrafficLight::TrafficLight(){
  color = 0;
}

// methods
void TrafficLight::change(){
  if(color == 0)
    color = 1;
  else if(color == 1)
    color = 2;
  else
    color = 0;
}

void TrafficLight::printColor(){
  if(color == 0)
    cout << "Red" << endl;
  else if(color == 1)
    cout << "Green" << endl;
  else
    cout << "Yellow" << endl;
}

void TrafficLight::makeRed(){
  color = 0;
}
