#include <iostream>
using namespace std;
class Matrix {
private:
    int size;
    int *elements;

public:
    
    Matrix(int s, int arr[]) : size(s) {
        elements = new int[size];
        for (int i = 0; i < size; ++i) {
            elements[i] = arr[i];
        }
    }

    
    ~Matrix() {
        delete[] elements;
    }

    
    Matrix operator+(const Matrix &m) {
        
        if (size != m.size) {
            std::cerr << "Matrix sizes are not equal. Addition not possible." << std::endl;
            return *this;
        }

        Matrix result(size, elements);


        for (int i = 0; i < size; ++i) {
            result.elements[i] += m.elements[i];
        }

        return result;
    }

    
    void display() {
        for (int i = 0; i < size; ++i) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};

    
    Matrix matrix1(5, arr1);
    Matrix matrix2(5, arr2);

    
    std::cout << "Matrix 1: ";
    matrix1.display();
    std::cout << "Matrix 2: ";
    matrix2.display();

    
    Matrix result = matrix1 + matrix2;

    
    std::cout << "Sum of Matrix 1 and Matrix 2: ";
    result.display();

    return 0;
}
