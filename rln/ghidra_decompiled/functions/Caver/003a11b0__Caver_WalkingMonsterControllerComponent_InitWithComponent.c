/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a11b0
 * Function: Caver::WalkingMonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(WalkingMonsterControllerComponent * this, WalkingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WalkingMonsterControllerComponent::InitWithComponent(Caver::WalkingMonsterControllerComponent
   const*) */

void __thiscall
Caver::WalkingMonsterControllerComponent::InitWithComponent
          (WalkingMonsterControllerComponent *this,WalkingMonsterControllerComponent *param_1)

{
  int iVar1;
  long *plVar2;
  
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this,(MonsterControllerComponent *)param_1);
  if (*(int *)(this + 0xd8) != *(int *)(param_1 + 0xd8)) {
    plVar2 = *(long **)(this + 0xe0);
    *(int *)(this + 0xd8) = *(int *)(param_1 + 0xd8);
    *(undefined8 *)(this + 0xe0) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x003a1214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


