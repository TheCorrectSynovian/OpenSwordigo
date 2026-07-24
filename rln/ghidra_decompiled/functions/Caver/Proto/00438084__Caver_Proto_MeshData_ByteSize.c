/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00438084
 * Function: Caver::Proto::MeshData::ByteSize
 * Signature: undefined __thiscall ByteSize(MeshData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshData::ByteSize() const */

int __thiscall Caver::Proto::MeshData::ByteSize(MeshData *this)

{
  uint uVar1;
  MeshData MVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  MVar2 = this[0x1c];
  uVar5 = (uint)(byte)MVar2;
  if (MVar2 == (MeshData)0x0) {
    iVar3 = 0;
    goto LAB_00438180;
  }
  if (((byte)MVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x004380dc:
    if (((byte)MVar2 >> 1 & 1) != 0) {
LAB_004380a8:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar4 = 0xb;
      }
      else {
                    /* catch() { ... } // from try @ 00437694 with catch @ 004380b4 */
        if (uVar1 < 0x80) {
                    /* catch() { ... } // from try @ 004375e8 with catch @ 004380b8 */
          iVar4 = 2;
                    /* catch() { ... } // from try @ 0043758c with catch @ 004380bc
                       catch() { ... } // from try @ 00437664 with catch @ 004380bc */
        }
        else {
          iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
          uVar5 = *(uint *)(this + 0x1c);
          iVar4 = iVar4 + 1;
        }
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar3 = 0xb;
      goto joined_r0x004380dc;
    }
    if (uVar1 < 0x80) {
      iVar3 = 2;
      goto joined_r0x004380dc;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x1c);
    iVar3 = iVar3 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_004380a8;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x14);
    if ((int)uVar1 < 0) {
      iVar3 = iVar3 + 0xb;
    }
    else if (uVar1 < 0x80) {
      iVar3 = iVar3 + 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      uVar5 = *(uint *)(this + 0x1c);
      iVar3 = iVar4 + 1 + iVar3;
    }
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar5 = *(uint *)(this + 0x18);
    if ((int)uVar5 < 0) {
      iVar4 = 0xb;
    }
    else {
                    /* catch() { ... } // from try @ 00437508 with catch @ 00438118
                       catch() { ... } // from try @ 004375b8 with catch @ 00438118 */
      if (uVar5 < 0x80) {
        iVar4 = 2;
      }
      else {
                    /* catch() { ... } // from try @ 00437558 with catch @ 00438174 */
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        iVar4 = iVar4 + 1;
      }
    }
    iVar3 = iVar4 + iVar3;
  }
LAB_00438180:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


