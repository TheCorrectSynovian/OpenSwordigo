/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b8a0
 * Function: Caver::RenderingContext::SetDefaultBlendFunc
 * Signature: undefined __thiscall SetDefaultBlendFunc(RenderingContext * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetDefaultBlendFunc() */

void __thiscall Caver::RenderingContext::SetDefaultBlendFunc(RenderingContext *this)

{
  if ((*(int *)(this + 0x68) == 1) && (*(int *)(this + 0x6c) == 0x303)) {
    return;
  }
  *(undefined8 *)(this + 0x68) = DAT_00696a38;
  glBlendFunc(1,0x303);
  return;
}


