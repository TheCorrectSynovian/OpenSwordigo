/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042fdbc
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ItemDropComponent_ItemDropEntry * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::SerializeWithCachedSizes
          (ItemDropComponent_ItemDropEntry *this,CodedOutputStream *param_1)

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
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x24),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x28),param_1);
    return;
  }
  return;
}


