
bool isPalindrome(string s) 
{
	int i = 0, j = s.length()-1;
        bool ispal = true;
        while (i<j) {
		while ( i<s.length() && (s[i]<'a'||s[i]>'z') &&(s[i]<'A'||s[i]>'Z')&& (s[i]<'0'||s[i]>'9'))
			++i;
			if (i==s.length())
			        break;
			while ((s[j]<'a'||s[j]>'z') &&(s[j]<'A'||s[j]>'Z') &&(s[j]<'0'||s[j]>'9'))
				--j;
          
        if (s[i] != s[j] && abs(s[i]-s[j]) != 'a'-'A')
        {
                ispal = false;
		break;
                
        }
        ++i;
        --j;
    }
        
    return ispal;
}
