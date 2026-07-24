/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043879c
 * Function: Caver::Proto::MeshMaterial::Clear
 * Signature: undefined __thiscall Clear(MeshMaterial * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::Clear() */

void __thiscall Caver::Proto::MeshMaterial::Clear(MeshMaterial *this)

{
  MeshMaterial MVar1;
  uint uVar2;
  
  MVar1 = this[0x38];
  uVar2 = (uint)(byte)MVar1;
  if (MVar1 != (MeshMaterial)0x0) {
    if ((((byte)MVar1 & 1) != 0) && (*(FloatColor **)(this + 0x10) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x38);
    }
    if (((uVar2 >> 1 & 1) != 0) && (*(FloatColor **)(this + 0x18) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x18));
      uVar2 = *(uint *)(this + 0x38);
    }
    if (((uVar2 >> 2 & 1) != 0) && (*(FloatColor **)(this + 0x20) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x20));
      uVar2 = *(uint *)(this + 0x38);
    }
    *(undefined4 *)(this + 0x28) = 0;
    if (((uVar2 >> 4 & 1) != 0) && (*(Texture **)(this + 0x30) != (Texture *)0x0)) {
      Texture::Clear(*(Texture **)(this + 0x30));
    }
  }
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


