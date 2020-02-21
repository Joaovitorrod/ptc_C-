#include <iostream>
#include "Serial.h"

using namespace std;

int main() {
  Serial rf("/dev/pts/5", B9600);
  string msg = "um teste ...\r\n";
  char buffer[32];

  int n = rf.write(msg.c_str(), msg.size());

  cout << "Enviou " << n << " bytes" << endl;

  n = rf.read(buffer, 32);

  cout << "Recebeu " << n << " bytes: ";

  cout.write(buffer, n);

  cout << endl;
}
