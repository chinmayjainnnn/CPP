class EventManager {
public:
    map<int,int> mp;
    set<pair<int,int>> st;

    EventManager(vector<vector<int>>& events) {
        for(auto it:events){
            mp[it[0]]=it[1];
            st.insert({it[1],-it[0]});
        }
    }
    
    void updatePriority(int eventId, int newPriority) {
        st.erase({mp[eventId],-eventId});
        mp[eventId]=newPriority;
        st.insert({newPriority,-eventId});
        
    }
    
    int pollHighest() {
        if(st.empty())return -1;
        int id= -prev(st.end())->second;
        st.erase({mp[id],-id});
        mp.erase(id);
        return id;
        
        
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */