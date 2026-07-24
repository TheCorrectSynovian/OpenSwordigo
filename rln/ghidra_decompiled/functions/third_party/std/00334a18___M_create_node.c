/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00334a18
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, std::string >,
   std::_Select1st<std::pair<std::string const, std::string > >, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::string > >
   >::_M_create_node(std::pair<std::string const, std::string > const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 *this,pair *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x30);
  FUN_0066a528((long)pvVar2 + 0x20,param_1);
  FUN_0066a528((long)pvVar2 + 0x28,param_1 + 8);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


