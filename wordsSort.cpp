#include <iostream>  
#include <ctime>      
using namespace std;
//[4,2,5,9,7,3]
int main()
{
  srand(time(NULL));
  int numberOfElement = 8 ,maxOfRad=7,counter=0;
  string startLetters[numberOfElement]={"eagle","machine","week","long","app","salt","popcorb","game"},b[numberOfElement]={};
  
  for(int i = 0;i < numberOfElement;i++){
    while(startLetters[i].length()!=maxOfRad){
      startLetters[i]+=" ";
    }
  }
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