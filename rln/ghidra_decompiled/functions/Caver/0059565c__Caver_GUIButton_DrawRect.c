/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059565c
 * Function: Caver::GUIButton::DrawRect
 * Signature: undefined __thiscall DrawRect(GUIButton * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIButton::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUIButton::DrawRect
          (GUIButton *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  GUIButton GVar1;
  GUILabel GVar2;
  long lVar3;
  GUIRoundedRect *this_00;
  GUITexturedRect *this_01;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  GUILabel *pGVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  GUILabel unaff_w28;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  GUIButton local_fd;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  GUIButton local_f5;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
                    /* catch() { ... } // from try @ 00594f94 with catch @ 00595660
                       catch() { ... } // from try @ 00595430 with catch @ 00595660 */
                    /* catch() { ... } // from try @ 00595680 with catch @ 0059566c */
                    /* try { // try from 0059567c to 0069567f has its CatchHandler @ 00595690 */
  lVar3 = tpidr_el0;
                    /* try { // try from 00595680 to 006956a3 has its CatchHandler @ 0059566c */
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 0059567c with catch @ 00595690 */
  if (this[0x124] != (GUIButton)0x0) goto LAB_00595a40;
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  uStack_88 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
  local_90 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
  uStack_78 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  uStack_80 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
  uStack_a8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
  local_b0 = *(undefined8 *)PTR_identityMatrix_007e74c8;
  uStack_98 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
  uStack_a0 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_b0);
  uVar7 = (uint)(byte)this[0x1bc];
  uVar9 = (uint)(byte)this[0x1bd];
  uVar5 = *(uint *)(this + 0x120);
  uVar11 = (uint)(byte)this[0x1be];
  if ((uVar5 >> 1 & 1) != 0) {
    uVar7 = (uint)((float)uVar7 * 0.5);
    uVar9 = (uint)((float)uVar9 * 0.5);
    uVar11 = (uint)((float)uVar11 * 0.5);
    if (0xfe < (int)uVar7) {
      uVar7 = 0xff;
    }
    if (0xfe < (int)uVar9) {
      uVar9 = 0xff;
    }
    if (0xfe < (int)uVar11) {
      uVar11 = 0xff;
    }
  }
  GVar1 = this[0x1bf];
  uVar12 = (uint)(byte)GVar1;
  if (*(GUIRoundedRect **)(this + 0x138) != (GUIRoundedRect *)0x0) {
    GUIRoundedRect::Draw(*(GUIRoundedRect **)(this + 0x138),param_1);
    uVar5 = *(uint *)(this + 0x120);
  }
  if (((uVar5 & 1) == 0) || (*(GUIRoundedRect **)(this + 0x130) == (GUIRoundedRect *)0x0)) {
    if (*(GUIRoundedRect **)(this + 0x128) != (GUIRoundedRect *)0x0) {
      local_100 = (char)uVar7;
      local_ff = (char)uVar9;
      local_fe = (char)uVar11;
      local_fd = GVar1;
      GUIRoundedRect::SetColor(*(GUIRoundedRect **)(this + 0x128),&local_100);
      this_00 = *(GUIRoundedRect **)(this + 0x128);
      goto LAB_0059579c;
    }
  }
  else {
    local_f8 = (char)uVar7;
    local_f7 = (char)uVar9;
    local_f6 = (char)uVar11;
    local_f5 = GVar1;
    GUIRoundedRect::SetColor(*(GUIRoundedRect **)(this + 0x130),&local_f8);
    this_00 = *(GUIRoundedRect **)(this + 0x130);
LAB_0059579c:
    GUIRoundedRect::Draw(this_00,param_1);
  }
                    /* catch() { ... } // from try @ 00595854 with catch @ 005957a4 */
                    /* try { // try from 005957bc to 006957c3 has its CatchHandler @ 00595860 */
  local_c0 = (int)(*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5 +
                  *(float *)(this + 0x1b0));
                    /* try { // try from 005957f0 to 006957fb has its CatchHandler @ 00595808 */
  local_bc = (int)(*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5 +
                  *(float *)(this + 0x1b4));
                    /* catch() { ... } // from try @ 005957f0 with catch @ 00595808 */
  local_b8 = 0x3f80000000000000;
  uStack_e8 = _UNK_00683498;
  local_f0 = _DAT_00683490;
  uStack_d8 = _UNK_006837e8;
  uStack_e0 = _DAT_006837e0;
  uStack_c8 = _UNK_006837f8;
  local_d0 = _DAT_006837f0;
  C_Matrix4Mul((float *)&local_f0,(float *)(this + 0x158),(float *)&local_b0);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_b0);
                    /* try { // try from 0059582c to 00695853 has its CatchHandler @ 0059585c */
  if ((((byte)this[0x120] & 1) == 0) || (*(long *)(this + 0x150) == 0)) {
                    /* try { // try from 00595854 to 0069586f has its CatchHandler @ 005957a4 */
    if (*(long *)(this + 0x148) != 0) {
                    /* catch() { ... } // from try @ 0059582c with catch @ 0059585c */
                    /* catch() { ... } // from try @ 005957bc with catch @ 00595860 */
                    /* try { // try from 00595870 to 0069587b has its CatchHandler @ 0059587c */
      *(uint *)(*(long *)(this + 0x148) + 0x1c) =
           uVar7 & 0xff | (uVar9 & 0xff) << 8 | (uVar11 & 0xff) << 0x10 | (uint)(byte)GVar1 << 0x18;
      this_01 = *(GUITexturedRect **)(this + 0x148);
      goto LAB_00595878;
    }
  }
  else {
    *(uint *)(*(long *)(this + 0x150) + 0x1c) =
         uVar7 & 0xff | (uVar9 & 0xff) << 8 | (uVar11 & 0xff) << 0x10 | (uint)(byte)GVar1 << 0x18;
    this_01 = *(GUITexturedRect **)(this + 0x150);
LAB_00595878:
                    /* catch() { ... } // from try @ 00595870 with catch @ 0059587c */
    GUITexturedRect::Draw(this_01,param_1);
  }
                    /* try { // try from 00595880 to 00695883 has its CatchHandler @ 00595888 */
  pGVar8 = *(GUILabel **)(this + 0x140);
  if (pGVar8 != (GUILabel *)0x0) {
                    /* catch() { ... } // from try @ 00595880 with catch @ 00595888 */
    GVar2 = pGVar8[0x108];
    uVar11 = (uint)(byte)GVar2;
    unaff_w28 = pGVar8[0x109];
    uVar12 = (uint)(byte)pGVar8[0x10a];
    uVar9 = (uint)(byte)pGVar8[0x10b];
    if (((byte)this[0x120] >> 1 & 1) != 0) {
                    /* catch() { ... } // from try @ 00595920 with catch @ 005958b0
                       catch() { ... } // from try @ 005959c4 with catch @ 005958b0 */
      uVar7 = (uint)((float)(byte)GVar2 * DAT_00683f68);
      uVar5 = (uint)((float)(byte)unaff_w28 * DAT_00683f68);
      uVar6 = (uint)((float)uVar12 * DAT_00683f68);
      if (0xfe < (int)uVar7) {
        uVar7 = 0xff;
      }
      if (0xfe < (int)uVar5) {
        uVar5 = 0xff;
      }
      if (0xfe < (int)uVar6) {
        uVar6 = 0xff;
      }
      if ((((uint)(byte)pGVar8[0x10a] != (uVar6 & 0xff)) ||
          ((uint)(byte)unaff_w28 != (uVar5 & 0xff))) || ((uint)(byte)GVar2 != (uVar7 & 0xff))) {
        plVar10 = *(long **)(pGVar8 + 0x118);
        uVar9 = (uint)(byte)pGVar8[0x10b];
        *(undefined8 *)(pGVar8 + 0x110) = 0;
        *(undefined8 *)(pGVar8 + 0x118) = 0;
                    /* try { // try from 0059591c to 0069591f has its CatchHandler @ 0059597c */
                    /* try { // try from 00595920 to 0069599b has its CatchHandler @ 005958b0 */
        *(uint *)(pGVar8 + 0x108) =
             uVar9 << 0x18 | uVar7 & 0xff | (uVar5 & 0xff) << 8 | (uVar6 & 0xff) << 0x10;
        if ((plVar10 != (long *)0x0) &&
           (lVar4 = plVar10[1], plVar10[1] = lVar4 + -1, lVar4 + -1 == 0)) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          lVar4 = plVar10[2];
          plVar10[2] = lVar4 + -1;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))(plVar10);
          }
        }
        GUILabel::UpdateText(pGVar8);
      }
    }
  }
                    /* catch() { ... } // from try @ 0059591c with catch @ 0059597c */
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  pGVar8 = *(GUILabel **)(this + 0x140);
                    /* try { // try from 0059599c to 006959c3 has its CatchHandler @ 005959cc */
                    /* try { // try from 005959c4 to 006959cf has its CatchHandler @ 005958b0 */
                    /* catch() { ... } // from try @ 0059599c with catch @ 005959cc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00595b24 with catch @ 005959d0
                       catch(type#1 @ 00000000) { ... } // from try @ 00595da0 with catch @ 005959d0
                        */
  if ((pGVar8 != (GUILabel *)0x0) &&
     ((((uVar11 & 0xff) != (uint)(byte)pGVar8[0x108] || (unaff_w28 != pGVar8[0x109])) ||
      ((uVar12 != (byte)pGVar8[0x10a] || ((uVar9 & 0xff) != (uint)(byte)pGVar8[0x10b])))))) {
    plVar10 = *(long **)(pGVar8 + 0x118);
    *(undefined8 *)(pGVar8 + 0x110) = 0;
    *(undefined8 *)(pGVar8 + 0x118) = 0;
    *(uint *)(pGVar8 + 0x108) =
         uVar11 & 0xff | (uint)(byte)unaff_w28 << 8 | uVar12 << 0x10 | uVar9 << 0x18;
    if ((plVar10 != (long *)0x0) && (lVar4 = plVar10[1], plVar10[1] = lVar4 + -1, lVar4 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar4 = plVar10[2];
      plVar10[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    GUILabel::UpdateText(pGVar8);
  }
LAB_00595a40:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


