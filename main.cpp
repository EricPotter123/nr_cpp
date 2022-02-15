#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int nr; n > 0; n-=1){
        cin >> nr;
        for(int a; nr > 0; nr = nr / 10){
            if (nr <= 9){
                a = nr;
                nr = 0;
            }
            else{
                a = nr % 10;
            }
            cout << a;
        }

    }

    return 0;
}
