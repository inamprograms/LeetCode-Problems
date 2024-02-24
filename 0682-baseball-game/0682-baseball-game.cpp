class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        
        for (string op: operations) {
            if (op != "+" && op != "D" && op != "C") {
                record.push(stoi(op));
            } else if (op == "+") {
                int temp = record.top();
                record.pop();
                int sum = temp + record.top();
                
                record.push(temp);
                record.push(sum);
            } else if (op == "D") {
                
                record.push(2 * record.top());
            } else {
                record.pop();
            }
        }
        
        int score = 0;
        while (!record.empty()) {
            score += record.top();
            record.pop();
        }
        
        return score;
    }
};