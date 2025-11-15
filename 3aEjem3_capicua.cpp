#include <iostream>
using namespace std;
int invertir(int n){
    int result = 0;
    while(n!=0){
        result = result*10 + n%10;
        n = n / 10;
    }
    return result;
}

bool es_capicua(int n){
    return n == invertir(n);
}

int main (){
    cout << "10 numeros:";
    for( int i =0; i <10;i++){
        int n;
        cin >> n;
        bool result = es_capicua(n);
        if(result)
            cout<< n <<endl;
    }
    return 0;
}
// 900464009 914103031 925979529 935935606 963839025 966173734 978119539 982727289 989950857 999958817