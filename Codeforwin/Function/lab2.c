int set (int var , int bit )
{
 int result  ;
 result = var | (1 << bit);
 return result ;
}


int clear (int var , int bit )
{
	int result  ;
    result = var &~(1<<bit);
    return result ;
	
}


int toggle (int var , int bit )
{
	int result  ;
    result = var ^ (1<<bit);
    return result ;
	
}
