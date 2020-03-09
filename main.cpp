#include "ClassicMode.h"
#include "Board.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv){


//assign the dimensions of the world based on input from input file;
//pass in parameter in boardGenerator() from board cpp

//call class of user inputs
 if (/*if user input is random board*/){
   Board *b = new Board();

   int board = b->boardGenerator(/*pass in height, width and density from user input*/);

   if (/*user input is classic mode*/){
     //call classic mode
     //have a for loop with a bool until the board reaches stability
     ClassicMode *classic = new ClassicMode(/* pass in board*/);
     int neighbors = classic-> numNeighbors();
     int *newGenArray = classic -> cellGenerator(neighbors);   
   }
 }
 //else if statement for donut
 //else if for mirror mode






return 0;
}
