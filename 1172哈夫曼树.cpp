/*
题目描述： 
哈夫曼树，第一行输入一个数n，表示叶结点的个数。需要用这些叶结点生成哈夫曼树，根据哈夫曼树的概念，这些结点有权值，即weight，题目需要输出所有结点的值与权值的乘积之和。
输入描述:
输入有多组数据。
每组第一行输入一个数n，接着输入n个叶节点（叶节点权值不超过100，2<=n<=1000）。
输出描述:
输出权值。

输入
5  
1 2 2 5 9
输出
37
*/

#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> > Q; //最后一个>前的空格不能少 
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        while(Q.empty()==false) Q.pop();
        for(int i=1;i<=n;i++){
            int x;
            scanf("%d",&x);
            Q.push(x);
        }
        int ans=0;
        while(Q.size()>1){
            int a=Q.top();
            Q.pop();
            int b=Q.top();
            Q.pop();
            ans+=a+b;
            Q.push(a+b);
        }
        printf("%d\n",ans);
    }
    return 0;
}
