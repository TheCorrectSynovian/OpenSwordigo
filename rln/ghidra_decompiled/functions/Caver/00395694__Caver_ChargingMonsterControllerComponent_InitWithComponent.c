/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395694
 * Function: Caver::ChargingMonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ChargingMonsterControllerComponent * this, ChargingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::InitWithComponent(Caver::ChargingMonsterControllerComponent
   const*) */

void __thiscall
Caver::ChargingMonsterControllerComponent::InitWithComponent
          (ChargingMonsterControllerComponent *this,ChargingMonsterControllerComponent *param_1)

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
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (*(int *)(this + 0xf0) != *(int *)(param_1 + 0xf0)) {
    plVar2 = *(long **)(this + 0xf8);
    *(int *)(this + 0xf0) = *(int *)(param_1 + 0xf0);
    *(undefined8 *)(this + 0xf8) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (*(int *)(this + 0x108) != *(int *)(param_1 + 0x108)) {
    plVar2 = *(long **)(this + 0x110);
    *(int *)(this + 0x108) = *(int *)(param_1 + 0x108);
    *(undefined8 *)(this + 0x110) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined8 *)(this + 0x128) = *(undefined8 *)(param_1 + 0x128);
  return;
}


