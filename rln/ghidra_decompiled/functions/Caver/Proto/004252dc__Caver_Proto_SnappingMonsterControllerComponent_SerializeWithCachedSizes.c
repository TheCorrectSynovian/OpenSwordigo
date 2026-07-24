/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004252dc
 * Function: Caver::Proto::SnappingMonsterControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SnappingMonsterControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SnappingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SnappingMonsterControllerComponent::SerializeWithCachedSizes
          (SnappingMonsterControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x1c),param_1);
    return;
  }
  return;
}


