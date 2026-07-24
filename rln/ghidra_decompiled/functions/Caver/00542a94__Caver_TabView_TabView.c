/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00542a94
 * Function: Caver::TabView::TabView
 * Signature: undefined __thiscall TabView(TabView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabView::TabView() */

void __thiscall Caver::TabView::TabView(TabView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  intrusive_ptr *piVar9;
  long *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
                    /* try { // try from 00542a94 to 00642abb has its CatchHandler @ 00542ac4 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00542abc to 00642ac7 has its CatchHandler @ 005429a8 */
                    /* catch() { ... } // from try @ 00542a94 with catch @ 00542ac4 */
  GUIView::GUIView((GUIView *)this);
  puVar4 = PTR_vtable_007e70e8;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined **)this = puVar4 + 0x10;
  piVar9 = (intrusive_ptr *)(this + 0xf8);
  *(undefined8 *)piVar9 = 0;
  *(undefined8 *)(this + 0xf0) = 0;
                    /* catch() { ... } // from try @ 00542b5c with catch @ 00542aec
                       catch() { ... } // from try @ 00542c00 with catch @ 00542aec */
  GUIRoundedRect::GUIRoundedRect((GUIRoundedRect *)(this + 0x108));
  *(undefined4 *)(this + 0x1e0) = 0;
  this[0x200] = (TabView)0x0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x208) = 0xffffffff;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(local_78,"ui_tab",auStack_80);
  TextureLibrary::TextureForName(psVar5,SUB81(local_78,0));
  if (local_90 != (long *)0x0) {
                    /* try { // try from 00542b58 to 00642b5b has its CatchHandler @ 00542bb8 */
                    /* try { // try from 00542b5c to 00642bd7 has its CatchHandler @ 00542aec */
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
  }
  plVar6 = *(long **)piVar9;
  *(long **)piVar9 = local_90;
  if ((plVar6 != (long *)0x0) &&
     (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
                    /* catch() { ... } // from try @ 00542b58 with catch @ 00542bb8 */
  if ((local_90 != (long *)0x0) &&
     (iVar8 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_78[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  psVar5 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 00542bd8 to 00642bff has its CatchHandler @ 00542c08 */
  FUN_00666bb8(local_78,"ui_tab_selected",auStack_80);
                    /* try { // try from 00542c00 to 00642c0b has its CatchHandler @ 00542aec */
  TextureLibrary::TextureForName(psVar5,SUB81(local_78,0));
                    /* catch() { ... } // from try @ 00542bd8 with catch @ 00542c08 */
  if (local_90 != (long *)0x0) {
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
  }
  plVar6 = *(long **)(this + 0x100);
  *(long **)(this + 0x100) = local_90;
  if ((plVar6 != (long *)0x0) &&
     (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  if ((local_90 != (long *)0x0) &&
     (iVar8 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  if ((undefined *)(local_78[0] + -0x18) != puVar4) {
    piVar7 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00542d18 to 00642d3f has its CatchHandler @ 00542e54 */
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00542e18 with catch @ 00542c90
                       catch() { ... } // from try @ 00542f38 with catch @ 00542c90 */
  Sprite::Init((Sprite *)(this + 0x1b0),piVar9,4,8,true);
  local_90 = (long *)0x0;
  uStack_88 = 0;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_90);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00542d60 to 00642d87 has its CatchHandler @ 00542e44 */
  __stack_chk_fail();
}


