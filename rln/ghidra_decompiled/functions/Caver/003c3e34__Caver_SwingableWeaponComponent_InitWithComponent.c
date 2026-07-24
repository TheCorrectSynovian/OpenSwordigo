/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c3e34
 * Function: Caver::SwingableWeaponComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(SwingableWeaponComponent * this, SwingableWeaponComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::InitWithComponent(Caver::SwingableWeaponComponent const*) */

void __thiscall
Caver::SwingableWeaponComponent::InitWithComponent
          (SwingableWeaponComponent *this,SwingableWeaponComponent *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  if (*(int *)(this + 0x80) != *(int *)(param_1 + 0x80)) {
    plVar2 = *(long **)(this + 0x88);
    *(int *)(this + 0x80) = *(int *)(param_1 + 0x80);
    *(undefined8 *)(this + 0x88) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0x19c) = *(undefined8 *)(param_1 + 0x19c);
  *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  uVar3 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(this + 0x1b0) = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(this + 0x1a8) = uVar3;
  *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  if (*(int *)(this + 0xd0) != *(int *)(param_1 + 0xd0)) {
    plVar2 = *(long **)(this + 0xd8);
    *(int *)(this + 0xd0) = *(int *)(param_1 + 0xd0);
    *(undefined8 *)(this + 0xd8) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  if (*(int *)(this + 0x118) != *(int *)(param_1 + 0x118)) {
    plVar2 = *(long **)(this + 0x120);
    *(int *)(this + 0x118) = *(int *)(param_1 + 0x118);
    *(undefined8 *)(this + 0x120) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  return;
}


