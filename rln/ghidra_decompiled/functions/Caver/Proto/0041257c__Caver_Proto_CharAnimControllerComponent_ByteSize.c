/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041257c
 * Function: Caver::Proto::CharAnimControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CharAnimControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::CharAnimControllerComponent::ByteSize(CharAnimControllerComponent *this)

{
  uint uVar1;
  CharAnimControllerComponent CVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  CVar2 = this[0x24];
  uVar5 = (uint)(byte)CVar2;
  if (CVar2 == (CharAnimControllerComponent)0x0) {
    iVar3 = 0;
    goto LAB_004126d8;
  }
  if (((byte)CVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x004125d4:
    if (((byte)CVar2 >> 1 & 1) != 0) {
LAB_004125a0:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar4 = 0xb;
                    /* catch() { ... } // from try @ 00412304 with catch @ 004125e0 */
      }
      else if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x24);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar3 = 0xb;
      goto joined_r0x004125d4;
    }
    if (uVar1 < 0x80) {
      iVar3 = 2;
      goto joined_r0x004125d4;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x24);
    iVar3 = iVar3 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_004125a0;
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
      uVar5 = *(uint *)(this + 0x24);
      iVar3 = iVar4 + 1 + iVar3;
    }
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x18);
    if ((int)uVar1 < 0) {
      iVar3 = iVar3 + 0xb;
    }
    else if (uVar1 < 0x80) {
      iVar3 = iVar3 + 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      uVar5 = *(uint *)(this + 0x24);
      iVar3 = iVar4 + 1 + iVar3;
    }
  }
  if ((uVar5 >> 4 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x1c);
    if ((int)uVar1 < 0) {
      iVar3 = iVar3 + 0xb;
    }
    else if (uVar1 < 0x80) {
      iVar3 = iVar3 + 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      uVar5 = *(uint *)(this + 0x24);
      iVar3 = iVar4 + 1 + iVar3;
    }
  }
  if ((uVar5 >> 5 & 1) != 0) {
    uVar5 = *(uint *)(this + 0x20);
    if ((int)uVar5 < 0) {
      iVar4 = 0xb;
    }
    else if (uVar5 < 0x80) {
      iVar4 = 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar4 + iVar3;
  }
LAB_004126d8:
  *(int *)(this + 8) = iVar3;
                    /* catch() { ... } // from try @ 00412754 with catch @ 004126e4
                       catch() { ... } // from try @ 004127f8 with catch @ 004126e4 */
  return iVar3;
}


