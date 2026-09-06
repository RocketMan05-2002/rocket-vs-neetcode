class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& vec) {
        // we need to identify anagrams and group them in lists
        // i think of a map. map to store freq array of a list and the list.
        vector<vector<string>> result;
        map<vector<int>,vector<string>>mp;
        // i'll hover over every string and make a freq array.
        // if it's already present in map imma push it in the vector<string>
        // if it ain't a new entry in map

        for(int i=0;i<vec.size();i++){
            vector<int> freq(26,0); // 26 alphabets
            string temp = vec[i];
            for(int j=0;j<temp.size();j++){
                freq[temp[j]-'a']++;
            }
            // once we have freq array we look for what we need
            if(mp.find(freq)!=mp.end()){
                mp[freq].push_back(temp);
            }
            else mp[freq] = {temp};
        }

        // we have to convert this map into vector<vector<string>> now.
        // map has freq as key and values as the vector of strings
        for (auto& [key, value] : mp) {
            result.push_back(value);
        }
    return result;
    }
};
