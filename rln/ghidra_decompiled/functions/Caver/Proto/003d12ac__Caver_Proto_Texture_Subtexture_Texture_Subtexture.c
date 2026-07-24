/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d12ac
 * Function: Caver::Proto::Texture_Subtexture::Texture_Subtexture
 * Signature: undefined __thiscall Texture_Subtexture(Texture_Subtexture * this, Texture_Subtexture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_Subtexture::Texture_Subtexture(Caver::Proto::Texture_Subtexture const&) */

void __thiscall
Caver::Proto::Texture_Subtexture::Texture_Subtexture
          (Texture_Subtexture *this,Texture_Subtexture *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e4860;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_name__007e57e8;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0x3f800000;
  MergeFrom(this,param_1);
  return;
}


