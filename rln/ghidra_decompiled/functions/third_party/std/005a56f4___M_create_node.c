/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a56f4
 * Function: std::_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<unsigned long, std::pair<unsigned long const, Caver::FWTouch>,
   std::_Select1st<std::pair<unsigned long const, Caver::FWTouch> >, std::less<unsigned long>,
   std::allocator<std::pair<unsigned long const, Caver::FWTouch> >
   >::_M_create_node(std::pair<unsigned long const, Caver::FWTouch> const&) */

void * __thiscall
std::
_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
::_M_create_node(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x50);
                    /* catch() { ... } // from try @ 005a52cc with catch @ 005a5710 */
  *(undefined8 *)((long)pvVar1 + 0x20) = *(undefined8 *)param_1;
  Caver::FWTouch::FWTouch((FWTouch *)((long)pvVar1 + 0x28),(FWTouch *)(param_1 + 8));
  return pvVar1;
}


