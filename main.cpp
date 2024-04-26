#include <iostream>
#include <fstream>
#include "array/array.h"

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  int N, k;
  cout<<"Введите количество элементов контейнера: ";
  cin>>N;

  cout<<"Введите шаг выбывания: ";
  cin>>k;

  //заполняем контейнер
  Array arr(4);
  for (int i=0; i<N; i++)
  arr.insert(i+1);

  for (int i=k; arr.size != 1; i+=k) {

    //проверяем, что индекс не выходит за пределы
    if (i <= arr.size) {
      i--;
      arr.remove(i);
    }

    //если индекс выходит за пределы, то отнимаем от него размер контейнера
    else {
      i -= arr.size;
      i--;
      arr.remove(i);
    }
    
  }

    cout<<arr<<endl;
  
  return 0;
}