#include <stdio.h>
#include <stdlib.h>

/* プロトタイプ宣言 */
int gcd(int m, int x);

int main(void) {
    int n;
    
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    // 9966990を超える場合のチェック
    // ※もし元のコードで特定の文字列や動作を出力していた場合はここを調整します
    if (n > 9966990) {
        // 仕様に合わせて調整（例：エラーメッセージを出力する場合など）
        // 特に何も出力せず終了だった場合はそのまま return 0; にします
        return 0;
    }

    // 負の数は絶対値にする
    int abs_n = abs(n);

    // 最大公差・最大公約数を求める
    int ans = gcd(9966990, abs_n);

    // 結果の出力
    printf("%d\n", ans);

    return 0;
}

/* ユークリッドの互除法による最大公約数を求める関数 */
int gcd(int m, int x) {
    int r;
    int a = m;
    int b = x;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}