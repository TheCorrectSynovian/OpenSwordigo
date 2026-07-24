/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d22e8
 * Function: Caver::Proto::Texture_ConversionInfo::ByteSize
 * Signature: undefined __thiscall ByteSize(Texture_ConversionInfo * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_ConversionInfo::ByteSize() const */

int __thiscall Caver::Proto::Texture_ConversionInfo::ByteSize(Texture_ConversionInfo *this)

{
  uint uVar1;
  Texture_ConversionInfo TVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  TVar2 = this[0x1c];
  uVar5 = (uint)(byte)TVar2;
  if (TVar2 == (Texture_ConversionInfo)0x0) {
    iVar3 = 0;
    goto LAB_003d23e4;
  }
  if (((byte)TVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x003d2340:
    if (((byte)TVar2 >> 1 & 1) != 0) {
LAB_003d230c:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x1c);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar3 = 0xb;
      goto joined_r0x003d2340;
    }
    if (uVar1 < 0x80) {
      iVar3 = 2;
      goto joined_r0x003d2340;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x1c);
    iVar3 = iVar3 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003d230c;
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
    else if (uVar5 < 0x80) {
      iVar4 = 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar4 + iVar3;
  }
LAB_003d23e4:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


