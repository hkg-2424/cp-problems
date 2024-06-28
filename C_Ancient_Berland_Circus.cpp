#include <iostream>
#include <iomanip>
#include <complex>
#include <cmath>
using namespace std;
#define EPS 1E-2
#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif
 
double gcd(double a,double b){
    if(fabs(b)<EPS)
        return a;
    if(fabs(a)<EPS)
        return b;
    return gcd(b,fmod(a,b));
}

void solve(){
   double x1,x2,x3,y1,y2,y3;
   cin>>x1>>y1>>x2>>y2>>x3>>y3;
   double side12,side13,side23;
   side12=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   side23=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
   side13=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

   double areaka4times=sqrt((side12+side13+side23)*(-side12+side13+side23)*(side12-side13+side23)*(side12+side13-side23));
   double radius=side12*side13*side23/areaka4times;


   double angle1,angle2,angle3;
   angle1=acos((side12*side12+side13*side13-side23*side23)/(2*side13*side12));
   angle2=acos((side12*side12-side13*side13+side23*side23)/(2*side23*side12));
   angle3=acos((-side12*side12+side13*side13+side23*side23)/(2*side13*side23));

    double pi=acos(-1.0);


   int n = pi / gcd (gcd (angle1, angle2), angle3) + 0.5;
 
    cout<<fixed<<setprecision(8);
    cout<< n * 0.5 * radius * radius * sin (2 * pi / n);
//    int minimumangle=gcd(gcd(angle1,angle2),angle3);

//    double ans=(180*radius*radius*sin(M_PI*minimumangle/180)/minimumangle);
// //    cout<<ans<<endl;
//     printf("%.8lf",ans);

   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int testcase=1;
//    cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}