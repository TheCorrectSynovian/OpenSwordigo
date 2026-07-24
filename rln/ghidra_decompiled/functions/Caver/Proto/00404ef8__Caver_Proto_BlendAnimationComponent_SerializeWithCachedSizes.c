/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404ef8
 * Function: Caver::Proto::BlendAnimationComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(BlendAnimationComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BlendAnimationComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::BlendAnimationComponent::SerializeWithCachedSizes
          (BlendAnimationComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x18),param_1);
  return;
}


