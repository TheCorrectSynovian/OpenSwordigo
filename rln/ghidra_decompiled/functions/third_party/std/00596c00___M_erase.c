/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596c00
 * Function: std::_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<int, std::pair<int const, Caver::GUIControl::TargetAction>,
   std::_Select1st<std::pair<int const, Caver::GUIControl::TargetAction> >, std::less<int>,
   std::allocator<std::pair<int const, Caver::GUIControl::TargetAction> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, Caver::GUIControl::TargetAction> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>
           *this,_Rb_tree_node *param_1)

{
  ulong uVar1;
  _Rb_tree_node *p_Var2;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    uVar1 = *(ulong *)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 005963fc with catch @ 00596c30 */
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 005963a8 with catch @ 00596c34 */
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) &&
       (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(param_1 + 0x38,param_1 + 0x38,2);
    }
    operator_delete(param_1);
    param_1 = p_Var2;
  }
  return;
}


