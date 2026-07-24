/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d3a5c
 * Function: Caver::Proto::Font_Glyph::Clear
 * Signature: undefined __thiscall Clear(Font_Glyph * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::Clear() */

void __thiscall Caver::Proto::Font_Glyph::Clear(Font_Glyph *this)

{
  Font_Glyph FVar1;
  uint uVar2;
  long lVar3;
  
  FVar1 = this[0x28];
  uVar2 = (uint)(byte)FVar1;
  if (FVar1 != (Font_Glyph)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    if ((((byte)FVar1 >> 1 & 1) != 0) && (lVar3 = *(long *)(this + 0x10), lVar3 != 0)) {
      if (*(char *)(lVar3 + 0x1c) != '\0') {
        *(undefined8 *)(lVar3 + 0x14) = 0;
        *(undefined8 *)(lVar3 + 0xc) = 0;
      }
      *(undefined4 *)(lVar3 + 0x1c) = 0;
      uVar2 = *(uint *)(this + 0x28);
    }
    *(undefined4 *)(this + 0x18) = 0;
    if (((uVar2 >> 3 & 1) != 0) && (lVar3 = *(long *)(this + 0x20), lVar3 != 0)) {
      if (*(char *)(lVar3 + 0x1c) != '\0') {
        *(undefined8 *)(lVar3 + 0x14) = 0;
        *(undefined8 *)(lVar3 + 0xc) = 0;
      }
      *(undefined4 *)(lVar3 + 0x1c) = 0;
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


