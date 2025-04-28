   class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0){
            return false;
        }
long long reverse=0,temp,rem;
temp=n;
while(temp!=0){
    rem=temp%10;
    reverse=(reverse*10)+rem;
    temp=temp/10;
}
if(reverse==n){
    return true;
}
return false;
    }
};
