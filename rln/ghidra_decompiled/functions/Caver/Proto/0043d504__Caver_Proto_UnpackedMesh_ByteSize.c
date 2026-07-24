/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043d504
 * Function: Caver::Proto::UnpackedMesh::ByteSize
 * Signature: undefined __thiscall ByteSize(UnpackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::ByteSize() const */

void __thiscall Caver::Proto::UnpackedMesh::ByteSize(UnpackedMesh *this)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* try { // try from 0043d50c to 0053d50f has its CatchHandler @ 0043d554 */
                    /* try { // try from 0043d510 to 0053d567 has its CatchHandler @ 0043d4bc */
  if (((byte)this[0x78] >> 3 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    plVar3 = *(long **)(this + 0x70);
    uVar2 = (uint)*(undefined8 *)(*plVar3 + -0x18);
    if (uVar2 < 0x80) {
      iVar1 = 1;
    }
    else {
      iVar1 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      uVar2 = (uint)*(undefined8 *)(*plVar3 + -0x18);
    }
                    /* catch() { ... } // from try @ 0043d50c with catch @ 0043d554 */
    iVar1 = iVar1 + uVar2 + 1;
  }
                    /* try { // try from 0043d568 to 0053d5b7 has its CatchHandler @ 0043d568
                       catch() { ... } // from try @ 0043d568 with catch @ 0043d568
                       catch() { ... } // from try @ 0043d604 with catch @ 0043d568
                       catch() { ... } // from try @ 0043d698 with catch @ 0043d568 */
  *(int *)(this + 8) =
       (*(int *)(this + 0x38) + *(int *)(this + 0x18) + *(int *)(this + 0x58)) * 5 + iVar1;
  return;
}


