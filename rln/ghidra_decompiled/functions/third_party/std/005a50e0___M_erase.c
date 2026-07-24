/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a50e0
 * Function: std::_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<unsigned long, std::pair<unsigned long const, Caver::FWTouch>,
   std::_Select1st<std::pair<unsigned long const, Caver::FWTouch> >, std::less<unsigned long>,
   std::allocator<std::pair<unsigned long const, Caver::FWTouch> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned long const, Caver::FWTouch> >*) */

void __thiscall
std::
_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
::_M_erase(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
    operator_delete(param_1);
    param_1 = p_Var1;
  }
                    /* try { // try from 005a511c to 006a5143 has its CatchHandler @ 005a5634 */
  return;
}


