/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059bbec
 * Function: Caver::GUIScrollView::ScrollRectToVisible
 * Signature: undefined __thiscall ScrollRectToVisible(GUIScrollView * this, Rectangle * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&, bool) */

void __thiscall
Caver::GUIScrollView::ScrollRectToVisible(GUIScrollView *this,Rectangle *param_1,bool param_2)

{
  GUIScrollView *pGVar1;
  GUIScrollView *pGVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 0059bc04 to 0069bc2b has its CatchHandler @ 0059c5f8 */
  pGVar1 = this + 0x100;
  if (this[0x104] != (GUIScrollView)0x0) {
    pGVar1 = this + 0x108;
  }
  fVar8 = *(float *)(this + 0x88) - *(float *)(param_1 + 4);
  pGVar2 = this + 300;
  if (this[0x130] != (GUIScrollView)0x0) {
    pGVar2 = this + 0x134;
  }
  fVar5 = (*(float *)(this + 0x88) + *(float *)(this + 0x90)) -
          (*(float *)(param_1 + 4) + *(float *)(param_1 + 0xc));
  fVar4 = *(float *)(this + 0x84) - *(float *)param_1;
  fVar7 = (*(float *)(this + 0x84) + *(float *)(this + 0x8c)) -
          (*(float *)param_1 + *(float *)(param_1 + 8));
  if (fVar8 <= *(float *)pGVar2) {
    fVar8 = *(float *)pGVar2;
  }
  fVar6 = *(float *)pGVar1;
  this[0xfc] = (GUIScrollView)0x0;
  fVar3 = DAT_00683944;
  if (fVar4 <= fVar6) {
    fVar4 = fVar6;
  }
  if (fVar4 <= fVar7) {
    fVar7 = fVar4;
  }
  *(undefined4 *)(this + 0x10c) = 0;
  this[0x128] = (GUIScrollView)0x0;
  *(undefined4 *)(this + 0x138) = 0;
  if (fVar3 < ABS(fVar7 - *(float *)(this + 0x108))) {
    *(undefined4 *)(this + 0x124) = 0;
  }
                    /* try { // try from 0059bc9c to 0069bca7 has its CatchHandler @ 0059bee0 */
  if (fVar8 <= fVar5) {
    fVar5 = fVar8;
  }
  this[0x104] = (GUIScrollView)0x1;
  *(float *)(this + 0x108) = fVar7;
  if (fVar3 < ABS(fVar5 - *(float *)(this + 0x134))) {
    *(undefined4 *)(this + 0x150) = 0;
  }
  this[0x130] = (GUIScrollView)0x1;
  *(float *)(this + 0x134) = fVar5;
                    /* try { // try from 0059bcc8 to 0069bcef has its CatchHandler @ 0059bea0 */
  if (!param_2) {
    *(float *)(this + 0x100) = fVar7;
    *(float *)(this + 300) = fVar5;
  }
  return;
}


