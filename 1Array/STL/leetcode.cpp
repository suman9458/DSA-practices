class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        int i=0;
        int rev=0;
        int digit;
        int num;
        int comp=0;
        int j=0;
        while(n!=0)
        {
            int bit= n & 1;
            ans=(bit*pow(10,i)) +ans;
            n=n/10;
            i++;
        }
        while(ans!=0){
        digit=ans%10;
        rev=rev*10 + digit;
        ans=ans/10;
        }
        int bit;
while(rev!=0)
{
  
    bit =rev%10;
   if(bit==1)
   {
    comp=comp+ pow(2,i);
   } 
   rev=rev/10;
   j++;
}
return comp;
    }
};
