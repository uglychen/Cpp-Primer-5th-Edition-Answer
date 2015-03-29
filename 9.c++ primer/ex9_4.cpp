/*------------------------------------------------------------------------------------


9.4´ð£ºtypedef vector<int>::iterator iter;
bool find_element(iter first, iter last, int i)
{
assert(first<=last);
for (iter it = first; it != last; ++it)
{
if (i == *it)
return true;
}
return false;
}





--------------------------------------------------------------------------------------*/