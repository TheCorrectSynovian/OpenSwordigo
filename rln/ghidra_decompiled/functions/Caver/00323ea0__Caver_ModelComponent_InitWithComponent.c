/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323ea0
 * Function: Caver::ModelComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ModelComponent * this, ModelComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::InitWithComponent(Caver::ModelComponent const*) */

void __thiscall
Caver::ModelComponent::InitWithComponent(ModelComponent *this,ModelComponent *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined8 *)(this + 0xc4) = *(undefined8 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  bVar1 = Vector3::IsClose((Vector3 *)(this + 0xc4),(Vector3 *)PTR_Vector3Zero_007e5988,DAT_00683734
                          );
  this[0xc0] = (ModelComponent)(~bVar1 & 1);
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  FUN_0066a6a8(this + 0x70,param_1 + 0x70);
  *(undefined4 *)(this + 0x13a) = *(undefined4 *)(param_1 + 0x13a);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xa0) = uVar2;
  this[0x9c] = param_1[0x9c];
  return;
}


