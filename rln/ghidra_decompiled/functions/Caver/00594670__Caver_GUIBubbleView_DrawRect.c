/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00594670
 * Function: Caver::GUIBubbleView::DrawRect
 * Signature: undefined __thiscall DrawRect(GUIBubbleView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIBubbleView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUIBubbleView::DrawRect
          (GUIBubbleView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  float *pfVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  float local_c0 [6];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  lVar5 = 0;
  if (*(long *)(this + 0x108) != 0) {
    RenderingContext::SetIdentityMatrix(param_1);
    lVar5 = *(long *)(this + 0x108);
    if (*(int *)(lVar5 + 0xa0) == 0) {
      if (*(char *)(lVar5 + 100) == '\0') {
        pfVar1 = *(float **)(lVar5 + 0x78);
        plVar2 = *(long **)(lVar5 + 0x80);
      }
      else {
        pfVar1 = *(float **)(lVar5 + 0x90);
        plVar2 = *(long **)(lVar5 + 0x98);
      }
    }
    else {
                    /* catch() { ... } // from try @ 00594de8 with catch @ 005946d8
                       catch() { ... } // from try @ 00595658 with catch @ 005946d8 */
      pfVar1 = *(float **)(lVar5 + 0xa8);
      plVar2 = *(long **)(lVar5 + 0xb0);
    }
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    iVar7 = (int)(*pfVar1 * 0.5 * DAT_00683ffc);
    iVar6 = (int)(*pfVar1 * 0.5 * 0.0);
    if (0xfe < iVar7) {
      iVar7 = 0xff;
    }
                    /* try { // try from 00594720 to 00694747 has its CatchHandler @ 00594f70 */
    if (0xfe < iVar6) {
      iVar6 = -1;
    }
    uVar3 = (undefined1)iVar6;
    local_80._0_4_ = (float)CONCAT13((char)iVar7,CONCAT12(uVar3,CONCAT11(uVar3,uVar3)));
    RenderingContext::FillRect(param_1,(Rectangle *)(this + 0x84),(Color *)&local_80,0.0);
    if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 00594768 to 0069478f has its CatchHandler @ 00594f60 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar5 = plVar2[2];
      plVar2[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    lVar5 = *(long *)(this + 0x108);
  }
  local_50 = *(undefined8 *)(this + 0x100);
                    /* try { // try from 005947b0 to 006947d7 has its CatchHandler @ 00594f50 */
  uStack_48 = 0x3f80000000000000;
  uStack_78 = _UNK_00683498;
  local_80 = _DAT_00683490;
  uStack_68 = _UNK_006837e8;
  uStack_70 = _DAT_006837e0;
  uStack_58 = _UNK_006837f8;
  local_60 = _DAT_006837f0;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0xa0) == 0) {
      if (*(char *)(lVar5 + 100) == '\0') {
        pfVar1 = *(float **)(lVar5 + 0x78);
        plVar2 = *(long **)(lVar5 + 0x80);
      }
      else {
        pfVar1 = *(float **)(lVar5 + 0x90);
        plVar2 = *(long **)(lVar5 + 0x98);
      }
    }
    else {
      pfVar1 = *(float **)(lVar5 + 0xa8);
      plVar2 = *(long **)(lVar5 + 0xb0);
    }
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    local_c0[0] = *pfVar1;
    local_c0[3] = 0.0;
    local_c0[4] = 0.0;
    local_c0[1] = 0.0;
    local_c0[2] = 0.0;
                    /* try { // try from 005947f8 to 0069481f has its CatchHandler @ 00594f40 */
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_8c = 0;
    local_94 = 0;
    local_84 = 0x3f800000;
    local_c0[5] = local_c0[0];
    local_98 = local_c0[0];
    C_Matrix4Mul((float *)&local_80,local_c0,(float *)&local_80);
    if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar5 = plVar2[2];
                    /* try { // try from 00594840 to 00694867 has its CatchHandler @ 00594f30 */
      plVar2[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_80);
  GUITextBubble::Draw(*(GUITextBubble **)(this + 0xf0),param_1);
  if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 00594888 to 006948af has its CatchHandler @ 00594f20 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


