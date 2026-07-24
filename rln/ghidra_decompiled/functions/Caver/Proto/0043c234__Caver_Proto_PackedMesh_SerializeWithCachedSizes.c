/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c234
 * Function: Caver::Proto::PackedMesh::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(PackedMesh * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::PackedMesh::SerializeWithCachedSizes(PackedMesh *this,CodedOutputStream *param_1)

{
  long lVar1;
  
                    /* try { // try from 0043c234 to 0053c2a3 has its CatchHandler @ 0043c1b0 */
  if (0 < *(int *)(this + 0x18)) {
    google::protobuf::io::CodedOutputStream::WriteVarint32(param_1,10);
    google::protobuf::io::CodedOutputStream::WriteVarint32(param_1,*(uint *)(this + 0x30));
    if (0 < *(int *)(this + 0x18)) {
      lVar1 = 0;
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043c204 with catch @ 0043c280
                        */
        google::protobuf::io::CodedOutputStream::WriteLittleEndian32
                  (param_1,*(uint *)(*(long *)(this + 0x10) + lVar1 * 4));
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(this + 0x18));
    }
  }
                    /* try { // try from 0043c2a4 to 0053c2ab has its CatchHandler @ 0043c2b4 */
  if (0 < *(int *)(this + 0x40)) {
                    /* try { // try from 0043c2ac to 0053c2b7 has its CatchHandler @ 0043c1b0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043c2a4 with catch @ 0043c2b4
                        */
    google::protobuf::io::CodedOutputStream::WriteVarint32(param_1,0x12);
                    /* catch() { ... } // from try @ 0043c36c with catch @ 0043c2b8 */
    google::protobuf::io::CodedOutputStream::WriteVarint32(param_1,*(uint *)(this + 0x58));
    if (0 < *(int *)(this + 0x40)) {
      lVar1 = 0;
      do {
                    /* try { // try from 0043c2e0 to 0053c2f3 has its CatchHandler @ 0043c518 */
        google::protobuf::io::CodedOutputStream::WriteLittleEndian32
                  (param_1,*(uint *)(*(long *)(this + 0x38) + lVar1 * 4));
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(this + 0x40));
    }
  }
  if (0 < *(int *)(this + 0x68)) {
                    /* try { // try from 0043c300 to 0053c30b has its CatchHandler @ 0043c4ac */
    google::protobuf::io::CodedOutputStream::WriteVarint32(param_1,0x1a);
    google::protobuf::io::CodedOutputStream::WriteVarint32(param_1,*(uint *)(this + 0x80));
    if (0 < *(int *)(this + 0x68)) {
      lVar1 = 0;
      do {
                    /* try { // try from 0043c330 to 0053c36b has its CatchHandler @ 0043c448 */
        google::protobuf::io::CodedOutputStream::WriteLittleEndian32
                  (param_1,*(uint *)(*(long *)(this + 0x60) + lVar1 * 4));
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(this + 0x68));
    }
  }
  if (((byte)this[0x90] >> 3 & 1) == 0) {
    return;
  }
                    /* try { // try from 0043c36c to 0053c51b has its CatchHandler @ 0043c2b8 */
  google::protobuf::internal::WireFormatLite::WriteBytes(4,*(string **)(this + 0x88),param_1);
  return;
}


