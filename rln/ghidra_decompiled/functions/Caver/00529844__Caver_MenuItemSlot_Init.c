/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00529844
 * Function: Caver::MenuItemSlot::Init
 * Signature: undefined __thiscall Init(MenuItemSlot * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuItemSlot::Init(float) */

void __thiscall Caver::MenuItemSlot::Init(MenuItemSlot *this,float param_1)

{
  GUITexturedRect *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  long *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  long local_70;
  float local_68;
  float fStack_64;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *(float *)(this + 0xf8) = param_1;
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_50,"ui_menu_itemslot",&local_70);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_50,0));
  local_60 = (long *)0x0;
  local_58 = 0;
  GUITexturedRect::InitWithTexture
            ((GUITexturedRect *)(this + 0x128),(intrusive_ptr *)&local_88,(Rectangle *)&local_60,
             false);
  if ((local_88 != (long *)0x0) &&
     (iVar7 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_88 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if (local_50 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar8 = local_50 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00529b0c with catch @ 00529b18 */
      iVar7 = (int)*plVar8;
                    /* catch() { ... } // from try @ 00529af0 with catch @ 00529b1c */
      *(int *)plVar8 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = (int)*plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00529aec to 00629aef has its CatchHandler @ 00529b08 */
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_50 + -3);
    }
  }
  fVar10 = *(float *)(this + 0xf8);
  local_68 = fVar10 * -9.0;
  fStack_64 = local_68;
  Vector2::Rounded();
  plVar8 = *(long **)(this + 0x128);
  if (plVar8 != (long *)0x0) {
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  }
                    /* try { // try from 00529930 to 00629933 has its CatchHandler @ 005299e0 */
                    /* try { // try from 00529934 to 006299f7 has its CatchHandler @ 0052976c */
  local_58 = CONCAT44((float)((ulong)*(undefined8 *)((long)plVar8 + 0x54) >> 0x20) *
                      *(float *)(this + 0xf8),
                      (float)*(undefined8 *)((long)plVar8 + 0x54) * *(float *)(this + 0xf8));
  local_60 = local_88;
  GUITexturedRect::CreateWithBounds((GUITexturedRect *)(this + 0x128),(Rectangle *)&local_60,false);
  iVar7 = (int)plVar8[1] + -1;
  *(int *)(plVar8 + 1) = iVar7;
  if (iVar7 == 0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  Rectangle::RectangleByInsetting((Rectangle *)(this + 0x134),fVar10 * 9.0);
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"ui_menu_itemslot_glow",auStack_78);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_70,0));
  this_00 = (GUITexturedRect *)(this + 0x198);
  local_88 = (long *)0x0;
  local_80 = 0;
  GUITexturedRect::InitWithTexture(this_00,(intrusive_ptr *)&local_50,(Rectangle *)&local_88,false);
                    /* catch() { ... } // from try @ 00529930 with catch @ 005299e0 */
  if ((local_50 != (long *)0x0) &&
     (iVar7 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar7, iVar7 == 0)) {
                    /* catch() { ... } // from try @ 005297b4 with catch @ 005299f4 */
                    /* try { // try from 005299f8 to 006299ff has its CatchHandler @ 00529a08 */
    (**(code **)(*local_50 + 8))();
  }
                    /* try { // try from 00529a00 to 00629a0b has its CatchHandler @ 0052976c */
                    /* catch() { ... } // from try @ 005299f8 with catch @ 00529a08 */
  if ((undefined *)(local_70 + -0x18) != puVar4) {
    piVar6 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
                    /* catch() { ... } // from try @ 00529aec with catch @ 00529b08 */
                    /* try { // try from 00529b0c to 00629b13 has its CatchHandler @ 00529b18 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
      plVar8 = *(long **)this_00;
      goto joined_r0x00529b58;
    }
  }
                    /* catch() { ... } // from try @ 00529a54 with catch @ 00529a0c
                       catch() { ... } // from try @ 00529a70 with catch @ 00529a0c */
  plVar8 = *(long **)this_00;
joined_r0x00529b58:
  if (plVar8 != (long *)0x0) {
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  }
  uVar9 = *(undefined8 *)((long)plVar8 + 0x54);
  fVar10 = *(float *)(this + 0xf8);
  if ((plVar8 != (long *)0x0) &&
     (iVar7 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*plVar8 + 8))();
  }
                    /* try { // try from 00529a50 to 00629a53 has its CatchHandler @ 00529a64 */
                    /* try { // try from 00529a54 to 00629a67 has its CatchHandler @ 00529a0c */
                    /* catch() { ... } // from try @ 00529a50 with catch @ 00529a64 */
                    /* try { // try from 00529a68 to 00629a6f has its CatchHandler @ 00529a78 */
                    /* try { // try from 00529a70 to 00629a7b has its CatchHandler @ 00529a0c */
  Vector2::Rounded();
                    /* catch() { ... } // from try @ 00529a68 with catch @ 00529a78 */
  local_88 = local_50;
  local_80 = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar10,(float)uVar9 * fVar10);
  GUITexturedRect::CreateWithBounds(this_00,(Rectangle *)&local_88,false);
  (**(code **)(*(long *)this + 0xf8))(this,&local_60);
                    /* catch() { ... } // from try @ 00529b14 with catch @ 00529aa8 */
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


