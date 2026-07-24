/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e061c
 * Function: Caver::Proto::Item::ByteSize
 * Signature: undefined __thiscall ByteSize(Item * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::Item::ByteSize() const */

int __thiscall Caver::Proto::Item::ByteSize(Item *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  
  uVar4 = *(uint *)(this + 0x40);
  if ((uVar4 & 0xff) == 0) {
    iVar1 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)(this + 0xc);
      if ((int)uVar3 < 0) {
        iVar1 = 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar1 = 2;
      }
      else {
        iVar1 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x40);
        iVar1 = iVar1 + 1;
      }
    }
    if ((uVar4 >> 1 & 1) != 0) {
      plVar5 = *(long **)(this + 0x10);
      uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x40);
        uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      }
      iVar1 = iVar1 + iVar2 + uVar3 + 1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      plVar5 = *(long **)(this + 0x18);
      uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x40);
        uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      }
      iVar1 = iVar1 + iVar2 + uVar3 + 1;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      plVar5 = *(long **)(this + 0x20);
      uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x40);
        uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      }
      iVar1 = iVar1 + iVar2 + uVar3 + 1;
    }
    if ((uVar4 >> 4 & 1) != 0) {
      plVar5 = *(long **)(this + 0x28);
      uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x40);
        uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      }
      iVar1 = iVar1 + iVar2 + uVar3 + 1;
    }
    if ((uVar4 & 0x20) != 0) {
      iVar1 = iVar1 + 2;
    }
    if ((uVar4 >> 6 & 1) != 0) {
      uVar3 = *(uint *)(this + 0x34);
      if ((int)uVar3 < 0) {
        iVar1 = iVar1 + 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar1 = iVar1 + 2;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x40);
        iVar1 = iVar2 + 1 + iVar1;
      }
    }
    if ((uVar4 >> 7 & 1) != 0) {
      uVar3 = *(uint *)(this + 0x38);
      if ((int)uVar3 < 0) {
        iVar1 = iVar1 + 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar1 = iVar1 + 2;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x40);
        iVar1 = iVar2 + 1 + iVar1;
      }
    }
  }
  if ((uVar4 >> 8 & 1) != 0) {
    uVar4 = *(uint *)(this + 0x3c);
    if ((int)uVar4 < 0) {
      iVar2 = 0xb;
    }
    else if (uVar4 < 0x80) {
      iVar2 = 2;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar2 + iVar1;
  }
  *(int *)(this + 8) = iVar1;
  return iVar1;
}


