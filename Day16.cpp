/* Write a function to check whether an input string is a valid IPv4 address or IPv6 address or neither.
Example 1:
Input: "172.16.254.1"

Output: "IPv4"

Explanation: This is a valid IPv4 address, return "IPv4".
Example 2:
Input: "2001:0db8:85a3:0:0:8A2E:0370:7334"

Output: "IPv6"

Explanation: This is a valid IPv6 address, return "IPv6".
*/
class Solution {
    bool validateIPv4(string s)
    {
        s.push_back('.');
        string t="";
        for(auto a: s)
        {
            if (a=='.')
            {
                if(t==""||t.length()>=4||t.compare("256")>=0||(t.length()!=1&&t[0]=='0'))
                    return false;
                else
                    t="";
            }
            else
                {
                if(a<'0'||a>'9')
                    return false;
                t.push_back(a);
            }
        }
        return true;
    }
    bool validateIPv6(string s)
    {
        s.push_back(':');
        string t="";
        for(auto a: s)
        {
            if (a==':')
            {
                if(t==""||t.length()>=5)
                    return false;
                else
                    t="";
            }
            else
            {
                if((a>='a'&&a<='f')||(a>='A'&&a<='F')||(a>='0'&&a<='9'))
                    t.push_back(a);
                else
                     return false;
                
            }
        }
        return true;
    }
public:
    string validIPAddress(string IP) {
        int cd=0,cc=0;
        for(auto& a:IP)
        {
            if(a=='.')
                cd++;
            else if(a==':')
                cc++;
        }
        if(cd == 3&&validateIPv4(IP))
            return "IPv4";
        else if(cc == 7&&validateIPv6(IP))
            return "IPv6";
        else
            return "Neither";
        
        return "Neither";
    }
};
