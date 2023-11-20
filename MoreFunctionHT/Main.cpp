#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>

int divider(int num1, int num2)
{
    while (num2!=0)
    {
        num1 %= num2;
        std::swap(num1, num2);
    }
    return num1;
}

int mirror_number(int n)
{
    int result = 0;
    while (n!=0) {
        result = result * 10 + n % 10;
        n = n / 10;
    }
    return result;
}

void print_arr(int arr[], int const length) {
    for (int i = 0; i < length; i++) 
        std::cout << arr[i] << ", ";
    std::cout << std::endl;
}
 
int arr_sort_n(int arr[], int const length, int num1) {
    int position = 0;
    for (int i = 0; i < length; i++) 
        if (arr[i] == num1)
            position = i;
     
    

for (int i = length-1; i > position+1; i--) 
    for (int j = position+1; j < i; j++) 
        if (arr[j] > arr[j + 1])
            std::swap(arr[j], arr[j + 1]);
std::cout << "Число с которого сортируем массив-> \n";
    return num1;
}

void random_arr(int arr[], int const length, int num1, int num2) {
    srand(time(NULL));
        for (int i = 0; i < length; i++) {
            arr[i] = rand() % (num2 - num1) + num1;
        }

}
    
    

    
    


int main() {
    setlocale(LC_ALL, "ru");

    //Задача 1. Наибольший делитель
    std::cout << "Наибольший делитель чисел 4 и 2\n";
    std::cout << divider(4, 2);
    std::cout << "\n\n";
    //Задача 2. Число наоборот
    std::cout << "Число 123 наоборот -> \n";
    std::cout << mirror_number(123);
    std::cout << "\n\n";
    //Задача 3. Сортировка массива с указаного числа.
    std::cout << "Изначальный массив ->\n";
    const int size = 7;
    int arr1[size]{ 95,75,8,76,13,6,55 };
    print_arr(arr1, size);
    std::cout << arr_sort_n(arr1, size, 76);
    std::cout << '\n';
    std::cout << "Отсортированный с выбраного числа массив\n";
    print_arr(arr1, size);
    std::cout << '\n';
    //Задача 4. Заполнение массива случайными числами.
    std::cout << "Массив заполненый случайными числамит от 4 до 15 включительно\n";
    int arr[size]{};
    random_arr(arr,size,4,15);
    print_arr(arr, size);


    return 0;
}