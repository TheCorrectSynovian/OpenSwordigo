/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c2c8
 * Function: Caver::RenderingContext::PrepareForDrawing
 * Signature: undefined __thiscall PrepareForDrawing(RenderingContext * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::PrepareForDrawing() */

void __thiscall Caver::RenderingContext::PrepareForDrawing(RenderingContext *this)

{
  if (this[0x76] != (RenderingContext)0x0) {
    if (*(int *)this == 0) {
                    /* try { // try from 0058c2e8 to 0068c30f has its CatchHandler @ 0058c8a0 */
      glColor4ub(this[0x77],this[0x78],this[0x79],this[0x7a]);
    }
    this[0x76] = (RenderingContext)0x0;
  }
  if (this[0x80] != (RenderingContext)0x0) {
    if (*(int *)this == 1) {
      RenderingProgram::HasUniformVariable(*(RenderingProgram **)(this + 0x38),0);
    }
    this[0x80] = (RenderingContext)0x0;
  }
  return;
}


