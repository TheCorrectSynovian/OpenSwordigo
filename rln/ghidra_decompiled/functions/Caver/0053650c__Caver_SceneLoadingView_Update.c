/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053650c
 * Function: Caver::SceneLoadingView::Update
 * Signature: undefined __thiscall Update(SceneLoadingView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneLoadingView::Update(float) */

void __thiscall Caver::SceneLoadingView::Update(SceneLoadingView *this,float param_1)

{
  GUILabel *pGVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  GUIAnimation *pGVar8;
  int *piVar9;
  long lVar10;
  GUIView *pGVar11;
  size_t *psVar12;
  GUILabel *pGVar13;
  void *pvVar14;
  float fVar15;
  float fVar16;
  shared_ptr asStack_88 [8];
  long *local_80;
  void *local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00536540 to 00636543 has its CatchHandler @ 00536554 */
                    /* try { // try from 00536544 to 00636557 has its CatchHandler @ 005364fc */
  pGVar8 = (GUIAnimation *)LoadingView::Update(param_1);
  fVar15 = *(float *)(this + 0x1a0);
                    /* catch() { ... } // from try @ 00536540 with catch @ 00536554 */
  *(float *)(this + 0x1a0) = fVar15 + param_1;
                    /* try { // try from 00536558 to 0063655f has its CatchHandler @ 00536568 */
  if ((this[0x1a4] == (SceneLoadingView)0x0) && (this[0x1a5] != (SceneLoadingView)0x0)) {
    if (DAT_00684318 < fVar15 + param_1) {
      this[0x1a4] = (SceneLoadingView)0x1;
      GUIAnimation::AlphaAnimation(pGVar8,1.0,0.0,0.5);
      *(undefined1 *)((long)local_78 + 0xb9) = 1;
      pGVar11 = *(GUIView **)(this + 0x180);
      GUIView::RemoveAllAnimations(pGVar11);
      pGVar8 = (GUIAnimation *)GUIView::AddAnimation(pGVar11,(shared_ptr *)&local_78);
      *(undefined1 *)(*(long *)(this + 400) + 0xe4) = 0;
      GUIAnimation::AlphaAnimation(pGVar8,0.0,1.0,0.5);
      pGVar11 = *(GUIView **)(this + 400);
      GUIView::RemoveAllAnimations(pGVar11);
      GUIView::AddAnimation(pGVar11,asStack_88);
      if ((local_80 != (long *)0x0) &&
         (lVar10 = local_80[1], local_80[1] = lVar10 + -1, lVar10 + -1 == 0)) {
        (**(code **)(*local_80 + 0x10))(local_80);
        lVar10 = local_80[2];
        local_80[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*local_80 + 0x18))(local_80);
        }
      }
      if ((local_70 != (long *)0x0) &&
         (lVar10 = local_70[1], local_70[1] = lVar10 + -1, lVar10 + -1 == 0)) {
        (**(code **)(*local_70 + 0x10))(local_70);
        lVar10 = local_70[2];
        local_70[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*local_70 + 0x18))(local_70);
        }
      }
    }
  }
  else {
                    /* try { // try from 00536560 to 0063656b has its CatchHandler @ 005364fc */
                    /* catch() { ... } // from try @ 00536558 with catch @ 00536568 */
    fVar15 = *(float *)(this + 0x1a8) + param_1;
    fVar16 = 0.0;
    if (this[0x1b0] != (SceneLoadingView)0x0) {
      fVar16 = DAT_00684318;
    }
    *(float *)(this + 0x1a8) = fVar15;
    puVar6 = PTR_DAT_007e5de8;
    puVar5 = PTR_pthread_create_007e4e78;
    while ((fVar16 <= fVar15 && (*(int *)(this + 0x1ac) < 3))) {
      *(float *)(this + 0x1a8) = fVar15 - fVar16;
      *(int *)(this + 0x1ac) = *(int *)(this + 0x1ac) + 1;
      if (this[0x1a5] == (SceneLoadingView)0x0) {
        pGVar13 = *(GUILabel **)(this + 0x180);
        pGVar1 = pGVar13 + 0x100;
        FUN_0066a528(&local_78,pGVar1);
        FUN_006677d4(&local_78,".",1);
        pvVar14 = local_78;
        psVar12 = (size_t *)((long)local_78 + -0x18);
        if ((*psVar12 != *(size_t *)((long)*(void **)pGVar1 + -0x18)) ||
           (iVar7 = memcmp(local_78,*(void **)pGVar1,*psVar12), iVar7 != 0)) {
                    /* try { // try from 005366a0 to 00636917 has its CatchHandler @ 005366a0
                       catch() { ... } // from try @ 005366a0 with catch @ 005366a0
                       catch() { ... } // from try @ 0053691c with catch @ 005366a0 */
          FUN_0066a6a8(pGVar1,&local_78);
          GUILabel::UpdateText(pGVar13);
          psVar12 = (size_t *)((long)local_78 + -0x18);
          pvVar14 = local_78;
        }
        if (psVar12 != (size_t *)puVar6) {
          piVar9 = (int *)((long)pvVar14 + -8);
          if (puVar5 == (undefined *)0x0) goto LAB_005366ec;
          do {
            iVar7 = *piVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_005366f8;
        }
      }
      else {
        pGVar13 = *(GUILabel **)(this + 400);
        pGVar1 = pGVar13 + 0x100;
        FUN_0066a528(&local_78,pGVar1);
                    /* try { // try from 005365dc to 006365df has its CatchHandler @ 005365f8 */
                    /* try { // try from 005365e0 to 006365e7 has its CatchHandler @ 0053660c */
        FUN_006677d4(&local_78,".",1);
        pvVar14 = local_78;
        psVar12 = (size_t *)((long)local_78 + -0x18);
                    /* catch() { ... } // from try @ 005365dc with catch @ 005365f8 */
                    /* try { // try from 005365fc to 00636603 has its CatchHandler @ 00536608 */
                    /* try { // try from 00536604 to 0063661f has its CatchHandler @ 00536598 */
                    /* catch() { ... } // from try @ 005365fc with catch @ 00536608 */
                    /* catch() { ... } // from try @ 005365e0 with catch @ 0053660c */
        if ((*psVar12 != *(size_t *)((long)*(void **)pGVar1 + -0x18)) ||
           (iVar7 = memcmp(local_78,*(void **)pGVar1,*psVar12), iVar7 != 0)) {
          FUN_0066a6a8(pGVar1,&local_78);
          GUILabel::UpdateText(pGVar13);
          psVar12 = (size_t *)((long)local_78 + -0x18);
          pvVar14 = local_78;
        }
        if (psVar12 != (size_t *)puVar6) {
          piVar9 = (int *)((long)pvVar14 + -8);
          if (puVar5 == (undefined *)0x0) {
LAB_005366ec:
            iVar7 = *piVar9;
            *piVar9 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
LAB_005366f8:
          if (iVar7 < 1) {
            operator_delete(psVar12);
          }
        }
      }
      fVar15 = *(float *)(this + 0x1a8);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


