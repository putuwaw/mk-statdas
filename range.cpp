#include <iostream>
using namespace std;
int main()
{
    int num, big, small;
    bool st = true;
    while(cin >> num){
        if (st){
            big = num;
            small = num;
            st = false;
        }
        else{
            if (num > big){
                big = num;
            }
            else{
                if (num < small){
                    small = num;
                }
            }
        }
    }
    cout << big - small;
    return 0;
}