/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00525938
 * Function: Caver::MapView::RecursivelySetVisibleNodes
 * Signature: undefined __thiscall RecursivelySetVisibleNodes(MapView * this, MapNode * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode*, int) */

void __thiscall
Caver::MapView::RecursivelySetVisibleNodes(MapView *this,MapNode *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  MapNode *local_78;
  long *plStack_70;
  
                    /* catch() { ... } // from try @ 00525860 with catch @ 00525948 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00525718 with catch @ 0052595c */
  lVar3 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00525960 to 00625967 has its CatchHandler @ 00525970 */
                    /* try { // try from 00525968 to 00625973 has its CatchHandler @ 005256d0 */
                    /* catch() { ... } // from try @ 00525960 with catch @ 00525970 */
                    /* catch() { ... } // from try @ 005259bc with catch @ 00525974
                       catch() { ... } // from try @ 005259d8 with catch @ 00525974 */
  if (0 < param_2) {
    lVar4 = *(long *)(param_1 + 0x30);
    param_1[0x5c] = (MapNode)0x1;
    if (*(long *)(param_1 + 0x38) != lVar4) {
      uVar7 = 0;
      lVar5 = *(long *)(*(long *)(this + 0x118) + *(long *)param_1 * 0x10);
      lVar6 = 0x10;
      do {
        if (*(char *)(lVar4 + lVar6) == '\0') {
                    /* try { // try from 005259b8 to 006259bb has its CatchHandler @ 005259cc */
                    /* try { // try from 005259bc to 006259cf has its CatchHandler @ 00525974 */
          Map::NodeForName(*(string **)(this + 0xf8));
                    /* catch() { ... } // from try @ 005259b8 with catch @ 005259cc */
                    /* try { // try from 005259d0 to 006259d7 has its CatchHandler @ 005259e0 */
                    /* try { // try from 005259d8 to 006259e3 has its CatchHandler @ 00525974 */
          if ((plStack_70 != (long *)0x0) &&
             (lVar4 = plStack_70[1], plStack_70[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005259d0 with catch @ 005259e0 */
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            lVar4 = plStack_70[2];
            plStack_70[2] = lVar4 + -1;
            if (lVar4 + -1 == 0) {
              (**(code **)(*plStack_70 + 0x18))(plStack_70);
            }
          }
                    /* catch() { ... } // from try @ 00525a7c with catch @ 00525a10 */
          if ((local_78 != (MapNode *)0x0) && (local_78[0x5c] == (MapNode)0x0)) {
            lVar4 = *(long *)(*(long *)(this + 0x118) + *(long *)local_78 * 0x10);
            *(undefined1 *)(lVar4 + 0x18) = 1;
            iVar2 = param_2;
            if (lVar4 != lVar5) {
              iVar2 = param_2 + -1;
            }
                    /* try { // try from 00525a54 to 00625a57 has its CatchHandler @ 00525a70 */
            RecursivelySetVisibleNodes(this,local_78,iVar2);
                    /* try { // try from 00525a58 to 00625a5f has its CatchHandler @ 00525a84 */
          }
        }
        lVar4 = *(long *)(param_1 + 0x30);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x18;
                    /* catch() { ... } // from try @ 00525a54 with catch @ 00525a70 */
                    /* try { // try from 00525a74 to 00625a7b has its CatchHandler @ 00525a80 */
                    /* try { // try from 00525a7c to 00625a97 has its CatchHandler @ 00525a10 */
                    /* catch() { ... } // from try @ 00525a74 with catch @ 00525a80 */
      } while (uVar7 < (ulong)((*(long *)(param_1 + 0x38) - lVar4 >> 3) * -0x5555555555555555));
    }
  }
                    /* catch() { ... } // from try @ 00525a58 with catch @ 00525a84 */
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


