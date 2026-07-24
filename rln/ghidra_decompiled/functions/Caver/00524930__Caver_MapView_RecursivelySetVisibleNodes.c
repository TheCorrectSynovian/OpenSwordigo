/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00524930
 * Function: Caver::MapView::RecursivelySetVisibleNodes
 * Signature: undefined __thiscall RecursivelySetVisibleNodes(MapView * this, MapNode * param_1, Vector2 * param_2, Vector2 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode*, Caver::Vector2 const&, Caver::Vector2
   const&) */

void __thiscall
Caver::MapView::RecursivelySetVisibleNodes
          (MapView *this,MapNode *param_1,Vector2 *param_2,Vector2 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  MapNode *local_78;
  long *plStack_70;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  param_1[0x5c] = (MapNode)0x1;
  plVar3 = *(long **)(*(long *)(this + 0x118) + *(long *)param_1 * 0x10);
  if ((((ABS(*(float *)(*plVar3 + 8) - *(float *)param_2) <= *(float *)param_3) &&
       (ABS(*(float *)(*plVar3 + 0xc) - *(float *)(param_2 + 4)) <= *(float *)(param_3 + 4))) &&
      (*(undefined1 *)(plVar3 + 3) = 1, *(char *)((long)plVar3 + 0x19) != '\0')) &&
     (lVar4 = *(long *)(param_1 + 0x30), *(long *)(param_1 + 0x38) != lVar4)) {
    uVar5 = 0;
    lVar6 = 0x10;
    do {
      if (*(char *)(lVar4 + lVar6) == '\0') {
        Map::NodeForName(*(string **)(this + 0xf8));
        if ((plStack_70 != (long *)0x0) &&
           (lVar4 = plStack_70[1], plStack_70[1] = lVar4 + -1, lVar4 + -1 == 0)) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          lVar4 = plStack_70[2];
          plStack_70[2] = lVar4 + -1;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plStack_70 + 0x18))(plStack_70);
          }
        }
        if ((local_78 != (MapNode *)0x0) && (local_78[0x5c] == (MapNode)0x0)) {
          RecursivelySetVisibleNodes(this,local_78,param_2,param_3);
        }
      }
      lVar4 = *(long *)(param_1 + 0x30);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar5 < (ulong)((*(long *)(param_1 + 0x38) - lVar4 >> 3) * -0x5555555555555555));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


