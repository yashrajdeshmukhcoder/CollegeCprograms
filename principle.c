int main(){
float p,r,n,i,amount;
printf("Enter principle, rate and no. of years : ");
scanf("%f %f %f", &p,&r,&n);
i = (p*r*n)/100;
amount = p + i;
printf("Principal = Rs. %f\n", p);
printf("Interest = Rs. %f\n", i);
printf("Total amount = %f\n", amount);
}*/