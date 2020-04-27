#include<stdio.h>
#include<math.h>
#define PI 3.141592654
int main(){
    int t;
    scanf("%d", &t);
    int i;
    for(i=0;i<t;i++){
    
    
    
    float x;
    scanf("%f", &x);
    float y=sqrt(x);
    float a_circle=PI*(y/2)*(y/2);
    float squire_area=x;
    float are_of_shated_region=squire_area-a_circle;
    float Primetier_shader_region=2*PI*(y/2);
    printf("%f ", are_of_shated_region);
    printf("%f", Primetier_shader_region);
    printf("\n");
    
    }
}
