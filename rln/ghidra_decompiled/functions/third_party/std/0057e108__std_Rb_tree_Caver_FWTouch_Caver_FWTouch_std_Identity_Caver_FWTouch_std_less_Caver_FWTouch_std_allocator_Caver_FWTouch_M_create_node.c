/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e108
 * Function: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>> * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::FWTouch, Caver::FWTouch, std::_Identity<Caver::FWTouch>,
   std::less<Caver::FWTouch>, std::allocator<Caver::FWTouch> >::_M_create_node(Caver::FWTouch
   const&) */

void * __thiscall
std::
_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
::_M_create_node(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                 *this,FWTouch *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  Caver::FWTouch::FWTouch((FWTouch *)((long)pvVar1 + 0x20),param_1);
  return pvVar1;
}


