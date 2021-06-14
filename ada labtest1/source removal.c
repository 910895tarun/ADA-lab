//source removal
#include<stdio.h>
   int res[10],s[10],k=0,top=-1;

void topological(int n,int vertices[10],int a[10][10])
   {

   for(int i=1;i<=n;i++)
     {
 if(vertices[i]==0)
{top++;

s[top]=i;vertices[i]--;
}
}
    while(top>=0){
      int u=s[top];top--;

      res[k]=u;k++;
      for(int i=1;i<=n;i++){
        if(a[u][i]==1){vertices[i]-=1;  }
        if(vertices[i]==0){top++;s[top]=i;
        vertices[i]--;}
      }

    }
    for(int i=0;i<n;i++)
    printf("v%d\t",res[i]);
   }

  void main()
   {
   int i,j,n,vertices[10],a[10][10];
   printf("enter the number of vertices:");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
   vertices[i]=0;}
   printf("\n enter the adjacency matrix\n");
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   {
      scanf("%d",&a[i][j]);
      if(a[i][j]==1)
      vertices[j]++;
   }
 printf("The topological order is:\n");
   topological(n,vertices,a);

  }