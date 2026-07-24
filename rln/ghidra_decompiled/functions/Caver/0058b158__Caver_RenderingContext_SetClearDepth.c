/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b158
 * Function: Caver::RenderingContext::SetClearDepth
 * Signature: undefined __cdecl SetClearDepth(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetClearDepth(float) */

void Caver::RenderingContext::SetClearDepth(float param_1)

{
  (*(code *)PTR_glClearDepthf_007e21b0)();
  return;
                    /* catch() { ... } // from try @ 0058a420 with catch @ 0058b158 */
}


