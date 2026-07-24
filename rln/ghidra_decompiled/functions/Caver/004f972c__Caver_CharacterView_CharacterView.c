/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f972c
 * Function: Caver::CharacterView::CharacterView
 * Signature: undefined __thiscall CharacterView(CharacterView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterView::CharacterView() */

void __thiscall Caver::CharacterView::CharacterView(CharacterView *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar7 = PTR_DAT_007e5de8;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e5b40 + 0x10;
  puVar3 = PTR_vtable_007e5b40 + 0x160;
  *(undefined8 *)(this + 400) = 0;
  this[0x198] = (CharacterView)0x0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined **)this = puVar2;
  *(undefined **)(this + 0xf0) = puVar1;
  *(undefined **)(this + 0xf8) = puVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004f6828 with catch @ 004f9790
                        */
  *(undefined4 *)(this + 0x19c) = 0;
                    /* try { // try from 004f9794 to 005f979b has its CatchHandler @ 004f97ac */
  memset(this + 0x108,0,0x80);
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
                    /* try { // try from 004f979c to 005f97af has its CatchHandler @ 004f6790 */
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004f9794 with catch @ 004f97ac
                        */
  FUN_00666bb8(local_48,"CHARACTER",auStack_50);
  FUN_0066a6a8(this + 0xf0,local_48);
  if ((undefined *)(local_48[0] + -0x18) != puVar7) {
    piVar8 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


