/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a82fc
 * Function: Caver::GUIViewLayout::LayoutForViewWithFrameInBounds
 * Signature: undefined __thiscall LayoutForViewWithFrameInBounds(GUIViewLayout * this, Rectangle * param_1, Rectangle * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(Caver::Rectangle const&, Caver::Rectangle
   const&, float) */

void __thiscall
Caver::GUIViewLayout::LayoutForViewWithFrameInBounds
          (GUIViewLayout *this,Rectangle *param_1,Rectangle *param_2,float param_3)

{
  undefined *puVar1;
  GUIViewLayout *pGVar2;
  long *in_x8;
  long lVar3;
  uint uVar4;
  GUIViewLayout *pGVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
                    /* try { // try from 005a8310 to 006a8337 has its CatchHandler @ 005a8540 */
  pGVar2 = operator_new(0x70);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined8 *)(pGVar2 + 0x10) = 0;
  *(undefined8 *)(pGVar2 + 0x18) = 0;
  *(undefined **)pGVar2 = puVar1;
  *(undefined8 *)(pGVar2 + 8) = 0;
  pGVar5 = pGVar2 + 0x28;
  *(undefined8 *)pGVar5 = 0;
  *in_x8 = (long)pGVar2;
                    /* try { // try from 005a8358 to 006a837f has its CatchHandler @ 005a869c */
  *(undefined8 *)(pGVar2 + 0x60) = 0;
  *(undefined8 *)(pGVar2 + 0x68) = 0x3f80000000000000;
  *(undefined8 *)(pGVar2 + 0x48) = 0;
  *(undefined8 *)(pGVar2 + 0x50) = 0;
  *(undefined8 *)(pGVar2 + 0x30) = 0;
  *(GUIViewLayout **)(pGVar2 + 0x38) = pGVar5;
  *(GUIViewLayout **)(pGVar2 + 0x40) = pGVar5;
  *(undefined8 *)(pGVar2 + 0x58) = 0;
  boost::detail::shared_count::shared_count<Caver::GUIViewLayout>
            ((shared_count *)(in_x8 + 1),pGVar2);
  boost::detail::sp_enable_shared_from_this();
  lVar3 = *in_x8;
  *(float *)(lVar3 + 0x6c) = param_3;
  fVar7 = *(float *)this;
  fVar10 = *(float *)(this + 4);
  fVar12 = *(float *)param_1;
  fVar11 = *(float *)(param_1 + 4);
                    /* try { // try from 005a839c to 006a83b7 has its CatchHandler @ 005a87a4 */
  if (fVar12 + *(float *)(param_1 + 8) * 0.5 <= fVar7 + *(float *)(this + 8) * 0.5) {
    fVar9 = 0.0;
                    /* try { // try from 005a83e0 to 006a83eb has its CatchHandler @ 005a85e4 */
    fVar8 = ((fVar12 + *(float *)(param_1 + 8)) - (fVar7 + *(float *)(this + 8))) / param_3;
    uVar4 = 2;
  }
  else {
    fVar8 = 0.0;
    fVar9 = (fVar7 - fVar12) / param_3;
    uVar4 = 1;
  }
  if (fVar11 + *(float *)(param_1 + 0xc) * 0.5 <= fVar10 + *(float *)(this + 0xc) * 0.5) {
                    /* try { // try from 005a840c to 006a8433 has its CatchHandler @ 005a853c */
    fVar12 = 0.0;
    fVar7 = ((fVar11 + *(float *)(param_1 + 0xc)) - (fVar10 + *(float *)(this + 0xc))) / param_3;
    uVar6 = 8;
  }
  else {
    fVar7 = 0.0;
    fVar12 = (fVar10 - fVar11) / param_3;
    uVar6 = 4;
  }
  *(float *)(lVar3 + 0x54) = fVar9;
  *(float *)(lVar3 + 0x58) = fVar8;
  *(uint *)(lVar3 + 0x50) = uVar6 | uVar4;
  *(float *)(lVar3 + 0x5c) = fVar12;
  *(float *)(lVar3 + 0x60) = fVar7;
                    /* try { // try from 005a8434 to 006a8563 has its CatchHandler @ 005a8080 */
  *(undefined8 *)(lVar3 + 100) = *(undefined8 *)(this + 8);
  return;
}


