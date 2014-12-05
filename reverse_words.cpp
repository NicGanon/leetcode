void filter(string &str);
void reverse(string &str,int s,int e);
void reverseworrds(string &s) 
{
	
	filter(s);
	
	if (s.empty())
		return ;
	reverse(s,0,s.length());
	cout << s << endl;
	int i=0,j=0;
	while (i < s.length()) {
		while (j != s.length() && s[j]!=' ' )
			j++;
		reverse(s,i,j);
		i= ++j;
	}
}
void filter(string &str)
{
	string tmp;
	for (int i=0; i<str.length(); ++i) {				
		if (str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z' || str[i]>='0'&&str[i]<='9')
			tmp+=str[i];
		else if (str[i]==' ' && i!=0 && str[i-1]!=' ')
			tmp += str[i];
	}
								
	str = tmp;
		
												
}
void reverse(string &str,int s, int e)
{
	for (int i=s,j=e-1;i<j;++i,--j) 
		std::swap(str[i],str[j]);
				
}


