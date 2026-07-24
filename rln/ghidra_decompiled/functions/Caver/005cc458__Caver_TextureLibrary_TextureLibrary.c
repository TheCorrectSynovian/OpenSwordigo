/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc458
 * Function: Caver::TextureLibrary::TextureLibrary
 * Signature: undefined __thiscall TextureLibrary(TextureLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TextureLibrary::TextureLibrary() */

void __thiscall Caver::TextureLibrary::TextureLibrary(TextureLibrary *this)

{
  undefined8 uVar1;
  TextureLibrary *pTVar2;
  
  uVar1 = _DAT_00697f60;
                    /* try { // try from 005cc464 to 006cc46b has its CatchHandler @ 005cc728 */
                    /* try { // try from 005cc46c to 006cc477 has its CatchHandler @ 005cc688 */
  *(undefined **)this = PTR_vtable_007e71c8 + 0x10;
  pTVar2 = this + 0x10;
  *(undefined8 *)pTVar2 = 0;
                    /* try { // try from 005cc478 to 006cc48b has its CatchHandler @ 005cc5c0 */
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(TextureLibrary **)(this + 0x20) = pTVar2;
  *(TextureLibrary **)(this + 0x28) = pTVar2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x3c) = uVar1;
                    /* try { // try from 005cc48c to 006cc7c7 has its CatchHandler @ 005cc348 */
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


