/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041954c
 * Function: Caver::Proto::BreakableObjectComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::BreakableObjectComponent::ByteSize() const */

int __thiscall Caver::Proto::BreakableObjectComponent::ByteSize(BreakableObjectComponent *this)

{
  BreakableObjectComponent *pBVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(this + 0x20);
  if ((uVar3 & 0xff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uVar3 & 1) * 2;
    if ((uVar3 >> 1 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x10);
      if ((int)uVar2 < 0) {
        iVar5 = iVar5 + 0xb;
                    /* catch() { ... } // from try @ 0041833c with catch @ 004195cc */
      }
      else {
                    /* catch() { ... } // from try @ 00418360 with catch @ 00419594 */
        if (uVar2 < 0x80) {
          iVar5 = iVar5 + 2;
        }
        else {
          iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
          uVar3 = *(uint *)(this + 0x20);
          iVar5 = iVar4 + 1 + iVar5;
        }
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x14);
      if ((int)uVar2 < 0) {
        iVar5 = iVar5 + 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar5 = iVar5 + 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar3 = *(uint *)(this + 0x20);
        iVar5 = iVar4 + 1 + iVar5;
      }
    }
    if ((uVar3 >> 3 & 1) != 0) {
      pBVar1 = *(BreakableObjectComponent **)PTR_default_instance__007e6f48;
      if (*(long *)(this + 0x18) != 0) {
        pBVar1 = this;
      }
                    /* catch() { ... } // from try @ 004182b4 with catch @ 0041962c */
      uVar3 = Program::ByteSize(*(Program **)(pBVar1 + 0x18));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      iVar5 = iVar5 + uVar3 + iVar4 + 1;
    }
  }
  *(int *)(this + 8) = iVar5;
                    /* catch() { ... } // from try @ 00418290 with catch @ 00419664 */
                    /* catch() { ... } // from try @ 00418234 with catch @ 00419668 */
  return iVar5;
}


