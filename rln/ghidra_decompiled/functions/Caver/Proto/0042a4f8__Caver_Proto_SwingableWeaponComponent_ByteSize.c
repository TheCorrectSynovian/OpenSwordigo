/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042a4f8
 * Function: Caver::Proto::SwingableWeaponComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::SwingableWeaponComponent::ByteSize() const */

int __thiscall Caver::Proto::SwingableWeaponComponent::ByteSize(SwingableWeaponComponent *this)

{
  SwingableWeaponComponent *pSVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
                    /* try { // try from 0042a4f8 to 0052a507 has its CatchHandler @ 0042a588 */
                    /* try { // try from 0042a508 to 0052a5fb has its CatchHandler @ 0042a4bc */
  uVar5 = *(uint *)(this + 0x44);
  if ((uVar5 & 0xff) == 0) {
    iVar3 = 0;
  }
  else {
    if ((uVar5 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      uVar2 = *(uint *)(this + 0xc);
      if ((int)uVar2 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar5 = *(uint *)(this + 0x44);
        iVar3 = iVar3 + 1;
      }
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x10);
      if ((int)uVar2 < 0) {
        iVar4 = 10;
      }
      else if (uVar2 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
                    /* catch() { ... } // from try @ 0042a4f8 with catch @ 0042a588 */
        uVar5 = *(uint *)(this + 0x44);
      }
      iVar3 = iVar3 + iVar4 + 1;
    }
    if ((uVar5 & 4) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar5 & 8) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar5 & 0x10) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar5 >> 5 & 1) != 0) {
      pSVar1 = *(SwingableWeaponComponent **)PTR_default_instance__007e4b88;
      if (*(long *)(this + 0x20) != 0) {
        pSVar1 = this;
      }
      uVar2 = FloatColor::ByteSize(*(FloatColor **)(pSVar1 + 0x20));
      if (uVar2 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      }
                    /* catch() { ... } // from try @ 0042a4e0 with catch @ 0042a5f8 */
      uVar5 = *(uint *)(this + 0x44);
                    /* try { // try from 0042a5fc to 0052a67b has its CatchHandler @ 0042a5fc
                       catch() { ... } // from try @ 0042a5fc with catch @ 0042a5fc
                       catch() { ... } // from try @ 0042a688 with catch @ 0042a5fc
                       catch() { ... } // from try @ 0042a844 with catch @ 0042a5fc
                       catch() { ... } // from try @ 0042a954 with catch @ 0042a5fc */
      iVar3 = iVar3 + uVar2 + iVar4 + 1;
    }
    if ((uVar5 & 0x40) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar5 >> 7 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x2c);
      if ((int)uVar2 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar5 = *(uint *)(this + 0x44);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  if ((uVar5 & 0xff00) != 0) {
    if ((uVar5 >> 8 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x30);
      if ((int)uVar2 < 0) {
        iVar3 = iVar3 + 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar5 = *(uint *)(this + 0x44);
        iVar3 = iVar4 + 1 + iVar3;
      }
    }
    if ((uVar5 >> 9 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x34);
      if ((int)uVar2 < 0) {
        iVar3 = iVar3 + 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar5 = *(uint *)(this + 0x44);
        iVar3 = iVar4 + 1 + iVar3;
      }
    }
    if ((uVar5 >> 10 & 1) != 0) {
      uVar2 = *(uint *)(this + 0x38);
      if ((int)uVar2 < 0) {
        iVar3 = iVar3 + 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar5 = *(uint *)(this + 0x44);
        iVar3 = iVar4 + 1 + iVar3;
      }
    }
    if ((uVar5 >> 0xb & 1) != 0) {
      uVar2 = *(uint *)(this + 0x3c);
      if ((int)uVar2 < 0) {
        iVar3 = iVar3 + 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar5 = *(uint *)(this + 0x44);
        iVar3 = iVar4 + 1 + iVar3;
      }
    }
    if ((uVar5 >> 0xc & 1) != 0) {
      uVar5 = *(uint *)(this + 0x40);
                    /* try { // try from 0042a67c to 0052a687 has its CatchHandler @ 0042a928 */
      if ((int)uVar5 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar5 < 0x80) {
                    /* try { // try from 0042a688 to 0052a83f has its CatchHandler @ 0042a5fc */
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


