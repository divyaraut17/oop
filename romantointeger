class Solution {
private:
    int num(char ch)
    {
        switch(ch)
        {
            case 'I': return 1;
            break;
            case 'V': return 5;
            break;
            case 'X': return 10;
            break;
            case 'L': return 50;
            break;
            case 'C': return 100;
            break;
            case 'D': return 500;
            break;
            case 'M': return 1000;
            break;
        }
       return -1;
    }

public:
    int romanToInt(string s) {
        int value=0;
        int i=0;
        while(i<s.size())
        {
            if(num(s[i]) < num(s[i+1]))
            {
                value-=num(s[i++]);
            }
            else
            {
                value+=num(s[i++]);
            }
            
        }
        return value;

    }
};
