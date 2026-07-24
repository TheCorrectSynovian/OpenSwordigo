/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040d49c
 * Function: Caver::Proto::DamageComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(DamageComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::ByteSize() const */

void __thiscall Caver::Proto::DamageComponent::ByteSize(DamageComponent *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x2c);
  if ((uVar4 & 0xff) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
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
        uVar4 = *(uint *)(this + 0x2c);
        iVar2 = iVar2 + 1;
      }
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar4 = *(uint *)(this + 0x2c);
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar3 + iVar2;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x14);
      if ((int)uVar1 < 0) {
        iVar2 = iVar2 + 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar2 = iVar2 + 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar4 = *(uint *)(this + 0x2c);
        iVar2 = iVar3 + 1 + iVar2;
      }
    }
    if ((uVar4 >> 3 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x18);
      if ((int)uVar1 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar4 = *(uint *)(this + 0x2c);
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar3 + iVar2;
    }
    if ((uVar4 & 0x10) != 0) {
      iVar2 = iVar2 + 2;
    }
    if ((uVar4 & 0x20) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar4 & 0x40) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar4 & 0x80) != 0) {
      iVar2 = iVar2 + 2;
    }
  }
  if (((uVar4 & 0xff00) != 0) && ((uVar4 & 0x100) != 0)) {
    iVar2 = iVar2 + 2;
  }
  *(int *)(this + 8) = iVar2;
  return;
}


