/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c3b8
 * Function: Caver::RenderingContext::DrawElements
 * Signature: undefined __thiscall DrawElements(RenderingContext * this, int param_1, int param_2, DataType param_3, void * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::DrawElements(int, int, Caver::DataType, void const*) */

void __thiscall
Caver::RenderingContext::DrawElements
          (RenderingContext *this,undefined4 param_1,undefined4 param_2,undefined4 param_4,
          undefined8 param_5)

{
                    /* try { // try from 0058c3c0 to 0068c3d3 has its CatchHandler @ 0058cc08 */
                    /* try { // try from 0058c3d4 to 0068c3df has its CatchHandler @ 0058c9d0 */
  if (this[0x76] != (RenderingContext)0x0) {
    if (*(int *)this == 0) {
                    /* try { // try from 0058c400 to 0068c403 has its CatchHandler @ 0058cc08 */
      glColor4ub(this[0x77],this[0x78],this[0x79],this[0x7a]);
    }
    this[0x76] = (RenderingContext)0x0;
  }
  if (this[0x80] != (RenderingContext)0x0) {
                    /* try { // try from 0058c418 to 0068c41f has its CatchHandler @ 0058c9cc */
    if (*(int *)this == 1) {
                    /* try { // try from 0058c420 to 0068c433 has its CatchHandler @ 0058c9c8 */
      RenderingProgram::HasUniformVariable(*(RenderingProgram **)(this + 0x38),0);
    }
    this[0x80] = (RenderingContext)0x0;
  }
                    /* try { // try from 0058c434 to 0068c447 has its CatchHandler @ 0058cbd0 */
                    /* try { // try from 0058c448 to 0068c453 has its CatchHandler @ 0058c998 */
  glDrawElements(param_1,param_2,param_4,param_5);
  return;
}


