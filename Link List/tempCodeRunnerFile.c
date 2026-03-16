if(head != NULL && head->next != NULL && head->next->next != NULL){
        head->next->next->next = head;  
    }