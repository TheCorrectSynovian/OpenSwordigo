/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b15c
 * Function: Caver::RenderingContext::Clear
 * Signature: undefined __thiscall Clear(RenderingContext * this, bool param_1, bool param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::Clear(bool, bool, bool) */

void __thiscall
Caver::RenderingContext::Clear(RenderingContext *this,bool param_1,bool param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x4000;
                    /* catch() { ... } // from try @ 0058a390 with catch @ 0058b15c */
                    /* catch() { ... } // from try @ 0058a330 with catch @ 0058b160 */
  if (!param_1) {
    uVar2 = 0;
  }
  uVar1 = uVar2 | 0x100;
  if (!param_2) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x400;
  if (!param_3) {
    uVar2 = uVar1;
  }
  glClear(uVar2);
  return;
}


