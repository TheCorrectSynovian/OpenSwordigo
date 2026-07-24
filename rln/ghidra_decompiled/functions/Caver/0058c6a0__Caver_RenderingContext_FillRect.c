/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c6a0
 * Function: Caver::RenderingContext::FillRect
 * Signature: undefined __thiscall FillRect(RenderingContext * this, Rectangle * param_1, Color * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::FillRect(Caver::Rectangle const&, Caver::Color const&, float) */

void __thiscall
Caver::RenderingContext::FillRect
          (RenderingContext *this,Rectangle *param_1,Color *param_2,float param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
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
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_68 = *(float *)param_1;
  fStack_64 = *(float *)(param_1 + 4);
                    /* try { // try from 0058c6d8 to 0068c6ff has its CatchHandler @ 0058ccd0 */
  fStack_5c = *(float *)(param_1 + 8) + local_68;
  local_4c = *(float *)(param_1 + 0xc) + fStack_64;
                    /* try { // try from 0058c700 to 0068c8c3 has its CatchHandler @ 0058bfd8 */
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
    glDisable(0xde1);
  }
  if ((this[0x72] != (RenderingContext)0x0) &&
     (this[0x72] = (RenderingContext)0x0, *(int *)this == 0)) {
    glDisable(0xb50);
  }
  UseProgram(this,0);
  VertexArrayObject::SetVertexAttribPointer(this,0x8074,3,0x1406,0xc,&local_68);
  uVar3 = (uint)(byte)*(RenderingContext *)param_2;
  if ((((*(RenderingContext *)param_2 == this[0x77]) &&
       (uVar4 = (uint)(byte)*(RenderingContext *)(param_2 + 1),
       *(RenderingContext *)(param_2 + 1) == this[0x78])) &&
      (uVar5 = (uint)(byte)*(RenderingContext *)(param_2 + 2),
      *(RenderingContext *)(param_2 + 2) == this[0x79])) &&
     (uVar6 = (uint)(byte)*(RenderingContext *)(param_2 + 3),
     *(RenderingContext *)(param_2 + 3) == this[0x7a])) {
    if (this[0x76] == (RenderingContext)0x0) goto LAB_0058c7bc;
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
LAB_0058c7bc:
  if (this[0x80] != (RenderingContext)0x0) {
    if (*(int *)this == 1) {
      RenderingProgram::HasUniformVariable(*(RenderingProgram **)(this + 0x38),0);
    }
    this[0x80] = (RenderingContext)0x0;
  }
  glDrawArrays(5,0,4);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


