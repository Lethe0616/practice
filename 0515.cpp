class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
    vector<int>::iterator it=numbers.begin();
        sort(it,numbers.end());
        int mid=numbers.size()/2;
        int count=0;
        int size=numbers.size();
        for(int i=0;i<size;i++)
        {
            if(numbers[mid]==numbers[i])
                count++;
            if(count >size/2)
                return numbers[mid];
        }
        return 0;
    }
};
