#include <iostream>
#include <random>
#include <ctime>





using namespace std;

void inclusionSort(int *num, int size)
{
  // Для всех элементов кроме начального
  for (int i = 1; i < size; i++)
  {
    int value = num[i]; // запоминаем значение текущего элемента
    int index = i;     // запоминаем индекс в массиве 
    while ((index > 0) && (num[index - 1] > value))
    {   //для текущего элемента в цикле просматриваем все предшествующие элементы пока не будет элемент меньше текущего или не дойдем до границы
      num[index] = num[index - 1]; // все элементы которые больше текущего сдвигаются вправо 
      index--;    // смещаем просмотр к началу массива
    }
    num[index] = value; // рассматриваемый элемент помещаем на освободившееся место
  }
}
int main() {

  int mas = 10;
  int* m_mas = new int [mas];

  srand(time(NULL));

  for (int i = 0; i < mas; i++)
        {
            m_mas[i] = rand() % 100 + 1;
        }

        cout << endl;

        cout << "Array:" << endl;

        for (int i = 0; i < mas; i++)
        {
            cout << "| " << m_mas[i] << " |";
        }

  
    inclusionSort(m_mas, mas);
    cout << "\nSorted array: ";
    cout << "\n";
    for (int i = 0; i < mas; i++)
        {
            cout <<"| " << m_mas[i] << " |";
        }
        
        cout << endl;
    return 0;
}