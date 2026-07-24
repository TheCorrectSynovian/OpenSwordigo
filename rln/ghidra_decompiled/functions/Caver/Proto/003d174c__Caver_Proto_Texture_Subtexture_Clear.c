/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d174c
 * Function: Caver::Proto::Texture_Subtexture::Clear
 * Signature: undefined __thiscall Clear(Texture_Subtexture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_Subtexture::Clear() */

void __thiscall Caver::Proto::Texture_Subtexture::Clear(Texture_Subtexture *this)

{
  Texture_Subtexture TVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  TVar1 = this[0x24];
  uVar3 = (uint)(byte)TVar1;
  if (TVar1 != (Texture_Subtexture)0x0) {
    if ((((byte)TVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e57e8)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x24);
    }
    if (((uVar3 >> 1 & 1) != 0) && (lVar4 = *(long *)(this + 0x18), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        *(undefined8 *)(lVar4 + 0x14) = 0;
        *(undefined8 *)(lVar4 + 0xc) = 0;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
    }
    *(undefined4 *)(this + 0x20) = 0x3f800000;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


