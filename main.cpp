#include <iostream>
#include "box.h"
#include "dice.h"
using namespace std;

int main() {
  Dice d1;
  Box b1;
  int in1, in2, in3;

  while(b1.score()>= 6)
  {
  cout<< "Box: "<< b1.str()<< endl;
  cout<< "Dice: "<<d1.str()<<endl;
  cout<< "Tiles: ";
  cin>> in1 >>in2>>in3;
  if (in1+in2+in3 == d1.total() && in1<=9&& in2<=9&& in3<=9 &&b1.close(in1,in2,in3)){
    //b1.close(in1, in2, in3);
    d1.roll();
    }
  else if (in1+in2+in3 !=0)
  cout<< "Tile selection is not valid. Try again."<< endl;
  else if (in1+in2+in3 ==0)
      goto end;
 }
 
  d1= Dice(1);
  
  while(b1.score() < 6){
  cout<< "Box: "<< b1.str()<< endl;
  cout<< "Dice:"<< " "<<d1.str()<<endl;
  cout<< "Tiles: ";
  cin>> in1 >>in2>>in3;
  if (in1+in2+in3 == d1.total() && in1<=9&& in2<=9&& in3<=9 && b1.close(in1,in2,in3))
  {
  b1.close(in1, in2, in3);
  d1.roll();}
  else if (in1+in2+in3 !=0)
  cout<< "Tile selction is not valid. Try again."<< endl;
  else if (in1+in2+in3 ==0)
      goto end;
  }
  
  end:
  cout<< "Score: " << b1.score();
  
}