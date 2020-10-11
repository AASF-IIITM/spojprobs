#include <bits/stdc++.h>

using namespace std;

const int me = 1000025;
const int mod = 1000000007;

int sum[me];

int main(int argc, const char * argv[]) {
    for(int i = 1; i < me; i ++){
        sum[i] = (1LL * i * (i - 1) / 2 * (i - 2) / 3) % mod;
    }
    int t, x, y;
    
    scanf("%d", &t);
    while(t --){
        scanf("%d%d", &x, &y);
        printf("%d\n", (sum[y] - sum[x - 1] + mod) % mod);
    }    
    return 0;
}
