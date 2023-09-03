
void solve()
{
    int total,tens,final,initalval;
    cin>>total>>tens>>final>>initalval;
    int sum=initalval;
    if(final<=tens){
        cout<<(final*10)+initalval<<endl;
        return;
    }
    else if(final>tens){
        sum+=(tens*10);
        sum+=((final-tens)*5);
        if(total==final){
            sum+=20;
        };
    }
    cout<<sum<<endl;

}

int main(){
    FAST;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
}
return 0;
}
