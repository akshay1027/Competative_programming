# include <stdio.h>
# include <stdlib.h>
 
int r[10000];
int a, b, c, n;
 
int f(int m){
    int x, y, z;
 
    if(m<0)
    {
        return -10000;
    }
    if (r[m]==-1)
    {
        x=f(m-a)+1;
        y=f(m-b)+1;
        z=f(m-c)+1;
        if (x>=y && x>=z)
            r[m]=x;
        if (y>=x && y>=z)
            r[m]=y;
        if (z>=x && z>=y)
            r[m]=z;
    }
    
    return r[m];
}
 
int main ()
{
    int w;
    scanf ("%d %d %d %d", &n, &a, &b, &c);
    
    for (w=0; w<10000; w++)
    {
        r[w]=-1;
    }
 
    r[0]=0;
    
    printf ("%d", f(n));
    return 0;
}