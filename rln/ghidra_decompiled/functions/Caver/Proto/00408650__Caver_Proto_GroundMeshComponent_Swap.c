/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00408650
 * Function: Caver::Proto::GroundMeshComponent::Swap
 * Signature: undefined __thiscall Swap(GroundMeshComponent * this, GroundMeshComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::Swap(Caver::Proto::GroundMeshComponent*) */

void __thiscall
Caver::Proto::GroundMeshComponent::Swap(GroundMeshComponent *this,GroundMeshComponent *param_1)

{
  undefined4 uVar1;
  GroundMeshComponent GVar2;
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
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x60),(RepeatedPtrFieldBase *)(param_1 + 0x60));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x98),(RepeatedPtrFieldBase *)(param_1 + 0x98));
    uVar3 = *(undefined8 *)(this + 0xd0);
    *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = uVar3;
    GVar2 = this[0xd8];
    this[0xd8] = param_1[0xd8];
    param_1[0xd8] = GVar2;
    uVar1 = *(undefined4 *)(this + 0xdc);
    *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0xdc) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


