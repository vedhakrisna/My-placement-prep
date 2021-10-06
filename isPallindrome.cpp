
bool isPallindrome(string &str, int start, int end){
    if(start>=end){
        return true;
    }
    return (str[start] == str[end]) && isPallindrome(str, start+1, end-1);
}
