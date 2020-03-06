
#include "ClassicMode.h"

ClassicMode:: ClassicMode(){

}
//overloaded constructor here
ClassicMode:: ~ClassicMode(){

}

int ClassicMode:: numNeighbors(int array, int length, int width, int density){
  for (int i = 0; i < width; ++i){
    for (int j = 0; j < length; ++j){
      int r = i;
      int c = j;

    //  int numNeighbors = array[r-1][c-1] + array[r-1][c] + array[r-1][c+1] + array[r][c+1] +array[r+1][c-1] + array[r+1][c]
      //+ array[r+1][c-1]+ array[r][c-1];
    }
  }
  return numNeighbors;
}

void ClassicMode:: cellGenerator(int array, int newGenArray, int numNeighbors){

  for (int i = 0; i < width; ++i){
    for (int j = 0; j < length; ++j){


       if (numNeighbors == 3){
        if(array[i][j] == 1)
          newGenArray[i][j] = 1; // continue to lives on

        else if(array[i][j] == 0)
            newGenArray[i][j] = 1; // a new cell is born if its empty
      }
      else if (numNeighbors >= 4 || numNeighbors <=1) //overcrowded :(
        newGenArray[i][j] = 0;

      else if(numNeighbors == 2){ //  a location with 2 neighbors remains stable in the next gen.

        if(array[i][j] == 1) // if full it remains full
          newGenArray[i][j] = 1;

        else if (array[i][j] == 0) // if empty remains empty
          newGenArray = 0;

        //calculate stable count
      }
    }
  }
}
