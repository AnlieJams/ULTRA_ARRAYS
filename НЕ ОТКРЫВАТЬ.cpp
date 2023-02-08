#include <iostream>
using namespace std;


void firstTask(int* arrayFirst, int* arraySecond, int sizeFirst, int sizeSecond);  // ФУНКЦИЯ ПЕРВОГО ЗАДАНИЯ

void secondTask(int* array, int size, int number);  // ФУНКЦИЯ ВТОРОГО ЗАДАНИЯ

void thirdTask(int* array, int size, int index);  // ФУНКЦИЯ ТРЕТЬЕГО ЗАДАНИЯ

int main()
{
    // ЗАДАНИЕ 1
    int sizeFirst, sizeSecond;
    cout << "Введите размер первого массива: ";
    cin >> sizeFirst;
    cout << "Введите размер второго массива: ";
    cin >> sizeSecond;

    int* firstArray = new int[sizeFirst];
    cout << "Первый массив: ";
    for (int i = 0; i < sizeFirst; i++)
    {
        firstArray[i] = rand() % 100;
        cout << firstArray[i] << "  ";
    }
    cout << "\n";

    int* secondArray = new int[sizeSecond];
    cout << "Второй массив: ";
    for (int i = 0; i < sizeSecond; i++)
    {
        secondArray[i] = rand() % 100;
        cout << secondArray[i] << "  ";
    }
    cout << "\n";
    firstTask(firstArray, secondArray, sizeFirst, sizeSecond);

    // ЗАДАНИЕ 2
    int size;
    cout << "Введите размер массива ";
    cin >> size;
    int* array = new int[size];
    cout << "Первый массив: ";
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << "  ";
    }
    cout << "\n";
    int number = rand() % 100;
    secondTask(array, size, number);

    //ЗАДАНИЕ 3
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int *array = new int[size];
    cout << "Первый массив: ";
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << "  ";
    }
    cout << "\n";
    thirdTask(array, size, 5);
}

void firstTask(int* arrayFirst, int* arraySecond, int sizeFirst, int sizeSecond)
{
    int* combinedArray = new int[sizeFirst + sizeSecond];
    for (int i = 0; i < sizeFirst; i++)
    {
        *combinedArray++ = arrayFirst[i];
    }
    for (int i = 0; i < sizeSecond; i++)
    {
        *combinedArray++ = arraySecond[i];
    }
    combinedArray -= sizeFirst + sizeSecond;
    int combinedSize = sizeFirst + sizeSecond;
    cout << "Смешанный массив: ";
    for (int i = 0; i < combinedSize; i++)
    {
        cout << *combinedArray++ << "  ";
    }
    cout << " ";
}

void secondTask(int* array, int size, int number)
{
    int* finalArray = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        *finalArray++ = array[i];
    }
    *finalArray++ = number;
    finalArray -= size + 1;
    cout << "Последний массив: ";
    for (int i = 0; i < size + 1; i++)
    {
        cout << *finalArray++ << "  ";
    }
    cout << "\n";
}

void thirdTask(int* array, int size, int index)
{
    for (int i = index - 1; i < size; i++)
    {
        array[i] = array[i + 1];
    }
    size--;
    cout << "Последний массив: ";
    for (int i = 0; i < size; i++)
    {
        cout << *array++ << "\t";
    }
    cout << "\n";
}