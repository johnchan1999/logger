#include <nlohmann/json.hpp>
#include <iostream>
#include <log4cpp/Category.hh>
#include "CoreSDK/singleton.h"


using namespace std;
using json = nlohmann::json;
int main(void) {
  cout<< MySingleton::getSingleInst() <<"\n";
  cout<< "this is logger project" <<endl;
  return 0;
}