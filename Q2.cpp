#include <iostream>

using namespace std;
typedef long long ll;

// Complexidade Temporal: O(n)
// Complexidade espacial: O(1)
bool isFibonacci(ll n){

    int prev = 1, prevPrev = 0, curr = 0;
    while(curr < n){
        
        curr = prev + prevPrev;
        prevPrev = prev;
        prev = curr;
    }

    return (n == curr);

}

int main(){
    ll n;
    cin >> n;
    
    if(isFibonacci(n)){
        cout << "O numero " << n << " pertence a sequencia de Fibonacci" << endl;
    }
    else{
        cout << "O numero " << n << " nao pertence a sequencia de Fibonacci" << endl;
    }
    return 0;
}