/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031668c
 * Function: Caver::CollisionPairSet::RegisterCollision
 * Signature: undefined __thiscall RegisterCollision(CollisionPairSet * this, CollisionShapeComponent * param_1, CollisionShapeComponent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionPairSet::RegisterCollision(Caver::CollisionShapeComponent*,
   Caver::CollisionShapeComponent*) */

bool __thiscall
Caver::CollisionPairSet::RegisterCollision
          (CollisionPairSet *this,CollisionShapeComponent *param_1,CollisionShapeComponent *param_2)

{
  int iVar1;
  long lVar2;
  CollisionShapeComponent *pCVar3;
  bool bVar4;
  CollisionShapeComponent *pCVar5;
  undefined1 auVar6 [16];
  CollisionShapeComponent *local_60;
  CollisionShapeComponent *local_58;
  undefined1 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 != (CollisionShapeComponent *)0x0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  if (param_2 != (CollisionShapeComponent *)0x0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (param_1 < param_2) {
    if (param_1 != (CollisionShapeComponent *)0x0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    pCVar3 = param_1;
    if (param_2 == (CollisionShapeComponent *)0x0) {
      pCVar5 = (CollisionShapeComponent *)0x0;
      goto joined_r0x00316968;
    }
    iVar1 = *(int *)(param_2 + 8);
    pCVar5 = param_2;
  }
  else {
    if (param_1 != (CollisionShapeComponent *)0x0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    pCVar5 = param_1;
    if (param_2 == (CollisionShapeComponent *)0x0) {
      pCVar3 = (CollisionShapeComponent *)0x0;
      goto joined_r0x00316968;
    }
    iVar1 = *(int *)(param_2 + 8);
    pCVar3 = param_2;
  }
  if (iVar1 == 0) {
    (**(code **)(*(long *)param_2 + 8))(param_2);
  }
joined_r0x00316968:
  if ((param_1 != (CollisionShapeComponent *)0x0) &&
     (iVar1 = *(int *)(param_1 + 8), *(int *)(param_1 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)param_1 + 8))(param_1);
  }
  if (pCVar3 != (CollisionShapeComponent *)0x0) {
    *(int *)(pCVar3 + 8) = *(int *)(pCVar3 + 8) + 1;
  }
  if (pCVar5 != (CollisionShapeComponent *)0x0) {
    *(int *)(pCVar5 + 8) = *(int *)(pCVar5 + 8) + 1;
  }
  if (pCVar3 != (CollisionShapeComponent *)0x0) {
    *(int *)(pCVar3 + 8) = *(int *)(pCVar3 + 8) + 1;
  }
  if (pCVar5 != (CollisionShapeComponent *)0x0) {
    *(int *)(pCVar5 + 8) = *(int *)(pCVar5 + 8) + 1;
  }
  if (pCVar3 != (CollisionShapeComponent *)0x0) {
    *(int *)(pCVar3 + 8) = *(int *)(pCVar3 + 8) + 1;
  }
  if (pCVar5 != (CollisionShapeComponent *)0x0) {
    *(int *)(pCVar5 + 8) = *(int *)(pCVar5 + 8) + 1;
  }
  local_50 = 1;
  local_60 = pCVar3;
  local_58 = pCVar5;
  auVar6 = std::
           _Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
           ::_M_insert_unique((_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
                               *)this,(pair *)&local_60);
  if ((local_58 != (CollisionShapeComponent *)0x0) &&
     (iVar1 = *(int *)(local_58 + 8), *(int *)(local_58 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)local_58 + 8))();
  }
  if ((local_60 != (CollisionShapeComponent *)0x0) &&
     (iVar1 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)local_60 + 8))();
  }
  if ((pCVar5 != (CollisionShapeComponent *)0x0) &&
     (iVar1 = *(int *)(pCVar5 + 8), *(int *)(pCVar5 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)pCVar5 + 8))(pCVar5);
  }
  if ((pCVar3 != (CollisionShapeComponent *)0x0) &&
     (iVar1 = *(int *)(pCVar3 + 8), *(int *)(pCVar3 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)pCVar3 + 8))(pCVar3);
  }
  if ((pCVar5 != (CollisionShapeComponent *)0x0) &&
     (iVar1 = *(int *)(pCVar5 + 8), *(int *)(pCVar5 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)pCVar5 + 8))(pCVar5);
  }
  if ((pCVar3 != (CollisionShapeComponent *)0x0) &&
     (iVar1 = *(int *)(pCVar3 + 8), *(int *)(pCVar3 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)pCVar3 + 8))(pCVar3);
  }
  bVar4 = (auVar6._8_8_ & 0xff) == 0;
  if (bVar4) {
    *(undefined1 *)(auVar6._0_8_ + 0x30) = 1;
  }
  if ((pCVar5 != (CollisionShapeComponent *)0x0) &&
     (iVar1 = *(int *)(pCVar5 + 8), *(int *)(pCVar5 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)pCVar5 + 8))(pCVar5);
  }
  if ((pCVar3 != (CollisionShapeComponent *)0x0) &&
     (iVar1 = *(int *)(pCVar3 + 8), *(int *)(pCVar3 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)pCVar3 + 8))(pCVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return !bVar4;
}


