/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c881c
 * Function: Caver::Texture::Texture
 * Signature: undefined __thiscall Texture(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::Texture() */

void __thiscall Caver::Texture::Texture(Texture *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR_vtable_007e6648;
  *(undefined4 *)(this + 0x6c) = 0x3f800000;
  *(undefined **)this = puVar2 + 0x10;
  puVar1 = PTR_DAT_007e5de8;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
                    /* try { // try from 005c8860 to 006c886b has its CatchHandler @ 005c8610 */
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
                    /* catch() { ... } // from try @ 005c87e8 with catch @ 005c8868 */
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined **)(this + 0x10) = puVar2 + 0x60;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x20) = puVar1 + 0x18;
  *(undefined **)(this + 0x30) = puVar1 + 0x18;
  this[0xa0] = (Texture)0x0;
  return;
}


