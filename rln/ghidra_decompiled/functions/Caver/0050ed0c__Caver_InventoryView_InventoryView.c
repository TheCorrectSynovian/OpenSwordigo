/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050ed0c
 * Function: Caver::InventoryView::InventoryView
 * Signature: undefined __thiscall InventoryView(InventoryView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::InventoryView() */

void __thiscall Caver::InventoryView::InventoryView(InventoryView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 0050ed10 to 0060ed1b has its CatchHandler @ 0050ecd0 */
                    /* catch() { ... } // from try @ 0050ed08 with catch @ 0050ed18 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar5 = PTR_vtable_007e79e0;
  puVar4 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined **)(this + 0xf0) = puVar4 + 0x18;
  *(undefined **)this = puVar5 + 0x10;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined **)(this + 0x108) = puVar5 + 0x1b8;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined **)(this + 0x100) = puVar5 + 0x1a0;
  *(undefined **)(this + 0xf8) = puVar5 + 0x180;
  this[0x178] = (InventoryView)0x0;
  FUN_00666bb8(local_48,"INVENTORY",auStack_50);
  FUN_0066a6a8(this + 0xf0,local_48);
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


