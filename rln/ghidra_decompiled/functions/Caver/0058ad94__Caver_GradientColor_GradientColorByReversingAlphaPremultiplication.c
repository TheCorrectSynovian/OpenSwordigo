/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058ad94
 * Function: Caver::GradientColor::GradientColorByReversingAlphaPremultiplication
 * Signature: undefined __thiscall GradientColorByReversingAlphaPremultiplication(GradientColor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GradientColor::GradientColorByReversingAlphaPremultiplication() */

void __thiscall
Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(GradientColor *this)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  GradientColor *pGVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long *in_x8;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 local_6c;
  
  lVar6 = tpidr_el0;
  lVar10 = *(long *)(lVar6 + 0x28);
  pGVar7 = operator_new(0x18);
  uVar4 = *(uint *)this;
  puVar2 = *(undefined4 **)(this + 8);
  puVar3 = *(undefined4 **)(this + 0x10);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (long)(int)uVar4;
                    /* catch() { ... } // from try @ 0058a874 with catch @ 0058ade0 */
                    /* catch() { ... } // from try @ 0058aba8 with catch @ 0058ade4 */
                    /* catch() { ... } // from try @ 0058aa40 with catch @ 0058ade8 */
  uVar11 = (long)(int)uVar4 << 2;
                    /* catch() { ... } // from try @ 0058a8d8 with catch @ 0058adec */
                    /* catch() { ... } // from try @ 0058a778 with catch @ 0058adf0 */
  *(undefined8 *)(pGVar7 + 8) = 0;
  if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
    uVar11 = 0xffffffffffffffff;
  }
  *(undefined8 *)(pGVar7 + 0x10) = 0;
  *(uint *)pGVar7 = uVar4;
  puVar8 = operator_new__(uVar11);
  *(undefined4 **)(pGVar7 + 8) = puVar8;
                    /* try { // try from 0058ae14 to 0068b637 has its CatchHandler @ 0058b640 */
  puVar9 = operator_new__(uVar11);
  *(undefined4 **)(pGVar7 + 0x10) = puVar9;
  if (0 < (int)uVar4) {
    *puVar8 = *puVar2;
    *puVar9 = *puVar3;
    if (uVar4 != 1) {
                    /* catch() { ... } // from try @ 0058a704 with catch @ 0058ae40 */
                    /* catch() { ... } // from try @ 0058a35c with catch @ 0058ae44 */
                    /* catch() { ... } // from try @ 0058a1d4 with catch @ 0058ae48 */
      puVar8[1] = puVar2[1];
                    /* catch() { ... } // from try @ 0058a494 with catch @ 0058ae4c */
      puVar9[1] = puVar3[1];
      if (uVar4 != 2) {
        uVar11 = 2;
        do {
          lVar13 = *(long *)(pGVar7 + 0x10);
          uVar1 = uVar11 + 1;
          *(undefined4 *)(*(long *)(pGVar7 + 8) + uVar11 * 4) = puVar2[uVar11];
          *(undefined4 *)(lVar13 + uVar11 * 4) = puVar3[uVar11];
          uVar11 = uVar1;
        } while (uVar4 != uVar1);
      }
    }
  }
  *in_x8 = (long)pGVar7;
  boost::detail::shared_count::shared_count<Caver::GradientColor>
            ((shared_count *)(in_x8 + 1),pGVar7);
                    /* catch() { ... } // from try @ 0058ab7c with catch @ 0058ae9c */
  boost::detail::sp_enable_shared_from_this();
  if (0 < *(int *)this) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      Color::ColorByReversingAlphaPremultiplication((Color *)(*(long *)(this + 0x10) + lVar12));
      lVar13 = lVar13 + 1;
      *(undefined4 *)(*(long *)(*in_x8 + 0x10) + lVar12) = local_6c;
      lVar12 = lVar12 + 4;
    } while (lVar13 < *(int *)this);
  }
                    /* catch() { ... } // from try @ 0058ab48 with catch @ 0058aeec */
  if (*(long *)(lVar6 + 0x28) == lVar10) {
                    /* catch() { ... } // from try @ 0058ab28 with catch @ 0058aefc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


