/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048935c
 * Function: Caver::BadgeCountView::BadgeCountView
 * Signature: undefined __thiscall BadgeCountView(BadgeCountView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BadgeCountView::BadgeCountView() */

void __thiscall Caver::BadgeCountView::BadgeCountView(BadgeCountView *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  GUIFrameView *pGVar6;
  string *psVar7;
  long lVar8;
  code *pcVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  GUILabel *this_00;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  long local_58;
  long *local_50;
  long *local_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar5 = PTR_vtable_007e4a00;
                    /* try { // try from 00489384 to 00589387 has its CatchHandler @ 004893c4 */
  *(undefined8 *)(this + 0xfc) = 0;
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined **)this = puVar5 + 0x10;
  *(undefined8 *)(this + 0x104) = 0;
                    /* try { // try from 004893a8 to 005893ab has its CatchHandler @ 004893bc */
  *(undefined4 *)(this + 0x10c) = 0;
                    /* try { // try from 004893ac to 005893b3 has its CatchHandler @ 00489400 */
  pGVar6 = operator_new(0x110);
                    /* try { // try from 004893b4 to 005893e7 has its CatchHandler @ 00488df4 */
                    /* catch() { ... } // from try @ 004893a8 with catch @ 004893bc */
  GUIFrameView::GUIFrameView(pGVar6);
                    /* catch() { ... } // from try @ 00489384 with catch @ 004893c4 */
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_50,pGVar6);
  plVar12 = *(long **)(this + 0xf0);
  plVar1 = *(long **)(this + 0xf8);
  *(long **)(this + 0xf0) = local_50;
  *(long **)(this + 0xf8) = local_48;
  local_50 = plVar12;
  local_48 = plVar1;
                    /* try { // try from 004893e8 to 005893f7 has its CatchHandler @ 004893fc */
  if ((plVar1 != (long *)0x0) && (lVar8 = plVar1[1], plVar1[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004893e8 with catch @ 004893fc */
                    /* catch() { ... } // from try @ 00489260 with catch @ 00489400
                       catch() { ... } // from try @ 004893ac with catch @ 00489400 */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar8 = plVar1[2];
    plVar1[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  pGVar6 = *(GUIFrameView **)(this + 0xf0);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_58,"countbadge",auStack_60);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_58,0));
  GUIFrameView::SetFrameTexture(pGVar6,(intrusive_ptr *)&local_50,false);
  if ((local_50 != (long *)0x0) &&
     (iVar11 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar11, iVar11 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  local_50 = *(long **)(this + 0xf0);
  pcVar9 = *(code **)(*(long *)this + 0x60);
  local_48 = *(long **)(this + 0xf8);
  if (local_48 != (long *)0x0) {
    local_48[1] = local_48[1] + 1;
  }
  (*pcVar9)(this,&local_50);
  plVar12 = local_48;
  if ((local_48 != (long *)0x0) && (lVar8 = local_48[1], local_48[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_48 + 0x10))(local_48);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  *(undefined1 *)(*(long *)(this + 0xf0) + 0xe4) = 1;
  FUN_00666bb8(&local_58,&DAT_0068fbeb,auStack_60);
  local_68 = 0xff000000;
  uStack_64 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_50,&local_58,&uStack_64,&local_68);
  if (local_48 != (long *)0x0) {
    local_48[1] = local_48[1] + 1;
  }
  plVar12 = *(long **)(this + 0x108);
  *(long **)(this + 0x100) = local_50;
  *(long **)(this + 0x108) = local_48;
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = local_48;
  if ((local_48 != (long *)0x0) && (lVar8 = local_48[1], local_48[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_48 + 0x10))(local_48);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
                    /* try { // try from 004895f8 to 0058969b has its CatchHandler @ 004895f8
                       catch() { ... } // from try @ 004895f8 with catch @ 004895f8
                       catch() { ... } // from try @ 004896a0 with catch @ 004895f8 */
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if ((undefined *)(local_58 + -0x18) != puVar5) {
    piVar10 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  this_00 = *(GUILabel **)(this + 0x100);
  if ((((this_00[0x108] != (GUILabel)0xff) || (this_00[0x109] != (GUILabel)0xff)) ||
      (this_00[0x10a] != (GUILabel)0xff)) || (this_00[0x10b] != (GUILabel)0xff)) {
    plVar12 = *(long **)(this_00 + 0x118);
    *(undefined4 *)(this_00 + 0x108) = 0xffffffff;
    *(undefined8 *)(this_00 + 0x110) = 0;
    *(undefined8 *)(this_00 + 0x118) = 0;
    if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar8 = plVar12[2];
      plVar12[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 0048969c to 0058969f has its CatchHandler @ 004896bc */
                    /* try { // try from 004896a0 to 005896cf has its CatchHandler @ 004895f8 */
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    GUILabel::UpdateText(this_00);
    this_00 = *(GUILabel **)(this + 0x100);
  }
  this_00[0x140] = (GUILabel)0x0;
  GUILabel::UpdateText(this_00);
                    /* catch() { ... } // from try @ 0048969c with catch @ 004896bc */
  plVar12 = *(long **)(this + 0xf0);
  local_50 = *(long **)(this + 0x100);
  pcVar9 = *(code **)(*plVar12 + 0x60);
                    /* try { // try from 004896d0 to 005896fb has its CatchHandler @ 004896d0
                       catch() { ... } // from try @ 004896d0 with catch @ 004896d0
                       catch() { ... } // from try @ 00489790 with catch @ 004896d0 */
  local_48 = *(long **)(this + 0x108);
  if (local_48 != (long *)0x0) {
    local_48[1] = local_48[1] + 1;
  }
  (*pcVar9)(plVar12,&local_50);
  plVar12 = local_48;
                    /* try { // try from 004896fc to 0058970f has its CatchHandler @ 0048993c */
  if ((local_48 != (long *)0x0) && (lVar8 = local_48[1], local_48[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_48 + 0x10))(local_48);
    lVar8 = plVar12[2];
                    /* try { // try from 00489720 to 0058972b has its CatchHandler @ 004898d0 */
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = *(long **)(*(long *)(this + 0xf0) + 0x100);
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  local_50 = *(long **)(this + 0x74);
                    /* try { // try from 00489754 to 0058978f has its CatchHandler @ 0048986c */
  local_48 = *(long **)((long)plVar12 + 0x54);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_50);
  iVar11 = (int)plVar12[1] + -1;
  *(int *)(plVar12 + 1) = iVar11;
  if (iVar11 == 0) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
                    /* try { // try from 00489790 to 0058993f has its CatchHandler @ 004896d0 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


