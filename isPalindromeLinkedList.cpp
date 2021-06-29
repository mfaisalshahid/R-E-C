bool isPalindrome(ListNode* head) {
    stack <int> s;
    ListNode* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    temp = head;
    int mid = count/2;

    while(mid > 0){
        temp = temp->next;
        mid--;
    }
    while(temp != NULL){
        s.push(temp->val);
        temp = temp->next;
    }
    temp = head;
    mid = count/2;

    for(int i = 0 ; i < mid ; i++){
        int h = s.top();
        s.pop();
        if(temp->val != h) {
            return false;
        }
        temp = temp->next;
    }
  return true;
}
