// Section 12
// Challenge

/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
  
  You can also write a print function that expects a pointer to an array of integers and its size and display the
  elements in the array.
    
  For example,
  
  Below is the output from the following code which would be in main:
  
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,5);
    
    cout << "Array 2: " ;
    print(array2,3);
    
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(results,15);
   
   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/
  
#include <iostream>

using namespace std;

int *apply_all(const int *const, size_t, const int *const, size_t); //(const int [], size_t, const int [], size_t)
void print(const int [], size_t);


int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    
    cout << endl;
    
    delete [] results;

    return 0;
}

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2) { //cannot use const in [] because that would be a pointer, need to deference it first!
    int *new_array{nullptr}; //initialize ptr pointing nowhere
    size_t array_size {size1*size2};
    new_array= new int [array_size]; //creating new int array of size = size1 x size2 in the heap
    int i {};
        for (size_t j{0}; j<size2;++j) {
            for (size_t k{0}; k<size1; ++k) {
                    *(new_array+i)= arr2[j]*arr1[k]; //need to move through the new array created, using ++i, and dereference to change value it is pointing to, this is array offset notation
                    //could also do using new_array[i]=arr[j]*arr[i], this would use array subscript notation
                    ++i;
                    
            }
                    
        }
           
    
    
    cout<<"This is the new array:" << *new_array<<endl; //only deferences the first value in that storage
                     
    return new_array;
}

void print(const int input[], size_t size) {
    cout<<"[";
    for (size_t i{0}; i<size; ++i)
        cout<<input[i]<<" ";
    cout<<"]";
}