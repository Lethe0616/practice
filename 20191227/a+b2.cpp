#include <stdio.h>
 
int main()
{
    int T, n1, m1,n2,m2, i;
    scanf("%d", &T);
    for (i=1; i<= T; ++i){
        scanf("%d %d", &n1, &m1);
        scanf("%d %d", &n2, &m2);
        printf("%d\n", (n1 + m1) % 100);
        printf("%d\n", (n2 + m2) % 100);
    }
    return 0;
}
