#include "CoreSDK/Widget.h"
#include "CoreSDK/singleton.h"
#include <iostream>
#include <log4cpp/Category.hh>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;
int main(void) {
  Widget *pw = new Widget(5);
  pw->draw();
  //Widget(6).draw();
  cout << MySingleton::getSingleInst() << "\n";
  cout << "this is logger project" << endl;
  return 0;
}