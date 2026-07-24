/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052bd88
 * Function: Caver::NotificationView::Init
 * Signature: undefined __thiscall Init(NotificationView * this, intrusive_ptr * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NotificationView::Init(boost::intrusive_ptr<Caver::Texture> const&, std::string const&) */

void __thiscall
Caver::NotificationView::Init(NotificationView *this,intrusive_ptr *param_1,string *param_2)

{
  GUITextBubble *this_00;
  shared_ptr *psVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  string *psVar5;
  GUIAnimation *pGVar6;
  GUIPropertyValue *pGVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  code *pcVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined8 local_88;
  GUIAnimation *local_80;
  long *plStack_78;
  long *local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0052bdb0 to 0062bdc7 has its CatchHandler @ 0052bdd8 */
  psVar5 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0052bdc8 to 0062bddb has its CatchHandler @ 0052bd6c */
  FUN_00666bb8(&local_50,"textbubble_border",auStack_58);
                    /* catch() { ... } // from try @ 0052bdb0 with catch @ 0052bdd8 */
                    /* try { // try from 0052bddc to 0062bde3 has its CatchHandler @ 0052bdec */
  TextureLibrary::TextureForName(psVar5,SUB81(&local_50,0));
                    /* try { // try from 0052bde4 to 0062bdef has its CatchHandler @ 0052bd6c */
  this_00 = (GUITextBubble *)(this + 0xf0);
                    /* catch() { ... } // from try @ 0052bddc with catch @ 0052bdec */
  local_88 = CONCAT44(local_88._4_4_,0x99999999);
  GUITextBubble::SetFrameTexture(this_00,(intrusive_ptr *)&local_80,(Color *)&local_88);
  if ((local_80 != (GUIAnimation *)0x0) &&
     (iVar10 = *(int *)(local_80 + 8), *(int *)(local_80 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
    (**(code **)(*(long *)local_80 + 8))();
  }
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  local_80 = (GUIAnimation *)CONCAT44(local_80._4_4_,0xff78d2ff);
                    /* catch() { ... } // from try @ 0052bed0 with catch @ 0052be50 */
  GUITextBubble::SetText(this_00,param_2,(Color *)&local_80,DAT_00694af0);
  auVar13 = NEON_fmov(0x41700000,4);
  *(undefined4 *)(this + 0x17c) = 0x3ca3d70a;
  *(long *)(this + 0x168) = auVar13._8_8_;
  *(long *)(this + 0x160) = auVar13._0_8_;
  this[0x110] = (NotificationView)0x1;
  pcVar11 = *(code **)(*(long *)this + 0xf8);
  GUITextBubble::UpdateLayoutIfNeeded(this_00);
  plStack_78 = SUB168(*(undefined1 (*) [16])(this + 0x100),8);
                    /* try { // try from 0052be94 to 0062beab has its CatchHandler @ 0052bec4 */
  local_80 = SUB168(*(undefined1 (*) [16])(this + 0x100),0);
  (*pcVar11)(this,&local_80);
  pGVar6 = operator_new(0xc0);
                    /* try { // try from 0052beac to 0062beb3 has its CatchHandler @ 0052bed8 */
  GUIAnimation::GUIAnimation(pGVar6);
  psVar1 = (shared_ptr *)(this + 0x198);
  local_80 = pGVar6;
                    /* catch() { ... } // from try @ 0052be94 with catch @ 0052bec4 */
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&plStack_78,pGVar6)
  ;
                    /* try { // try from 0052bec8 to 0062becf has its CatchHandler @ 0052bed4 */
                    /* try { // try from 0052bed0 to 0062beeb has its CatchHandler @ 0052be50 */
                    /* catch() { ... } // from try @ 0052bec8 with catch @ 0052bed4 */
  pGVar7 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_80,pGVar6,pGVar6);
                    /* catch() { ... } // from try @ 0052beac with catch @ 0052bed8 */
  pGVar6 = *(GUIAnimation **)(this + 0x198);
  plVar12 = *(long **)(this + 0x1a0);
  *(GUIAnimation **)(this + 0x198) = local_80;
  *(long **)(this + 0x1a0) = plStack_78;
  local_80 = pGVar6;
  plStack_78 = plVar12;
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    pGVar7 = (GUIPropertyValue *)(**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      pGVar7 = (GUIPropertyValue *)(**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  lVar8 = *(long *)psVar1;
  *(undefined4 *)(lVar8 + 0x30) = 1;
  pGVar7 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar7,DAT_00683944);
  *(undefined4 *)(lVar8 + 0x70) = local_80._0_4_;
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar12 = *(long **)(lVar8 + 0x80);
  *(long **)(lVar8 + 0x78) = plStack_78;
  *(long **)(lVar8 + 0x80) = local_70;
                    /* try { // try from 0052bf78 to 0062c0e7 has its CatchHandler @ 0052bf78
                       catch() { ... } // from try @ 0052bf78 with catch @ 0052bf78
                       catch() { ... } // from try @ 0052c0ec with catch @ 0052bf78
                       catch() { ... } // from try @ 0052c1c4 with catch @ 0052bf78 */
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    pGVar7 = (GUIPropertyValue *)(**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      pGVar7 = (GUIPropertyValue *)(**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = local_70;
  if ((local_70 != (long *)0x0) && (lVar8 = local_70[1], local_70[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    pGVar7 = (GUIPropertyValue *)(**(code **)(*local_70 + 0x10))(local_70);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      pGVar7 = (GUIPropertyValue *)(**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  lVar8 = *(long *)psVar1;
  GUIPropertyValue::ValueWithFloat(pGVar7,1.0);
  *(undefined4 *)(lVar8 + 0x88) = local_80._0_4_;
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar12 = *(long **)(lVar8 + 0x98);
  *(long **)(lVar8 + 0x90) = plStack_78;
  *(long **)(lVar8 + 0x98) = local_70;
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = local_70;
  if ((local_70 != (long *)0x0) && (lVar8 = local_70[1], local_70[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  lVar8 = *(long *)(this + 0x198);
  local_50 = DAT_00692290;
  local_88 = DAT_00692060;
                    /* try { // try from 0052c0e8 to 0062c0eb has its CatchHandler @ 0052c2f8 */
  GUIAnimationCurve::GUIAnimationCurve
            ((GUIAnimationCurve *)&local_80,(Vector2 *)&local_50,(Vector2 *)&local_88);
                    /* try { // try from 0052c0ec to 0062c1bf has its CatchHandler @ 0052bf78 */
  *(long **)(lVar8 + 0x3c) = plStack_78;
  *(GUIAnimation **)(lVar8 + 0x34) = local_80;
  *(undefined8 *)(lVar8 + 0x4c) = uStack_68;
  *(long **)(lVar8 + 0x44) = local_70;
  *(undefined8 *)(*(long *)(this + 0x198) + 0x58) = DAT_00694ae8;
  GUIView::RemoveAllAnimations((GUIView *)this);
  GUIView::AddAnimation((GUIView *)this,psVar1);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


