 sample()
  {
   temp=head;
     if(temp == NULL)
	       printf(list empty);
		      else Printf(temp->data);
			        if(temp->next != NULL ) 
					    sample(temp->next->next);
						   printf(temp->data); 
						   }
