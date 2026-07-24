/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a28bc
 * Function: Caver::GUIWindow::DrawRect
 * Signature: undefined __thiscall DrawRect(GUIWindow * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUIWindow::DrawRect
          (GUIWindow *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  GUIWindow *pGVar1;
  intrusive_ptr *piVar2;
  GUIView *pGVar3;
  undefined1 uVar4;
  long lVar5;
  Texture *this_00;
  long *plVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  GUIWindow *pGVar10;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (DAT_00683944 < *(float *)(this + 0x1d8)) {
    (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
    RenderingContext::SetIdentityMatrix(param_1);
    RenderingContext::SetDepthTestEnabled(param_1,false);
                    /* try { // try from 005a2938 to 006a294b has its CatchHandler @ 005a2a28 */
    RenderingContext::SetBlendingEnabled(param_1,true);
    RenderingContext::SetDefaultBlendFunc(param_1);
                    /* try { // try from 005a294c to 006a29fb has its CatchHandler @ 005a27cc */
    iVar9 = (int)(*(float *)(this + 0x1d8) * DAT_00683ffc);
    iVar7 = (int)(*(float *)(this + 0x1d8) * 0.0);
    if (0xfe < iVar9) {
      iVar9 = 0xff;
    }
    if (0xfe < iVar7) {
      iVar7 = -1;
    }
    uVar4 = (undefined1)iVar7;
    local_a0._0_4_ = CONCAT13((char)iVar9,CONCAT12(uVar4,CONCAT11(uVar4,uVar4)));
    RenderingContext::FillRect(param_1,(Rectangle *)(this + 0x84),(Color *)&local_a0,0.0);
  }
  pGVar1 = this + 0x1c0;
  if ((((*(GUIWindow **)(this + 0x1c0) == pGVar1) ||
       (lVar8 = *(long *)(*(GUIWindow **)(this + 0x1c0) + 0x10),
       DAT_00683734 < *(float *)(lVar8 + 0x1fc))) || (*(char *)(lVar8 + 0x1f8) != '\0')) ||
     (*(long *)(this + 0x1d0) != 0)) {
                    /* catch() { ... } // from try @ 005a2850 with catch @ 005a29d8 */
    GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
    this[0x220] = (GUIWindow)0x1;
    goto LAB_005a29f4;
  }
  piVar2 = (intrusive_ptr *)(this + 0x208);
  if (*(long *)(this + 0x208) == 0) {
    this_00 = operator_new(0xa8);
    Texture::Texture(this_00);
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    plVar6 = *(long **)piVar2;
    *(Texture **)piVar2 = this_00;
    if ((plVar6 != (long *)0x0) &&
       (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar6 + 8))();
      this_00 = *(Texture **)piVar2;
    }
                    /* WARNING: Load size is inaccurate */
                    /* try { // try from 005a2b3c to 006a2b4f has its CatchHandler @ 005a2cc8 */
    Texture::Create(*(Texture **)(param_1 + 0x58),this_00,(int)*(float *)(this + 0x8c),
                    (int)*(float *)(this + 0x90),5);
  }
  plVar6 = *(long **)(this + 0x210);
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 005a2c28 to 006a2c3b has its CatchHandler @ 005a2d18 */
    RenderingContext::FramebufferForDrawingToTexture(param_1,piVar2);
    if (plStack_98 != (long *)0x0) {
                    /* try { // try from 005a2c3c to 006a2ceb has its CatchHandler @ 005a2a80 */
      plStack_98[1] = plStack_98[1] + 1;
    }
    plVar6 = *(long **)(this + 0x218);
    *(undefined8 *)(this + 0x210) = local_a0;
    *(long **)(this + 0x218) = plStack_98;
    if ((plVar6 != (long *)0x0) && (lVar8 = plVar6[1], plVar6[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar8 = plVar6[2];
      plVar6[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    plVar6 = plStack_98;
    if ((plStack_98 != (long *)0x0) &&
       (lVar8 = plStack_98[1], plStack_98[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      lVar8 = plVar6[2];
      plVar6[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* catch() { ... } // from try @ 005a2b3c with catch @ 005a2cc8 */
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    plVar6 = *(long **)(this + 0x210);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 005a2cec to 006a2d63 has its CatchHandler @ 005a2d6c */
      (**(code **)(*plVar6 + 0x10))(plVar6,1,0);
      plVar6 = *(long **)(this + 0x210);
      if (plVar6 != (long *)0x0) goto LAB_005a2b50;
    }
    GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  }
  else {
LAB_005a2b50:
                    /* try { // try from 005a2b50 to 006a2c27 has its CatchHandler @ 005a2a80 */
    if (this[0x220] != (GUIWindow)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,param_1);
      RenderingContext::Clear(param_1,true,true,false);
      uStack_78 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
      local_80 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
      uStack_68 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
      uStack_70 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
      plStack_98 = *(long **)(PTR_identityMatrix_007e74c8 + 8);
      local_a0 = *(undefined8 *)PTR_identityMatrix_007e74c8;
      uStack_88 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
      uStack_90 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
      GUIView::DrawRect((GUIView *)this,param_1,param_2,(Matrix4 *)&local_a0);
      (**(code **)(**(long **)(this + 0x210) + 0x20))(*(long **)(this + 0x210),param_1);
      this[0x220] = (GUIWindow)0x0;
    }
    RenderingContext::SetBlendingEnabled(param_1,false);
    RenderingContext::SetDepthTestEnabled(param_1,false);
    (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
    RenderingContext::SetIdentityMatrix(param_1);
    local_a0 = 0;
    plStack_98 = (long *)0x0;
    RenderingContext::DrawTexture
              (param_1,piVar2,(Rectangle *)&local_a0,(Rectangle *)(this + 0x84),0.0);
  }
LAB_005a29f4:
                    /* try { // try from 005a29fc to 006a2a73 has its CatchHandler @ 005a2a7c */
  for (pGVar10 = *(GUIWindow **)pGVar1; pGVar10 != pGVar1; pGVar10 = *(GUIWindow **)pGVar10) {
    pGVar3 = *(GUIView **)(pGVar10 + 0x10);
    plVar6 = *(long **)(pGVar10 + 0x18);
    if (plVar6 != (long *)0x0) {
      plVar6[1] = plVar6[1] + 1;
    }
    GUIView::DrawSubviewRect((GUIView *)this,pGVar3,param_1,param_2,param_3);
                    /* catch() { ... } // from try @ 005a2938 with catch @ 005a2a28 */
    if ((plVar6 != (long *)0x0) && (lVar8 = plVar6[1], plVar6[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar8 = plVar6[2];
      plVar6[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
                    /* try { // try from 005a2a74 to 006a2a7f has its CatchHandler @ 005a27cc */
  }
                    /* catch() { ... } // from try @ 005a29fc with catch @ 005a2a7c */
  if (*(long *)(this + 0x1e8) != 0) {
                    /* try { // try from 005a2a80 to 006a2b3b has its CatchHandler @ 005a2a80
                       catch() { ... } // from try @ 005a2a80 with catch @ 005a2a80
                       catch() { ... } // from try @ 005a2b50 with catch @ 005a2a80
                       catch() { ... } // from try @ 005a2c3c with catch @ 005a2a80
                       catch() { ... } // from try @ 005a2d64 with catch @ 005a2a80 */
    (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
    RenderingContext::SetIdentityMatrix(param_1);
    GUIEffect::Draw(*(GUIEffect **)(this + 0x1e8),param_1);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


