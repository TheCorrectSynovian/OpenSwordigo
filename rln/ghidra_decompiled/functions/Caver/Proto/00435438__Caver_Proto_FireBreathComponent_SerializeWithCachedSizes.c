/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435438
 * Function: Caver::Proto::FireBreathComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(FireBreathComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::FireBreathComponent::SerializeWithCachedSizes
          (FireBreathComponent *this,CodedOutputStream *param_1)

{
  FireBreathComponent *pFVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pFVar1 = *(FireBreathComponent **)PTR_default_instance__007e77e8;
    if (*(long *)(this + 0x18) != 0) {
      pFVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pFVar1 + 0x18),param_1);
    return;
  }
  return;
}


