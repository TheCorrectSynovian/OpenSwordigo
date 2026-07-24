/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00524008
 * Function: Caver::MapView::UpdateTargetPath
 * Signature: undefined __thiscall UpdateTargetPath(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::UpdateTargetPath() */

void __thiscall Caver::MapView::UpdateTargetPath(MapView *this)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  string *psVar10;
  long *plVar11;
  undefined4 local_74;
  long local_70;
  long local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 00524058 with catch @ 00524028 */
  lVar6 = *(long *)(this + 0x108);
  if (*(char *)(lVar6 + 0x1c8) == '\0') {
                    /* try { // try from 005240dc to 006240e3 has its CatchHandler @ 005240ec */
    Sprite::Clear((Sprite *)(this + 0x238));
                    /* try { // try from 005240e4 to 006240ef has its CatchHandler @ 005240a4 */
    plVar9 = *(long **)(this + 0x298);
                    /* catch() { ... } // from try @ 005240dc with catch @ 005240ec */
    *(undefined8 *)(this + 0x298) = 0;
    *(undefined8 *)(this + 0x290) = 0;
                    /* try { // try from 005240f0 to 00624173 has its CatchHandler @ 005240f0
                       catch(type#1 @ 00000000) { ... } // from try @ 005240f0 with catch @ 005240f0
                       catch(type#1 @ 00000000) { ... } // from try @ 00524190 with catch @ 005240f0
                       catch(type#1 @ 00000000) { ... } // from try @ 005241b4 with catch @ 005240f0
                        */
    if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar6 = plVar9[2];
      plVar9[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    *(undefined4 *)(this + 0x2a0) = 0;
  }
  else {
    if (*(long *)(this + 0x290) == 0) {
      lVar1 = *(long *)(lVar6 + 0x170);
      plVar9 = *(long **)(lVar6 + 0x178);
      if ((plVar9 != (long *)0x0) && (plVar9[1] == 0)) {
                    /* try { // try from 00524174 to 0062418f has its CatchHandler @ 005241a8 */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar6 = plVar9[2];
        plVar9[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
                    /* try { // try from 00524190 to 006241ab has its CatchHandler @ 005240f0 */
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      if (lVar1 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00524174 with catch @ 005241a8
                        */
        GameState::CurrentGuideTarget();
                    /* try { // try from 005241ac to 006241b3 has its CatchHandler @ 005241bc */
        if (local_50 != (long *)0x0) {
                    /* try { // try from 005241b4 to 006241bf has its CatchHandler @ 005240f0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005241ac with catch @ 005241bc
                        */
          psVar10 = *(string **)(this + 0xf8);
          *(int *)(this + 0x2a0) = (int)*local_50;
          lVar6 = *(long *)(*(long *)(this + 0x108) + 0x170);
          plVar9 = *(long **)(*(long *)(this + 0x108) + 0x178);
          if (plVar9 != (long *)0x0) {
            plVar9[1] = plVar9[1] + 1;
          }
                    /* catch() { ... } // from try @ 005241fc with catch @ 005241d8 */
          FUN_0066a528(&local_68,lVar6 + 0x10);
          FUN_0066a528(&local_70,local_50 + 2);
                    /* try { // try from 005241f8 to 006241fb has its CatchHandler @ 0052420c */
                    /* try { // try from 005241fc to 0062421f has its CatchHandler @ 005241d8 */
          Map::FindPath(psVar10,(string *)&local_68);
                    /* catch() { ... } // from try @ 005241f8 with catch @ 0052420c */
          if (local_58 != (long *)0x0) {
            local_58[1] = local_58[1] + 1;
          }
          plVar11 = *(long **)(this + 0x298);
          *(undefined8 *)(this + 0x290) = local_60;
          *(long **)(this + 0x298) = local_58;
          if ((plVar11 != (long *)0x0) &&
             (lVar6 = plVar11[1], plVar11[1] = lVar6 + -1, lVar6 + -1 == 0)) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            lVar6 = plVar11[2];
            plVar11[2] = lVar6 + -1;
            if (lVar6 + -1 == 0) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
          }
          if ((local_58 != (long *)0x0) &&
             (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0)) {
            (**(code **)(*local_58 + 0x10))(local_58);
            lVar6 = local_58[2];
            local_58[2] = lVar6 + -1;
            if (lVar6 + -1 == 0) {
              (**(code **)(*local_58 + 0x18))(local_58);
            }
          }
          puVar5 = PTR_DAT_007e5de8;
          if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
            piVar7 = (int *)(local_70 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar8 = *piVar7;
              *piVar7 = iVar8 + -1;
            }
            else {
              do {
                iVar8 = *piVar7;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                if (bVar3) {
                  *piVar7 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar8 < 1) {
              operator_delete((undefined *)(local_70 + -0x18));
            }
          }
          if ((undefined *)(local_68 + -0x18) != puVar5) {
            piVar7 = (int *)(local_68 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar8 = *piVar7;
              *piVar7 = iVar8 + -1;
            }
            else {
              do {
                iVar8 = *piVar7;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                if (bVar3) {
                  *piVar7 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar8 < 1) {
              operator_delete((undefined *)(local_68 + -0x18));
            }
          }
          if ((plVar9 != (long *)0x0) &&
             (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            lVar6 = plVar9[2];
            plVar9[2] = lVar6 + -1;
            if (lVar6 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
        }
        if ((local_48 != (long *)0x0) &&
           (lVar6 = local_48[1], local_48[1] = lVar6 + -1, lVar6 + -1 == 0)) {
          (**(code **)(*local_48 + 0x10))(local_48);
          lVar6 = local_48[2];
          local_48[2] = lVar6 + -1;
          if (lVar6 + -1 == 0) {
            (**(code **)(*local_48 + 0x18))(local_48);
          }
        }
      }
    }
                    /* try { // try from 00524044 to 00624057 has its CatchHandler @ 0052407c */
    Sprite::Clear((Sprite *)(this + 0x238));
    if (*(long *)(this + 0x290) != 0) {
      local_50 = (long *)0x0;
                    /* try { // try from 00524058 to 0062407f has its CatchHandler @ 00524028 */
      switch(*(undefined4 *)(this + 0x2a0)) {
      case 1:
      case 2:
                    /* catch() { ... } // from try @ 00524044 with catch @ 0052407c */
        plVar9 = *(long **)(this + 0x3b8);
        break;
      case 3:
        plVar9 = *(long **)(this + 0x3c0);
        break;
      case 4:
        plVar9 = *(long **)(this + 0x3b0);
        break;
      default:
        goto switchD_00524078_default;
      }
      local_50 = plVar9;
      if (plVar9 != (long *)0x0) {
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        local_74 = 0xffffffff;
                    /* catch() { ... } // from try @ 005240e4 with catch @ 005240a4 */
        AddPathToSprite(this,(Sprite *)(this + 0x238),this + 0x290,&local_74,&local_50);
        iVar8 = (int)plVar9[1] + -1;
        *(int *)(plVar9 + 1) = iVar8;
        if (iVar8 == 0) {
                    /* try { // try from 005240c8 to 006240cb has its CatchHandler @ 005240d8 */
          (**(code **)(*plVar9 + 8))(plVar9);
                    /* catch() { ... } // from try @ 005240c8 with catch @ 005240d8 */
        }
      }
    }
  }
switchD_00524078_default:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


