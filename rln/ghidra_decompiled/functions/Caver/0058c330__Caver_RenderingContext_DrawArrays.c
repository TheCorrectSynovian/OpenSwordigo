/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c330
 * Function: Caver::RenderingContext::DrawArrays
 * Signature: undefined __thiscall DrawArrays(RenderingContext * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::DrawArrays(int, int, int) */

void __thiscall
Caver::RenderingContext::DrawArrays(RenderingContext *this,int param_1,int param_2,int param_3)

{
                    /* try { // try from 0058c330 to 0068c357 has its CatchHandler @ 0058cc70 */
  if (this[0x76] != (RenderingContext)0x0) {
    if (*(int *)this == 0) {
      glColor4ub(this[0x77],this[0x78],this[0x79],this[0x7a]);
    }
    this[0x76] = (RenderingContext)0x0;
  }
                    /* try { // try from 0058c378 to 0068c37b has its CatchHandler @ 0058c888 */
  if (this[0x80] != (RenderingContext)0x0) {
    if (*(int *)this == 1) {
      RenderingProgram::HasUniformVariable(*(RenderingProgram **)(this + 0x38),0);
    }
    this[0x80] = (RenderingContext)0x0;
  }
                    /* try { // try from 0058c39c to 0068c39f has its CatchHandler @ 0058c884 */
                    /* try { // try from 0058c3a4 to 0068c3ab has its CatchHandler @ 0058ca04 */
                    /* try { // try from 0058c3ac to 0068c3bf has its CatchHandler @ 0058ca00 */
  glDrawArrays(param_1,param_2,param_3);
  return;
}


