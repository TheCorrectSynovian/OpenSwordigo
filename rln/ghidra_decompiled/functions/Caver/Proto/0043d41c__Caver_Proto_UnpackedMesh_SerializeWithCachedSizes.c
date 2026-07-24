/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043d41c
 * Function: Caver::Proto::UnpackedMesh::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(UnpackedMesh * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::UnpackedMesh::SerializeWithCachedSizes(UnpackedMesh *this,CodedOutputStream *param_1)

{
  long lVar1;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteFloat
                (1,*(float *)(*(long *)(this + 0x10) + lVar1 * 4),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x18));
  }
  if (0 < *(int *)(this + 0x38)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteFloat
                (2,*(float *)(*(long *)(this + 0x30) + lVar1 * 4),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x38));
  }
  if (0 < *(int *)(this + 0x58)) {
    lVar1 = 0;
    do {
                    /* try { // try from 0043d4bc to 0053d50b has its CatchHandler @ 0043d4bc
                       catch() { ... } // from try @ 0043d4bc with catch @ 0043d4bc
                       catch() { ... } // from try @ 0043d510 with catch @ 0043d4bc */
      google::protobuf::internal::WireFormatLite::WriteFloat
                (3,*(float *)(*(long *)(this + 0x50) + lVar1 * 4),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x58));
  }
  if (((byte)this[0x78] >> 3 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBytes(4,*(string **)(this + 0x70),param_1);
  return;
}


