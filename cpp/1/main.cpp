#include <iostream>
#include <bits/stdc++.h>
using namespace std;
namespace sq  //létrehozok egy namespace, amin belül dolgozok
{
    double sqrt_newton(double num, double x0){ //fuggvény def

        double x = num;  //hogy ne az eredeti számot írja mindig újra
        double sol; //későbbi megoldás
        int i =1 ;
        while (i == 1){
            sol= (x+(num/x))/2 ; //közelítő függvény
            if (abs(sol-x)<x0){  //ha már megfelelő közelségben vagyunk kilép
                i = 0;
            }
            x=sol;
        }
        return sol;//megoldással visszatér
    }

}


int main(){
    cout << sq::sqrt_newton(100,0.0001); //megfelelő hivatkozással kiírás
    return 0;
}