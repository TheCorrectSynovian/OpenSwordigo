/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00400160
 * Function: Caver::Proto::SceneObject::Swap
 * Signature: undefined __thiscall Swap(SceneObject * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::Swap(Caver::Proto::SceneObject*) */

void __thiscall Caver::Proto::SceneObject::Swap(SceneObject *this,SceneObject *param_1)

{
  undefined4 uVar1;
  SceneObject SVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x20),(RepeatedPtrFieldBase *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    uVar1 = *(undefined4 *)(this + 100);
    *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 100) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x70);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    SVar2 = this[0x78];
    this[0x78] = param_1[0x78];
    param_1[0x78] = SVar2;
    uVar3 = *(undefined8 *)(this + 0x80);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x88);
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


