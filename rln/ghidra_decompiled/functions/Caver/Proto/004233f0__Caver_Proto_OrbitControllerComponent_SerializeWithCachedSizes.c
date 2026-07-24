/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004233f0
 * Function: Caver::Proto::OrbitControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(OrbitControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::OrbitControllerComponent::SerializeWithCachedSizes
          (OrbitControllerComponent *this,CodedOutputStream *param_1)

{
  OrbitControllerComponent *pOVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 1) != 0) {
    pOVar1 = *(OrbitControllerComponent **)PTR_default_instance__007e68f8;
    if (*(long *)(this + 0x10) != 0) {
      pOVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (1,*(MessageLite **)(pOVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x1c),param_1);
    return;
  }
  return;
}


