#include<bits/stdc++.h>

using namespace std;


int main(){

    unordered_map<string,float>mp = {
    {"SP" , 67836.43},
    {"RJ" , 36678.66},
    {"MG" , 29229.88},
    {"ES" , 27165.48},
    {"Outros" , 19849.53}
    };

    float soma = 0;
    for(auto estado : mp){
        soma += estado.second;
    }

    for(auto estado : mp){
        string percentual = to_string((estado.second/soma) * 100) + '%';
        cout << "O percentual de " <<  estado.first << " foi " <<  percentual << endl;
    }

    return 0;
}