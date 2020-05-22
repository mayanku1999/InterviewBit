typedef long long int lint;

const lint modulo=1000000007;
const int tope=1001;

lint combi[tope][tope];
lint expo[tope];
bool flag;

void precompute() {
    if(flag) return;
    flag = 1;
    for(int n = 0; n < tope; n += 1) {
        for(int k = 0; k <= n; k += 1) {
            if (k == 0 or k == n) {
                combi[n][k] = 1;
            }
            else {
                combi[n][k] = (combi[n-1][k] + combi[n-1][k-1]) % modulo;
            }
        }
    }
    expo[0] = 1;
    for (int i = 1; i < tope; i += 1) {
        expo[i] = (2 * expo[i-1]) % modulo;
    }
}

int Solution::solve(int n, vector<int> &v) {
    precompute();
    int m = v.size();
    lint ans=1;
    sort(v.begin(), v.end());
    int ant = v[0]-1;
    for (int i = 1; i < m; i += 1) {
        int k = v[i] - v[i-1] - 1;
        if (k > 0) {
          lint act = expo[k-1];
          ans = ((act * ans)%modulo * combi[ant+k][k]%modulo) % modulo;
          ant += k;
        }
    }
    ans = (ans * combi[ant+n-v[m-1]][n-v[m-1]])%modulo;
    return (int)ans;
}
