nclude <stdio.h>
#include <math.h>

double f(double x);
double _f(double x);

int main(void){
	  double x_initial = 1.0;
	    double x_pre = x_initial;
	      double eps = 0.000001;
	        int i =0, i_max =30;
		  double delta;

		    do{
			          delta = f(x_initial)/_f(x_initial);
				        x_initial = x_initial - delta;
					      x_pre = x_initial;
					            printf("[%d]%.10lf\n", i+1, x_initial);
						        i++;
							  }while (fabs(delta) > eps && i < i_max);
		      
		      if(i >= i_max)
			          printf("\n 解なし \n");

		      printf("result:%lf\n",x_initial);
}

double f(double x){
	  return 1/x;
}

double _f(double x){
	  return -1/x/x;
}
