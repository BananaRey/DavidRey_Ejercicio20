#include <iostream>
#include <cstdlib>

using namespace std;

float x_en_t0(float x,float y);
float deriva_x(float x,float y);
float deriva_y(float x,float y);


int main(){
 float C=1;
 float T=0.5;
 float Delta_x=0.1;
 float Delta_t=0.01;



 float t=1;
 float x=0;
 float h=0.1;
 float N=3/h;
 float intervalo = 2.0;
 int n_x= (intervalo/Delta_x)+1
 float *u_0;
 u_0= new double[n_x]; 
 
 float *u_old;
 u_old= new double[n_x]; 
 
 float *u_new;
 u_new= new double[n_x]; 

 
 for(int i=0;i<n_x;i++){
  y=y-h*y;
  x=x+h;
  cout<<x<<" "<<t<<endl;
  
 }
return(0);
}

float x_en_t0(float x,float y,int n_x, double Delta_x){
for(int i =0;i<n_x;i++){  
 if(0.75>x && x>=1.25){
  return(1.0);
   }
  else{
   return(0);
   }
  x+=Delta_x	
 }
}






