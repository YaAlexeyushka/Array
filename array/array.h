#include <iostream>

#ifndef ARRAY_H
#define ARRAY_H

using namespace std;

const int DEFAULT_CAPACITY = 10;

class ArrayException {};

class Array {
public:
  // Указатель на массив в динамич. памяти
  int *ptr;
  // Текущий размер
  int size;
  // Вместимость
  int capacity;

  ~Array();

  Array &operator=(const Array &arr);

  void increaseCapacity(int newCapacity);

  Array(int startCapacity = DEFAULT_CAPACITY);

  Array(const Array &arr);

  int &operator[](int index);

  void insert(int index, int elem);
  // Вставка элемента в конец массива
  void insert(int elem);

  void remove(int index);

  int getSize() const;

  friend ostream &operator<<(ostream &out, const Array &arr);
};

#endif