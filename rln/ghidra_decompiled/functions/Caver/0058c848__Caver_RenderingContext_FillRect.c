/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c848
 * Function: Caver::RenderingContext::FillRect
 * Signature: undefined __thiscall FillRect(RenderingContext * this, Rectangle * param_1, Color * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::FillRect(Caver::Rectangle const&, Caver::Color const*, float) */

void __thiscall
Caver::RenderingContext::FillRect
          (RenderingContext *this,Rectangle *param_1,Color *param_2,float param_3)

{
  long lVar1;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_68 = *(float *)param_1;
  fStack_64 = *(float *)(param_1 + 4);
                    /* catch() { ... } // from try @ 0058c39c with catch @ 0058c884 */
                    /* catch() { ... } // from try @ 0058c378 with catch @ 0058c888 */
  fStack_5c = *(float *)(param_1 + 8) + local_68;
                    /* catch() { ... } // from try @ 0058c648 with catch @ 0058c898 */
                    /* catch() { ... } // from try @ 0058c5cc with catch @ 0058c89c */
                    /* catch() { ... } // from try @ 0058c2e8 with catch @ 0058c8a0 */
  local_4c = *(float *)(param_1 + 0xc) + fStack_64;
  local_60 = param_3;
  local_58 = fStack_64;
  local_54 = param_3;
  local_50 = local_68;
  fStack_48 = param_3;
  local_44 = fStack_5c;
  fStack_40 = local_4c;
  local_3c = param_3;
  if ((this[0x71] != (RenderingContext)0x0) &&
     (this[0x71] = (RenderingContext)0x0, *(int *)this == 0)) {
                    /* try { // try from 0058c8c4 to 0068ce13 has its CatchHandler @ 0058ce1c */
    glDisable(0xde1);
  }
  if ((this[0x72] != (RenderingContext)0x0) &&
     (this[0x72] = (RenderingContext)0x0, *(int *)this == 0)) {
    glDisable(0xb50);
  }
  UseProgram(this,2);
                    /* catch() { ... } // from try @ 0058c270 with catch @ 0058c8f0 */
                    /* catch() { ... } // from try @ 0058c61c with catch @ 0058c8f4 */
  VertexArrayObject::SetVertexAttribPointer(this,0x8074,3,0x1406,0xc,&local_68);
  VertexArrayObject::SetVertexAttribPointer(this,0x8076,4,0x1401,4,param_2);
                    /* catch() { ... } // from try @ 0058c5a4 with catch @ 0058c944 */
  if ((((this[0x77] == (RenderingContext)0xff) && (this[0x78] == (RenderingContext)0xff)) &&
      (this[0x79] == (RenderingContext)0xff)) && (this[0x7a] == (RenderingContext)0xff)) {
    if (this[0x76] == (RenderingContext)0x0) goto LAB_0058c98c;
  }
  else {
    this[0x76] = (RenderingContext)0x1;
    *(undefined4 *)(this + 0x77) = 0xffffffff;
  }
  if (*(int *)this == 0) {
    glColor4ub(0xff,0xff,0xff,0xff);
  }
  this[0x76] = (RenderingContext)0x0;
LAB_0058c98c:
  if (this[0x80] != (RenderingContext)0x0) {
                    /* catch() { ... } // from try @ 0058c4a0 with catch @ 0058c994 */
                    /* catch() { ... } // from try @ 0058c448 with catch @ 0058c998 */
    if (*(int *)this == 1) {
      RenderingProgram::HasUniformVariable(*(RenderingProgram **)(this + 0x38),0);
    }
    this[0x80] = (RenderingContext)0x0;
  }
  glDrawArrays(5,0,4);
                    /* catch() { ... } // from try @ 0058c420 with catch @ 0058c9c8 */
                    /* catch() { ... } // from try @ 0058c418 with catch @ 0058c9cc */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0058c3d4 with catch @ 0058c9d0 */
  return;
}


