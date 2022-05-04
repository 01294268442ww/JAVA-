#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//    if (l1 == NULL && l2 != NULL)
//    {
//        return l2;
//    }
//    if (l1 == NULL && l2 == NULL)
//    {
//        return NULL;
//    }
//    if (l1 != NULL && l2 == NULL)
//    {
//        return l1;
//    }
//    struct ListNode* n1 = l1;
//    struct ListNode* n2 = l2;
//    int next = 0;
//    struct ListNode* prev = NULL;
//    while (n1 != NULL && n2 != NULL)
//    {
//        n1->val = n1->val + n2->val + next;
//        if (n1->val > 9)
//        {
//            n1->val -= 10;
//            next = 1;
//        }
//        else
//        {
//            next = 0;
//        }
//        if (n1->next == NULL)
//        {
//            prev = n1;
//        }
//        n1 = n1->next;
//        n2 = n2->next;
//    }
//    if (n1 != NULL && n2 == NULL)
//    {
//        while (n1 != NULL)
//        {
//            n1->val += next;
//            if (n1->val > 9)
//            {
//                n1->val -= 10;
//                next = 1;
//            }
//            else
//            {
//                next = 0;
//            }
//            if (n1->next == NULL)
//            {
//                prev = n1;
//            }
//            n1 = n1->next;
//        }
//        if (next == 1)
//        {
//            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            prev->next = newNode;
//            newNode->val = 1;
//            newNode->next = NULL;
//        }
//    }
//    else if (n1 == NULL && n2 != NULL)
//    {
//        prev->next = n2;
//        n1 = n2;
//        while (n1 != NULL)
//        {
//            n1->val += next;
//            if (n1->val > 9)
//            {
//                n1->val -= 10;
//                next = 1;
//            }
//            else
//            {
//                next = 0;
//            }
//            if (n1->next == NULL)
//            {
//                prev = n1;
//            }
//            n1 = n1->next;
//        }
//        if (next == 1)
//        {
//            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            prev->next = newNode;
//            newNode->val = 1;
//            newNode->next = NULL;
//        }
//
//    }
//    else
//    {
//        if (next == 1)
//        {
//            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            prev->next = newNode;
//            newNode->val = 1;
//            newNode->next = NULL;
//        }
//    }
//    return l1;
//}
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//    if (l1 == NULL && l2 != NULL)
//    {
//        return l2;
//    }
//    if (l1 == NULL && l2 == NULL)
//    {
//        return NULL;
//    }
//    if (l1 != NULL && l2 == NULL)
//    {
//        return l1;
//    }
//    struct ListNode* n1 = l1;
//    struct ListNode* n2 = l2;
//    int next = 0;
//    struct ListNode* prev = NULL;
//    while (n1 != NULL && n2 != NULL)
//    {
//        n1->val = n1->val + n2->val + next;
//        if (n1->val > 9)
//        {
//            n1->val -= 10;
//            next = 1;
//        }
//        else
//        {
//            next = 0;
//        }
//        if (n1->next == NULL)
//        {
//            prev = n1;
//        }
//        n1 = n1->next;
//        n2 = n2->next;
//    }
//    if (n1 != NULL && n2 == NULL)
//    {
//        while (n1 != NULL)
//        {
//            n1->val += next;
//            if (n1->val > 9)
//            {
//                n1->val -= 10;
//                next = 1;
//            }
//            else
//            {
//                next = 0;
//            }
//            if (n1->next == NULL)
//            {
//                prev = n1;
//            }
//            n1 = n1->next;
//        }
//        if (next == 1)
//        {
//            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            prev->next = newNode;
//            newNode->val = 1;
//            newNode->next = NULL;
//        }
//    }
//    else if (n1 == NULL && n2 != NULL)
//    {
//        prev->next = n2;
//        n1 = n2;
//        while (n1 != NULL)
//        {
//            n1->val += next;
//            if (n1->val > 9)
//            {
//                n1->val -= 10;
//                next = 1;
//            }
//            else
//            {
//                next = 0;
//            }
//            if (n1->next == NULL)
//            {
//                prev = n1;
//            }
//            n1 = n1->next;
//        }
//        if (next == 1)
//        {
//            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            prev->next = newNode;
//            newNode->val = 1;
//            newNode->next = NULL;
//        }
//
//    }
//    else
//    {
//        if (next == 1)
//        {
//            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            prev->next = newNode;
//            newNode->val = 1;
//            newNode->next = NULL;
//        }
//    }
//    return l1;
//}

//struct ListNode* swapPairs(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    if (head->next == NULL)
//    {
//        return head;
//    }
//    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* dummyHead = temp;
//    dummyHead->next = head;
//    while (temp->next != NULL && temp->next->next != NULL)
//    {
//        struct ListNode* n1 = temp->next;
//        struct ListNode* n2 = temp->next->next;
//        temp->next = n2;
//        n1->next = n2->next;
//        n2->next = n1;
//        temp = n1;
//    }
//    return dummyHead->next;
//}