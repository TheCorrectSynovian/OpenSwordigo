/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00413ec8
 * Function: Caver::Proto::CharControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CharControllerComponent::ByteSize() const */

void __thiscall Caver::Proto::CharControllerComponent::ByteSize(CharControllerComponent *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  
  uVar5 = *(uint *)(this + 0x7c);
  if ((uVar5 & 0xff) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar5 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(this + 0xc);
      if ((int)uVar1 < 0) {
        iVar2 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar2 = 2;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
        iVar2 = iVar2 + 1;
      }
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar5 >> 2 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x14);
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
      }
                    /* try { // try from 0041402c to 00514067 has its CatchHandler @ 00414144 */
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar5 >> 3 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x18);
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar5 >> 4 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x1c);
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
                    /* catch() { ... } // from try @ 0041402c with catch @ 00414144 */
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar5 >> 5 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x20);
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar5 >> 6 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x24);
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar5 >> 7 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x28);
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
  }
  if ((uVar5 & 0xff00) != 0) {
    if ((uVar5 >> 8 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x2c);
      if ((int)uVar1 < 0) {
        iVar3 = 10;
                    /* try { // try from 00413ff8 to 00514003 has its CatchHandler @ 004141a8 */
      }
      else {
                    /* try { // try from 00413fd4 to 00513fe7 has its CatchHandler @ 00414214 */
        if (uVar1 < 0x80) {
          iVar3 = 1;
        }
        else {
          iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
          uVar5 = *(uint *)(this + 0x7c);
        }
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
                    /* try { // try from 00414068 to 00514217 has its CatchHandler @ 00413fa8 */
    if ((uVar5 >> 9 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x30);
      if ((int)uVar1 < 0) {
        iVar2 = iVar2 + 0xc;
      }
      else if (uVar1 < 0x80) {
        iVar2 = iVar2 + 3;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
        iVar2 = iVar3 + 2 + iVar2;
      }
    }
    if ((uVar5 >> 10 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x34);
      if ((int)uVar1 < 0) {
        iVar2 = iVar2 + 0xc;
      }
      else if (uVar1 < 0x80) {
        iVar2 = iVar2 + 3;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
        iVar2 = iVar3 + 2 + iVar2;
      }
    }
    if ((uVar5 >> 0xb & 1) != 0) {
      uVar1 = *(uint *)(this + 0x38);
      if ((int)uVar1 < 0) {
        iVar2 = iVar2 + 0xc;
      }
      else if (uVar1 < 0x80) {
        iVar2 = iVar2 + 3;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
        iVar2 = iVar3 + 2 + iVar2;
      }
    }
    if ((uVar5 >> 0xc & 1) != 0) {
      uVar1 = *(uint *)(this + 0x3c);
      if ((int)uVar1 < 0) {
        iVar2 = iVar2 + 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar2 = iVar2 + 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x7c);
                    /* catch() { ... } // from try @ 00413ff8 with catch @ 004141a8 */
        iVar2 = iVar3 + 1 + iVar2;
      }
    }
    if ((uVar5 >> 0xd & 1) != 0) {
      uVar1 = *(uint *)(this + 0x40);
      if ((int)uVar1 < 0) {
        iVar3 = 0xb;
      }
      else {
                    /* try { // try from 00413fa8 to 00513fd3 has its CatchHandler @ 00413fa8
                       catch() { ... } // from try @ 00413fa8 with catch @ 00413fa8
                       catch() { ... } // from try @ 00414068 with catch @ 00413fa8 */
        if (uVar1 < 0x80) {
          iVar3 = 2;
        }
        else {
          iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
          uVar5 = *(uint *)(this + 0x7c);
          iVar3 = iVar3 + 1;
        }
      }
      iVar2 = iVar3 + iVar2;
    }
    if ((uVar5 & 0x8000) != 0) {
      iVar2 = iVar2 + 5;
    }
  }
  if ((uVar5 & 0xff0000) != 0) {
    if ((uVar5 & 0x10000) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar5 & 0x20000) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar5 & 0x40000) != 0) {
      iVar2 = iVar2 + 6;
    }
    if ((uVar5 & 0x80000) != 0) {
      iVar2 = iVar2 + 6;
    }
  }
  iVar3 = *(int *)(this + 0x50);
  if (iVar3 < 1) {
    iVar6 = 0;
  }
  else {
    lVar7 = 0;
    iVar6 = 0;
    do {
      uVar5 = *(uint *)(*(long *)(this + 0x48) + lVar7 * 4);
      if ((int)uVar5 < 0) {
        iVar4 = 10;
      }
      else {
                    /* catch() { ... } // from try @ 00413fd4 with catch @ 00414214 */
        if (uVar5 < 0x80) {
          iVar4 = 1;
                    /* try { // try from 00414220 to 00514417 has its CatchHandler @ 00414220
                       catch() { ... } // from try @ 00414220 with catch @ 00414220
                       catch() { ... } // from try @ 0041446c with catch @ 00414220
                       catch() { ... } // from try @ 004145b8 with catch @ 00414220 */
        }
        else {
          iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
          iVar3 = *(int *)(this + 0x50);
        }
      }
      lVar7 = lVar7 + 1;
      iVar6 = iVar4 + iVar6;
    } while (lVar7 < iVar3);
  }
  *(int *)(this + 8) = iVar6 + iVar2 + iVar3;
  return;
}


