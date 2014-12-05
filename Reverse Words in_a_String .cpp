
void reverseWords(string &s) {
       
        string sum;
        
        for(int i=0,j=0;i<=s.length();++i) {
            if (s[i]==' ' || i == s.length()) {
                if (s[i-1] == ' ') {
                    j=i+1;
                    continue;
                }
                string tmp = s.substr(j,i-j);
                if (!sum.empty()) {
                    tmp.append(" ");
                    tmp.append(sum);
                }
                sum = tmp;
                j=i+1;
            }
        }
        s = sum;
    }
}

