/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00316c88
 * Function: Caver::CollisionPairSet::Purge
 * Signature: undefined __thiscall Purge(CollisionPairSet * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionPairSet::Purge() */

void __thiscall Caver::CollisionPairSet::Purge(CollisionPairSet *this)

{
  CollisionPairSet *pCVar1;
  long *plVar2;
  CollisionPairSet *pCVar3;
  
  pCVar1 = *(CollisionPairSet **)(this + 0x18);
  while (this + 8 != pCVar1) {
    if (pCVar1[0x30] == (CollisionPairSet)0x0) {
      plVar2 = *(long **)(pCVar1 + 0x20);
      if ((plVar2[5] != 0) && (*(long *)(*(long *)(pCVar1 + 0x28) + 0x28) != 0)) {
        (**(code **)(*plVar2 + 0xd0))(plVar2,8);
        (**(code **)(**(long **)(pCVar1 + 0x28) + 0xd0))
                  (*(long **)(pCVar1 + 0x28),8,*(undefined8 *)(pCVar1 + 0x20));
      }
      pCVar3 = (CollisionPairSet *)FUN_0064c640(pCVar1);
      std::
      _Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
      ::_M_erase_aux((_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
                      *)this,pCVar1);
      pCVar1 = pCVar3;
    }
    else {
      pCVar1[0x30] = (CollisionPairSet)0x0;
      pCVar1 = (CollisionPairSet *)FUN_0064c640(pCVar1);
    }
  }
  return;
}


