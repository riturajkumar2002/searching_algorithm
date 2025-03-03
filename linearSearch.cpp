//linear search
#include<iostream>
using namespace std;
bool linear_search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key)
        return key;
    }
    return false;

}
int main (){
    int arr[5] = {1,3,5,6,7};
    int size =5;
    cout << "enter the key to find " << endl;
    int key;
    cin >> key;

    if(linear_search(arr, size, key)){
        cout << "found "<< endl;
    } 
    else {
        cout << "not found "<< endl;
    }

}