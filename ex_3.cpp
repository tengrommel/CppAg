#include <iostream>
#include <algorithm>

/*
 * 贪心算法
 * （1）贪心选择
 * 所谓贪心选择性质是指原问题的整体最优解可以通过一系列局部最优的选择得到。
 * （2）最优子结构
 * 当一个问题的最优解包含其子问题的最优解时，称此问题具有最优子结构性质。
 *
 * 袋子和物件
 * 算法设计
 *  （1）当载重量为定值c时，可装载的古董数量n越大。
 *  （2）把n个物件的重量从小到大（非递减）排序，然后...
 */

using namespace std;
const int N = 1000005;
double w[N];

int main() {
    double c;
    int n;
    cout<< "请输入每个物件的重量c及古董个数n：" << endl;
    cin >> c >> n;
    cout << "请输入每个物件的重量，用空格分开" <<endl;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    sort(w, w+n);
    double tmp = 0.0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        tmp += w[i];
        if(tmp<=c)
            ans++;
        else
            break;
    }
    cout << "能装入的物件最大数量是ans="<< ans<<endl;
    return 0;
}