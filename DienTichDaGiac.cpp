#include <bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
};

int main(){
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        Point a[1005];
        for (int i = 0; i < n; i++) cin >> a[i].x >> a[i].y;
        a[n].x = a[0].x;
        a[n].y = a[0].y;
        double sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += a[i].x * a[i + 1].y - a[i + 1].x * a[i].y;
        }
        cout << fixed << setprecision(3) << sum / 2 << endl;
    }
}
