/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004875cc
 * Function: Caver::OfflineAchievementView::SetAchievement
 * Signature: undefined __thiscall SetAchievement(OfflineAchievementView * this, shared_ptr * param_1, bool param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementView::SetAchievement(boost::shared_ptr<Caver::Achievement> const&, bool,
   float) */

void __thiscall
Caver::OfflineAchievementView::SetAchievement
          (OfflineAchievementView *this,shared_ptr *param_1,bool param_2,float param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  string *psVar7;
  undefined *puVar8;
  char *pcVar9;
  FontLibrary *pFVar10;
  long lVar11;
  int *piVar12;
  undefined *puVar13;
  long *plVar14;
  GUIFrameView *this_00;
  void *pvVar15;
  uint uVar16;
  GUILabel *pGVar17;
  size_t *psVar18;
  undefined *local_98;
  void *local_90;
  undefined1 auStack_88 [8];
  long *local_80;
  long *local_78;
  char acStack_6c [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar2 = *(undefined8 *)param_1;
  lVar11 = *(long *)(param_1 + 8);
  if (lVar11 != 0) {
    *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
  }
  plVar14 = *(long **)(this + 0xf8);
  *(undefined8 *)(this + 0xf0) = uVar2;
  *(long *)(this + 0xf8) = lVar11;
  if ((plVar14 != (long *)0x0) && (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar11 = plVar14[2];
    plVar14[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  this_00 = *(GUIFrameView **)(this + 0x108);
  this[0x100] = (OfflineAchievementView)param_2;
  *(float *)(this + 0x104) = param_3;
  if (param_2) {
    psVar7 = (string *)TextureLibrary::sharedLibrary();
    FUN_0066a528(&local_98,*(undefined8 *)(this + 0xf0));
    FUN_0035a030(&local_90,"achicon_",&local_98);
    TextureLibrary::TextureForName(psVar7,SUB81(&local_90,0));
    GUIFrameView::SetFrameTexture(this_00,(intrusive_ptr *)&local_80,true);
    if ((local_80 != (long *)0x0) &&
       (iVar6 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*local_80 + 8))();
    }
    puVar13 = PTR_DAT_007e5de8;
    if ((undefined *)((long)local_90 + -0x18) != PTR_DAT_007e5de8) {
      piVar12 = (int *)((long)local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar12;
        *piVar12 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)((long)local_90 + -0x18));
      }
    }
    puVar8 = local_98 + -0x18;
    if (puVar8 != puVar13) {
      piVar12 = (int *)(local_98 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar12;
        *piVar12 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
joined_r0x00487fbc:
      if (iVar6 < 1) {
        operator_delete(puVar8);
      }
    }
  }
  else {
    psVar7 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_90,&DAT_00690bee,auStack_88);
    TextureLibrary::TextureForName(psVar7,SUB81(&local_90,0));
    GUIFrameView::SetFrameTexture(this_00,(intrusive_ptr *)&local_80,false);
                    /* try { // try from 0048777c to 005877b3 has its CatchHandler @ 0048777c
                       catch() { ... } // from try @ 0048777c with catch @ 0048777c
                       catch() { ... } // from try @ 0048781c with catch @ 0048777c
                       catch() { ... } // from try @ 004878cc with catch @ 0048777c */
    if ((local_80 != (long *)0x0) &&
       (iVar6 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*local_80 + 8))();
    }
    puVar8 = (undefined *)((long)local_90 + -0x18);
    if (puVar8 != PTR_DAT_007e5de8) {
      piVar12 = (int *)((long)local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar12;
        *piVar12 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto joined_r0x00487fbc;
    }
  }
                    /* try { // try from 004877b4 to 005877c7 has its CatchHandler @ 004878d4 */
  local_80 = *(long **)(*(GUIView **)(this + 0x108) + 0x74);
  local_78 = (long *)&DAT_4208000042080000;
                    /* try { // try from 004877c8 to 005877db has its CatchHandler @ 004878d8 */
  GUIView::SetFrame(*(GUIView **)(this + 0x108),(Rectangle *)&local_80);
  pGVar17 = *(GUILabel **)(this + 0x138);
  FUN_0066a528(&local_80,*(long *)(this + 0xf0) + 8);
  plVar14 = local_80;
  psVar18 = (size_t *)(local_80 + -3);
                    /* try { // try from 004877ec to 005877f7 has its CatchHandler @ 004878a0 */
  if ((*psVar18 != *(size_t *)((long)*(void **)(pGVar17 + 0x100) + -0x18)) ||
     (iVar6 = memcmp(local_80,*(void **)(pGVar17 + 0x100),*psVar18), iVar6 != 0)) {
    FUN_0066a6a8(pGVar17 + 0x100,&local_80);
                    /* try { // try from 00487818 to 0058781b has its CatchHandler @ 004878d8 */
                    /* try { // try from 0048781c to 005878c3 has its CatchHandler @ 0048777c */
    GUILabel::UpdateText(pGVar17);
    psVar18 = (size_t *)(local_80 + -3);
    plVar14 = local_80;
  }
  puVar8 = PTR_DAT_007e5de8;
  if (psVar18 != (size_t *)PTR_DAT_007e5de8) {
    plVar14 = plVar14 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = (int)*plVar14;
                    /* try { // try from 00487b34 to 00587b7b has its CatchHandler @ 00487b34
                       catch() { ... } // from try @ 00487b34 with catch @ 00487b34
                       catch() { ... } // from try @ 00487b80 with catch @ 00487b34
                       catch() { ... } // from try @ 00487be8 with catch @ 00487b34
                       catch() { ... } // from try @ 00487c1c with catch @ 00487b34
                       catch() { ... } // from try @ 00487c88 with catch @ 00487b34
                       catch() { ... } // from try @ 00487d08 with catch @ 00487b34
                       catch() { ... } // from try @ 00487ddc with catch @ 00487b34
                       catch() { ... } // from try @ 00487e20 with catch @ 00487b34 */
      *(int *)plVar14 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = (int)*plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(psVar18);
    }
  }
  pGVar17 = *(GUILabel **)(this + 0x148);
  FUN_0066a528(&local_80,*(long *)(this + 0xf0) + 0x10);
  plVar14 = local_80;
  psVar18 = (size_t *)(local_80 + -3);
  if ((*psVar18 != *(size_t *)((long)*(void **)(pGVar17 + 0x100) + -0x18)) ||
     (iVar6 = memcmp(local_80,*(void **)(pGVar17 + 0x100),*psVar18), iVar6 != 0)) {
    FUN_0066a6a8(pGVar17 + 0x100,&local_80);
    GUILabel::UpdateText(pGVar17);
    psVar18 = (size_t *)(local_80 + -3);
    plVar14 = local_80;
  }
  if (psVar18 != (size_t *)puVar8) {
    plVar14 = plVar14 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = (int)*plVar14;
      *(int *)plVar14 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = (int)*plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(psVar18);
    }
  }
  pGVar17 = *(GUILabel **)(this + 0x158);
                    /* catch() { ... } // from try @ 004877ec with catch @ 004878a0 */
  uVar16 = *(uint *)(*(long *)(this + 0xf0) + 0x18);
  uVar1 = -uVar16;
  if (-1 < (int)uVar16) {
    uVar1 = uVar16;
  }
  local_98 = puVar8 + 0x18;
  pcVar9 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                     (uVar1,acStack_6c);
                    /* try { // try from 004878c4 to 005878cb has its CatchHandler @ 004878d0 */
  puVar13 = puVar8 + 0x18;
  if ((int)uVar16 < 0) {
                    /* try { // try from 004878cc to 00587943 has its CatchHandler @ 0048777c */
                    /* catch() { ... } // from try @ 004878c4 with catch @ 004878d0 */
    pcVar9 = pcVar9 + -1;
    *pcVar9 = '-';
                    /* catch() { ... } // from try @ 004877b4 with catch @ 004878d4 */
    puVar13 = local_98;
  }
                    /* catch() { ... } // from try @ 004877c8 with catch @ 004878d8
                       catch() { ... } // from try @ 00487818 with catch @ 004878d8 */
  FUN_00669e1c(&local_98,0,*(undefined8 *)(puVar13 + -0x18),pcVar9,(long)acStack_6c - (long)pcVar9);
  FUN_0066a528(&local_90,&local_98);
  FUN_006677d4(&local_90,&DAT_00690239,4);
  pvVar15 = local_90;
  psVar18 = (size_t *)((long)local_90 + -0x18);
  if ((*psVar18 != *(size_t *)((long)*(void **)(pGVar17 + 0x100) + -0x18)) ||
     (iVar6 = memcmp(local_90,*(void **)(pGVar17 + 0x100),*psVar18), iVar6 != 0)) {
    FUN_0066a6a8(pGVar17 + 0x100,&local_90);
    GUILabel::UpdateText(pGVar17);
    psVar18 = (size_t *)((long)local_90 + -0x18);
    pvVar15 = local_90;
  }
  if (psVar18 != (size_t *)puVar8) {
    piVar12 = (int *)((long)pvVar15 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar12;
                    /* try { // try from 00487b7c to 00587b7f has its CatchHandler @ 00487e2c */
      *piVar12 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 00487b80 to 00587bdf has its CatchHandler @ 00487b34 */
    if (iVar6 < 1) {
      operator_delete(psVar18);
    }
  }
  if (local_98 + -0x18 != puVar8) {
    piVar12 = (int *)(local_98 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar12;
      *piVar12 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_98 + -0x18);
      pGVar17 = *(GUILabel **)(this + 0x158);
      goto joined_r0x00487bb8;
    }
  }
  pGVar17 = *(GUILabel **)(this + 0x158);
joined_r0x00487bb8:
  if (param_2) {
    GameInterfaceBuilder::TextGradient(DAT_00687988,1.0,DAT_0068ea1c,1.0);
    if (local_78 != (long *)0x0) {
      local_78[1] = local_78[1] + 1;
    }
    plVar14 = *(long **)(pGVar17 + 0x118);
    *(long **)(pGVar17 + 0x110) = local_80;
    *(long **)(pGVar17 + 0x118) = local_78;
    if ((plVar14 != (long *)0x0) &&
       (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      lVar11 = plVar14[2];
      plVar14[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    GUILabel::UpdateText(pGVar17);
    plVar14 = local_78;
    if ((local_78 != (long *)0x0) &&
       (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      lVar11 = plVar14[2];
      plVar14[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    *(undefined1 *)(*(long *)(this + 0x118) + 0xe4) = 1;
  }
  else {
                    /* try { // try from 00487be0 to 00587be7 has its CatchHandler @ 00487df4 */
                    /* try { // try from 00487be8 to 00587c17 has its CatchHandler @ 00487b34 */
    if ((((pGVar17[0x108] != (GUILabel)0x99) || (pGVar17[0x109] != (GUILabel)0x99)) ||
        (pGVar17[0x10a] != (GUILabel)0x99)) || (pGVar17[0x10b] != (GUILabel)0x99)) {
      plVar14 = *(long **)(pGVar17 + 0x118);
      *(undefined4 *)(pGVar17 + 0x108) = 0x99999999;
      *(undefined8 *)(pGVar17 + 0x110) = 0;
      *(undefined8 *)(pGVar17 + 0x118) = 0;
      if ((plVar14 != (long *)0x0) &&
         (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 00487c18 to 00587c1b has its CatchHandler @ 00487de0 */
                    /* try { // try from 00487c1c to 00587c7b has its CatchHandler @ 00487b34 */
        (**(code **)(*plVar14 + 0x10))(plVar14);
        lVar11 = plVar14[2];
        plVar14[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
      }
      GUILabel::UpdateText(pGVar17);
    }
    pGVar17 = *(GUILabel **)(this + 0x118);
    if (*(float *)(this + 0x104) <= 0.0) {
      pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
                    /* try { // try from 00487e18 to 00587e1f has its CatchHandler @ 00487e28 */
      FontLibrary::LargeDefaultFont(pFVar10);
                    /* try { // try from 00487e20 to 00587e3f has its CatchHandler @ 00487b34 */
                    /* catch() { ... } // from try @ 00487d84 with catch @ 00487e28
                       catch() { ... } // from try @ 00487e18 with catch @ 00487e28 */
      if (local_80 != *(long **)(pGVar17 + 0xf0)) {
                    /* catch() { ... } // from try @ 00487b7c with catch @ 00487e2c */
        if (local_78 != (long *)0x0) {
          local_78[1] = local_78[1] + 1;
        }
        plVar14 = *(long **)(pGVar17 + 0xf8);
        *(long **)(pGVar17 + 0xf0) = local_80;
        *(long **)(pGVar17 + 0xf8) = local_78;
        if ((plVar14 != (long *)0x0) &&
           (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          lVar11 = plVar14[2];
                    /* try { // try from 00487e74 to 0058805f has its CatchHandler @ 00487e74
                       catch() { ... } // from try @ 00487e74 with catch @ 00487e74
                       catch() { ... } // from try @ 004881b4 with catch @ 00487e74
                       catch() { ... } // from try @ 00488254 with catch @ 00487e74
                       catch() { ... } // from try @ 0048830c with catch @ 00487e74 */
          plVar14[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
        }
        GUILabel::UpdateText(pGVar17);
      }
      plVar14 = local_78;
      if ((local_78 != (long *)0x0) &&
         (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        lVar11 = plVar14[2];
        plVar14[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
      }
      pGVar17 = *(GUILabel **)(this + 0x118);
      FUN_00666bb8(&local_80,&DAT_0069a393,&local_98);
      plVar14 = local_80;
      psVar18 = (size_t *)(local_80 + -3);
      if ((*psVar18 != *(size_t *)((long)*(void **)(pGVar17 + 0x100) + -0x18)) ||
         (iVar6 = memcmp(local_80,*(void **)(pGVar17 + 0x100),*psVar18), iVar6 != 0)) {
        FUN_0066a6a8(pGVar17 + 0x100,&local_80);
        GUILabel::UpdateText(pGVar17);
        psVar18 = (size_t *)(local_80 + -3);
        plVar14 = local_80;
      }
      if (psVar18 != (size_t *)puVar8) {
        plVar14 = plVar14 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = (int)*plVar14;
          *(int *)plVar14 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = (int)*plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *(int *)plVar14 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar6 < 1) {
          operator_delete(psVar18);
        }
      }
    }
    else {
      pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
      FontLibrary::MediumSmallDefaultFont(pFVar10);
      if (local_80 != *(long **)(pGVar17 + 0xf0)) {
        if (local_78 != (long *)0x0) {
                    /* try { // try from 00487c7c to 00587c87 has its CatchHandler @ 00487d90 */
          local_78[1] = local_78[1] + 1;
        }
                    /* try { // try from 00487c88 to 00587cff has its CatchHandler @ 00487b34 */
        plVar14 = *(long **)(pGVar17 + 0xf8);
        *(long **)(pGVar17 + 0xf0) = local_80;
        *(long **)(pGVar17 + 0xf8) = local_78;
        if ((plVar14 != (long *)0x0) &&
           (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          lVar11 = plVar14[2];
          plVar14[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
        }
        GUILabel::UpdateText(pGVar17);
      }
      plVar14 = local_78;
      if ((local_78 != (long *)0x0) &&
         (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 00487d00 to 00587d07 has its CatchHandler @ 00487d60 */
        (**(code **)(*local_78 + 0x10))(local_78);
        lVar11 = plVar14[2];
                    /* try { // try from 00487d08 to 00587d83 has its CatchHandler @ 00487b34 */
        plVar14[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
      }
      pGVar17 = *(GUILabel **)(this + 0x118);
      uVar16 = (uint)param_3;
      uVar1 = -uVar16;
      if (-1 < (int)uVar16) {
        uVar1 = uVar16;
      }
      local_98 = puVar8 + 0x18;
      pcVar9 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                         (uVar1,acStack_6c);
      puVar13 = puVar8 + 0x18;
      if ((int)uVar16 < 0) {
        pcVar9 = pcVar9 + -1;
        *pcVar9 = '-';
        puVar13 = local_98;
      }
                    /* catch() { ... } // from try @ 00487d00 with catch @ 00487d60 */
      FUN_00669e1c(&local_98,0,*(undefined8 *)(puVar13 + -0x18),pcVar9,
                   (long)acStack_6c - (long)pcVar9);
      FUN_0066a528(&local_90,&local_98);
                    /* try { // try from 00487d84 to 00587ddb has its CatchHandler @ 00487e28 */
      FUN_006677d4(&local_90,&DAT_00690c08,1);
      pvVar15 = local_90;
                    /* catch() { ... } // from try @ 00487c7c with catch @ 00487d90 */
      psVar18 = (size_t *)((long)local_90 + -0x18);
      if ((*psVar18 != *(size_t *)((long)*(void **)(pGVar17 + 0x100) + -0x18)) ||
         (iVar6 = memcmp(local_90,*(void **)(pGVar17 + 0x100),*psVar18), iVar6 != 0)) {
        FUN_0066a6a8(pGVar17 + 0x100,&local_90);
        GUILabel::UpdateText(pGVar17);
        psVar18 = (size_t *)((long)local_90 + -0x18);
        pvVar15 = local_90;
      }
      if (psVar18 != (size_t *)puVar8) {
        piVar12 = (int *)((long)pvVar15 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = *piVar12;
                    /* try { // try from 00488060 to 00588063 has its CatchHandler @ 0048825c */
          *piVar12 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = *piVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
              *piVar12 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar6 < 1) {
          operator_delete(psVar18);
        }
      }
                    /* try { // try from 00487ddc to 00587e17 has its CatchHandler @ 00487b34 */
                    /* catch() { ... } // from try @ 00487c18 with catch @ 00487de0 */
      if (local_98 + -0x18 != puVar8) {
                    /* catch() { ... } // from try @ 00487be0 with catch @ 00487df4 */
        piVar12 = (int *)(local_98 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = *piVar12;
          *piVar12 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = *piVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
              *piVar12 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar6 < 1) {
          operator_delete(local_98 + -0x18);
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


