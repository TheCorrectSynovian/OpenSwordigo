/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004df898
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, unsigned long>,
   std::_Select1st<std::pair<std::string const, unsigned long> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, unsigned long> >
   >::_M_create_node(std::pair<std::string const, unsigned long> const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
                    /* try { // try from 004df8b0 to 005df8cb has its CatchHandler @ 004dfaec */
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
                    /* try { // try from 004df8cc to 005dfaef has its CatchHandler @ 004df868 */
  *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(param_1 + 8);
  return pvVar1;
}


