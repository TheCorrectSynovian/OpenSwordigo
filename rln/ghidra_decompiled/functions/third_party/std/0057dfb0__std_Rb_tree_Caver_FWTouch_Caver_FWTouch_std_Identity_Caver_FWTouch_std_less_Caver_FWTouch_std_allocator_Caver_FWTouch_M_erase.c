/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057dfb0
 * Function: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::FWTouch, Caver::FWTouch, std::_Identity<Caver::FWTouch>,
   std::less<Caver::FWTouch>, std::allocator<Caver::FWTouch>
   >::_M_erase(std::_Rb_tree_node<Caver::FWTouch>*) */

void __thiscall
std::
_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
::_M_erase(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
                    /* catch() { ... } // from try @ 0057dd7c with catch @ 0057dfcc */
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}


