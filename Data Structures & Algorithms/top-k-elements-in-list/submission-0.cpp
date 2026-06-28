class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> liste;
        vector<int> out;

        liste.push_back({nums[0], 1});

        for (int i = 1; i < nums.size(); i++) {
            bool found = false;

            for (int j = 0; j < liste.size(); j++) {
                if (liste[j][0] == nums[i]) {
                    liste[j][1]++;
                    found = true;
                    break;
                }
            }

            if (!found) {
                liste.push_back({nums[i], 1});
            }
        }

        for (int i = 0; i < liste.size(); i++) {
            int count = k;
            int mx = liste[i][1];

            for (int j = 0; j < liste.size(); j++) {
                if (mx < liste[j][1])
                    count--;
            }

            if (count >= 1)
                out.push_back(liste[i][0]);
        }

        return out;
    }
};