/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cb9a8
 * Function: Caver::Texture::InitWithParentTexture
 * Signature: undefined __thiscall InitWithParentTexture(Texture * this, Texture * param_1, Rectangle * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::InitWithParentTexture(Caver::Texture*, Caver::Rectangle const&, float) */

void __thiscall
Caver::Texture::InitWithParentTexture
          (Texture *this,Texture *param_1,Rectangle *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(Texture **)(this + 0x70) = param_1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  *(float *)(this + 0x6c) = param_3;
  *(undefined8 *)(this + 0x54) = uVar2;
  *(undefined8 *)(this + 0x4c) = uVar1;
  return;
}


