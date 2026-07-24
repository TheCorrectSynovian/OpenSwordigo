/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00409408
 * Function: Caver::Proto::GroundMeshGeneratorComponent::Swap
 * Signature: undefined __thiscall Swap(GroundMeshGeneratorComponent * this, GroundMeshGeneratorComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshGeneratorComponent::Swap(Caver::Proto::GroundMeshGeneratorComponent*) */

void __thiscall
Caver::Proto::GroundMeshGeneratorComponent::Swap
          (GroundMeshGeneratorComponent *this,GroundMeshGeneratorComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x1c);
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x1c) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x24);
    *(undefined8 *)(this + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x24) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x34);
    *(undefined8 *)(this + 0x34) = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x34) = uVar2;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


