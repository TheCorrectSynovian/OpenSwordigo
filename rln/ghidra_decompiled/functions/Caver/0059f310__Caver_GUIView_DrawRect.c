/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059f310
 * Function: Caver::GUIView::DrawRect
 * Signature: undefined __thiscall DrawRect(GUIView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUIView::DrawRect
          (GUIView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  GUIView *pGVar8;
  GUIView *pGVar9;
  GUIView *pGVar10;
  float local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  float local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  undefined8 local_c8;
  float afStack_b8 [16];
  long local_78;
  
  uVar7 = _UNK_006837f8;
  uVar6 = _DAT_006837f0;
  uVar5 = _UNK_006837e8;
  uVar4 = _DAT_006837e0;
  uVar3 = _UNK_00683498;
  uVar2 = _DAT_00683490;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  pGVar9 = this + 0x20;
  pGVar10 = *(GUIView **)pGVar9;
  if (pGVar9 != pGVar10) {
    do {
      pGVar8 = *(GUIView **)(pGVar10 + 0x10);
      if (pGVar8[0xe4] == (GUIView)0x0) {
        if (pGVar8[0xe8] != (GUIView)0x0) {
          glEnable(0xc11);
          local_140 = *(float *)(param_1 + 0x50) * 0.5;
          local_12c = *(float *)(param_1 + 0x54) * 0.5;
          local_d0 = *(float *)(param_1 + 0x48) + local_140;
          fStack_cc = *(float *)(param_1 + 0x4c) + local_12c;
          uStack_134 = 0;
          local_13c = 0;
          uStack_120 = 0;
          local_128 = 0;
          local_108 = 0x3f80000000000000;
          uStack_f8 = uVar3;
          local_100 = uVar2;
          uStack_e8 = uVar5;
          uStack_f0 = uVar4;
          local_c8 = 0x3f80000000000000;
          uStack_110 = uVar3;
          local_118 = uVar2;
          uStack_d8 = uVar7;
          local_e0 = uVar6;
          C_Matrix4Mul((float *)&local_100,&local_140,afStack_b8);
                    /* catch() { ... } // from try @ 0059ee9c with catch @ 0059f410 */
          C_Matrix4Mul((float *)param_3,(float *)(this + 0xa4),&local_140);
          C_Matrix4Mul(afStack_b8,&local_140,afStack_b8);
                    /* try { // try from 0059f434 to 0069f583 has its CatchHandler @ 0059f858 */
          Rectangle::TransformedRectangle((Matrix4 *)(pGVar8 + 0x74));
          glScissor((int)local_140,(int)(float)local_13c,(int)local_13c._4_4_,(int)(float)uStack_134
                   );
        }
                    /* catch() { ... } // from try @ 0059f124 with catch @ 0059f460 */
        DrawSubviewRect(this,pGVar8,param_1,param_2,param_3);
        if (pGVar8[0xe8] != (GUIView)0x0) {
          glDisable(0xc11);
        }
      }
      pGVar10 = *(GUIView **)pGVar10;
    } while (pGVar9 != pGVar10);
  }
                    /* catch() { ... } // from try @ 0059f0fc with catch @ 0059f490 */
                    /* catch() { ... } // from try @ 0059f0f4 with catch @ 0059f494 */
  if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 0059f080 with catch @ 0059f498 */
                    /* catch() { ... } // from try @ 0059f06c with catch @ 0059f49c */
                    /* catch() { ... } // from try @ 0059f030 with catch @ 0059f4a0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


