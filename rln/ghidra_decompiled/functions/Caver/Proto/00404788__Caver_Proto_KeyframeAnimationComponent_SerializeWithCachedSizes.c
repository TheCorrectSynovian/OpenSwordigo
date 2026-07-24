/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404788
 * Function: Caver::Proto::KeyframeAnimationComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(KeyframeAnimationComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::KeyframeAnimationComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::KeyframeAnimationComponent::SerializeWithCachedSizes
          (KeyframeAnimationComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(3,(bool)this[0x18],param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x1c),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(5,(bool)this[0x19],param_1);
    return;
  }
  return;
}


