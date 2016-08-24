using namespace std;
int main()
{
    int num,cnt=0;
    char c;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        cnt=0;
        int unit=1;
        if(isalpha(s[i]))
        {
            c=s[i];
            continue;
        }
        while(isdigit(s[i]))
        {
            num = s[i]-48;
            cnt = cnt*unit+num;
            unit = unit*10;
            i++;
        }
        i- -;
        while(cnt--)
            cout<<c;
    }
    return 0;

}
