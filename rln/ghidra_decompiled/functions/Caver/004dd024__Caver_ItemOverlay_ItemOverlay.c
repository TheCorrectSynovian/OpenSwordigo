/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dd024
 * Function: Caver::ItemOverlay::ItemOverlay
 * Signature: undefined __thiscall ItemOverlay(ItemOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ItemOverlay::ItemOverlay() */

void __thiscall Caver::ItemOverlay::ItemOverlay(ItemOverlay *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  FontLibrary *this_00;
  long lVar4;
  long *plVar5;
  undefined8 local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar3 = PTR_vtable_007e5668;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(ItemOverlay **)(this + 0x138) = this + 0x128;
  *(ItemOverlay **)(this + 0x140) = this + 0x128;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0x100] = (ItemOverlay)0x0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  this[0x1a0] = (ItemOverlay)0x0;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  this[0x1f8] = (ItemOverlay)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  this[0x212] = (ItemOverlay)0x0;
  *(undefined2 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
                    /* try { // try from 004dd0dc to 005dd0df has its CatchHandler @ 004dd7dc */
  this[0x213] = (ItemOverlay)0xff;
                    /* try { // try from 004dd0e0 to 005dd7ef has its CatchHandler @ 004dd018 */
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  this[0x22c] = (ItemOverlay)0xff;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  this[0x2a8] = (ItemOverlay)0x0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2e8) = 0xffffffff;
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
  if (plStack_58 != (long *)0x0) {
    plStack_58[1] = plStack_58[1] + 1;
  }
  plVar5 = *(long **)(this + 0x208);
  *(undefined8 *)(this + 0x200) = local_60;
  *(long **)(this + 0x208) = plStack_58;
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plStack_58 != (long *)0x0) &&
     (lVar4 = plStack_58[1], plStack_58[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plStack_58 + 0x10))(plStack_58);
    lVar4 = plStack_58[2];
    plStack_58[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plStack_58 + 0x18))(plStack_58);
    }
  }
  local_60 = CONCAT44(local_60._4_4_,0xffffffff);
  FontText::SetColor((FontText *)(this + 0x200),(Color *)&local_60);
  plStack_58 = (long *)_UNK_00692a48;
  local_60 = _DAT_00692a40;
  uVar2 = DAT_00683728;
  this[0x228] = (ItemOverlay)0x1;
  *(undefined4 *)(this + 0x229) = 0xff000000;
  *(undefined8 *)(this + 0x230) = uVar2;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


