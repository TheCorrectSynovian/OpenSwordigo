/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402664
 * Function: Caver::Proto::Scene::Swap
 * Signature: undefined __thiscall Swap(Scene * this, Scene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::Swap(Caver::Proto::Scene*) */

void __thiscall Caver::Proto::Scene::Swap(Scene *this,Scene *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x10),(RepeatedPtrFieldBase *)(param_1 + 0x10));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x48),(RepeatedPtrFieldBase *)(param_1 + 0x48));
    uVar2 = *(undefined8 *)(this + 0x80);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x88);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x90);
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x98);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


