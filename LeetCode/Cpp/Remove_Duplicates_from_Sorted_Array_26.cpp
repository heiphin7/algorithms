/*
    by @heiphin7

    26 ������ �� leetcode.
     �������� ������������� ������ �����, ��������������� � ����������� �������,
     ������� ��������� �� ����� ���, ����� ������ ���������� ������� ���������
     ������ ���� ���. ������������� ������� ��������� ������ ���������� ����������.
     ���� ������� ���������� ���������� ��������� � ������.

    �� �++ � ����� �������� ������� ��� ������������� ������� �������, ��� ��� ���� ��
    ������� Java. ������ ��� ���������� ��� ��������� ��� ����, ����� ���������� ��������
    �� ������� � � ����������� �� ���������� ����������� ���������.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums.size();
        }

        int left = 0;
        int right = 1;

        while (right <= nums.size() - 1) {
            if (nums[left] == nums[right]) {
                right++;
            } else {
                nums[left+1] = nums[right];
                right++;
                left++;
            }
        }

        return left+1;
    }
};