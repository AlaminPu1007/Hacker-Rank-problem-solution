int pairs(int k, vector<int> arr) {
        int count = 0, len = arr.size();
        map<int, int> Map;
        
        for(int i = 0; i < len; i++)
        Map[arr[i]];
        
        for(int i = 0; i < len; i++)
        {
            int value = arr[i] - k;
            auto item = Map.find(value);
            
            if(item != Map.end())
            count++;
        }
        
        return count;
    }