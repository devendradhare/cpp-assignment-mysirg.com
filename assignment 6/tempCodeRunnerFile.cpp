);
int main()
{
    int n;
    cout<<"\nFirst n natural numbers using recurtion\nEnter a number : ";
    cin>>n;
    n_natural(n);
    getch();
}
void n_natural(int n,int i)
{
    if (i<=n)
    {
        cout<<i<<" ";
        n_natural(n,i+1);
    }
    
}