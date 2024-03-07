// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:

//    int length(ListNode* head){

//        int len=0;
//        ListNode* temp=head;
//        while(temp!=NULL){
//            len++;
//            temp=temp->next;
//        }
//        return len;
//    }

//     ListNode* middleNode(ListNode* head) {

//     ListNode* slow= head;
//     ListNode* fast= head;


//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             //fast ko 2 baar aage bhada diay tab slow ko ek baar aage bhada do
//             slow=slow->next;
//         }   
//     }
//     return slow;

//         // int n= length(head);
//         // int position = n/2+1;
//         // int currposition=1;
//         // ListNode* temp= head;

//         // while(currposition!=position){
//         //     currposition++;
//         //     temp=temp->next;
//         // }
//         // return temp;
        
//     }
// };