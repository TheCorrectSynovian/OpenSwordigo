/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00524bc8
 * Function: Caver::MapView::HideFarNodes
 * Signature: undefined __thiscall HideFarNodes(MapView * this, shared_ptr * param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::HideFarNodes(boost::shared_ptr<Caver::MapNode> const&, float, float) */

void __thiscall
Caver::MapView::HideFarNodes(MapView *this,shared_ptr *param_1,float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  MapNode *pMVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pMVar3 = *(MapNode **)param_1;
  plVar4 = *(long **)(this + 0xf8);
  plVar6 = *(long **)(*(long *)(this + 0x118) + *(long *)pMVar3 * 0x10);
  if (plVar4[1] != *plVar4) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar1 = *(long *)(*plVar4 + lVar7);
      plVar4 = (long *)((long *)(*plVar4 + lVar7))[1];
      if ((plVar4 != (long *)0x0) && (plVar4[1] == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar5 = plVar4[2];
        plVar4[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      uVar8 = uVar8 + 1;
      lVar5 = *(long *)(*(long *)(this + 0x118) + lVar7);
      *(undefined1 *)(lVar1 + 0x5c) = 0;
      lVar7 = lVar7 + 0x10;
      *(undefined1 *)(lVar5 + 0x18) = 0;
      plVar4 = *(long **)(this + 0xf8);
    } while (uVar8 < (ulong)(plVar4[1] - *plVar4 >> 4));
    pMVar3 = *(MapNode **)param_1;
  }
  *(undefined1 *)(plVar6 + 3) = 1;
  local_70 = *(undefined8 *)(*plVar6 + 8);
  local_78 = param_2;
  fStack_74 = param_3;
                    /* catch() { ... } // from try @ 00524cf4 with catch @ 00524cc4 */
  RecursivelySetVisibleNodes(this,pMVar3,(Vector2 *)&local_70,(Vector2 *)&local_78);
  UpdateNodes(this);
                    /* try { // try from 00524ce0 to 00624cf3 has its CatchHandler @ 00524d18 */
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00524cf4 to 00624d1b has its CatchHandler @ 00524cc4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


