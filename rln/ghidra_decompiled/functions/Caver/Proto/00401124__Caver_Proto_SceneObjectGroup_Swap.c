/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00401124
 * Function: Caver::Proto::SceneObjectGroup::Swap
 * Signature: undefined __thiscall Swap(SceneObjectGroup * this, SceneObjectGroup * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::Swap(Caver::Proto::SceneObjectGroup*) */

void __thiscall
Caver::Proto::SceneObjectGroup::Swap(SceneObjectGroup *this,SceneObjectGroup *param_1)

{
  undefined4 uVar1;
  SceneObjectGroup SVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x18),(RepeatedPtrFieldBase *)(param_1 + 0x18));
    SVar2 = this[0x50];
    this[0x50] = param_1[0x50];
    param_1[0x50] = SVar2;
    SVar2 = this[0x51];
    this[0x51] = param_1[0x51];
    param_1[0x51] = SVar2;
    SVar2 = this[0x52];
    this[0x52] = param_1[0x52];
    param_1[0x52] = SVar2;
    uVar3 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


