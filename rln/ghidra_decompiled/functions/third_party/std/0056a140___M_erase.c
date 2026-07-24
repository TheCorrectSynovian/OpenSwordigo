/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056a140
 * Function: std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::CollisionPair, std::pair<Caver::CollisionPair const, bool>,
   std::_Select1st<std::pair<Caver::CollisionPair const, bool> >, std::less<Caver::CollisionPair>,
   std::allocator<std::pair<Caver::CollisionPair const, bool> >
   >::_M_erase(std::_Rb_tree_node<std::pair<Caver::CollisionPair const, bool> >*) */

void __thiscall
std::
_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
::_M_erase(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
           *this,_Rb_tree_node *param_1)

{
  int iVar1;
  long *plVar2;
  _Rb_tree_node *p_Var3;
  
                    /* catch() { ... } // from try @ 00569b88 with catch @ 0056a158 */
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    plVar2 = *(long **)(param_1 + 0x28);
    p_Var3 = *(_Rb_tree_node **)(param_1 + 0x10);
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = *(long **)(param_1 + 0x20);
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
                    /* catch() { ... } // from try @ 00569c24 with catch @ 0056a1bc */
    operator_delete(param_1);
    param_1 = p_Var3;
  }
  return;
}


