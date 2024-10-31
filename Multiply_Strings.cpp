class Solution {      //crying emoji
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        int length_1 = num1.size();
        int length_2 = num2.size();
        vector <int> product ( length_1 + length_2 ,0 );
        string result = "";
        int carry = 0;

        for (int i = length_1 - 1; i >= 0; i--){
            for (int j = length_2 - 1; j >= 0; j--){
                int p = ( num1[i] - '0') * (num2[j] - '0');
                product[ i + j + 1] += p;
            }
        }

        for ( int i = length_1 + length_2 - 1; i >= 0; i-- ){
            int digit = (product[i] + carry) % 10;
            carry = ( product[i] + carry )/ 10;
            result.push_back( digit + '0' );
        }

        while ( result.back() == '0' && result.size() > 1 ){
            result.pop_back();
        }

        reverse( result.begin(), result.end() );
        return result;
    }
};
