/*------------------------------------------------------------------------------------


9.5´ğ£º
typedef vector<int>::iterator iter;
iter find_element(iter first, iter last, int i)
{
assert(first<=last);
for (iter it = first; it != last; ++it)
{
if (i == *it)
return it;
}
}





--------------------------------------------------------------------------------------*/