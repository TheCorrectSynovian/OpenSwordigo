/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051538c
 * Function: Caver::ItemInfoPopupView::Init
 * Signature: undefined __thiscall Init(ItemInfoPopupView * this, intrusive_ptr * param_1, string * param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&, std::string const&,
   std::string const&) */

void __thiscall
Caver::ItemInfoPopupView::Init
          (ItemInfoPopupView *this,intrusive_ptr *param_1,string *param_2,string *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  Sprite *pSVar6;
  FontText *pFVar7;
  FontLibrary *pFVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 local_b0 [2];
  undefined1 auStack_a8 [8];
  long *local_a0;
  long *local_98;
  Sprite *local_90;
  long *aplStack_88 [2];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0051535c with catch @ 005153e0
                        */
                    /* try { // try from 005153e4 to 006153eb has its CatchHandler @ 005153f4 */
  aplStack_88[0] = (long *)_UNK_00694448;
  local_90 = _DAT_00694440;
  (**(code **)(*(long *)this + 0xf8))(this,&local_90);
                    /* try { // try from 005153ec to 006153f7 has its CatchHandler @ 00515314 */
  psVar5 = (string *)TextureLibrary::sharedLibrary();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005153e4 with catch @ 005153f4
                        */
  FUN_00666bb8(&local_90,"ui_notification_background",local_b0);
                    /* catch() { ... } // from try @ 00515434 with catch @ 00515410 */
  TextureLibrary::TextureForName(psVar5,SUB81(&local_90,0));
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 00515430 to 00615433 has its CatchHandler @ 00515444 */
  if (local_90 + -0x18 != (Sprite *)PTR_DAT_007e5de8) {
    pSVar6 = local_90 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)pSVar6;
      *(int *)pSVar6 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)pSVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pSVar6,0x10);
        if (bVar2) {
          *(int *)pSVar6 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 00515c24 with catch @ 00515ba4 */
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
                    /* try { // try from 00515be8 to 00615bff has its CatchHandler @ 00515c18 */
      operator_delete(local_90 + -0x18);
    }
  }
                    /* try { // try from 00515434 to 00615457 has its CatchHandler @ 00515410 */
  pSVar6 = operator_new(0x58);
                    /* catch() { ... } // from try @ 00515430 with catch @ 00515444 */
  *(undefined4 *)(pSVar6 + 0x30) = 0;
  pSVar6[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar6 + 0x38) = 0;
  *(undefined8 *)(pSVar6 + 0x18) = 0;
  *(undefined8 *)(pSVar6 + 0x10) = 0;
  *(undefined8 *)(pSVar6 + 0x28) = 0;
  *(undefined8 *)(pSVar6 + 0x20) = 0;
  *(undefined8 *)(pSVar6 + 8) = 0;
  *(undefined8 *)pSVar6 = 0;
  *(undefined8 *)(pSVar6 + 0x48) = 0;
  *(undefined8 *)(pSVar6 + 0x40) = 0;
  local_90 = pSVar6;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)aplStack_88,pSVar6);
  boost::detail::sp_enable_shared_from_this(&local_90,pSVar6,pSVar6);
  pSVar6 = *(Sprite **)(this + 0xf0);
  plVar11 = *(long **)(this + 0xf8);
  *(Sprite **)(this + 0xf0) = local_90;
  *(long **)(this + 0xf8) = aplStack_88[0];
  local_90 = pSVar6;
  aplStack_88[0] = plVar11;
  if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = plVar11[2];
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  Sprite::Init(*(Sprite **)(this + 0xf0),(intrusive_ptr *)&local_98,2,4,false);
  local_90 = (Sprite *)CONCAT44(local_90._4_4_,0xffffffff);
  Sprite::AddRectangle
            (*(Sprite **)(this + 0xf0),(Rectangle *)(this + 0x84),
             (Rectangle *)((long)local_98 + 0x5c),(Color *)&local_90);
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_90,"ui_menu_itemslot",auStack_a8);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_90,0));
  if (local_90 + -0x18 != (Sprite *)puVar4) {
    pSVar6 = local_90 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)pSVar6;
      *(int *)pSVar6 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)pSVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pSVar6,0x10);
        if (bVar2) {
          *(int *)pSVar6 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00515c00 to 00615c07 has its CatchHandler @ 00515c2c */
    if (iVar10 < 1) {
      operator_delete(local_90 + -0x18);
    }
  }
  fVar17 = *(float *)(this + 0x90);
  uVar15 = *(undefined8 *)(*(long *)param_1 + 0x54);
  uVar16 = *(undefined8 *)((long)local_a0 + 0x54);
  pSVar6 = operator_new(0x58);
  *(undefined4 *)(pSVar6 + 0x30) = 0;
  pSVar6[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar6 + 0x38) = 0;
  *(undefined8 *)(pSVar6 + 0x18) = 0;
  *(undefined8 *)(pSVar6 + 0x10) = 0;
  *(undefined8 *)(pSVar6 + 0x28) = 0;
  *(undefined8 *)(pSVar6 + 0x20) = 0;
  *(undefined8 *)(pSVar6 + 8) = 0;
  *(undefined8 *)pSVar6 = 0;
  *(undefined8 *)(pSVar6 + 0x48) = 0;
  *(undefined8 *)(pSVar6 + 0x40) = 0;
  local_90 = pSVar6;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)aplStack_88,pSVar6);
  boost::detail::sp_enable_shared_from_this(&local_90,pSVar6,pSVar6);
  pSVar6 = *(Sprite **)(this + 0x100);
  plVar11 = *(long **)(this + 0x108);
  *(Sprite **)(this + 0x100) = local_90;
  *(long **)(this + 0x108) = aplStack_88[0];
  local_90 = pSVar6;
  aplStack_88[0] = plVar11;
  if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = plVar11[2];
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  Sprite::Init(*(Sprite **)(this + 0x100),(intrusive_ptr *)&local_a0,2,4,false);
  fVar17 = fVar17 * 0.5;
  fVar13 = (float)uVar16 * 0.7;
  fVar14 = (float)((ulong)uVar16 >> 0x20) * 0.7;
  local_90 = (Sprite *)CONCAT44(fVar17 - fVar14 * 0.5,fVar17 - fVar13 * 0.5);
  aplStack_88[0] = (long *)CONCAT44(fVar14,fVar13);
  local_b0[0] = 0xffffffff;
  Sprite::AddRectangle
            (*(Sprite **)(this + 0x100),(Rectangle *)&local_90,(Rectangle *)((long)local_a0 + 0x5c),
             (Color *)local_b0);
  pSVar6 = operator_new(0x58);
  *(undefined4 *)(pSVar6 + 0x30) = 0;
  pSVar6[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar6 + 0x38) = 0;
  *(undefined8 *)(pSVar6 + 0x18) = 0;
  *(undefined8 *)(pSVar6 + 0x10) = 0;
  *(undefined8 *)(pSVar6 + 0x28) = 0;
  *(undefined8 *)(pSVar6 + 0x20) = 0;
  *(undefined8 *)(pSVar6 + 8) = 0;
  *(undefined8 *)pSVar6 = 0;
  *(undefined8 *)(pSVar6 + 0x48) = 0;
  *(undefined8 *)(pSVar6 + 0x40) = 0;
  local_90 = pSVar6;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)aplStack_88,pSVar6);
  boost::detail::sp_enable_shared_from_this(&local_90,pSVar6,pSVar6);
  pSVar6 = *(Sprite **)(this + 0x110);
  plVar11 = *(long **)(this + 0x118);
  *(Sprite **)(this + 0x110) = local_90;
  *(long **)(this + 0x118) = aplStack_88[0];
  local_90 = pSVar6;
  aplStack_88[0] = plVar11;
  if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = plVar11[2];
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  Sprite::Init(*(Sprite **)(this + 0x110),param_1,2,4,false);
  fVar13 = (float)uVar15 * 0.7;
  fVar14 = (float)((ulong)uVar15 >> 0x20) * 0.7;
  aplStack_88[0] = (long *)CONCAT44(fVar14,fVar13);
  local_90 = (Sprite *)CONCAT44(fVar17 - fVar14 * 0.5,fVar17 - fVar13 * 0.5);
  local_b0[0] = 0xffffffff;
  Sprite::AddRectangle
            (*(Sprite **)(this + 0x110),(Rectangle *)&local_90,
             (Rectangle *)(*(long *)param_1 + 0x5c),(Color *)local_b0);
  pFVar7 = operator_new(0xf0);
  *(undefined4 *)(pFVar7 + 0x10) = 0xff000000;
  pFVar7[0x2c] = (FontText)0xff;
  *(undefined4 *)(pFVar7 + 0xe8) = 0xffffffff;
  *(undefined4 *)(pFVar7 + 0x28) = 0;
  *(undefined4 *)(pFVar7 + 0x88) = 0;
  *(undefined8 *)(pFVar7 + 0xa0) = 0;
  pFVar7[0xa8] = (FontText)0x0;
  *(undefined4 *)(pFVar7 + 0x50) = 0;
  *(undefined8 *)(pFVar7 + 0xe0) = 0;
  *(undefined8 *)(pFVar7 + 8) = 0;
  *(undefined8 *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 0x20) = 0;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  *(undefined8 *)(pFVar7 + 0x80) = 0;
  *(undefined8 *)(pFVar7 + 0x78) = 0;
  *(undefined8 *)(pFVar7 + 0x70) = 0;
  *(undefined8 *)(pFVar7 + 0x68) = 0;
  *(undefined8 *)(pFVar7 + 0x60) = 0;
  *(undefined8 *)(pFVar7 + 0x58) = 0;
  *(undefined8 *)(pFVar7 + 0x98) = 0;
  *(undefined8 *)(pFVar7 + 0x90) = 0;
  *(undefined8 *)(pFVar7 + 0x38) = 0;
  *(undefined8 *)(pFVar7 + 0x30) = 0;
  *(undefined8 *)(pFVar7 + 0x48) = 0;
  *(undefined8 *)(pFVar7 + 0x40) = 0;
  *(undefined8 *)(pFVar7 + 200) = 0;
  *(undefined8 *)(pFVar7 + 0xc0) = 0;
  *(undefined8 *)(pFVar7 + 0xd8) = 0;
  *(undefined8 *)(pFVar7 + 0xd0) = 0;
  *(undefined8 *)(pFVar7 + 0xb8) = 0;
  *(undefined8 *)(pFVar7 + 0xb0) = 0;
  local_90 = (Sprite *)pFVar7;
  boost::detail::shared_count::shared_count<Caver::FontText>((shared_count *)aplStack_88,pFVar7);
  boost::detail::sp_enable_shared_from_this(&local_90,pFVar7,pFVar7);
  pSVar6 = *(Sprite **)(this + 0x120);
  plVar11 = *(long **)(this + 0x128);
  *(Sprite **)(this + 0x120) = local_90;
  *(long **)(this + 0x128) = aplStack_88[0];
  local_90 = pSVar6;
  aplStack_88[0] = plVar11;
  if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0051584c with catch @ 0051581c */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = plVar11[2];
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 00515838 to 0061584b has its CatchHandler @ 00515870 */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  puVar12 = *(undefined8 **)(this + 0x120);
                    /* try { // try from 0051584c to 00615873 has its CatchHandler @ 0051581c */
  pFVar8 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(pFVar8);
  if (aplStack_88[0] != (long *)0x0) {
    aplStack_88[0][1] = aplStack_88[0][1] + 1;
  }
  plVar11 = (long *)puVar12[1];
                    /* catch() { ... } // from try @ 00515838 with catch @ 00515870 */
  *puVar12 = local_90;
  puVar12[1] = aplStack_88[0];
  if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = plVar11[2];
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 005158f0 with catch @ 005158a8 */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  plVar11 = aplStack_88[0];
  if ((aplStack_88[0] != (long *)0x0) &&
     (lVar9 = aplStack_88[0][1], aplStack_88[0][1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 005158d4 to 006158d7 has its CatchHandler @ 005158e4 */
    (**(code **)(*aplStack_88[0] + 0x10))(aplStack_88[0]);
    lVar9 = plVar11[2];
                    /* catch() { ... } // from try @ 005158d4 with catch @ 005158e4 */
                    /* try { // try from 005158e8 to 006158ef has its CatchHandler @ 005158f8 */
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 005158f0 to 006158fb has its CatchHandler @ 005158a8 */
                    /* catch() { ... } // from try @ 005158e8 with catch @ 005158f8 */
                    /* try { // try from 005158fc to 0061595f has its CatchHandler @ 005158fc
                       catch() { ... } // from try @ 005158fc with catch @ 005158fc
                       catch() { ... } // from try @ 0051597c with catch @ 005158fc
                       catch() { ... } // from try @ 005159ec with catch @ 005158fc
                       catch() { ... } // from try @ 00515a40 with catch @ 005158fc
                       catch() { ... } // from try @ 00515ab4 with catch @ 005158fc */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  local_90 = (Sprite *)CONCAT44(local_90._4_4_,0xffffffff);
  FontText::SetColor(*(FontText **)(this + 0x120),(Color *)&local_90);
  local_90 = DAT_00694450;
  FontText::AddText(*(FontText **)(this + 0x120),param_2,0.0,(Vector2 *)&local_90);
  pFVar7 = operator_new(0xf0);
  *(undefined4 *)(pFVar7 + 0x10) = 0xff000000;
  pFVar7[0x2c] = (FontText)0xff;
  *(undefined4 *)(pFVar7 + 0xe8) = 0xffffffff;
                    /* try { // try from 00515960 to 0061597b has its CatchHandler @ 00515aa8 */
  *(undefined4 *)(pFVar7 + 0x28) = 0;
  *(undefined4 *)(pFVar7 + 0x88) = 0;
  *(undefined8 *)(pFVar7 + 0xa0) = 0;
  pFVar7[0xa8] = (FontText)0x0;
  *(undefined4 *)(pFVar7 + 0x50) = 0;
  *(undefined8 *)(pFVar7 + 0xe0) = 0;
                    /* try { // try from 0051597c to 006159e7 has its CatchHandler @ 005158fc */
  *(undefined8 *)(pFVar7 + 8) = 0;
  *(undefined8 *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 0x20) = 0;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  *(undefined8 *)(pFVar7 + 0x80) = 0;
  *(undefined8 *)(pFVar7 + 0x78) = 0;
  *(undefined8 *)(pFVar7 + 0x70) = 0;
  *(undefined8 *)(pFVar7 + 0x68) = 0;
  *(undefined8 *)(pFVar7 + 0x60) = 0;
  *(undefined8 *)(pFVar7 + 0x58) = 0;
  *(undefined8 *)(pFVar7 + 0x98) = 0;
  *(undefined8 *)(pFVar7 + 0x90) = 0;
  *(undefined8 *)(pFVar7 + 0x38) = 0;
  *(undefined8 *)(pFVar7 + 0x30) = 0;
  *(undefined8 *)(pFVar7 + 0x48) = 0;
  *(undefined8 *)(pFVar7 + 0x40) = 0;
  *(undefined8 *)(pFVar7 + 200) = 0;
  *(undefined8 *)(pFVar7 + 0xc0) = 0;
  *(undefined8 *)(pFVar7 + 0xd8) = 0;
  *(undefined8 *)(pFVar7 + 0xd0) = 0;
  *(undefined8 *)(pFVar7 + 0xb8) = 0;
  *(undefined8 *)(pFVar7 + 0xb0) = 0;
  local_90 = (Sprite *)pFVar7;
  boost::detail::shared_count::shared_count<Caver::FontText>((shared_count *)aplStack_88,pFVar7);
  boost::detail::sp_enable_shared_from_this(&local_90,pFVar7,pFVar7);
  pSVar6 = *(Sprite **)(this + 0x130);
  plVar11 = *(long **)(this + 0x138);
  *(Sprite **)(this + 0x130) = local_90;
  *(long **)(this + 0x138) = aplStack_88[0];
  local_90 = pSVar6;
  aplStack_88[0] = plVar11;
  if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 005159e8 to 006159eb has its CatchHandler @ 00515a94 */
                    /* try { // try from 005159ec to 00615a3b has its CatchHandler @ 005158fc */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = plVar11[2];
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  puVar12 = *(undefined8 **)(this + 0x130);
  pFVar8 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(pFVar8);
  if (aplStack_88[0] != (long *)0x0) {
    aplStack_88[0][1] = aplStack_88[0][1] + 1;
  }
                    /* try { // try from 00515a3c to 00615a3f has its CatchHandler @ 00515a90 */
  plVar11 = (long *)puVar12[1];
                    /* try { // try from 00515a40 to 00615aab has its CatchHandler @ 005158fc */
  *puVar12 = local_90;
  puVar12[1] = aplStack_88[0];
  if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = plVar11[2];
    plVar11[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  plVar11 = aplStack_88[0];
                    /* catch() { ... } // from try @ 00515a3c with catch @ 00515a90 */
                    /* catch() { ... } // from try @ 005159e8 with catch @ 00515a94 */
  if ((aplStack_88[0] != (long *)0x0) &&
     (lVar9 = aplStack_88[0][1], aplStack_88[0][1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00515960 with catch @ 00515aa8 */
                    /* try { // try from 00515aac to 00615ab3 has its CatchHandler @ 00515abc */
    (**(code **)(*aplStack_88[0] + 0x10))(aplStack_88[0]);
    lVar9 = plVar11[2];
                    /* try { // try from 00515ab4 to 00615abf has its CatchHandler @ 005158fc */
    plVar11[2] = lVar9 + -1;
                    /* catch() { ... } // from try @ 00515aac with catch @ 00515abc */
    if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 00515b1c with catch @ 00515ac0
                       catch() { ... } // from try @ 00515b38 with catch @ 00515ac0 */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  local_90 = (Sprite *)CONCAT44(local_90._4_4_,0x507878);
  FontText::SetColor(*(FontText **)(this + 0x130),(Color *)&local_90);
  local_90 = DAT_00694458;
                    /* try { // try from 00515b04 to 00615b1b has its CatchHandler @ 00515b2c */
  FontText::AddText(*(FontText **)(this + 0x130),param_3,0.0,(Vector2 *)&local_90);
                    /* try { // try from 00515b1c to 00615b2f has its CatchHandler @ 00515ac0 */
  if ((local_a0 != (long *)0x0) &&
     (iVar10 = (int)local_a0[1] + -1, *(int *)(local_a0 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_a0 + 8))();
  }
                    /* catch() { ... } // from try @ 00515b04 with catch @ 00515b2c */
                    /* try { // try from 00515b30 to 00615b37 has its CatchHandler @ 00515b40 */
                    /* try { // try from 00515b38 to 00615b43 has its CatchHandler @ 00515ac0 */
                    /* catch() { ... } // from try @ 00515b30 with catch @ 00515b40 */
  if ((local_98 != (long *)0x0) &&
     (iVar10 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_98 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


