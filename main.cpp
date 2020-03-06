#include "ClassicMode.h"
#include <iostream>

using standard std;

int main(int argc, char **argv){

int length = 10;
int width = 10;

int array[width][length];

for (int i = 0; i < width; ++i){
  for (int j = 0; j < length; j++){

    array[i][j] = 0;
  }
}

ClassicMode classic = new ClassicMode();

cout << classic -> numNeighbors(array, length, width, 0);




return 0;
}
