/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b0dc
 * Function: Caver::RenderingContext::FinishBackgroundLoading
 * Signature: undefined __cdecl FinishBackgroundLoading(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::FinishBackgroundLoading() */

void Caver::RenderingContext::FinishBackgroundLoading(void)

{
  glFlush();
  UnbindBackgroundGLContext();
  return;
}


