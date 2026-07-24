/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416074
 * Function: Caver::Proto::PressureTriggerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(PressureTriggerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::PressureTriggerComponent::SerializeWithCachedSizes
          (PressureTriggerComponent *this,CodedOutputStream *param_1)

{
  PressureTriggerComponent *pPVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x28);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(1,*(float *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pPVar1 = *(PressureTriggerComponent **)PTR_default_instance__007e4948;
    if (*(long *)(this + 0x18) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pPVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pPVar1 = *(PressureTriggerComponent **)PTR_default_instance__007e4948;
    if (*(long *)(this + 0x20) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pPVar1 + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 1 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(4,(bool)this[0x10],param_1);
  return;
}


