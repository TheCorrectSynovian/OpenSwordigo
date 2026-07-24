/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d3240
 * Function: Caver::Proto::Texture::ByteSize
 * Signature: undefined __thiscall ByteSize(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::ByteSize() const */

int __thiscall Caver::Proto::Texture::ByteSize(Texture *this)

{
  Texture *pTVar1;
  Texture TVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  
  TVar2 = this[0x68];
  uVar6 = (uint)(byte)TVar2;
  if (TVar2 == (Texture)0x0) {
    iVar3 = 0;
    goto LAB_003d337c;
  }
  if (((byte)TVar2 & 1) == 0) {
    iVar3 = 0;
    if (((byte)TVar2 >> 1 & 1) != 0) {
LAB_003d3268:
      uVar5 = *(uint *)(this + 0x18);
      if ((int)uVar5 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar5 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0x68);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    if (uVar5 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar6 = *(uint *)(this + 0x68);
      uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    }
    iVar3 = iVar3 + uVar5 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_003d3268;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    uVar5 = *(uint *)(this + 0x58);
    if ((int)uVar5 < 0) {
      iVar3 = iVar3 + 0xb;
    }
    else if (uVar5 < 0x80) {
      iVar3 = iVar3 + 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar6 = *(uint *)(this + 0x68);
      iVar3 = iVar4 + 1 + iVar3;
    }
  }
  if ((uVar6 >> 4 & 1) != 0) {
    pTVar1 = *(Texture **)PTR_default_instance__007e7970;
    if (*(long *)(this + 0x60) != 0) {
      pTVar1 = this;
    }
    uVar6 = Texture_ConversionInfo::ByteSize(*(Texture_ConversionInfo **)(pTVar1 + 0x60));
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar3 = iVar3 + uVar6 + iVar4 + 1;
  }
LAB_003d337c:
  iVar3 = *(int *)(this + 0x28) + iVar3;
  if (0 < *(int *)(this + 0x28)) {
    lVar8 = 0;
    do {
      uVar6 = Texture_Subtexture::ByteSize
                        (*(Texture_Subtexture **)(*(long *)(this + 0x20) + lVar8 * 8));
      if (uVar6 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
      }
      lVar8 = lVar8 + 1;
      iVar3 = uVar6 + iVar3 + iVar4;
    } while (lVar8 < *(int *)(this + 0x28));
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


