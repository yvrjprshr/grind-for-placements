// https://leetcode.com/problems/reverse-linked-list/

#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *prev = NULL, *curr = head, *nextt = curr->next;

        while (curr != NULL)
        {
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }

        return prev;
    }
};