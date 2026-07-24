/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00316ed0
 * Function: std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>::_M_erase_aux
 * Signature: undefined __thiscall _M_erase_aux(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>> * this, _Rb_tree_const_iterator param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::CollisionPair, std::pair<Caver::CollisionPair const, bool>,
   std::_Select1st<std::pair<Caver::CollisionPair const, bool> >, std::less<Caver::CollisionPair>,
   std::allocator<std::pair<Caver::CollisionPair const, bool> >
   >::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const, bool> >) */

void __thiscall
std::
_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
::_M_erase_aux(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
               *this,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)FUN_0064ca60(param_2,this + 8);
  plVar3 = *(long **)((long)pvVar2 + 0x28);
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)((long)pvVar2 + 0x20);
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  operator_delete(pvVar2);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
  return;
}


