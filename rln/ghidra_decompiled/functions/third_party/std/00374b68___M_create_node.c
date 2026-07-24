/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00374b68
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, int>,
   std::_Select1st<std::pair<std::string const, int> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, int> > >::_M_create_node(std::pair<std::string const,
   int> const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
  *(undefined4 *)((long)pvVar1 + 0x28) = *(undefined4 *)(param_1 + 8);
  return pvVar1;
}


