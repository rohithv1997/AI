int Map[100];
char str[200];
char oper[10]={'C','D','I','E','N'};
int map2[200],pdx,val[200];
int t,i,j,k,l,idx;
int valueof(int a,int b,int op){
    switch(op){
        case 1:return (a&b);
        case 2:return (a|b);
        case 3:return ((!a)|b);
        case 4:return ((!a)&(!b))|(a&b);
        case 5:return !a;
    }
}
int eval(){
    if(str[pdx]>='a' && str[pdx]<='z'){
        int x=val[map2[str[pdx]]];
        pdx++;
        return x;
    }
    else{
        int op=Map[str[pdx]];
        if(op==5){
            pdx++;
            int x=eval();
            return valueof(x,x,op);
        }
        else{
            pdx++;
            int x=eval();
            int y=eval();
            return valueof(x,y,op);
        }
    }
}
int main(){
    for(i=0;i<=4;i++) Map[oper[i]]=i+1;
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        l=strlen(str);
        idx=0;
        for(i=97;i<=122;i++) map2[i]=-1;
        for(i=0;i<l;i++) if(Map[str[i]]==0 && map2[str[i]]==-1){
             map2[str[i]]=idx++;
        }
        for(i=0;i<(1<<idx);i++){
            for(j=0;j<idx;j++){
              if(i&(1<<j)) val[j]=1;
              else val[j]=0;
            }
            pdx=0;
            if(!eval()) break;
        }
        if(i!=(1<<idx)) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}