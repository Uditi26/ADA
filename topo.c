#include <stdio.h>
#include <stdlib.h>
int a[10][10], vis[10],n, j=-1, ex[10];
void dfs(int b)
{
    int i;
    vis[b] = 1;
    for(int i=1;i<=n; i++)
    {
        if(a[b][i] == 1 && !vis[i])
            dfs(i);
    }
    ex[++j] = b;
        
}

int main()
{
    int i,j,e, u, v;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        a[i][j] = 0;
    }
    printf("Enter the number of edges: ");
    scanf("%d", &e);
    printf("Enter the edge: ");
    for(i=1;i<=e;i++)
    {
        scanf("%d %d", &u, &v);
        a[u][v] = 1;
    }
    for(int i=1; i<=n; i++)
    vis[i] = 0;
    for(i=1;i<=n;i++)
    {
        // if(vis[i] == 0);
        dfs(i);
    }
    // dfs(1);
    for(i=n; i>=0; i--)
    if(i!=4)
    printf("%d\t", ex[i]);
    


    return 0;
}

