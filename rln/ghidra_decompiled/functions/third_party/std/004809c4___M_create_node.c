/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004809c4
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, double>,
   std::_Select1st<std::pair<std::string const, double> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, double> > >::_M_create_node(std::pair<std::string
   const, double> const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
  *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(param_1 + 8);
  return pvVar1;
}


