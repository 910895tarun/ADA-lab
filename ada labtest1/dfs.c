//dfs
#include<stdio.h>
#include<conio.h>
   int res[10],top=0,s[10];
   void dfs(int v,int n,int a[10][10]){
     s[v]=1;
     for(int i=1;i<=n;i++)
     if(s[i]==0&&a[v][i]==1) dfs(i,n,a);
   top++;
   res[top]=v;

   }

void topo(int n,int a[10][10])
   {
   for(int i=1;i<=n;i++){
     s[i]=0;
   }
   top=0;
    for(int i=1;i<=n;i++){
      if(s[i]==0)dfs(i,n,a);
   }

 }

  void main()
   {
   int i,j,n,vertices[10],a[10][10];
   printf("enter the number of vertices:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   vertices[i]=0;

   printf("\n enter the adjacency matrix\n");
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   {
      scanf("%d",&a[i][j]);

   }

   topo(n,a);

   if(top!=n){  for(int i=n-1;i>0;i--){
       printf("v%d\t",res[i]);
     }
   printf("topological ordering is not possible\n");
}
else
   {
      printf("\n topological ordering is :\n");
      for(int i=n;i>0;i--){
        printf("v%d\t",res[i]);
      }
    }
  }