/*Sumatoria de inversos de los números pares que se encuentran en el
  rango de [10,1000]*/
#include<iostream>

int main()
{
  int n = 0;
  double SumaTotal = 0;

  for(n = 10;n<=1000; n++){
    if (n%2==0){
      SumaTotal += 1.0/(n);
    }
  }

  std::cout<<"Al efectuar la sumatoria con el rango [10,1000]\nEl resultado es:"<<SumaTotal<<"\n";
  
  return 0;
}
 
