/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/reverse-linked-list
 * 
 * 
 * Logic: complexity O(n)
 * Definition for singly-linked list.
 * class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
 */

class Solution
{
public:
    Node *cloneGraph(Node *node)
    {
        unordered_map<int, Node *> unorderedMap;
        return clone(node, unorderedMap);
    };
    Node *clone(Node *node, unordered_map<int, Node *> &unorderedMap)
    {
        if (!node)
            return node;
        if (unorderedMap.count(node->val))
            return unorderedMap[node->val];
        Node *newNode = new Node(node->val);
        unorderedMap[node->val] = newNode;
        for (int i = 0; i < node->neighbors.size(); ++i)
        {
            (newNode->neighbors).push_back(clone(node->neighbors[i], unorderedMap));
        }
        return newNode;
    };
};
