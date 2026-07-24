/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e305c
 * Function: Caver::Proto::EntityClass::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(EntityClass * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityClass::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::EntityClass::SerializeWithCachedSizes(EntityClass *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x2c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(3,(bool)this[0x20],param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(4,(bool)this[0x21],param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(5,(bool)this[0x22],param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(6,(bool)this[0x23],param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(7,*(float *)(this + 0x24),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 7 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(8,*(float *)(this + 0x28),param_1);
  return;
}


