int main()
{
    int n = 7;
    for(int i =0; i < n; i++){
        for(int k = 0; k< n; k++){
            if(k==i || k == n-i-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
