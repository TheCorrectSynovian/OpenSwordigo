/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a1898
 * Function: Caver::WalkingMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(WalkingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WalkingMonsterControllerComponent::Clone() const */

WalkingMonsterControllerComponent * __thiscall
Caver::WalkingMonsterControllerComponent::Clone(WalkingMonsterControllerComponent *this)

{
  int iVar1;
  WalkingMonsterControllerComponent *this_00;
  long *plVar2;
  
  this_00 = operator_new(0xf0);
  WalkingMonsterControllerComponent(this_00);
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this_00,(MonsterControllerComponent *)this);
  if (*(int *)(this_00 + 0xd8) != *(int *)(this + 0xd8)) {
    plVar2 = *(long **)(this_00 + 0xe0);
    *(int *)(this_00 + 0xd8) = *(int *)(this + 0xd8);
    *(undefined8 *)(this_00 + 0xe0) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  return this_00;
}


