/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040d37c
 * Function: Caver::Proto::DamageComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(DamageComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::DamageComponent::SerializeWithCachedSizes
          (DamageComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x2c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(2,*(int *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(3,*(int *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(4,(bool)this[0x1c],param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(7,*(float *)(this + 0x24),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(8,(bool)this[0x28],param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(9,(bool)this[0x29],param_1);
    return;
  }
  return;
}


