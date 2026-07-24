/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596c74
 * Function: std::_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<int, std::pair<int const, Caver::GUIControl::TargetAction>,
   std::_Select1st<std::pair<int const, Caver::GUIControl::TargetAction> >, std::less<int>,
   std::allocator<std::pair<int const, Caver::GUIControl::TargetAction> >
   >::_M_create_node(std::pair<int const, Caver::GUIControl::TargetAction> const&) */

void * __thiscall
std::
_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>
::_M_create_node(_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 0059633c with catch @ 00596c84 */
  pvVar1 = operator_new(0x50);
  *(undefined4 *)((long)pvVar1 + 0x20) = *(undefined4 *)param_1;
  *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 != 0) {
    *(ulong *)((long)pvVar1 + 0x30) = uVar2;
    if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 0059621c with catch @ 00596cb8 */
                    /* catch() { ... } // from try @ 005961c8 with catch @ 00596cbc */
      (**(code **)(uVar2 & 0xfffffffffffffffe))(param_1 + 0x18,(long)pvVar1 + 0x38,0);
    }
    else {
      *(undefined8 *)((long)pvVar1 + 0x48) = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)((long)pvVar1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)((long)pvVar1 + 0x38) = uVar3;
    }
  }
  return pvVar1;
}


