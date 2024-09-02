#include "cstdlib"
#include "iostream"
#include <cstdlib>
using namespace std;

auto app = []() {
  cout << "Making App... " << endl;
  if(system("clang++ ./src/app/app.cpp -o ./app/app.exe")){
    cout << "It's had a Error..." << endl;
  }else{
    cout << "Succesful... " << endl;
  }
};

int main (int argc, char *argv[]) {
  app();
  return 0;
}
