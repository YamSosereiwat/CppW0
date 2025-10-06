#include <iostream>

using namespace std;

void put(double *p_array,  int &n, int size, int index, double value){
    if (n >= size) {
        cout << "Error: Array is full. Cannot insert." <<endl;
        return;
    }
    if (index < 0 || index > n) {
        cout << "Error: Invalid index for insertion." <<endl;
        return;
    }
    for (int i = n - 1; i >= index; i--) {
        p_array[i + 1] = p_array[i];
    }
    p_array[index] = value;
    n++;
}
void delete_value(double *p_array, int &n, int index){
    if (index < 0 || index >= n) {
        cout << "Error: Invalid index for deletion." <<endl;
        return;
    }
    for (int i = index; i < n - 1; i++) {
        p_array[i] = p_array[i + 1];
    }
    n--;
}
int main(){

    double array[100] = {4,3,5,1};
    int n = 4;
    double *p_array = array;

    put(p_array, n, 100, 4, 10);
    put(p_array, n, 100, 2, 100);
    delete_value(p_array, n, 0);
    delete_value(p_array, n, 3);
    for(int i = 0; i < n; i++){
        cout<<"Value: "<<*(p_array+i)<<endl;
    }

    return 0;
}
