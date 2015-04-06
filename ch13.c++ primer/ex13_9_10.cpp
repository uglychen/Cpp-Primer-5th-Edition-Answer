/*--------------------------------------------------------------------------------


13.9´ð£º
//  As with the copy constructor and the copy-assignment operator, for some classes,
//  the synthesized destructor is defined to disallow objects of the type from being
//  destroyed (¡ì 13.1.6, p. 508). Otherwise, the synthesized destructor has an empty
//  function body.
//

//  When no user-defined destructor, the compiler will define a synthesized version.



13.10´ð£º
//! What happens when a StrBlob object is destroyed? What about a StrBlobPtr?
//! When a StrBlobPter object is destroyed the object dynamicaly allocated will not be
//! freed.
//! When a StrBlob object destroyed, the use count of the dynamic object will decrement.
//! It wiil be freed if no shared_ptr to that dynamic object.


----------------------------------------------------------------------------------*/