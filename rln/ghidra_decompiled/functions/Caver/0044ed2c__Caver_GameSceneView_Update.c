/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044ed2c
 * Function: Caver::GameSceneView::Update
 * Signature: undefined __thiscall Update(GameSceneView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameSceneView::Update(float) */

void __thiscall Caver::GameSceneView::Update(GameSceneView *this,float param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  HealthBar *this_00;
  GameSceneController *this_01;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  GameOverlayView *pGVar9;
  long lVar10;
  float fVar11;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 0044ed38 to 0054ed47 has its CatchHandler @ 0044f4b4 */
                    /* try { // try from 0044ed48 to 0054ed9f has its CatchHandler @ 00447cc4 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(this + 0x100);
  if (lVar7 != 0) {
    lVar10 = *(long *)(*(long *)(this + 0xf0) + 8);
    if (*(HealthBar **)(lVar7 + 0x1e8) != (HealthBar *)0x0) {
                    /* catch() { ... } // from try @ 004487a4 with catch @ 0044ed80 */
      HealthBar::SetMaxHealth(*(HealthBar **)(lVar7 + 0x1e8),*(int *)(lVar10 + 0xbc) * 2 + 4);
                    /* catch() { ... } // from try @ 00448758 with catch @ 0044ed84 */
      iVar6 = *(int *)(lVar10 + 0xa8);
      this_00 = *(HealthBar **)(*(long *)(this + 0x100) + 0x1e8);
      if (iVar6 < *(int *)(this_00 + 0x110)) {
                    /* try { // try from 0044eda0 to 0054edaf has its CatchHandler @ 0044f4b4 */
        *(undefined4 *)(*(long *)(this + 0x170) + 0x48) = 0xcc0000cc;
                    /* try { // try from 0044edb0 to 0054ee07 has its CatchHandler @ 00447cc4 */
        GUIEffect::FadeOut(*(GUIEffect **)(this + 0x170),0.0);
        GUIEffect::FadeIn(*(GUIEffect **)(this + 0x170),_DAT_006846d0);
        iVar6 = *(int *)(lVar10 + 0xa8);
        this_00 = *(HealthBar **)(*(long *)(this + 0x100) + 0x1e8);
      }
      HealthBar::SetCurrentHealth(this_00,iVar6);
      lVar7 = *(long *)(this + 0x100);
    }
    if (*(ManaBar **)(lVar7 + 0x1f8) != (ManaBar *)0x0) {
                    /* catch() { ... } // from try @ 00448704 with catch @ 0044ede8 */
                    /* catch() { ... } // from try @ 004486b8 with catch @ 0044edec */
      ManaBar::SetMaxMana(*(ManaBar **)(lVar7 + 0x1f8),*(int *)(lVar10 + 0xc4) * 0x14 + 10);
      ManaBar::SetCurrentMana
                (*(ManaBar **)(*(long *)(this + 0x100) + 0x1f8),*(int *)(lVar10 + 0xac));
                    /* try { // try from 0044ee08 to 0054ee17 has its CatchHandler @ 0044f4b4 */
      lVar7 = *(long *)(*(long *)(*(long *)(this + 0xf0) + 8) + 0x68);
      plVar1 = *(long **)(*(long *)(*(long *)(this + 0xf0) + 8) + 0x70);
                    /* try { // try from 0044ee18 to 0054ee6f has its CatchHandler @ 00447cc4 */
      if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar8 = plVar1[2];
        plVar1[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
                    /* catch() { ... } // from try @ 00448664 with catch @ 0044ee50 */
      if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 00448618 with catch @ 0044ee54 */
        this_01 = *(GameSceneController **)(this + 0xf0);
        pGVar9 = *(GameOverlayView **)(this + 0x100);
        lVar7 = *(long *)(this_01 + 8);
        local_58 = *(undefined8 *)(lVar7 + 0x68);
        local_50 = *(long **)(lVar7 + 0x70);
        if (local_50 != (long *)0x0) {
                    /* try { // try from 0044ee70 to 0054ee7f has its CatchHandler @ 0044f4b4 */
          local_50[1] = local_50[1] + 1;
        }
                    /* try { // try from 0044ee80 to 0054eed7 has its CatchHandler @ 00447cc4 */
        bVar3 = GameSceneController::CanCastSkill(this_01,(shared_ptr *)&local_58);
        GameOverlayView::SetSkillButtonDisabled(pGVar9,(bool)(~bVar3 & 1));
        plVar1 = local_50;
        if ((local_50 != (long *)0x0) &&
           (lVar7 = local_50[1], local_50[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004485c4 with catch @ 0044eeb8 */
          (**(code **)(*local_50 + 0x10))(local_50);
                    /* catch() { ... } // from try @ 00448578 with catch @ 0044eebc */
          lVar7 = plVar1[2];
          plVar1[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
                    /* try { // try from 0044eed8 to 0054eee7 has its CatchHandler @ 0044f4b4 */
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
      }
    }
    if (*(CoinBar **)(*(long *)(this + 0x100) + 0x238) != (CoinBar *)0x0) {
                    /* try { // try from 0044eee8 to 0054ef3f has its CatchHandler @ 00447cc4 */
      CoinBar::SetCurrentCoins
                (*(CoinBar **)(*(long *)(this + 0x100) + 0x238),*(int *)(lVar10 + 0xb0));
    }
  }
  if ((*(int *)(*(long *)(*(long *)(this + 0xf0) + 0x20) + 0x20) < 1) &&
     (this[0x198] == (GameSceneView)0x0)) {
    pGVar9 = *(GameOverlayView **)(this + 0x100);
    bVar5 = false;
  }
  else {
    pGVar9 = *(GameOverlayView **)(this + 0x100);
    bVar5 = true;
  }
  GameOverlayView::SetControlsHidden(pGVar9,bVar5);
                    /* catch() { ... } // from try @ 00448524 with catch @ 0044ef20 */
  if (*(CharControllerComponent **)(*(long *)(this + 0xf0) + 0xe0) != (CharControllerComponent *)0x0
     ) {
                    /* catch() { ... } // from try @ 004484d8 with catch @ 0044ef24 */
    pGVar9 = *(GameOverlayView **)(this + 0x100);
    uVar4 = CharControllerComponent::CanPickup
                      (*(CharControllerComponent **)(*(long *)(this + 0xf0) + 0xe0));
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0044ef40 to 0054ef4f has its CatchHandler @ 0044f4b4 */
      bVar3 = CharControllerComponent::CanUse
                        (*(CharControllerComponent **)(*(long *)(this + 0xf0) + 0xe0));
    }
    else {
      bVar3 = 1;
    }
    GameOverlayView::SetShowsUseButton(pGVar9,(bool)(bVar3 & 1));
  }
                    /* try { // try from 0044ef50 to 0054efa7 has its CatchHandler @ 00447cc4 */
  if ((this[0x158] != (GameSceneView)0x0) &&
     (fVar11 = *(float *)(this + 0x15c), *(float *)(this + 0x15c) = fVar11 - param_1,
     fVar11 - param_1 <= 0.0)) {
    HideCinematicSkipButton(this,true);
  }
  if (*(GUIEffect **)(this + 0x188) != (GUIEffect *)0x0) {
    GUIEffect::Update(*(GUIEffect **)(this + 0x188),param_1);
  }
                    /* catch() { ... } // from try @ 00448484 with catch @ 0044ef88 */
                    /* catch() { ... } // from try @ 00448438 with catch @ 0044ef8c */
  if (*(GUIEffect **)(this + 0x160) != (GUIEffect *)0x0) {
    GUIEffect::Update(*(GUIEffect **)(this + 0x160),param_1);
  }
  GUIEffect::Update(*(GUIEffect **)(this + 0x170),param_1);
                    /* try { // try from 0044efa8 to 0054efb7 has its CatchHandler @ 0044f4b4 */
  GUIView::Update((GUIView *)this,param_1);
                    /* try { // try from 0044efb8 to 0054f00f has its CatchHandler @ 00447cc4 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


