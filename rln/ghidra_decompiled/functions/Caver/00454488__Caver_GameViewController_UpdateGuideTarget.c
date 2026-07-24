/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00454488
 * Function: Caver::GameViewController::UpdateGuideTarget
 * Signature: undefined __thiscall UpdateGuideTarget(GameViewController * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::UpdateGuideTarget(bool) */

void __thiscall Caver::GameViewController::UpdateGuideTarget(GameViewController *this,bool param_1)

{
  shared_ptr *psVar1;
  GameViewController *pGVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  SceneObject *pSVar12;
  OverlayTargetArrowComponent *pOVar13;
  long *plVar14;
  size_t __n;
  long lVar15;
  undefined4 *puVar16;
  code *pcVar17;
  int *piVar18;
  OverlayTargetArrowComponent *pOVar19;
  long *plVar20;
  long lVar21;
  string *psVar22;
  size_t *psVar23;
  long *local_a8;
  SceneObject *local_a0;
  void *local_98;
  long local_90;
  OverlayTargetArrowComponent *local_88;
  OverlayTargetArrowComponent *local_80;
  OverlayTargetArrowComponent *local_78;
  long *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  psVar1 = (shared_ptr *)(this + 0x118);
  if ((*(GameState **)(this + 0xa8))[0x1c8] == (GameState)0x0) {
    if (*(long *)(this + 0x118) == 0) goto LAB_00454c68;
    plVar11 = *(long **)(this + 0x128);
    if (plVar11 != (long *)0x0) {
                    /* try { // try from 00454730 to 005547cb has its CatchHandler @ 00454730
                       catch() { ... } // from try @ 00454730 with catch @ 00454730
                       catch() { ... } // from try @ 004547d0 with catch @ 00454730 */
      *(undefined1 *)(plVar11 + 0x1d) = 1;
      *(undefined8 *)(this + 0x128) = 0;
      iVar9 = (int)plVar11[1] + -1;
      *(int *)(plVar11 + 1) = iVar9;
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 8))();
      }
    }
