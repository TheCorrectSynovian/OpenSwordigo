/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004124b0
 * Function: Caver::Proto::CharAnimControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(CharAnimControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharAnimControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::CharAnimControllerComponent::SerializeWithCachedSizes
          (CharAnimControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x24);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(6,*(int *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(7,*(int *)(this + 0x1c),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(8,*(int *)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(9,*(int *)(this + 0x18),param_1);
  return;
}


