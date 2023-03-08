#include<bits/stdc++.h>

using namespace std;

// Complexidade Temporal O(n/2) = O(n)
// Complexidade Espacial O(1) => desconsiderando o espaco alocado para a input string
void reverseString(string &s){
    int n = s.size();
    for(int i = 0; i < n / 2; i++){
        char temp = s[(n - 1) - i];
        s[(n-1)-i] = s[i];
        s[i] = temp;
    }
}
int main(){
    string s;
    cin >> s;

    cout << "A String recebida foi " << s << endl;
    reverseString(s);

    cout << "A String invertida e " << s << endl;
    return 0;
}