class LRUCache {
  private:
  public:
    int mppSize;
    map<int, pair<int, int>> mpp;
    int x = 0;

    LRUCache(int cap) {
        mppSize = cap;
    }

    int get(int key) {
        if (mpp.find(key) != mpp.end()) {
            x++;
            mpp[key].second = x;
            return mpp[key].first;
        } else {
            return -1;
        }
    }


    void put(int key, int value) {
        x++;


        if (mpp.find(key) != mpp.end()) {
            mpp[key] = {value, x};
            return;
        }


        if (mpp.size() == mppSize) {
            int leastRecency = INT_MAX;
            int keyToRemove;


            for (auto it = mpp.begin(); it != mpp.end(); it++) {
                if (it->second.second < leastRecency) {
                    leastRecency = it->second.second;
                    keyToRemove = it->first;
                }
            }

            mpp.erase(keyToRemove);
        }

        mpp[key] = {value, x};
    }
};