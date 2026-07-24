/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bc058
 * Function: Caver::GroundMeshGeneratorComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(GroundMeshGeneratorComponent * this, GroundMeshGeneratorComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::InitWithComponent(Caver::GroundMeshGeneratorComponent
   const*) */

void __thiscall
Caver::GroundMeshGeneratorComponent::InitWithComponent
          (GroundMeshGeneratorComponent *this,GroundMeshGeneratorComponent *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  if (*(int *)(this + 0x78) != *(int *)(param_1 + 0x78)) {
    plVar2 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(param_1 + 0x78);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (*(int *)(this + 0x90) != *(int *)(param_1 + 0x90)) {
    plVar2 = *(long **)(this + 0x98);
    *(int *)(this + 0x90) = *(int *)(param_1 + 0x90);
    *(undefined8 *)(this + 0x98) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (*(int *)(this + 0xa8) != *(int *)(param_1 + 0xa8)) {
    plVar2 = *(long **)(this + 0xb0);
    *(int *)(this + 0xa8) = *(int *)(param_1 + 0xa8);
    *(undefined8 *)(this + 0xb0) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (*(int *)(this + 0xc0) != *(int *)(param_1 + 0xc0)) {
    plVar2 = *(long **)(this + 200);
    *(int *)(this + 0xc0) = *(int *)(param_1 + 0xc0);
    *(undefined8 *)(this + 200) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 0xd0) = uVar3;
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  return;
}


