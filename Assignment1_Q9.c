main()
{
int p_amount;
int rate;
int year;
    printf("Enter principal amount \n");
    scanf("%d",&p_amount);
    printf("Enter rate  \n");
    scanf("%d",&rate);
    printf("Enter year\n");
    scanf("%d",&year);
    
    printf("Area of ractangle is %d unit", (p_amount*(1+(rate*year))));
getch();
}