/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b21d0
 * Function: Caver::Rectangle::Transform
 * Signature: undefined __thiscall Transform(Rectangle * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::Transform(Caver::Matrix4 const&) */

void __thiscall Caver::Rectangle::Transform(Rectangle *this,Matrix4 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  long local_78;
  
  uVar2 = DAT_006840e0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b2184 with catch @ 005b21e4
                        */
                    /* try { // try from 005b21e8 to 006b21eb has its CatchHandler @ 005b21f4 */
                    /* try { // try from 005b21ec to 006b21f7 has its CatchHandler @ 005b209c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b21e8 with catch @ 005b21f4
                        */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)this;
  fVar7 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar4 = *(float *)(this + 0xc);
  local_90 = DAT_006840e0;
  local_98 = fVar5;
  fStack_94 = fVar7;
  C_Matrix4Vector4Mul((float *)param_1,&local_98,&local_88);
  fVar8 = (float)NEON_fminnm(local_88,DAT_0068431c);
  fVar9 = local_88;
  if (local_88 <= DAT_00689974) {
    fVar9 = DAT_00689974;
  }
  fVar10 = (float)NEON_fminnm(fStack_84,DAT_0068431c);
  fVar11 = fStack_84;
  if (fStack_84 <= DAT_00689974) {
    fVar11 = DAT_00689974;
  }
  local_90 = uVar2;
  local_98 = fVar5 + fVar3;
  fStack_94 = fVar7;
  C_Matrix4Vector4Mul((float *)param_1,&local_98,&local_88);
  fVar6 = local_88;
  if (fVar8 <= local_88) {
    fVar6 = fVar8;
  }
  fVar8 = local_88;
  if (local_88 <= fVar9) {
    fVar8 = fVar9;
  }
  fVar9 = fStack_84;
  if (fVar10 <= fStack_84) {
    fVar9 = fVar10;
  }
  fVar10 = fStack_84;
  if (fStack_84 <= fVar11) {
    fVar10 = fVar11;
  }
  local_90 = uVar2;
  local_98 = fVar5;
  fStack_94 = fVar7 + fVar4;
  C_Matrix4Vector4Mul((float *)param_1,&local_98,&local_88);
  fVar11 = local_88;
  if (fVar6 <= local_88) {
    fVar11 = fVar6;
  }
  fVar6 = local_88;
  if (local_88 <= fVar8) {
    fVar6 = fVar8;
  }
  fVar8 = fStack_84;
  if (fVar9 <= fStack_84) {
    fVar8 = fVar9;
  }
  fVar9 = fStack_84;
  if (fStack_84 <= fVar10) {
    fVar9 = fVar10;
  }
  local_90 = uVar2;
  local_98 = fVar5 + fVar3;
  fStack_94 = fVar7 + fVar4;
  C_Matrix4Vector4Mul((float *)param_1,&local_98,&local_88);
  fVar3 = local_88;
  if (fVar11 <= local_88) {
    fVar3 = fVar11;
  }
  if (local_88 <= fVar6) {
    local_88 = fVar6;
  }
  fVar4 = fStack_84;
  if (fVar8 <= fStack_84) {
    fVar4 = fVar8;
  }
                    /* catch() { ... } // from try @ 005b232c with catch @ 005b230c
                       catch() { ... } // from try @ 005b2390 with catch @ 005b230c */
  if (fStack_84 <= fVar9) {
    fStack_84 = fVar9;
  }
  *(float *)this = fVar3;
  *(float *)(this + 4) = fVar4;
  *(float *)(this + 8) = local_88 - fVar3;
  *(float *)(this + 0xc) = fStack_84 - fVar4;
                    /* try { // try from 005b2324 to 006b232b has its CatchHandler @ 005b235c */
                    /* try { // try from 005b232c to 006b2363 has its CatchHandler @ 005b230c */
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


