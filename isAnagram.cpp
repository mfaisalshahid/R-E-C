bool isAnagram(string s, string t) {
    unordered_multiset<char> string_s;
    for(int i = 0 ; i < s.size() ; i++){
        string_s.insert(s[i]);
    }
    int count = 0;
    unordered_multiset<char>::iterator it1;
    for(int i = 0 ; i < t.size() ; i++){
        if(string_s.find(t[i]) != string_s.end()){
            it1 = string_s.find(t[i]);
            if(it1 != string_s.end()){
            string_s.erase(it1);
            count++;
            }
        }
    }

    if(count == s.size() && count == t.size()) return true;
    else return false;
}
