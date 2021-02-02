class Solution {
public:
    string intToRoman(int num) {
        string ret;
        while(num >= 1000)
        {
            ret += "M";
            num -= 1000;
        }
        while(num >= 900)
        {
            ret += "CM";
            num -= 900;
        }
        while(num >= 500)
        {
            ret += "D";
            num -= 500;
        }
        while(num >= 400)
        {
            ret += "CD";
            num -= 400;
        }
        while(num >= 100)
        {
            ret += "C";
            num -= 100;
        }
        while(num >= 90)
        {
            ret += "XC";
            num -= 90;
        }
        while(num >= 50)
        {
            ret += "L";
            num -= 50;
        }
        while(num >= 40)
        {
            ret += "XL";
            num -= 40;
        }
        while(num >= 10)
        {
            ret += "X";
            num -= 10;
        }
        while(num >= 9)
        {
            ret += "IX";
            num -= 9;
        }
        while(num >= 5)
        {
            ret += "V";
            num -= 5;
        }
        while(num >= 4)
        {
            ret += "IV";
            num -= 4;
        }
        while(num >= 1)
        {
            ret += "I";
            num--;
        }
        return ret;
    }
};

