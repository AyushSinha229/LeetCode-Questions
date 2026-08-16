struct node {
    int val;
    node *next;
     node(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    node *getIntersectionNode(node *head1, node *head2) {
        
        node* t1 = head1;
        node* t2 = head2;

        int c1 = 0, c2 = 0;

        while(t1 != NULL){
            c1++;
            t1 = t1->next;
        }
        while(t2 != NULL){
            c2++;
            t2 = t2->next;
        }
        int diff = 0;
        if(c1 > c2){
            diff = c1 - c2;

            while(diff--){
                head1 = head1->next;
            }
        }else{
            diff = c2 - c1;
            
        }

    }
};