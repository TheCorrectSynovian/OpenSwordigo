/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b874
 * Function: Caver::RenderingContext::SetBlendFunc
 * Signature: undefined __thiscall SetBlendFunc(RenderingContext * this, uint param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetBlendFunc(unsigned int, unsigned int) */

void __thiscall
Caver::RenderingContext::SetBlendFunc(RenderingContext *this,uint param_1,uint param_2)

{
  if ((*(uint *)(this + 0x68) == param_1) && (*(uint *)(this + 0x6c) == param_2)) {
    return;
  }
  *(uint *)(this + 0x68) = param_1;
  *(uint *)(this + 0x6c) = param_2;
  glBlendFunc(param_1,param_2);
  return;
}


