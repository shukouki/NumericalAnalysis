#include <stdio.h>
#include <math.h>

//積分する関数f(x)の定義
double f(double x){
  return 1/x;
}

//積分区間の下限
double x_0 = 1;
//積分区間の上限
double x_n = 2;
//nの定義
int n;
//微小区間の下限の定義
double x1;
//微小区間の中間の定義
double x2;
//微小区間の上限の定義
double x3;

int main(void) {
  //ｎの入力
  scanf("%d", &n);
  //△x
  double delta = (x_n - x_0) / n;
  //計算結果の入る値を定義
  double ans = 0.0;
  //yについての計算結果を定義
  double y = 0.0;
  
  int i;
  for(i=0;i<=n-2;i+=2){
    //微小区間下限の計算
    double x1 = x_0 + i*delta;
    //微小区間中間の計算
    double x2 = x1 + delta;
    //微小区間上限の計算
    double x3 = x1 + 2.0*delta;        
    //y0 + 4*y1 + 2*y2 + 4*y3 +・・・+ 2*y2n-2 + 4*y2n-1 + y2nの部分を計算
    y =y + (f(x1) + 4.0*f(x2) + f(x3));
  }
  //台形の公式に当てはめる
  ans = delta * y / 3.0;

  //出力
  printf("n=%d ", n);
  printf("△x=%lf ", delta);
  printf("%lf\n", ans);
}
