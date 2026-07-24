/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bce3c
 * Function: std::_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>::_M_copy
 * Signature: undefined __thiscall _M_copy(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>> * this, _Rb_tree_node * param_1, _Rb_tree_node * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::IProfileManagerDelegate*, Caver::IProfileManagerDelegate*,
   std::_Identity<Caver::IProfileManagerDelegate*>, std::less<Caver::IProfileManagerDelegate*>,
   std::allocator<Caver::IProfileManagerDelegate*>
   >::_M_copy(std::_Rb_tree_node<Caver::IProfileManagerDelegate*> const*,
   std::_Rb_tree_node<Caver::IProfileManagerDelegate*>*) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
::_M_copy(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
          *this,_Rb_tree_node *param_1,_Rb_tree_node *param_2)

{
  _Rb_tree_node *p_Var1;
  undefined4 uVar2;
  _Rb_tree_node *p_Var3;
  undefined8 uVar4;
  _Rb_tree_node *p_Var5;
  undefined4 *puVar6;
  
                    /* catch() { ... } // from try @ 005bc5d4 with catch @ 005bce3c
                       catch() { ... } // from try @ 005bcd84 with catch @ 005bce3c */
                    /* catch() { ... } // from try @ 005bcd20 with catch @ 005bce48 */
                    /* catch() { ... } // from try @ 005bcb58 with catch @ 005bce50 */
                    /* catch() { ... } // from try @ 005bc818 with catch @ 005bce54 */
                    /* catch() { ... } // from try @ 005bc92c with catch @ 005bce5c */
                    /* catch() { ... } // from try @ 005bc910 with catch @ 005bce60 */
  p_Var3 = operator_new(0x28);
  p_Var1 = *(_Rb_tree_node **)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(p_Var3 + 0x18) = 0;
  *(undefined8 *)(p_Var3 + 0x20) = uVar4;
                    /* catch() { ... } // from try @ 005bcac0 with catch @ 005bce70 */
  uVar2 = *(undefined4 *)param_1;
  *(_Rb_tree_node **)(p_Var3 + 8) = param_2;
  *(undefined8 *)(p_Var3 + 0x10) = 0;
  *(undefined4 *)p_Var3 = uVar2;
  if (p_Var1 != (_Rb_tree_node *)0x0) {
                    /* catch() { ... } // from try @ 005bcab0 with catch @ 005bce80 */
    uVar4 = _M_copy(this,p_Var1,p_Var3);
                    /* catch() { ... } // from try @ 005bc8d8 with catch @ 005bce8c */
    *(undefined8 *)(p_Var3 + 0x18) = uVar4;
  }
                    /* catch() { ... } // from try @ 005bcac8 with catch @ 005bce90 */
  p_Var1 = p_Var3;
  for (puVar6 = *(undefined4 **)(param_1 + 0x10); puVar6 != (undefined4 *)0x0;
      puVar6 = *(undefined4 **)(puVar6 + 4)) {
    p_Var5 = operator_new(0x28);
    *(undefined8 *)(p_Var5 + 0x20) = *(undefined8 *)(puVar6 + 8);
    uVar2 = *puVar6;
    *(undefined8 *)(p_Var5 + 0x10) = 0;
    *(undefined8 *)(p_Var5 + 0x18) = 0;
    *(undefined4 *)p_Var5 = uVar2;
    *(_Rb_tree_node **)(p_Var1 + 0x10) = p_Var5;
    *(_Rb_tree_node **)(p_Var5 + 8) = p_Var1;
    if (*(_Rb_tree_node **)(puVar6 + 6) != (_Rb_tree_node *)0x0) {
      uVar4 = _M_copy(this,*(_Rb_tree_node **)(puVar6 + 6),p_Var5);
      *(undefined8 *)(p_Var5 + 0x18) = uVar4;
    }
    p_Var1 = p_Var5;
  }
  return p_Var3;
}


