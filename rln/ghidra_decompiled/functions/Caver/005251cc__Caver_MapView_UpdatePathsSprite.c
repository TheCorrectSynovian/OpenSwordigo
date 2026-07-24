/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005251cc
 * Function: Caver::MapView::UpdatePathsSprite
 * Signature: undefined __thiscall UpdatePathsSprite(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::UpdatePathsSprite() */

void __thiscall Caver::MapView::UpdatePathsSprite(MapView *this)

{
  char cVar1;
  long lVar2;
  MapViewNode *pMVar3;
  MapViewNode *pMVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *local_78;
  long *plStack_70;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  Sprite::Clear((Sprite *)(this + 0x1e0));
  plVar6 = *(long **)(this + 0xf8);
  if (plVar6[1] != *plVar6) {
    uVar10 = 0;
    do {
      lVar11 = 0;
      uVar12 = 0;
      while( true ) {
        plVar6 = (long *)(*plVar6 + uVar10 * 0x10);
        lVar7 = *plVar6;
        plVar6 = (long *)plVar6[1];
        if (plVar6 != (long *)0x0) {
          plVar6[1] = plVar6[1] + 1;
        }
        uVar9 = (*(long *)(lVar7 + 0x38) - *(long *)(lVar7 + 0x30) >> 3) * -0x5555555555555555;
        if ((plVar6 != (long *)0x0) && (lVar7 = plVar6[1], plVar6[1] = lVar7 + -1, lVar7 + -1 == 0))
        {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          lVar7 = plVar6[2];
          plVar6[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
        if (uVar9 < uVar12 || uVar9 - uVar12 == 0) break;
        plVar6 = (long *)(**(long **)(this + 0xf8) + uVar10 * 0x10);
        lVar7 = *plVar6;
        plVar6 = (long *)plVar6[1];
        if (plVar6 == (long *)0x0) {
          lVar7 = *(long *)(lVar7 + 0x30) + uVar12 * 0x18;
LAB_00525320:
          cVar1 = *(char *)(lVar7 + 0x10);
        }
        else {
          lVar7 = *(long *)(lVar7 + 0x30) + lVar11;
          if (plVar6[1] != 0) goto LAB_00525320;
          (**(code **)(*plVar6 + 0x10))(plVar6);
          lVar8 = plVar6[2];
          plVar6[2] = lVar8 + -1;
          if (lVar8 + -1 != 0) goto LAB_00525320;
          (**(code **)(*plVar6 + 0x18))(plVar6);
          cVar1 = *(char *)(lVar7 + 0x10);
        }
        if (cVar1 == '\0') {
          Map::NodeForName(*(string **)(this + 0xf8));
          if ((plStack_70 != (long *)0x0) &&
             (lVar8 = plStack_70[1], plStack_70[1] = lVar8 + -1, lVar8 + -1 == 0)) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            lVar8 = plStack_70[2];
            plStack_70[2] = lVar8 + -1;
            if (lVar8 + -1 == 0) {
              (**(code **)(*plStack_70 + 0x18))(plStack_70);
            }
          }
          if (local_78 != (long *)0x0) {
            pMVar3 = *(MapViewNode **)(*(long *)(this + 0x118) + uVar10 * 0x10);
            pMVar4 = *(MapViewNode **)(*(long *)(this + 0x118) + *local_78 * 0x10);
            if ((*(char *)(lVar7 + 0x11) == '\0') || (pMVar4[0x18] == (MapViewNode)0x0)) {
              if (pMVar3 != pMVar4) goto LAB_005253ac;
            }
            else if ((pMVar3 != pMVar4) && (pMVar4[0x1a] != (MapViewNode)0x0)) {
LAB_005253ac:
              if ((pMVar3[0x18] != (MapViewNode)0x0) && (pMVar3[0x1a] == (MapViewNode)0x0)) {
                AddPathSprite(this,pMVar3,pMVar4);
              }
            }
          }
        }
        plVar6 = *(long **)(this + 0xf8);
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x18;
      }
      plVar6 = *(long **)(this + 0xf8);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(plVar6[1] - *plVar6 >> 4));
  }
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


