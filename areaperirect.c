int main(){
float area,perimeter,l,b;
printf("Enter value of l and b : ");
scanf("%f %f", &l,&b);
area = l*b;
perimeter = 2*(l+b);
printf("Area = %f\nPerimeter = %f", area,perimeter);
}