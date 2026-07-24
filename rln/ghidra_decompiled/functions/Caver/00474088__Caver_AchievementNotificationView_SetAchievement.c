/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00474088
 * Function: Caver::AchievementNotificationView::SetAchievement
 * Signature: undefined __thiscall SetAchievement(AchievementNotificationView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementNotificationView::SetAchievement(boost::shared_ptr<Caver::Achievement> const&)
    */

void __thiscall
Caver::AchievementNotificationView::SetAchievement
          (AchievementNotificationView *this,shared_ptr *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  string *psVar9;
  GUIView *this_00;
  char *pcVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  GUIFrameView *this_01;
  size_t *psVar14;
  GUILabel *pGVar15;
  undefined *puVar16;
  void *pvVar17;
  undefined *local_78;
  void *local_70 [2];
  long *local_60;
  undefined8 local_58;
  char acStack_4c [4];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar2 = *(undefined8 *)param_1;
  lVar11 = *(long *)(param_1 + 8);
  if (lVar11 != 0) {
    *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
  }
  plVar13 = *(long **)(this + 0x118);
                    /* catch() { ... } // from try @ 00473eb8 with catch @ 004740c8 */
  *(undefined8 *)(this + 0x110) = uVar2;
  *(long *)(this + 0x118) = lVar11;
  if ((plVar13 != (long *)0x0) && (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
                    /* try { // try from 004740ec to 005740f3 has its CatchHandler @ 004740fc */
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar11 = plVar13[2];
                    /* try { // try from 004740f4 to 005740ff has its CatchHandler @ 00473e50 */
    plVar13[2] = lVar11 + -1;
                    /* catch() { ... } // from try @ 004740ec with catch @ 004740fc */
    if (lVar11 + -1 == 0) {
                    /* catch() { ... } // from try @ 00474224 with catch @ 00474100
                       catch() { ... } // from try @ 00474394 with catch @ 00474100 */
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  this_01 = *(GUIFrameView **)(this + 0x140);
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_0066a528(&local_78,*(undefined8 *)(this + 0x110));
                    /* try { // try from 00474138 to 0057413b has its CatchHandler @ 004742a0 */
  FUN_0035a030(local_70,"achicon_",&local_78);
                    /* try { // try from 00474140 to 00574143 has its CatchHandler @ 00474290 */
  TextureLibrary::TextureForName(psVar9,SUB81(local_70,0));
  GUIFrameView::SetFrameTexture(this_01,(intrusive_ptr *)&local_60,false);
                    /* try { // try from 00474164 to 00574167 has its CatchHandler @ 0047426c */
  if ((local_60 != (long *)0x0) &&
     (iVar8 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_60 + 8))();
  }
  puVar7 = PTR_DAT_007e5de8;
                    /* try { // try from 00474188 to 0057418b has its CatchHandler @ 0047425c */
  if ((undefined *)((long)local_70[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar12 = (int *)((long)local_70[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
                    /* catch() { ... } // from try @ 00474504 with catch @ 004744d4 */
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
                    /* try { // try from 00474404 to 0057441f has its CatchHandler @ 00474404
                       catch() { ... } // from try @ 00474404 with catch @ 00474404
                       catch() { ... } // from try @ 00474424 with catch @ 00474404 */
        iVar8 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)((long)local_70[0] + -0x18));
    }
  }
  if (local_78 + -0x18 != puVar7) {
                    /* try { // try from 00474420 to 00574423 has its CatchHandler @ 00474440 */
    piVar12 = (int *)(local_78 + -8);
                    /* try { // try from 00474424 to 00574453 has its CatchHandler @ 00474404 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
                    /* try { // try from 004744f0 to 00574503 has its CatchHandler @ 00474528 */
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
                    /* try { // try from 00474504 to 0057452b has its CatchHandler @ 004744d4 */
      operator_delete(local_78 + -0x18);
    }
  }
                    /* try { // try from 004741ac to 005741af has its CatchHandler @ 0047424c */
  this_00 = *(GUIView **)(this + 0x140);
  plVar13 = *(long **)(this_00 + 0x100);
  if (plVar13 == (long *)0x0) {
                    /* try { // try from 00474220 to 00574223 has its CatchHandler @ 0047427c */
    local_60 = *(long **)(this_00 + 0x74);
                    /* try { // try from 00474224 to 0057423b has its CatchHandler @ 00474100 */
    local_58 = NEON_fmov(0x41f00000,4);
                    /* catch() { ... } // from try @ 00474218 with catch @ 00474234 */
    GUIView::SetFrame(this_00,(Rectangle *)&local_60);
    goto LAB_00474238;
  }
  if ((int)plVar13[1] == 0) {
    (**(code **)(*plVar13 + 8))(plVar13);
                    /* try { // try from 004741d0 to 005741d3 has its CatchHandler @ 00474244 */
    this_00 = *(GUIView **)(this + 0x140);
    plVar13 = *(long **)(this_00 + 0x100);
    if (plVar13 != (long *)0x0) goto LAB_004741dc;
  }
  else {
LAB_004741dc:
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  local_60 = *(long **)(this_00 + 0x74);
  local_58 = *(undefined8 *)((long)plVar13 + 0x54);
  GUIView::SetFrame(this_00,(Rectangle *)&local_60);
  iVar8 = (int)plVar13[1] + -1;
  *(int *)(plVar13 + 1) = iVar8;
  if (iVar8 == 0) {
                    /* try { // try from 00474218 to 0057421b has its CatchHandler @ 00474234 */
    (**(code **)(*plVar13 + 8))(plVar13);
  }
LAB_00474238:
                    /* try { // try from 0047423c to 00574287 has its CatchHandler @ 0047428c */
  pGVar15 = *(GUILabel **)(this + 0x150);
                    /* catch() { ... } // from try @ 004741d0 with catch @ 00474244 */
  FUN_0066a528(&local_60,*(long *)(this + 0x110) + 8);
  plVar13 = local_60;
  psVar14 = (size_t *)(local_60 + -3);
                    /* catch() { ... } // from try @ 004741ac with catch @ 0047424c */
                    /* catch() { ... } // from try @ 00474188 with catch @ 0047425c */
                    /* catch() { ... } // from try @ 00474164 with catch @ 0047426c */
  if ((*psVar14 != *(size_t *)((long)*(void **)(pGVar15 + 0x100) + -0x18)) ||
     (iVar8 = memcmp(local_60,*(void **)(pGVar15 + 0x100),*psVar14), iVar8 != 0)) {
                    /* catch() { ... } // from try @ 00474220 with catch @ 0047427c */
    FUN_0066a6a8(pGVar15 + 0x100,&local_60);
    GUILabel::UpdateText(pGVar15);
                    /* catch() { ... } // from try @ 0047423c with catch @ 0047428c */
    psVar14 = (size_t *)(local_60 + -3);
    plVar13 = local_60;
  }
                    /* catch() { ... } // from try @ 00474140 with catch @ 00474290 */
  if (psVar14 != (size_t *)puVar7) {
                    /* catch() { ... } // from try @ 00474420 with catch @ 00474440 */
    plVar13 = plVar13 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = (int)*plVar13;
      *(int *)plVar13 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = (int)*plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
                    /* catch() { ... } // from try @ 004744f0 with catch @ 00474528 */
      operator_delete(psVar14);
                    /* try { // try from 0047452c to 00574627 has its CatchHandler @ 0047452c
                       catch() { ... } // from try @ 0047452c with catch @ 0047452c
                       catch() { ... } // from try @ 004746a4 with catch @ 0047452c */
    }
  }
  pGVar15 = *(GUILabel **)(this + 0x160);
                    /* catch() { ... } // from try @ 00474138 with catch @ 004742a0 */
                    /* try { // try from 004742a8 to 0057433b has its CatchHandler @ 004743c0 */
  FUN_0066a528(&local_60,*(long *)(this + 0x110) + 0x10);
  plVar13 = local_60;
  psVar14 = (size_t *)(local_60 + -3);
  if ((*psVar14 != *(size_t *)((long)*(void **)(pGVar15 + 0x100) + -0x18)) ||
     (iVar8 = memcmp(local_60,*(void **)(pGVar15 + 0x100),*psVar14), iVar8 != 0)) {
    FUN_0066a6a8(pGVar15 + 0x100,&local_60);
    GUILabel::UpdateText(pGVar15);
    psVar14 = (size_t *)(local_60 + -3);
    plVar13 = local_60;
  }
  if (psVar14 != (size_t *)puVar7) {
    plVar13 = plVar13 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = (int)*plVar13;
      *(int *)plVar13 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = (int)*plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(psVar14);
    }
  }
  pGVar15 = *(GUILabel **)(this + 0x170);
  uVar3 = *(uint *)(*(long *)(this + 0x110) + 0x18);
  uVar1 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  local_78 = puVar7 + 0x18;
  pcVar10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                      (uVar1,acStack_4c);
  puVar16 = puVar7 + 0x18;
  if ((int)uVar3 < 0) {
    pcVar10 = pcVar10 + -1;
    *pcVar10 = '-';
    puVar16 = local_78;
  }
  FUN_00669e1c(&local_78,0,*(undefined8 *)(puVar16 + -0x18),pcVar10,(long)acStack_4c - (long)pcVar10
              );
  FUN_0066a528(local_70,&local_78);
  FUN_006677d4(local_70,&DAT_00690239,4);
  pvVar17 = local_70[0];
  psVar14 = (size_t *)((long)local_70[0] + -0x18);
                    /* try { // try from 00474380 to 00574383 has its CatchHandler @ 0047439c */
                    /* try { // try from 00474388 to 0057438b has its CatchHandler @ 004743ac */
                    /* try { // try from 0047438c to 00574393 has its CatchHandler @ 004743c0 */
                    /* try { // try from 00474394 to 005743a3 has its CatchHandler @ 00474100 */
  if ((*psVar14 != *(size_t *)((long)*(void **)(pGVar15 + 0x100) + -0x18)) ||
     (iVar8 = memcmp(local_70[0],*(void **)(pGVar15 + 0x100),*psVar14), iVar8 != 0)) {
                    /* catch() { ... } // from try @ 00474380 with catch @ 0047439c */
    FUN_0066a6a8(pGVar15 + 0x100,local_70);
                    /* try { // try from 004743a4 to 005743b7 has its CatchHandler @ 004743bc */
    GUILabel::UpdateText(pGVar15);
                    /* catch() { ... } // from try @ 00474388 with catch @ 004743ac */
    psVar14 = (size_t *)((long)local_70[0] + -0x18);
    pvVar17 = local_70[0];
  }
  if (psVar14 != (size_t *)puVar7) {
    piVar12 = (int *)((long)pvVar17 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(psVar14);
    }
  }
                    /* catch() { ... } // from try @ 004743a4 with catch @ 004743bc */
                    /* catch() { ... } // from try @ 004742a8 with catch @ 004743c0
                       catch() { ... } // from try @ 0047438c with catch @ 004743c0 */
  if (local_78 + -0x18 != puVar7) {
    piVar12 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_78 + -0x18);
    }
  }
                    /* catch() { ... } // from try @ 004743e0 with catch @ 004743cc */
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004743dc to 005743df has its CatchHandler @ 004743f0 */
                    /* try { // try from 004743e0 to 00574403 has its CatchHandler @ 004743cc */
                    /* catch() { ... } // from try @ 004743dc with catch @ 004743f0 */
  return;
}