LAB_00454758:
    pOVar13 = *(OverlayTargetArrowComponent **)(this + 0x120);
    *(undefined8 *)psVar1 = 0;
    *(undefined8 *)(this + 0x120) = 0;
    if ((pOVar13 == (OverlayTargetArrowComponent *)0x0) ||
       (lVar15 = *(long *)(pOVar13 + 8), *(long *)(pOVar13 + 8) = lVar15 + -1, lVar15 + -1 != 0))
    goto LAB_00454c68;
    (**(code **)(*(long *)pOVar13 + 0x10))(pOVar13);
    lVar15 = *(long *)(pOVar13 + 0x10);
    *(long *)(pOVar13 + 0x10) = lVar15 + -1;
    if (lVar15 + -1 != 0) goto LAB_00454c68;
    pcVar17 = *(code **)(*(long *)pOVar13 + 0x18);
  }
  else {
    if (*(long *)(this + 0x118) != 0) {
      uVar10 = GameState::GuideTargetCompleted(*(GameState **)(this + 0xa8),psVar1);
      if ((uVar10 & 1) != 0) {
        plVar11 = *(long **)(this + 0x128);
        if (plVar11 != (long *)0x0) {
          *(undefined1 *)(plVar11 + 0x1d) = 1;
          *(undefined8 *)(this + 0x128) = 0;
          iVar9 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar9;
          if (iVar9 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        plVar11 = *(long **)(this + 0x120);
        *(undefined8 *)psVar1 = 0;
        *(undefined8 *)(this + 0x120) = 0;
        if ((plVar11 != (long *)0x0) &&
           (lVar15 = plVar11[1], plVar11[1] = lVar15 + -1, lVar15 + -1 == 0)) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar15 = plVar11[2];
          plVar11[2] = lVar15 + -1;
          if (lVar15 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
      }
      if (*(long *)psVar1 != 0) goto LAB_00454c68;
    }
    GameState::CurrentGuideTarget();
    if (local_70 != (long *)0x0) {
      local_70[1] = local_70[1] + 1;
    }
    plVar11 = *(long **)(this + 0x120);
    *(OverlayTargetArrowComponent **)(this + 0x118) = local_78;
    *(long **)(this + 0x120) = local_70;
    if ((plVar11 != (long *)0x0) &&
       (lVar15 = plVar11[1], plVar11[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar15 = plVar11[2];
      plVar11[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    plVar11 = local_70;
    if ((local_70 != (long *)0x0) &&
       (lVar15 = local_70[1], local_70[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      lVar15 = plVar11[2];
      plVar11[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    puVar16 = *(undefined4 **)psVar1;
    if (puVar16 == (undefined4 *)0x0) goto LAB_00454c68;
    if ((*(char *)(puVar16 + 10) != '\0') && (!param_1)) goto LAB_00454758;
    local_80 = (OverlayTargetArrowComponent *)0x0;
    switch(*puVar16) {
    case 1:
      psVar22 = (string *)TextureLibrary::sharedLibrary();
      FUN_00666bb8(&local_88,&DAT_0068ef24,&local_a0);
      TextureLibrary::TextureForName(psVar22,SUB81(&local_88,0));
      pOVar13 = local_80;
      if (local_78 != (OverlayTargetArrowComponent *)0x0) {
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      }
      local_80 = local_78;
      if ((pOVar13 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(pOVar13 + 8), *(int *)(pOVar13 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)pOVar13 + 8))(pOVar13);
      }
      if ((local_78 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)local_78 + 8))();
      }
      pOVar13 = local_88 + -0x18;
      if (pOVar13 != (OverlayTargetArrowComponent *)PTR_DAT_007e5de8) {
        local_88 = local_88 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00454ed4:
          iVar9 = *(int *)local_88;
                    /* catch() { ... } // from try @ 0045490c with catch @ 00454edc */
          *(int *)local_88 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *(int *)local_88;
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(local_88,0x10);
            if (bVar8) {
              *(int *)local_88 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
LAB_00454ee0:
        if (iVar9 < 1) {
          operator_delete(pOVar13);
        }
      }
      break;
    case 2:
      psVar22 = (string *)TextureLibrary::sharedLibrary();
      FUN_00666bb8(&local_88,&DAT_0068ef24,&local_a0);
      TextureLibrary::TextureForName(psVar22,SUB81(&local_88,0));
      pOVar13 = local_80;
      if (local_78 != (OverlayTargetArrowComponent *)0x0) {
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      }
      local_80 = local_78;
                    /* try { // try from 0045499c to 005549af has its CatchHandler @ 00454e7c */
      if ((pOVar13 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(pOVar13 + 8), *(int *)(pOVar13 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)pOVar13 + 8))(pOVar13);
      }
                    /* try { // try from 004549c0 to 005549cb has its CatchHandler @ 00454e44 */
      if ((local_78 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)local_78 + 8))();
      }
      pOVar13 = local_88 + -0x18;
      if (pOVar13 != (OverlayTargetArrowComponent *)PTR_DAT_007e5de8) {
        local_88 = local_88 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00454ed4;
        do {
          iVar9 = *(int *)local_88;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_88,0x10);
          if (bVar8) {
            *(int *)local_88 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_00454ee0;
      }
      break;
    case 3:
      psVar22 = (string *)TextureLibrary::sharedLibrary();
      FUN_00666bb8(&local_88,&DAT_0068ef3c,&local_a0);
                    /* try { // try from 004547cc to 005547cf has its CatchHandler @ 004547ec */
                    /* try { // try from 004547d0 to 005547ff has its CatchHandler @ 00454730 */
      TextureLibrary::TextureForName(psVar22,SUB81(&local_88,0));
      pOVar13 = local_80;
      if (local_78 != (OverlayTargetArrowComponent *)0x0) {
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      }
                    /* catch() { ... } // from try @ 004547cc with catch @ 004547ec */
      local_80 = local_78;
                    /* try { // try from 00454800 to 0055482f has its CatchHandler @ 00454800
                       catch() { ... } // from try @ 00454800 with catch @ 00454800
                       catch() { ... } // from try @ 00454ae0 with catch @ 00454800 */
      if ((pOVar13 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(pOVar13 + 8), *(int *)(pOVar13 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)pOVar13 + 8))(pOVar13);
      }
      if ((local_78 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
                    /* try { // try from 00454830 to 00554843 has its CatchHandler @ 00454fe8 */
        (**(code **)(*(long *)local_78 + 8))();
      }
      pOVar13 = local_88 + -0x18;
      if (pOVar13 != (OverlayTargetArrowComponent *)PTR_DAT_007e5de8) {
                    /* try { // try from 00454850 to 0055485b has its CatchHandler @ 00454f7c */
        local_88 = local_88 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00454ed4;
        do {
          iVar9 = *(int *)local_88;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_88,0x10);
          if (bVar8) {
            *(int *)local_88 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_00454ee0;
      }
      break;
    case 4:
      psVar22 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 00454884 to 005548bf has its CatchHandler @ 00454f18 */
      FUN_00666bb8(&local_88,&DAT_0068ef54,&local_a0);
      TextureLibrary::TextureForName(psVar22,SUB81(&local_88,0));
      pOVar13 = local_80;
      if (local_78 != (OverlayTargetArrowComponent *)0x0) {
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      }
      local_80 = local_78;
      if ((pOVar13 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(pOVar13 + 8), *(int *)(pOVar13 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)pOVar13 + 8))(pOVar13);
      }
                    /* try { // try from 004548e8 to 005548fb has its CatchHandler @ 00454f14 */
      if ((local_78 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)local_78 + 8))();
      }
                    /* try { // try from 0045490c to 00554917 has its CatchHandler @ 00454edc */
      pOVar13 = local_88 + -0x18;
      if (pOVar13 != (OverlayTargetArrowComponent *)PTR_DAT_007e5de8) {
        local_88 = local_88 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00454ed4;
        do {
          iVar9 = *(int *)local_88;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_88,0x10);
          if (bVar8) {
            *(int *)local_88 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_00454ee0;
      }
    }
                    /* try { // try from 004549f0 to 00554a2b has its CatchHandler @ 00454de8 */
    pSVar12 = operator_new(0x128);
    SceneObject::SceneObject(pSVar12);
    pGVar2 = this + 0x128;
    *(int *)(pSVar12 + 8) = *(int *)(pSVar12 + 8) + 1;
    plVar11 = *(long **)pGVar2;
    *(SceneObject **)pGVar2 = pSVar12;
    if ((plVar11 != (long *)0x0) &&
       (iVar9 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar11 + 8))();
      pSVar12 = *(SceneObject **)pGVar2;
    }
                    /* try { // try from 00454a4c to 00554a5f has its CatchHandler @ 00454de4 */
    FUN_00666bb8(&local_78,&DAT_0068ef6a,&local_98);
    SceneObject::SetIdentifier(pSVar12,(string *)&local_78);
    puVar6 = PTR_DAT_007e5de8;
                    /* try { // try from 00454a70 to 00554a7b has its CatchHandler @ 00454dac */
    if (local_78 + -0x18 != (OverlayTargetArrowComponent *)PTR_DAT_007e5de8) {
      pOVar13 = local_78 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *(int *)pOVar13;
        *(int *)pOVar13 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *(int *)pOVar13;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pOVar13,0x10);
          if (bVar8) {
            *(int *)pOVar13 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_78 + -0x18);
      }
    }
    pOVar13 = operator_new(0xb8);
    OverlayTargetArrowComponent::OverlayTargetArrowComponent(pOVar13);
    *(int *)(pOVar13 + 8) = *(int *)(pOVar13 + 8) + 1;
    OverlayTargetArrowComponent::SetIconTexture(pOVar13,(intrusive_ptr *)&local_80);
                    /* try { // try from 00454aa4 to 00554adf has its CatchHandler @ 00454d50 */
    local_88 = (OverlayTargetArrowComponent *)0x0;
    FUN_0066a528(&local_90,*(long *)psVar1 + 0x20);
    plVar11 = (long *)(local_90 + -0x18);
    lVar15 = *plVar11;
    if (plVar11 == (long *)puVar6) {
LAB_00454acc:
      if (lVar15 == 0) goto LAB_00454b6c;
LAB_00454ad0:
      psVar22 = *(string **)(*(long *)(this + 200) + 0x20);
                    /* try { // try from 00454ae0 to 00554feb has its CatchHandler @ 00454800 */
      FUN_0066a528(&local_98,*(long *)(this + 0x118) + 0x20);
      Scene::ObjectWithIdentifier(psVar22);
      pOVar19 = local_88;
      if (local_78 != (OverlayTargetArrowComponent *)0x0) {
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      }
      local_88 = local_78;
      if ((pOVar19 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(pOVar19 + 8), *(int *)(pOVar19 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)pOVar19 + 8))(pOVar19);
      }
      if ((local_78 != (OverlayTargetArrowComponent *)0x0) &&
         (iVar9 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)local_78 + 8))();
      }
      if ((undefined *)((long)local_98 + -0x18) == puVar6) goto LAB_00454b6c;
      piVar18 = (int *)((long)local_98 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar18;
                    /* catch() { ... } // from try @ 00454aa4 with catch @ 00454d50 */
        *piVar18 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar18;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar8) {
            *piVar18 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (0 < iVar9) goto LAB_00454b6c;
      operator_delete((undefined *)((long)local_98 + -0x18));
      if (local_88 == (OverlayTargetArrowComponent *)0x0) goto LAB_00454d6c;
LAB_00454b74:
      OverlayTargetArrowComponent::AddTargetObject(pOVar13,(intrusive_ptr *)&local_88);
LAB_00454b84:
      pOVar13[0x98] = (OverlayTargetArrowComponent)0x1;
    }
    else {
      piVar18 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar18;
        *piVar18 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar18;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar8) {
            *piVar18 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (0 < iVar9) goto LAB_00454acc;
      operator_delete(plVar11);
      if (lVar15 != 0) goto LAB_00454ad0;
LAB_00454b6c:
      if (local_88 != (OverlayTargetArrowComponent *)0x0) goto LAB_00454b74;
LAB_00454d6c:
      FUN_0066a528(&local_78,*(long *)(this + 0xa8) + 0x158);
      FUN_0066a528(&local_98,*(long *)psVar1 + 0x10);
      pvVar7 = local_98;
      psVar23 = (size_t *)((long)local_98 + -0x18);
      if (*(size_t *)(local_78 + -0x18) == *psVar23) {
                    /* catch() { ... } // from try @ 00454a70 with catch @ 00454dac */
        iVar9 = memcmp(local_78,local_98,*(size_t *)(local_78 + -0x18));
        bVar8 = iVar9 == 0;
      }
      else {
        bVar8 = false;
      }
      if (psVar23 != (size_t *)puVar6) {
        piVar18 = (int *)((long)pvVar7 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar18;
          *piVar18 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar18;
                    /* catch() { ... } // from try @ 0045499c with catch @ 00454e7c */
                    /* catch() { ... } // from try @ 00454940 with catch @ 00454e80 */
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar4) {
              *piVar18 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete(psVar23);
                    /* catch() { ... } // from try @ 004548e8 with catch @ 00454f14 */
        }
      }
      if (local_78 + -0x18 == (OverlayTargetArrowComponent *)puVar6) {
LAB_00454de0:
        if (!bVar8) goto LAB_00454f38;
LAB_00454de4:
                    /* catch() { ... } // from try @ 00454a4c with catch @ 00454de4 */
                    /* catch() { ... } // from try @ 004549f0 with catch @ 00454de8 */
        psVar22 = *(string **)(*(long *)(this + 200) + 0x20);
        FUN_0066a528(&local_98,*(long *)(this + 0x118) + 0x18);
        Scene::ObjectWithIdentifier(psVar22);
        OverlayTargetArrowComponent::AddTargetObject(pOVar13,(intrusive_ptr *)&local_78);
        if ((local_78 != (OverlayTargetArrowComponent *)0x0) &&
           (iVar9 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
          (**(code **)(*(long *)local_78 + 8))();
        }
                    /* catch() { ... } // from try @ 004549c0 with catch @ 00454e44 */
        if ((undefined *)((long)local_98 + -0x18) != puVar6) {
          piVar18 = (int *)((long)local_98 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar9 = *piVar18;
            *piVar18 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = *piVar18;
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar8) {
                *piVar18 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
                    /* try { // try from 004552ac to 005552d3 has its CatchHandler @ 004552d8 */
            } while (cVar3 != '\0');
          }
                    /* try { // try from 00455308 to 0055532f has its CatchHandler @ 00455338 */
          if (iVar9 < 1) {
            operator_delete((undefined *)((long)local_98 + -0x18));
          }
        }
        pOVar13[0x99] = (OverlayTargetArrowComponent)0x1;
        if (**(int **)psVar1 != 4) goto LAB_00454b88;
        goto LAB_00454b84;
      }
      pOVar19 = local_78 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00454884 with catch @ 00454f18 */
        iVar9 = *(int *)pOVar19;
        *(int *)pOVar19 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *(int *)pOVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pOVar19,0x10);
          if (bVar4) {
            *(int *)pOVar19 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (0 < iVar9) goto LAB_00454de0;
      operator_delete(local_78 + -0x18);
      if (bVar8) goto LAB_00454de4;
LAB_00454f38:
      plVar20 = *(long **)(this + 0xa8);
      lVar15 = *plVar20;
      psVar22 = *(string **)(lVar15 + 0x48);
      plVar11 = *(long **)(lVar15 + 0x50);
      if (plVar11 != (long *)0x0) {
        plVar11[1] = plVar11[1] + 1;
      }
      FUN_0066a528(&local_98,plVar20 + 0x2b);
      FUN_0066a528(&local_a0,*(long *)psVar1 + 0x10);
                    /* catch() { ... } // from try @ 00454850 with catch @ 00454f7c */
      Map::FindPath(psVar22,(string *)&local_98);
      if (local_a0 + -0x18 != (SceneObject *)puVar6) {
        pSVar12 = local_a0 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *(int *)pSVar12;
          *(int *)pSVar12 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *(int *)pSVar12;
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pSVar12,0x10);
            if (bVar8) {
              *(int *)pSVar12 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
                    /* try { // try from 00455264 to 0055528b has its CatchHandler @ 004552e4 */
          } while (cVar3 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete(local_a0 + -0x18);
        }
      }
      if ((undefined *)((long)local_98 + -0x18) != puVar6) {
        piVar18 = (int *)((long)local_98 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar18;
                    /* catch() { ... } // from try @ 004552ac with catch @ 004552d8 */
          *piVar18 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar18;
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar8) {
              *piVar18 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
                    /* catch() { ... } // from try @ 00455264 with catch @ 004552e4 */
        if (iVar9 < 1) {
          operator_delete((undefined *)((long)local_98 + -0x18));
        }
      }
      if ((plVar11 != (long *)0x0) &&
         (lVar15 = plVar11[1], plVar11[1] = lVar15 + -1, lVar15 + -1 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        lVar15 = plVar11[2];
        plVar11[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
                    /* catch() { ... } // from try @ 00454830 with catch @ 00454fe8 */
                    /* try { // try from 00454ff4 to 0055508f has its CatchHandler @ 00454ff4
                       catch() { ... } // from try @ 00454ff4 with catch @ 00454ff4
                       catch() { ... } // from try @ 004551a4 with catch @ 00454ff4
                       catch() { ... } // from try @ 00455330 with catch @ 00454ff4 */
      if ((local_78 == (OverlayTargetArrowComponent *)0x0) ||
         ((int)((ulong)(*(long *)(local_78 + 8) - *(long *)local_78) >> 3) < 2)) {
LAB_004551fc:
        if (local_70 != (long *)0x0) goto LAB_00455204;
      }
      else {
        lVar21 = *(long *)psVar1;
        FUN_0066a528(&local_a0);
        lVar15 = std::
                 _Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 ::find((_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)(lVar21 + 0x30),(string *)&local_a0);
        if (lVar21 + 0x38 == lVar15) {
          FUN_00666bb8(&local_98,&DAT_0068fbeb,&local_a8);
        }
        else {
          FUN_0066a528(&local_98,lVar15 + 0x28);
        }
        if (local_a0 + -0x18 != (SceneObject *)puVar6) {
          pSVar12 = local_a0 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar9 = *(int *)pSVar12;
            *(int *)pSVar12 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = *(int *)pSVar12;
                    /* try { // try from 00455330 to 00555397 has its CatchHandler @ 00454ff4 */
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pSVar12,0x10);
              if (bVar8) {
                *(int *)pSVar12 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(local_a0 + -0x18);
          }
        }
        if (*(long *)((long)local_98 + -0x18) == 0) {
          FUN_0066a528(&local_a0,*(long *)local_78 + 8);
          plVar14 = (long *)ComponentManager::ComponentCollectionForInterface
                                      ((ComponentManager *)
                                       (*(long *)(*(long *)(this + 200) + 0x20) + 0x180),
                                       (long)PTR_Interface_007e68e8);
          plVar20 = (long *)plVar14[1];
                    /* try { // try from 00455108 to 00555113 has its CatchHandler @ 00455240 */
          for (plVar11 = (long *)*plVar14; (plVar20 != plVar11 && (*(long *)(*plVar11 + 0x28) == 0))
              ; plVar11 = plVar11 + 1) {
          }
joined_r0x0045512c:
          if (plVar20 != plVar11) {
                    /* try { // try from 00455134 to 0055515b has its CatchHandler @ 004551ec */
            lVar15 = *plVar11;
            __n = *(size_t *)((long)*(void **)(lVar15 + 0x88) + -0x18);
            if ((__n == *(size_t *)(local_a0 + -0x18)) &&
               (iVar9 = memcmp(*(void **)(lVar15 + 0x88),local_a0,__n), iVar9 == 0)) {
              local_a8 = *(long **)(lVar15 + 0x28);
              if (local_a8 != (long *)0x0) {
                *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
              }
              OverlayTargetArrowComponent::AddTargetObject(pOVar13,(intrusive_ptr *)&local_a8);
                    /* try { // try from 0045517c to 005551a3 has its CatchHandler @ 0045533c */
              if ((local_a8 != (long *)0x0) &&
                 (iVar9 = (int)local_a8[1] + -1, *(int *)(local_a8 + 1) = iVar9, iVar9 == 0)) {
                (**(code **)(*local_a8 + 8))();
              }
                    /* try { // try from 004551a4 to 0055520f has its CatchHandler @ 00454ff4 */
              if (*(char *)(lVar15 + 0x98) != '\0') {
                pOVar13[0x98] = (OverlayTargetArrowComponent)0x1;
              }
            }
            do {
              plVar11 = plVar11 + 1;
              if (plVar11 == (long *)plVar14[1]) break;
            } while (*(long *)(*plVar11 + 0x28) == 0);
            goto joined_r0x0045512c;
          }
          if (local_a0 + -0x18 != (SceneObject *)puVar6) {
            pSVar12 = local_a0 + -8;
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar9 = *(int *)pSVar12;
              *(int *)pSVar12 = iVar9 + -1;
            }
            else {
              do {
                iVar9 = *(int *)pSVar12;
                cVar3 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(pSVar12,0x10);
                if (bVar8) {
                  *(int *)pSVar12 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (iVar9 < 1) {
              operator_delete(local_a0 + -0x18);
            }
          }
        }
        else {
          Scene::ObjectWithIdentifier(*(string **)(*(long *)(this + 200) + 0x20));
          OverlayTargetArrowComponent::AddTargetObject(pOVar13,(intrusive_ptr *)&local_a0);
                    /* try { // try from 00455090 to 0055509f has its CatchHandler @ 0045533c */
          lVar15 = SceneObject::ComponentWithInterface(local_a0,(long)PTR_Interface_007e68e8);
          if ((lVar15 != 0) && (*(char *)(lVar15 + 0x98) != '\0')) {
            pOVar13[0x98] = (OverlayTargetArrowComponent)0x1;
          }
          if ((local_a0 != (SceneObject *)0x0) &&
             (iVar9 = *(int *)(local_a0 + 8), *(int *)(local_a0 + 8) = iVar9 + -1, iVar9 + -1 == 0))
          {
            (**(code **)(*(long *)local_a0 + 8))();
          }
        }
                    /* catch() { ... } // from try @ 00455134 with catch @ 004551ec */
        if ((undefined *)((long)local_98 + -0x18) == puVar6) goto LAB_004551fc;
                    /* catch() { ... } // from try @ 00455090 with catch @ 0045533c
                       catch() { ... } // from try @ 0045517c with catch @ 0045533c */
        piVar18 = (int *)((long)local_98 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar18;
          *piVar18 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar18;
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar8) {
              *piVar18 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (0 < iVar9) goto LAB_004551fc;
        operator_delete((undefined *)((long)local_98 + -0x18));
                    /* try { // try from 004553a0 to 00555403 has its CatchHandler @ 004553a0
                       catch() { ... } // from try @ 004553a0 with catch @ 004553a0
                       catch() { ... } // from try @ 00455414 with catch @ 004553a0 */
        if (local_70 == (long *)0x0) goto LAB_00454b88;
LAB_00455204:
        lVar15 = local_70[1];
        local_70[1] = lVar15 + -1;
                    /* try { // try from 00455210 to 00555237 has its CatchHandler @ 0045523c */
        if (lVar15 + -1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
          lVar15 = local_70[2];
          local_70[2] = lVar15 + -1;
          if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 00455210 with catch @ 0045523c */
                    /* catch() { ... } // from try @ 00455108 with catch @ 00455240 */
            (**(code **)(*local_70 + 0x18))(local_70);
          }
        }
      }
    }
LAB_00454b88:
    plVar11 = *(long **)pGVar2;
    pcVar17 = *(code **)(*plVar11 + 0x48);
    *(int *)(pOVar13 + 8) = *(int *)(pOVar13 + 8) + 1;
    local_78 = pOVar13;
    (*pcVar17)(plVar11,&local_78);
    if ((local_78 != (OverlayTargetArrowComponent *)0x0) &&
       (iVar9 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
      (**(code **)(*(long *)local_78 + 8))();
    }
    (**(code **)(**(long **)(*(long *)(this + 200) + 0x20) + 0x28))
              (*(long **)(*(long *)(this + 200) + 0x20),pGVar2);
    if (*(char *)(*(long *)(this + 0xd8) + 0x180) != '\0') {
      *(undefined1 *)(*(long *)pGVar2 + 0xf4) = 1;
    }
    if ((local_88 != (OverlayTargetArrowComponent *)0x0) &&
       (iVar9 = *(int *)(local_88 + 8), *(int *)(local_88 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
      (**(code **)(*(long *)local_88 + 8))();
    }
    iVar9 = *(int *)(pOVar13 + 8);
    *(int *)(pOVar13 + 8) = iVar9 + -1;
    if (iVar9 + -1 == 0) {
      (**(code **)(*(long *)pOVar13 + 8))(pOVar13);
    }
    if ((local_80 == (OverlayTargetArrowComponent *)0x0) ||
       (iVar9 = *(int *)(local_80 + 8), *(int *)(local_80 + 8) = iVar9 + -1, iVar9 + -1 != 0))
    goto LAB_00454c68;
    pcVar17 = *(code **)(*(long *)local_80 + 8);
    pOVar13 = local_80;
  }
  (*pcVar17)(pOVar13);
LAB_00454c68:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


