/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00530208
 * Function: Caver::QuestsView::QuestsView
 * Signature: undefined __thiscall QuestsView(QuestsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestsView::QuestsView() */

void __thiscall Caver::QuestsView::QuestsView(QuestsView *this)

{
  QuestsView *pQVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 00530208 to 0063020f has its CatchHandler @ 00530218 */
                    /* try { // try from 00530210 to 0063021f has its CatchHandler @ 00530140 */
                    /* catch() { ... } // from try @ 00530208 with catch @ 00530218 */
                    /* catch() { ... } // from try @ 005301dc with catch @ 0053021c */
  lVar5 = tpidr_el0;
                    /* try { // try from 00530220 to 00630267 has its CatchHandler @ 00530220
                       catch(type#1 @ 00000000) { ... } // from try @ 00530220 with catch @ 00530220
                       catch(type#1 @ 00000000) { ... } // from try @ 00530284 with catch @ 00530220
                       catch(type#1 @ 00000000) { ... } // from try @ 005303b8 with catch @ 00530220
                        */
  local_38 = *(long *)(lVar5 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar6 = PTR_DAT_007e5de8;
  pQVar1 = this + 0x168;
  puVar2 = PTR_vtable_007e6108 + 0x10;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(QuestsView **)(this + 0x148) = this + 0x138;
  *(QuestsView **)(this + 0x150) = this + 0x138;
  *(undefined **)this = puVar2;
  *(undefined8 *)(this + 0x138) = 0;
                    /* try { // try from 00530268 to 00630283 has its CatchHandler @ 005303ac */
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined **)(this + 0xf0) = puVar6 + 0x18;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)pQVar1 = 0;
  *(QuestsView **)(this + 0x178) = pQVar1;
  *(QuestsView **)(this + 0x180) = pQVar1;
  *(undefined8 *)(this + 0x188) = 0;
                    /* try { // try from 00530284 to 006303af has its CatchHandler @ 00530220 */
  FUN_00666bb8(local_48,"QUESTS",auStack_50);
  FUN_0066a6a8(this + 0xf0,local_48);
  if ((undefined *)(local_48[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


