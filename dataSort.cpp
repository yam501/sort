#include <iostream>  
#include <ctime>      
using namespace std;

int main()
{
  srand(time(NULL));
  int numberOfElement = 5 ,maxOfRad=8,counter=0;
  string startLetters[numberOfElement]={"23.01.19","12.02.19","15.04.18","16.02.18","04.01.17"},b[numberOfElement]={};
  for (int i=0;i<numberOfElement;i++){cout<<startLetters[i] << " ";}
  cout<<endl;
  cout<<"================================================================================"<<endl;

  for(int h = 0;h<maxOfRad;h++){

    for(int i = 0;i < numberOfElement;i++){
      counter = 0;
      for(int j = 0; j < numberOfElement; j++){
        if ((startLetters[j][h]<startLetters[i][h]) or ((startLetters[j][h] == startLetters[i][h]) and (j<i))) counter+=1;
      }
      b[counter]=startLetters[i];
    
    }
    for (int i=0;i<numberOfElement;i++){cout<<b[i] << " ";} 
    cout<<endl;
    for (int i=0;i<numberOfElement;i++){startLetters[i]=b[i];}
    b->clear();

  }
  cout<<"================================================================================"<<endl;
  for (int i=0;i<numberOfElement;i++){cout<<startLetters[i] << " ";}
}