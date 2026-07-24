/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d3f44
 * Function: Caver::Proto::Font_Glyph::ByteSize
 * Signature: undefined __thiscall ByteSize(Font_Glyph * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::ByteSize() const */

int __thiscall Caver::Proto::Font_Glyph::ByteSize(Font_Glyph *this)

{
  Font_Glyph *pFVar1;
  Font_Glyph FVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  FVar2 = this[0x28];
  uVar6 = (uint)(byte)FVar2;
  if (FVar2 == (Font_Glyph)0x0) {
    iVar4 = 0;
    goto LAB_003d40c0;
  }
  if (((byte)FVar2 & 1) == 0) {
    iVar4 = 0;
joined_r0x003d3f88:
    if (((byte)FVar2 >> 1 & 1) != 0) {
LAB_003d3fac:
      pFVar1 = *(Font_Glyph **)PTR_default_instance__007e5b90;
      if (*(long *)(this + 0x10) != 0) {
        pFVar1 = this;
      }
      bVar3 = *(byte *)(*(long *)(pFVar1 + 0x10) + 0x1c);
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
      *(uint *)(*(long *)(pFVar1 + 0x10) + 8) = uVar7;
      uVar6 = *(uint *)(this + 0x28);
      iVar4 = iVar4 + uVar7 + 2;
    }
  }
  else {
    uVar7 = *(uint *)(this + 0xc);
    if ((int)uVar7 < 0) {
      iVar4 = 0xb;
      goto joined_r0x003d3f88;
    }
    if (uVar7 < 0x80) {
      iVar4 = 2;
      goto joined_r0x003d3f88;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
    uVar6 = *(uint *)(this + 0x28);
    iVar4 = iVar4 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_003d3fac;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    uVar7 = *(uint *)(this + 0x18);
    if ((int)uVar7 < 0) {
      iVar4 = iVar4 + 0xb;
    }
    else if (uVar7 < 0x80) {
      iVar4 = iVar4 + 2;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
      uVar6 = *(uint *)(this + 0x28);
      iVar4 = iVar5 + 1 + iVar4;
    }
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pFVar1 = *(Font_Glyph **)PTR_default_instance__007e5b90;
    if (*(long *)(this + 0x20) != 0) {
      pFVar1 = this;
    }
    bVar3 = *(byte *)(*(long *)(pFVar1 + 0x20) + 0x1c);
    uVar6 = (uint)bVar3;
    if (bVar3 != 0) {
      uVar6 = -(bVar3 & 1) & 5;
      if ((bVar3 & 2) != 0) {
        uVar6 = uVar6 + 5;
      }
      if ((bVar3 & 4) != 0) {
        uVar6 = uVar6 + 5;
      }
      if ((bVar3 & 8) != 0) {
        uVar6 = uVar6 + 5;
      }
    }
    *(uint *)(*(long *)(pFVar1 + 0x20) + 8) = uVar6;
    iVar4 = iVar4 + uVar6 + 2;
  }
LAB_003d40c0:
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


