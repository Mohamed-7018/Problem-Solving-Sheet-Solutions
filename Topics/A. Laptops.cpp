#include <iostream>
using namespace std;


int  main () {
    int n;
    cin >> n;
    int a,b;
for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a != b) {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";

}

