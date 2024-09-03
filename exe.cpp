#include "cstdlib"
#include "iostream"
#include <cstdlib>
using namespace std;

auto show_help = [] (){
    cout << "Usage: myprogram [options]\n";
    cout << "Options:\n";
    cout << "  --help        Show this help message\n";
};

auto app = []() {
  cout << "Making App... " << endl;
  if(system("clang++ ./src/app/app.cpp -o ./app/app.exe")){
    cout << "It's had a Error..." << endl;
  }else{
    cout << "Succesful... " << endl;
  }
};

auto show_version = []() {
  cout << "Version 0.0.1" << endl;
};

int main (int argc, char *argv[]) {
    if (argc > 1) {
        string arg = argv[1];
        
        if (arg == "--help") {
          show_help();
          return 0;
        } else if (arg == "--version") {
          show_version();
          return 0;
        } else if (arg == "run") {
          app();
          return 0;
        }
        else {  
            cout << "Unknown option: " << arg << "\n";
            cout << "Use '--help' to see the available options.\n";
            return 1;
        }
    }else{
        cout << "No especify!! \n" << endl;
    }


  return 0;
}
