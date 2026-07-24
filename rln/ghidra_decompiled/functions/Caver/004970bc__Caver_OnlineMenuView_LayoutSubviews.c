/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004970bc
 * Function: Caver::OnlineMenuView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(OnlineMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OnlineMenuView::LayoutSubviews() */

void __thiscall Caver::OnlineMenuView::LayoutSubviews(OnlineMenuView *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  GUIView *pGVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  plVar1 = *(long **)(this + 0xf0);
  lVar8 = *(long *)(this + 0xf8);
  fVar10 = *(float *)(this + 0x84);
  fVar13 = *(float *)(this + 0x88);
  fVar11 = *(float *)(this + 0x8c);
  fVar14 = *(float *)(this + 0x90);
  fVar12 = *(float *)(*plVar1 + 0x80);
  GUIView::safeBounds();
  pGVar7 = *(GUIView **)(this + 0x108);
                    /* catch() { ... } // from try @ 00496ff8 with catch @ 00497120 */
  plVar4 = *(long **)(pGVar7 + 0x128);
  fVar10 = (fVar10 + fVar11) - (local_98 + local_90);
  if (16.0 < fVar10) {
    fVar10 = 16.0;
  }
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 00497184 to 0059718b has its CatchHandler @ 004971f0 */
    local_80 = fVar10 + 30.0;
    local_7c = 0.0;
  }
  else {
    plVar3 = (long *)*plVar4;
    fVar11 = _DAT_00000054;
                    /* try { // try from 00497148 to 0059714b has its CatchHandler @ 004971e4 */
    if ((plVar3 == (long *)0x0) || (fVar11 = *(float *)((long)plVar3 + 0x54), (int)plVar3[1] != 0))
    {
      local_80 = fVar10 + fVar11 + 30.0;
    }
    else {
      (**(code **)(*plVar3 + 8))();
      plVar4 = *(long **)(*(long *)(this + 0x108) + 0x128);
      local_80 = fVar10 + fVar11 + 30.0;
      if (plVar4 == (long *)0x0) {
        local_7c = 0.0;
        goto LAB_004971d8;
      }
    }
    plVar4 = (long *)*plVar4;
    local_7c = _DAT_00000058;
    if ((plVar4 != (long *)0x0) && (local_7c = *(float *)(plVar4 + 0xb), (int)plVar4[1] == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
LAB_004971d8:
  local_88 = *(undefined8 *)(pGVar7 + 0x74);
                    /* try { // try from 004971dc to 00597213 has its CatchHandler @ 00496f64 */
                    /* catch() { ... } // from try @ 00497148 with catch @ 004971e4
                       catch() { ... } // from try @ 004971d0 with catch @ 004971e4 */
                    /* catch() { ... } // from try @ 00497184 with catch @ 004971f0 */
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  pGVar7 = *(GUIView **)(this + 0x118);
  plVar4 = *(long **)(pGVar7 + 0x128);
  if (plVar4 == (long *)0x0) {
    fVar15 = fVar10 + DAT_00684320;
    fVar11 = 0.0;
  }
  else {
    plVar3 = (long *)*plVar4;
    fVar11 = _DAT_00000054;
    if ((plVar3 == (long *)0x0) || (fVar11 = *(float *)((long)plVar3 + 0x54), (int)plVar3[1] != 0))
    {
      fVar15 = fVar10 + fVar11 + DAT_00684320;
    }
    else {
      (**(code **)(*plVar3 + 8))();
      plVar4 = *(long **)(*(long *)(this + 0x118) + 0x128);
      fVar15 = fVar10 + fVar11 + DAT_00684320;
      if (plVar4 == (long *)0x0) {
        fVar11 = 0.0;
        goto LAB_004972a4;
      }
    }
    plVar4 = (long *)*plVar4;
    fVar11 = _DAT_00000058;
    if ((plVar4 != (long *)0x0) && (fVar11 = *(float *)(plVar4 + 0xb), (int)plVar4[1] == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
LAB_004972a4:
  local_88 = *(undefined8 *)(pGVar7 + 0x74);
  local_80 = fVar15;
  local_7c = fVar11;
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  lVar5 = *(long *)(this + 0xf0);
  if (*(long *)(this + 0xf8) != lVar5) {
    uVar6 = lVar8 - (long)plVar1 >> 4;
    lVar8 = 0;
    uVar9 = 0;
    fVar11 = (float)(int)((fVar12 * (float)uVar6 + (float)(uVar6 - 1) * 3.0) * 0.5 +
                         fVar13 + fVar14 * 0.5 + -10.0);
    do {
      pGVar7 = *(GUIView **)(lVar5 + lVar8);
      local_80 = *(float *)(pGVar7 + 0x7c);
      local_7c = *(float *)(pGVar7 + 0x80);
      fVar11 = fVar11 - local_7c;
      local_88 = CONCAT44(fVar11,(*(float *)(this + 0x84) + *(float *)(this + 0x8c)) - local_80);
      GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
      *(float *)(pGVar7 + 0x1a4) = fVar10 + fVar10;
      *(uint *)(pGVar7 + 0x19c) = *(uint *)(pGVar7 + 0x19c) | 2;
      fVar11 = fVar11 + -3.0;
      (**(code **)(*(long *)pGVar7 + 0x58))(pGVar7);
      *(float *)(pGVar7 + 0x1b0) = 28.0 - fVar10;
      lVar5 = *(long *)(this + 0xf0);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar9 < (ulong)(*(long *)(this + 0xf8) - lVar5 >> 4));
  }
                    /* catch() { ... } // from try @ 0049746c with catch @ 00497398
                       catch() { ... } // from try @ 0049751c with catch @ 00497398 */
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


