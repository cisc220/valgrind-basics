#include<iostream>
#include<cstdlib>

int main(){
    int* p2chunk = (int *) malloc(sizeof(int)*10);
    p2chunk[0] = 123;
    p2chunk[9] = -20;
    
    std::cout << p2chunk[9] << std::endl;
    
    return 0;
}