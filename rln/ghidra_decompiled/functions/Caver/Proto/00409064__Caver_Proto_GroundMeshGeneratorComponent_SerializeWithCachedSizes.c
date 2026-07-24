/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00409064
 * Function: Caver::Proto::GroundMeshGeneratorComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(GroundMeshGeneratorComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshGeneratorComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::GroundMeshGeneratorComponent::SerializeWithCachedSizes
          (GroundMeshGeneratorComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x38);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x1c),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(7,*(int *)(this + 0x24),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(8,*(float *)(this + 0x28),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(9,*(float *)(this + 0x2c),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(10,*(float *)(this + 0x30),param_1);
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(0xb,*(float *)(this + 0x34),param_1);
    return;
  }
  return;
}


