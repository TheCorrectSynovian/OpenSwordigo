/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a899c
 * Function: Caver::ProfileManagerLoadingView::Update
 * Signature: undefined __thiscall Update(ProfileManagerLoadingView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManagerLoadingView::Update(float) */

void __thiscall
Caver::ProfileManagerLoadingView::Update(ProfileManagerLoadingView *this,float param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  uint uVar5;
  GUIAnimation *this_00;
  GUIAnimation *extraout_x0;
  long lVar6;
  int *piVar7;
  int iVar8;
  GUIView *this_01;
  size_t *psVar9;
  void *pvVar10;
  GUILabel *this_02;
  float fVar11;
  void *local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = (GUIAnimation *)GUIView::Update((GUIView *)this,param_1);
  fVar4 = DAT_00683f68;
  fVar11 = *(float *)(this + 0x114);
                    /* catch() { ... } // from try @ 004a7664 with catch @ 004a89dc */
  *(float *)(this + 0x114) = fVar11 + param_1;
  if (fVar11 + param_1 <= fVar4) goto LAB_004a8aa8;
  *(undefined4 *)(this + 0x114) = 0;
  iVar8 = 1;
  if (*(int *)(this + 0x110) < 4) {
    iVar8 = *(int *)(this + 0x110) + 1;
  }
  *(int *)(this + 0x110) = iVar8;
                    /* catch() { ... } // from try @ 004a7640 with catch @ 004a8a14 */
  FUN_00666bb8(&local_60,"Downloading saves from iCloud",auStack_50);
                    /* catch() { ... } // from try @ 004a75e4 with catch @ 004a8a18 */
  if (0 < *(int *)(this + 0x110)) {
    iVar8 = 0;
    do {
      FUN_006677d4(&local_60,".",1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(this + 0x110));
  }
  pvVar10 = local_60;
  this_02 = *(GUILabel **)(this + 0xf0);
  psVar9 = (size_t *)((long)local_60 + -0x18);
  if (*psVar9 == *(size_t *)((long)*(void **)(this_02 + 0x100) + -0x18)) {
                    /* catch() { ... } // from try @ 004a75b0 with catch @ 004a8a74 */
    uVar5 = memcmp(local_60,*(void **)(this_02 + 0x100),*psVar9);
    this_00 = (GUIAnimation *)(ulong)uVar5;
    if (uVar5 != 0) goto LAB_004a8a7c;
  }
  else {
LAB_004a8a7c:
    FUN_0066a6a8(this_02 + 0x100,&local_60);
    this_00 = (GUIAnimation *)GUILabel::UpdateText(this_02);
    psVar9 = (size_t *)((long)local_60 + -0x18);
    pvVar10 = local_60;
  }
  if (psVar9 != (size_t *)PTR_DAT_007e5de8) {
    piVar7 = (int *)((long)pvVar10 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 004a7450 with catch @ 004a8ba4 */
    if (iVar8 < 1) {
      operator_delete(psVar9);
      this_00 = extraout_x0;
    }
  }
LAB_004a8aa8:
  fVar11 = *(float *)(this + 0x118);
                    /* catch() { ... } // from try @ 004a758c with catch @ 004a8aac */
                    /* catch() { ... } // from try @ 004a7530 with catch @ 004a8ab0 */
  *(float *)(this + 0x118) = fVar11 + param_1;
  fVar4 = DAT_00683484;
  if ((10.0 < fVar11 + param_1) &&
     (this_01 = *(GUIView **)(this + 0x100), this_01[0xe4] != (GUIView)0x0)) {
    this_01[0xe4] = (GUIView)0x0;
    GUIAnimation::AlphaAnimation(this_00,0.0,1.0,fVar4);
    GUIView::RemoveAllAnimations(this_01);
    GUIView::AddAnimation(this_01,(shared_ptr *)&local_60);
                    /* catch() { ... } // from try @ 004a7504 with catch @ 004a8b0c */
    if ((local_58 != (long *)0x0) &&
       (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar6 = local_58[2];
      local_58[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*local_58 + 0x18))(local_58);
      }
    }
  }
                    /* catch() { ... } // from try @ 004a74e0 with catch @ 004a8b44 */
                    /* catch() { ... } // from try @ 004a7484 with catch @ 004a8b48 */
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


