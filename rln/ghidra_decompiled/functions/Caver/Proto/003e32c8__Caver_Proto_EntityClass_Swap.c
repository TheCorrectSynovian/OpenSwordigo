/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e32c8
 * Function: Caver::Proto::EntityClass::Swap
 * Signature: undefined __thiscall Swap(EntityClass * this, EntityClass * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityClass::Swap(Caver::Proto::EntityClass*) */

void __thiscall Caver::Proto::EntityClass::Swap(EntityClass *this,EntityClass *param_1)

{
  undefined4 uVar1;
  EntityClass EVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    EVar2 = this[0x20];
    this[0x20] = param_1[0x20];
    param_1[0x20] = EVar2;
    EVar2 = this[0x21];
    this[0x21] = param_1[0x21];
    param_1[0x21] = EVar2;
    EVar2 = this[0x22];
    this[0x22] = param_1[0x22];
    param_1[0x22] = EVar2;
    EVar2 = this[0x23];
    this[0x23] = param_1[0x23];
    param_1[0x23] = EVar2;
    uVar1 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


