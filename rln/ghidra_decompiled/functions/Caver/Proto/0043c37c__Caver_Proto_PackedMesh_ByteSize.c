/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c37c
 * Function: Caver::Proto::PackedMesh::ByteSize
 * Signature: undefined __thiscall ByteSize(PackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::ByteSize() const */

void __thiscall Caver::Proto::PackedMesh::ByteSize(PackedMesh *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  
  if (((byte)this[0x90] >> 3 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    plVar4 = *(long **)(this + 0x88);
    uVar3 = (uint)*(undefined8 *)(*plVar4 + -0x18);
    if (uVar3 < 0x80) {
      iVar1 = 1;
    }
    else {
      iVar1 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      uVar3 = (uint)*(undefined8 *)(*plVar4 + -0x18);
    }
    iVar1 = iVar1 + uVar3 + 1;
  }
  uVar3 = *(int *)(this + 0x18) * 4;
  if (0 < *(int *)(this + 0x18)) {
    if (uVar3 < 0x80) {
      iVar2 = 2;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar2 + iVar1;
  }
  *(uint *)(this + 0x30) = uVar3;
  iVar1 = iVar1 + uVar3;
  uVar3 = *(int *)(this + 0x40) * 4;
  if (0 < *(int *)(this + 0x40)) {
    if (uVar3 < 0x80) {
      iVar2 = 2;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar2 + iVar1;
  }
  *(uint *)(this + 0x58) = uVar3;
                    /* catch() { ... } // from try @ 0043c330 with catch @ 0043c448 */
  iVar1 = iVar1 + uVar3;
  uVar3 = *(int *)(this + 0x68) * 4;
  if (0 < *(int *)(this + 0x68)) {
    if (uVar3 < 0x80) {
      iVar2 = 2;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar2 + iVar1;
  }
  *(uint *)(this + 0x80) = uVar3;
  *(uint *)(this + 8) = iVar1 + uVar3;
  return;
}


