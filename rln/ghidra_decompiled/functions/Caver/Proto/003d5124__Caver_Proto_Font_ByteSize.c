/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d5124
 * Function: Caver::Proto::Font::ByteSize
 * Signature: undefined __thiscall ByteSize(Font * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::ByteSize() const */

int __thiscall Caver::Proto::Font::ByteSize(Font *this)

{
  Font *pFVar1;
  Font FVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  
  FVar2 = this[0x70];
  uVar7 = (uint)(byte)FVar2;
  if (FVar2 == (Font)0x0) {
    iVar4 = 0;
    goto LAB_003d52dc;
  }
  if (((byte)FVar2 & 1) == 0) {
    iVar4 = 0;
    if (((byte)FVar2 >> 1 & 1) != 0) {
LAB_003d5198:
      pFVar1 = *(Font **)PTR_default_instance__007e6840;
      if (*(long *)(this + 0x18) != 0) {
        pFVar1 = this;
      }
      uVar5 = Texture::ByteSize(*(Texture **)(pFVar1 + 0x18));
      if (uVar5 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      }
      uVar7 = *(uint *)(this + 0x70);
      iVar4 = iVar4 + uVar5 + iVar6 + 1;
    }
  }
  else {
    plVar8 = *(long **)(this + 0x10);
    uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
    if (uVar5 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar7 = *(uint *)(this + 0x70);
      uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
    }
    iVar4 = iVar4 + uVar5 + 1;
    if ((uVar7 >> 1 & 1) != 0) goto LAB_003d5198;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    plVar8 = *(long **)(this + 0x58);
    uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
    if (uVar5 < 0x80) {
      iVar6 = 1;
    }
    else {
      iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar7 = *(uint *)(this + 0x70);
      uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
    }
    iVar4 = iVar4 + iVar6 + uVar5 + 1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    uVar5 = *(uint *)(this + 0x60);
    if ((int)uVar5 < 0) {
      iVar4 = iVar4 + 0xb;
    }
    else if (uVar5 < 0x80) {
      iVar4 = iVar4 + 2;
    }
    else {
      iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar7 = *(uint *)(this + 0x70);
      iVar4 = iVar6 + 1 + iVar4;
    }
  }
  if ((uVar7 >> 5 & 1) != 0) {
    pFVar1 = *(Font **)PTR_default_instance__007e6840;
    if (*(long *)(this + 0x68) != 0) {
      pFVar1 = this;
    }
    bVar3 = *(byte *)(*(long *)(pFVar1 + 0x68) + 0x1c);
    uVar7 = (uint)bVar3;
    if (bVar3 != 0) {
      uVar7 = -(bVar3 & 1) & 5;
      if ((bVar3 & 2) != 0) {
        uVar7 = uVar7 + 5;
      }
      if ((bVar3 & 4) != 0) {
        uVar7 = uVar7 + 5;
      }
      if ((bVar3 & 8) != 0) {
        uVar7 = uVar7 + 5;
      }
    }
    *(uint *)(*(long *)(pFVar1 + 0x68) + 8) = uVar7;
    iVar4 = iVar4 + uVar7 + 2;
  }
LAB_003d52dc:
  iVar4 = *(int *)(this + 0x28) + iVar4;
  if (0 < *(int *)(this + 0x28)) {
    lVar9 = 0;
    do {
      uVar7 = Font_Glyph::ByteSize(*(Font_Glyph **)(*(long *)(this + 0x20) + lVar9 * 8));
      if (uVar7 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
      }
      lVar9 = lVar9 + 1;
      iVar4 = uVar7 + iVar4 + iVar6;
    } while (lVar9 < *(int *)(this + 0x28));
  }
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


