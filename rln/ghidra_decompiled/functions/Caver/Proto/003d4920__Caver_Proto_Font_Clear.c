/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d4920
 * Function: Caver::Proto::Font::Clear
 * Signature: undefined __thiscall Clear(Font * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::Clear() */

void __thiscall Caver::Proto::Font::Clear(Font *this)

{
  Font FVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  FVar1 = this[0x70];
  uVar3 = (uint)(byte)FVar1;
  if (FVar1 != (Font)0x0) {
    if ((((byte)FVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e6280)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x70);
    }
    if (((uVar3 >> 1 & 1) != 0) && (*(Texture **)(this + 0x18) != (Texture *)0x0)) {
      Texture::Clear(*(Texture **)(this + 0x18));
      uVar3 = *(uint *)(this + 0x70);
    }
    if (((uVar3 >> 3 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x58), plVar2 != (long *)PTR__default_kerning__007e5500)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x70);
    }
    *(undefined4 *)(this + 0x60) = 0;
    if (((uVar3 >> 5 & 1) != 0) && (lVar4 = *(long *)(this + 0x68), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        *(undefined8 *)(lVar4 + 0x14) = 0;
        *(undefined8 *)(lVar4 + 0xc) = 0;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
    }
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x20) + lVar4 * 8) + 0x20))();
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x28));
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}


