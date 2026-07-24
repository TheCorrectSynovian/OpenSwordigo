/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c9f8
 * Function: Caver::RenderingContext::DrawRect
 * Signature: undefined __thiscall DrawRect(RenderingContext * this, Rectangle * param_1, Color * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::DrawRect(Caver::Rectangle const&, Caver::Color const&, float) */

void __thiscall
Caver::RenderingContext::DrawRect
          (RenderingContext *this,Rectangle *param_1,Color *param_2,float param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0058c3ac with catch @ 0058ca00 */
                    /* catch() { ... } // from try @ 0058c3a4 with catch @ 0058ca04 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 0058c248 with catch @ 0058ca14 */
  local_78 = *(float *)param_1;
  fStack_74 = *(float *)(param_1 + 4);
  fStack_6c = *(float *)(param_1 + 8) + local_78;
  local_5c = *(float *)(param_1 + 0xc) + fStack_74;
                    /* catch() { ... } // from try @ 0058c1ac with catch @ 0058ca64 */
  local_70 = param_3;
  local_68 = fStack_74;
  local_64 = param_3;
  fStack_60 = fStack_6c;
  fStack_58 = param_3;
  local_54 = local_78;
  local_50 = local_5c;
  fStack_4c = param_3;
  local_48 = local_78;
  fStack_44 = fStack_74;
  local_40 = param_3;
                    /* catch() { ... } // from try @ 0058c0d8 with catch @ 0058ca68 */
  if ((this[0x71] != (RenderingContext)0x0) &&
     (this[0x71] = (RenderingContext)0x0, *(int *)this == 0)) {
    glDisable(0xde1);
  }
                    /* catch() { ... } // from try @ 0058c088 with catch @ 0058ca80 */
  if ((this[0x72] != (RenderingContext)0x0) &&
     (this[0x72] = (RenderingContext)0x0, *(int *)this == 0)) {
    glDisable(0xb50);
  }
  UseProgram(this,0);
  VertexArrayObject::SetVertexAttribPointer(this,0x8074,3,0x1406,0xc,&local_78);
  uVar3 = (uint)(byte)*(RenderingContext *)param_2;
                    /* catch() { ... } // from try @ 0058c078 with catch @ 0058cae4 */
  if ((((*(RenderingContext *)param_2 == this[0x77]) &&
       (uVar4 = (uint)(byte)*(RenderingContext *)(param_2 + 1),
       *(RenderingContext *)(param_2 + 1) == this[0x78])) &&
      (uVar5 = (uint)(byte)*(RenderingContext *)(param_2 + 2),
      *(RenderingContext *)(param_2 + 2) == this[0x79])) &&
     (uVar6 = (uint)(byte)*(RenderingContext *)(param_2 + 3),
     *(RenderingContext *)(param_2 + 3) == this[0x7a])) {
    if (this[0x76] == (RenderingContext)0x0) goto LAB_0058cb18;
    iVar1 = *(int *)this;
  }
  else {
    uVar3 = *(uint *)param_2;
    this[0x76] = (RenderingContext)0x1;
    *(uint *)(this + 0x77) = uVar3;
    uVar4 = uVar3 >> 8;
    uVar5 = uVar3 >> 0x10;
    uVar6 = uVar3 >> 0x18;
    iVar1 = *(int *)this;
  }
  if (iVar1 == 0) {
    glColor4ub(uVar3,uVar4,uVar5,uVar6);
  }
  this[0x76] = (RenderingContext)0x0;
LAB_0058cb18:
  if (this[0x80] != (RenderingContext)0x0) {
    if (*(int *)this == 1) {
      RenderingProgram::HasUniformVariable(*(RenderingProgram **)(this + 0x38),0);
    }
    this[0x80] = (RenderingContext)0x0;
  }
                    /* catch() { ... } // from try @ 0058c064 with catch @ 0058cb44 */
  glDrawArrays(3,0,5);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


