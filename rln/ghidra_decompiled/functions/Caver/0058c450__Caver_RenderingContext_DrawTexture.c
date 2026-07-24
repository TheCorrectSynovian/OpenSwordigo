/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c450
 * Function: Caver::RenderingContext::DrawTexture
 * Signature: undefined __thiscall DrawTexture(RenderingContext * this, intrusive_ptr * param_1, Rectangle * param_2, Rectangle * param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,
   Caver::Rectangle const&, Caver::Rectangle const&, float) */

void __thiscall
Caver::RenderingContext::DrawTexture
          (RenderingContext *this,intrusive_ptr *param_1,Rectangle *param_2,Rectangle *param_3,
          float param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0058c474 to 0068c477 has its CatchHandler @ 0058cbd0 */
  lVar3 = *(long *)param_1;
  if (lVar3 == 0) {
    if (*(int *)(this + 0x104) != 0) {
      glBindTexture(0xde1,0);
      *(undefined4 *)(this + 0x104) = 0;
    }
LAB_0058c4d4:
    iVar1 = *(int *)this;
  }
  else {
    if (*(int *)(lVar3 + 0x38) == *(int *)(this + 0x104)) goto LAB_0058c4d4;
                    /* try { // try from 0058c4a0 to 0068c4a7 has its CatchHandler @ 0058c994 */
    glBindTexture(0xde1);
    *(undefined4 *)(this + 0x104) = *(undefined4 *)(lVar3 + 0x38);
    iVar1 = *(int *)this;
  }
  if (iVar1 != 0) goto LAB_0058c660;
  local_78 = *(float *)param_3;
  fStack_74 = *(float *)(param_3 + 4);
  fStack_6c = *(float *)(param_3 + 8) + local_78;
  local_5c = *(float *)(param_3 + 0xc) + fStack_74;
  lVar3 = *(long *)param_1;
  local_98 = *(float *)(lVar3 + 0x5c);
  fStack_94 = *(float *)(lVar3 + 0x60);
  local_90 = *(float *)(lVar3 + 100) + local_98;
  local_84 = *(float *)(lVar3 + 0x68) + fStack_94;
  local_8c = fStack_94;
  fStack_88 = local_98;
  fStack_80 = local_90;
  local_7c = local_84;
  local_70 = param_4;
  local_68 = fStack_74;
  local_64 = param_4;
  local_60 = local_78;
  fStack_58 = param_4;
  local_54 = fStack_6c;
  fStack_50 = local_5c;
  local_4c = param_4;
  if (this[0x71] != (RenderingContext)0x1) {
    this[0x71] = (RenderingContext)0x1;
    glEnable(0xde1);
  }
  if ((this[0x72] != (RenderingContext)0x0) &&
     (this[0x72] = (RenderingContext)0x0, *(int *)this == 0)) {
    glDisable(0xb50);
  }
  UseProgram(this,1);
                    /* try { // try from 0058c5a4 to 0068c5ab has its CatchHandler @ 0058c944 */
  VertexArrayObject::SetVertexAttribPointer(this,0x8074,3,0x1406,0xc,&local_78);
  VertexArrayObject::SetVertexAttribPointer(this,0x8078,2,0x1406,8,&local_98);
                    /* try { // try from 0058c5cc to 0068c5f3 has its CatchHandler @ 0058c89c */
  if ((((this[0x77] == (RenderingContext)0xff) && (this[0x78] == (RenderingContext)0xff)) &&
      (this[0x79] == (RenderingContext)0xff)) && (this[0x7a] == (RenderingContext)0xff)) {
                    /* try { // try from 0058c690 to 0068c6b7 has its CatchHandler @ 0058ccc0 */
    if (this[0x76] != (RenderingContext)0x0) goto LAB_0058c60c;
  }
  else {
    this[0x76] = (RenderingContext)0x1;
    *(undefined4 *)(this + 0x77) = 0xffffffff;
LAB_0058c60c:
    if (*(int *)this == 0) {
                    /* try { // try from 0058c61c to 0068c627 has its CatchHandler @ 0058c8f4 */
      glColor4ub(0xff,0xff,0xff,0xff);
    }
    this[0x76] = (RenderingContext)0x0;
  }
  if (this[0x80] != (RenderingContext)0x0) {
    if (*(int *)this == 1) {
                    /* try { // try from 0058c648 to 0068c66f has its CatchHandler @ 0058c898 */
      RenderingProgram::HasUniformVariable(*(RenderingProgram **)(this + 0x38),0);
    }
    this[0x80] = (RenderingContext)0x0;
  }
  glDrawArrays(5,0,4);
LAB_0058c660:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


