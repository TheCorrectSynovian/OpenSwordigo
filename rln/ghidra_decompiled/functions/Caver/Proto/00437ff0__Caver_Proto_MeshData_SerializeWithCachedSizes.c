/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437ff0
 * Function: Caver::Proto::MeshData::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MeshData * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshData::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::MeshData::SerializeWithCachedSizes(MeshData *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
                    /* catch() { ... } // from try @ 004376b8 with catch @ 00438044 */
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return;
  }
                    /* catch() { ... } // from try @ 0043760c with catch @ 0043807c */
  google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x18),param_1);
  return;
}


