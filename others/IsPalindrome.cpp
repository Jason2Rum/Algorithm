//领扣 回文数，简单（Palindrome) 
bool isPalindrome(int x) {
	int origin=x;
    if(x<0) return 0;
    int rev = 0;
    int lastBit;
    while(x!=0){
    	 rev*=10;
    	 lastBit=x%10;
    	 rev+=lastBit;
    	 x/=10;
    }
    return origin==rev;
}
