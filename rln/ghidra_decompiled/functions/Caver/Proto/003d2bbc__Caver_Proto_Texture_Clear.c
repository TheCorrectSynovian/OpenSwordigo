/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d2bbc
 * Function: Caver::Proto::Texture::Clear
 * Signature: undefined __thiscall Clear(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::Clear() */

void __thiscall Caver::Proto::Texture::Clear(Texture *this)

{
  Texture TVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  TVar1 = this[0x68];
  uVar3 = (uint)(byte)TVar1;
  if (TVar1 != (Texture)0x0) {
    if ((((byte)TVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e5bc0)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x68);
    }
    *(undefined4 *)(this + 0x18) = 1;
    *(undefined4 *)(this + 0x58) = 0;
    if (((uVar3 >> 4 & 1) != 0) && (lVar4 = *(long *)(this + 0x60), lVar4 != 0)) {
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
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


