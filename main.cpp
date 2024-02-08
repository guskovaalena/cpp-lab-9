#include <iostream>

template <typename T, typename U>
U* arrConvert(T* arr, size_t n) {
   U* result = new U [n];
    for (size_t i = 0; i < n; i++){
        result[i] = (U)arr[i];
    }
    return result;
}

template <typename T>
void arrPrint(T* arr, size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout<<arr[i]<<' ';
    }
    std::cout<<std::endl;
}

int main() {

    std::cout<<"Пример работы шаблонной функции для конветации элементов массива"<<std::endl<<std::endl;

    int arrInt[5] = {0, 1, 2, 3, 4};
    double arrDouble[5] = {5.5, 6.6, 7.7, 8.8, 9.9};
    char arrChar[5] = {'a', 'b', 'c', 'd', 'e'};

    std::cout<<"Конвертация double в int"<<std::endl;
    std::cout<<"Исходный массив:"<<std::endl;
    arrPrint(arrDouble, 5);
    std::cout<<"Массив после конвертации элементов:"<<std::endl;
    arrPrint(arrConvert<double, int>(arrDouble, 5), 5);
    std::cout<<std::endl;


    std::cout<<"Конвертация char в int"<<std::endl;
    std::cout<<"Исходный массив:"<<std::endl;
    arrPrint(arrChar, 5);
    std::cout<<"Массив после конвертации элементов:"<<std::endl;
    arrPrint(arrConvert<char, int>(arrChar, 5), 5);
    std::cout<<std::endl;

    std::cout<<"Конвертация int в bool"<<std::endl;
    std::cout<<"Исходный массив:"<<std::endl;
    arrPrint(arrInt, 5);
    std::cout<<"Массив после конвертации элементов:"<<std::endl;
    arrPrint(arrConvert<int, bool>(arrInt, 5), 5);
    std::cout<<std::endl;

    return 0;
}