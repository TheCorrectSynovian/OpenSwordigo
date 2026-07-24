/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042635c
 * Function: Caver::Proto::AttackComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::AttackComponent::ByteSize() const */

void __thiscall Caver::Proto::AttackComponent::ByteSize(AttackComponent *this)

{
  AttackComponent *pAVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + 0x48);
  if ((uVar5 & 0xff) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar5 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      uVar3 = *(uint *)(this + 0xc);
      if ((int)uVar3 < 0) {
        iVar2 = 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar2 = 2;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x48);
        iVar2 = iVar2 + 1;
      }
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar3 = *(uint *)(this + 0x10);
      if ((int)uVar3 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
                    /* catch() { ... } // from try @ 004262f4 with catch @ 004263e4 */
        uVar5 = *(uint *)(this + 0x48);
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar4 + iVar2;
    }
                    /* try { // try from 004263f0 to 005263f7 has its CatchHandler @ 004263fc */
    if ((uVar5 >> 2 & 1) != 0) {
      uVar3 = *(uint *)(this + 0x14);
      if ((int)uVar3 < 0) {
        iVar2 = iVar2 + 0xb;
                    /* try { // try from 00426444 to 005264bb has its CatchHandler @ 004264dc */
      }
      else if (uVar3 < 0x80) {
                    /* catch() { ... } // from try @ 00426330 with catch @ 00426410 */
        iVar2 = iVar2 + 2;
                    /* catch() { ... } // from try @ 00426300 with catch @ 00426418 */
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x48);
        iVar2 = iVar4 + 1 + iVar2;
      }
    }
    if ((uVar5 >> 3 & 1) != 0) {
      uVar3 = *(uint *)(this + 0x18);
      if ((int)uVar3 < 0) {
        iVar2 = iVar2 + 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar2 = iVar2 + 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x48);
        iVar2 = iVar4 + 1 + iVar2;
      }
    }
    if ((uVar5 >> 4 & 1) != 0) {
      pAVar1 = *(AttackComponent **)PTR_default_instance__007e7ad0;
      if (*(long *)(this + 0x20) != 0) {
        pAVar1 = this;
      }
      uVar3 = Program::ByteSize(*(Program **)(pAVar1 + 0x20));
                    /* try { // try from 004264bc to 005264df has its CatchHandler @ 0042628c */
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = *(uint *)(this + 0x48);
                    /* catch() { ... } // from try @ 00426444 with catch @ 004264dc */
                    /* catch() { ... } // from try @ 004264f4 with catch @ 004264e0 */
      iVar2 = iVar2 + uVar3 + iVar4 + 1;
    }
                    /* try { // try from 004264f0 to 005264f3 has its CatchHandler @ 00426504 */
    if ((uVar5 & 0x20) != 0) {
      iVar2 = iVar2 + 5;
    }
                    /* try { // try from 004264f4 to 00526517 has its CatchHandler @ 004264e0 */
    if ((uVar5 & 0x40) != 0) {
      iVar2 = iVar2 + 5;
    }
                    /* catch() { ... } // from try @ 004264f0 with catch @ 00426504 */
    if ((uVar5 & 0x80) != 0) {
      iVar2 = iVar2 + 5;
    }
  }
  if ((uVar5 & 0xff00) != 0) {
    if ((uVar5 & 0x100) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar5 & 0x200) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar5 & 0x400) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar5 & 0x800) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar5 & 0x1000) != 0) {
      iVar2 = iVar2 + 5;
    }
  }
  *(int *)(this + 8) = iVar2;
  return;
}


