class Solution{	
	public:		
		bool f(int i, string& s){
            if(i>=s.size()/2)
                return true;
            if(s[i]!=s[s.size()-i-1])//string works same as vector for position
                return false;
            return f(i+1,s);//bool needs a return. dont forget to write return
        }
        bool palindromeCheck(string& s){
			return f(0,s);//same here
		}
};