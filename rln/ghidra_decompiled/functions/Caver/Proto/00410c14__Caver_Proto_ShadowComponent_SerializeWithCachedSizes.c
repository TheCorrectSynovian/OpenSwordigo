/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410c14
 * Function: Caver::Proto::ShadowComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ShadowComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ShadowComponent::SerializeWithCachedSizes
          (ShadowComponent *this,CodedOutputStream *param_1)

{
  ShadowComponent *pSVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(1,*(float *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pSVar1 = *(ShadowComponent **)PTR_default_instance__007e5258;
    if (*(long *)(this + 0x18) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pSVar1 + 0x18),param_1);
    return;
  }
  return;
}


