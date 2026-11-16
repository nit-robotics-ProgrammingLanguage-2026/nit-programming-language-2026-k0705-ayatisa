#include <stdio.h>
#include <stdlib.h>

/* プロトタイプ宣言 */
int gcd(int m, int x);

int main(void) {
    int n;
    
    // 標準入力から整数の読み込み（必要に応じたエラー処理や入力部分は課題の仕様に合わせてください）
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    // 条件チェック: 9966990より大きい場合はNGなどの処理
    // ※課題の仕様や既存の入出力フォーマットに合わせて調整してください
    if (n > 9966990) {
        // 必要に応じたエラー出力など
        return 0;
    }

    // 負の数は絶対値にする
    int abs_n = abs(n);

    // 9966990 と n の最大公約数を求める
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