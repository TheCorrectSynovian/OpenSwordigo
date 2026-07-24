/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00524608
 * Function: Caver::MapView::UpdateDefaultNodeVisibility
 * Signature: undefined __thiscall UpdateDefaultNodeVisibility(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::UpdateDefaultNodeVisibility() */

void __thiscall Caver::MapView::UpdateDefaultNodeVisibility(MapView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  string *psVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 local_98;
  long local_90;
  long *local_88;
  long *plStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  Map::UnflagAllNodes(*(Map **)(this + 0xf8));
  psVar17 = *(string **)(this + 0xf8);
  lVar19 = *(long *)psVar17;
  lVar20 = *(long *)(psVar17 + 8);
  lVar7 = lVar20 - lVar19;
  if (lVar7 == 0) goto LAB_00524848;
  lVar14 = *(long *)(this + 0x118);
  uVar12 = lVar7 >> 4;
  uVar18 = uVar12;
  if (uVar12 < 2) {
    uVar18 = 1;
  }
  if (uVar18 < 3) {
    uVar13 = 0;
LAB_005246a0:
    plVar15 = (long *)(lVar14 + uVar13 * 0x10);
    do {
      uVar13 = uVar13 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005245c0 with catch @ 005246ac
                        */
                    /* try { // try from 005246b0 to 006246b7 has its CatchHandler @ 005246c0 */
      *(undefined1 *)(*plVar15 + 0x18) = 0;
      plVar15 = plVar15 + 2;
    } while (uVar13 < uVar12);
  }
  else {
    uVar13 = uVar18 & 0xfffffffffffffffe;
    plVar15 = (long *)(lVar14 + 0x10);
    uVar16 = uVar13;
    do {
      lVar7 = *plVar15;
      uVar16 = uVar16 - 2;
      *(undefined1 *)(plVar15[-2] + 0x18) = 0;
      *(undefined1 *)(lVar7 + 0x18) = 0;
      plVar15 = plVar15 + 4;
    } while (uVar16 != 0);
    if (uVar18 != uVar13) goto LAB_005246a0;
  }
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
                    /* try { // try from 005246b8 to 006246c3 has its CatchHandler @ 00524578 */
  if (lVar20 != lVar19) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005246b0 with catch @ 005246c0
                        */
    uVar18 = 0;
                    /* catch() { ... } // from try @ 00524700 with catch @ 005246dc */
    do {
      plVar15 = (long *)(*(long *)(this + 0x118) + uVar18 * 0x10);
      puVar9 = (undefined8 *)*plVar15;
      pcVar11 = (char *)(puVar9 + 3);
      if (*pcVar11 == '\0') {
        if ((*(char *)((long)puVar9 + 0x19) == '\0') && (*(char *)((long)puVar9 + 0x1d) == '\0')) {
          plVar6 = *(long **)(this + 0x290);
          if (plVar6 != (long *)0x0) {
                    /* try { // try from 005246fc to 006246ff has its CatchHandler @ 00524710 */
                    /* try { // try from 00524700 to 00624723 has its CatchHandler @ 005246dc */
            FUN_0066a528(&local_90,
                         *plVar6 + ((plVar6[1] - *plVar6) * 0x20000000 + -0x100000000 >> 0x1d));
                    /* catch() { ... } // from try @ 005246fc with catch @ 00524710 */
            Map::NodeForName(psVar17);
            plVar6 = plStack_80;
            lVar19 = *plVar15;
            lVar20 = *(long *)(*(long *)(this + 0x118) + *local_88 * 0x10);
            if ((plStack_80 != (long *)0x0) &&
               (lVar7 = plStack_80[1], plStack_80[1] = lVar7 + -1, lVar7 + -1 == 0)) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              lVar7 = plVar6[2];
              plVar6[2] = lVar7 + -1;
              if (lVar7 + -1 == 0) {
                (**(code **)(*plVar6 + 0x18))(plVar6);
              }
            }
            if ((undefined *)(local_90 + -0x18) != puVar5) {
              piVar8 = (int *)(local_90 + -8);
              if (puVar4 == (undefined *)0x0) {
                iVar10 = *piVar8;
                *piVar8 = iVar10 + -1;
              }
              else {
                do {
                  iVar10 = *piVar8;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                  if (bVar2) {
                    *piVar8 = iVar10 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              if (iVar10 < 1) {
                operator_delete((undefined *)(local_90 + -0x18));
              }
            }
            if (lVar19 == lVar20) {
              puVar9 = *(undefined8 **)(*(long *)(this + 0x118) + uVar18 * 0x10);
              pcVar11 = (char *)(puVar9 + 3);
              goto LAB_0052480c;
            }
          }
        }
        else {
LAB_0052480c:
          *pcVar11 = '\x01';
          local_90 = 0;
          local_98 = 0x7f7fffff7f7fffff;
          RecursivelySetVisibleNodes
                    (this,(MapNode *)*puVar9,(Vector2 *)&local_90,(Vector2 *)&local_98);
        }
      }
      psVar17 = *(string **)(this + 0xf8);
      uVar18 = uVar18 + 1;
    } while (uVar18 < (ulong)(*(long *)(psVar17 + 8) - *(long *)psVar17 >> 4));
  }
LAB_00524848:
  UpdateNodes(this);
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


