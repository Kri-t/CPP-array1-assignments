#include <iostream>
using namespace std;

int main() {

int a[] = {1,2,3,4,5};
int res = 1;

for(int i=0 ;i<5; i++){
res = res*a[i];
}

cout<<"Product of elements is: "<<res;

return 0;
}