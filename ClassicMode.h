#include <iostream>

class ClassicMode{
  public:
    ClassicMode();
    //ClassicMode(); //string boardMode
    ~ClassicMode();

    int numNeighbors(int array, int length, int width, int density);
    void cellGenerator(int array, int newGenArray, int numNeighbors);

    int numNeighbors;
    int stableCounts;
    int length;
    int width;
    int array;
    int newGenArray;



};
