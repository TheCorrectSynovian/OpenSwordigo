/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004330d8
 * Function: Caver::Proto::MagicBoltComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::ByteSize() const */

void __thiscall Caver::Proto::MagicBoltComponent::ByteSize(MagicBoltComponent *this)

{
  MagicBoltComponent *pMVar1;
  MagicBoltComponent MVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  MVar2 = this[0x24];
  uVar6 = (uint)(byte)MVar2;
  if (MVar2 == (MagicBoltComponent)0x0) {
    iVar3 = 0;
    goto LAB_0043321c;
  }
  if (((byte)MVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x00433134:
    if (((byte)MVar2 >> 1 & 1) != 0) {
LAB_00433100:
      uVar4 = *(uint *)(this + 0x10);
      if ((int)uVar4 < 0) {
        iVar5 = 0xb;
      }
      else if (uVar4 < 0x80) {
        iVar5 = 2;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0x24);
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar5 + iVar3;
    }
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
    if ((int)uVar4 < 0) {
      iVar3 = 0xb;
      goto joined_r0x00433134;
    }
    if (uVar4 < 0x80) {
      iVar3 = 2;
      goto joined_r0x00433134;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    uVar6 = *(uint *)(this + 0x24);
    iVar3 = iVar3 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00433100;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    uVar4 = *(uint *)(this + 0x14);
    if ((int)uVar4 < 0) {
      iVar3 = iVar3 + 0xb;
    }
    else if (uVar4 < 0x80) {
      iVar3 = iVar3 + 2;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar6 = *(uint *)(this + 0x24);
      iVar3 = iVar5 + 1 + iVar3;
    }
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pMVar1 = *(MagicBoltComponent **)PTR_default_instance__007e4db8;
    if (*(long *)(this + 0x18) != 0) {
      pMVar1 = this;
    }
    uVar4 = FloatColor::ByteSize(*(FloatColor **)(pMVar1 + 0x18));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x24);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar6 & 0x10) != 0) {
    iVar3 = iVar3 + 5;
  }
LAB_0043321c:
  *(int *)(this + 8) = iVar3;
  return;
}


