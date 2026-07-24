/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00439000
 * Function: Caver::Proto::MeshMaterial::Swap
 * Signature: undefined __thiscall Swap(MeshMaterial * this, MeshMaterial * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::Swap(Caver::Proto::MeshMaterial*) */

void __thiscall Caver::Proto::MeshMaterial::Swap(MeshMaterial *this,MeshMaterial *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


