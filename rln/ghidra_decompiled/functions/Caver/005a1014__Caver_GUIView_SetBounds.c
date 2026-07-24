/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a1014
 * Function: Caver::GUIView::SetBounds
 * Signature: undefined __thiscall SetBounds(GUIView * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::SetBounds(Caver::Rectangle const&) */

void __thiscall Caver::GUIView::SetBounds(GUIView *this,Rectangle *param_1)

{
  bool bVar1;
  GUIView *pGVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  GUIView *pGVar7;
  GUIView *pGVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_78 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 005a1044 to 006a104f has its CatchHandler @ 005a0838 */
                    /* catch() { ... } // from try @ 005a0c18 with catch @ 005a104c */
                    /* catch() { ... } // from try @ 005a1064 with catch @ 005a1050 */
  if (ABS(*(float *)param_1 - *(float *)(this + 0x84)) <= DAT_00683734) {
                    /* try { // try from 005a1064 to 006a1087 has its CatchHandler @ 005a1050 */
                    /* catch() { ... } // from try @ 005a1060 with catch @ 005a1074 */
    bVar1 = DAT_00683734 < ABS(*(float *)(param_1 + 4) - *(float *)(this + 0x88));
  }
  else {
    bVar1 = true;
                    /* try { // try from 005a1060 to 006a1063 has its CatchHandler @ 005a1074 */
  }
  if (ABS(*(float *)(param_1 + 8) - *(float *)(this + 0x8c)) <= DAT_00683734) {
    fVar14 = ABS(*(float *)(param_1 + 0xc) - *(float *)(this + 0x90));
    bVar6 = DAT_00683734 > fVar14 || fVar14 == DAT_00683734;
    if (!(bool)(bVar1 | (DAT_00683734 <= fVar14 && fVar14 != DAT_00683734))) goto LAB_005a1198;
  }
  else {
    bVar6 = false;
  }
  uVar13 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x8c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x84) = uVar13;
  *(float *)(this + 0x7c) = *(float *)(this + 0x8c);
  *(float *)(this + 0x80) = *(float *)(this + 0x90);
  Matrix4::Ortho((Matrix4 *)this,*(float *)(this + 0x84),
                 *(float *)(this + 0x88) + *(float *)(this + 0x90),
                 *(float *)(this + 0x84) + *(float *)(this + 0x8c),*(float *)(this + 0x88),-1.0,1.0)
  ;
  pGVar2 = this + 0xe4;
  pGVar8 = pGVar2;
  if (pGVar2 <= this + 0xa8) {
    pGVar8 = this + 0xa8;
  }
  uVar3 = ((ulong)(pGVar8 + (-0xa5 - (long)this)) >> 2) + 1;
  if (uVar3 < 8) {
    pGVar7 = this + 0xa4;
    puVar9 = local_78;
LAB_005a1174:
    do {
      pGVar8 = pGVar7 + 4;
      *(undefined4 *)pGVar7 = *(undefined4 *)puVar9;
      pGVar7 = pGVar8;
      puVar9 = (undefined8 *)((long)puVar9 + 4);
    } while (pGVar8 < pGVar2);
  }
  else {
    uVar10 = uVar3 & 0x7ffffffffffffff8;
    puVar9 = (undefined8 *)((long)local_78 + uVar10 * 4);
    pGVar8 = this + 0xb4;
    pGVar7 = this + uVar10 * 4 + 0xa4;
                    /* catch() { ... } // from try @ 005a116c with catch @ 005a114c
                       catch() { ... } // from try @ 005a11d0 with catch @ 005a114c */
    puVar11 = local_78 + 2;
    uVar12 = uVar10;
    do {
      puVar5 = puVar11 + -1;
      uVar13 = puVar11[-2];
      uVar16 = puVar11[1];
      uVar15 = *puVar11;
      uVar12 = uVar12 - 8;
      puVar11 = puVar11 + 4;
      *(undefined8 *)(pGVar8 + -8) = *puVar5;
      *(undefined8 *)(pGVar8 + -0x10) = uVar13;
      *(undefined8 *)(pGVar8 + 8) = uVar16;
      *(undefined8 *)pGVar8 = uVar15;
                    /* try { // try from 005a1164 to 006a116b has its CatchHandler @ 005a119c */
      pGVar8 = pGVar8 + 0x20;
    } while (uVar12 != 0);
                    /* try { // try from 005a116c to 006a11a3 has its CatchHandler @ 005a114c */
    if (uVar3 != uVar10) goto LAB_005a1174;
  }
  if (!bVar6) {
    (**(code **)(*(long *)this + 0x58))(this);
  }
LAB_005a1198:
                    /* catch() { ... } // from try @ 005a1164 with catch @ 005a119c */
                    /* try { // try from 005a11a4 to 006a11ab has its CatchHandler @ 005a11b8 */
  if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 005a11b4 to 006a11b7 has its CatchHandler @ 005a11c8 */
                    /* catch() { ... } // from try @ 005a11a4 with catch @ 005a11b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


