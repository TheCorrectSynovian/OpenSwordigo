/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d41d8
 * Function: Caver::GameOverlayView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(GameOverlayView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::GameOverlayView::InitWithGameState(GameOverlayView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  GameOverlayView GVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  GameOverlayView *this_00;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  string *psVar11;
  long local_70;
  long *plStack_68;
  long local_60;
  long *local_58;
  long local_48;
  
                    /* catch() { ... } // from try @ 004d41b4 with catch @ 004d41ec */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
  }
  plVar10 = *(long **)(this + 0x100);
  *(undefined8 *)(this + 0xf8) = uVar1;
  *(long *)(this + 0x100) = lVar7;
  this_00 = this;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    this_00 = (GameOverlayView *)(**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      this_00 = (GameOverlayView *)(**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
                    /* catch() { ... } // from try @ 004d4338 with catch @ 004d4268 */
  lVar7 = *(long *)(*(long *)param_1 + 0x68);
  plVar10 = *(long **)(*(long *)param_1 + 0x70);
  if ((plVar10 != (long *)0x0) && (plVar10[1] == 0)) {
    this_00 = (GameOverlayView *)(**(code **)(*plVar10 + 0x10))(plVar10);
    lVar8 = plVar10[2];
    plVar10[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      this_00 = (GameOverlayView *)(**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if (lVar7 != 0) {
    local_60 = *(long *)(*(long *)param_1 + 0x68);
    plVar10 = *(long **)(*(long *)param_1 + 0x70);
    if (plVar10 != (long *)0x0) {
      plVar10[1] = plVar10[1] + 1;
    }
    local_58 = plVar10;
    this_00 = (GameOverlayView *)SetCurrentSkill(this,(shared_ptr *)&local_60);
                    /* try { // try from 004d42c8 to 005d42cb has its CatchHandler @ 004d42dc */
    if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
                    /* catch() { ... } // from try @ 004d42c8 with catch @ 004d42dc */
      this_00 = (GameOverlayView *)(**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* try { // try from 004d4304 to 005d4307 has its CatchHandler @ 004d4344 */
        this_00 = (GameOverlayView *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  if (this[0x1a0] == (GameOverlayView)0x0) {
                    /* try { // try from 004d4348 to 005d438f has its CatchHandler @ 004d4348
                       catch(type#1 @ 00000000) { ... } // from try @ 004d4348 with catch @ 004d4348
                       catch(type#1 @ 00000000) { ... } // from try @ 004d43ac with catch @ 004d4348
                       catch(type#1 @ 00000000) { ... } // from try @ 004d45b4 with catch @ 004d4348
                        */
    lVar7 = *(long *)(this + 0xf8);
    *(bool *)(*(long *)(this + 0x1b8) + 0xe4) =
         (int)((ulong)(*(long *)(lVar7 + 0x58) - *(long *)(lVar7 + 0x50)) >> 4) == 0;
    GVar2 = this[0x1a1];
    *(byte *)(*(long *)(this + 0x180) + 0xe4) = (byte)GVar2 ^ 1;
    lVar8 = *(long *)(this + 0x170);
    if (GVar2 == (GameOverlayView)0x0) {
      this_00 = (GameOverlayView *)CharacterState::AnyItemOfType(&local_60,lVar7 + 0x10,1);
      plVar10 = local_58;
                    /* try { // try from 004d45e4 to 005d45e7 has its CatchHandler @ 004d4650 */
      *(bool *)(lVar8 + 0xe4) = local_60 == 0;
      if ((local_58 != (long *)0x0) &&
         (lVar7 = local_58[1], local_58[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 004d460c to 005d4613 has its CatchHandler @ 004d46b0 */
        this_00 = (GameOverlayView *)(**(code **)(*local_58 + 0x10))(local_58);
        lVar7 = plVar10[2];
                    /* try { // try from 004d4614 to 005d4677 has its CatchHandler @ 004d45c0 */
        plVar10[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          this_00 = (GameOverlayView *)(**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
    }
    else {
      *(undefined1 *)(lVar8 + 0xe4) = 1;
    }
  }
  else {
                    /* try { // try from 004d4330 to 005d4337 has its CatchHandler @ 004d4340 */
    *(undefined1 *)(*(long *)(this + 0x1b8) + 0xe4) = 1;
                    /* try { // try from 004d4338 to 005d4347 has its CatchHandler @ 004d4268 */
    *(undefined1 *)(*(long *)(this + 0x180) + 0xe4) = 1;
                    /* catch() { ... } // from try @ 004d4330 with catch @ 004d4340 */
    *(undefined1 *)(*(long *)(this + 0x170) + 0xe4) = 1;
                    /* catch() { ... } // from try @ 004d4304 with catch @ 004d4344 */
  }
  GameOptions::sharedOptions((GameOptions *)this_00);
  lVar7 = local_60;
                    /* try { // try from 004d4390 to 005d43ab has its CatchHandler @ 004d45a8 */
  iVar6 = CurrentDeviceType();
  plVar10 = (long *)(lVar7 + 0x40);
  if (iVar6 != 1) {
    plVar10 = (long *)(lVar7 + 0x30);
  }
  lVar7 = *plVar10;
  plVar10 = (long *)plVar10[1];
                    /* try { // try from 004d43ac to 005d45ab has its CatchHandler @ 004d4348 */
  if ((plVar10 != (long *)0x0) && (plVar10[1] == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar8 = plVar10[2];
    plVar10[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  lVar8 = local_60;
  if (lVar7 != 0) {
    iVar6 = CurrentDeviceType();
    plVar10 = (long *)(lVar8 + 0x40);
    if (iVar6 != 1) {
      plVar10 = (long *)(lVar8 + 0x30);
    }
    local_70 = *plVar10;
    plVar10 = (long *)plVar10[1];
    if (plVar10 != (long *)0x0) {
      plVar10[1] = plVar10[1] + 1;
    }
    plStack_68 = plVar10;
    SetLayout(this,(shared_ptr *)&local_70);
    if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  ConsumableItemView::InitWithGameState(*(ConsumableItemView **)(this + 0x1d8),param_1);
  psVar11 = *(string **)(this + 0x1c8);
  FUN_0066a528(&local_70,*(long *)param_1 + 400);
  OverlayMenuButton::SetMenuTab(psVar11);
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar9;
      *piVar9 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 004d45e4 with catch @ 004d4650 */
      } while (cVar3 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  lVar7 = *(long *)param_1;
  lVar8 = *(long *)(this + 0x1c8);
  cVar3 = *(char *)(lVar7 + 0x198);
  if ((cVar3 != *(char *)(lVar8 + 0x1d8)) && (*(char *)(lVar8 + 0x1d8) = cVar3, cVar3 != '\0')) {
    *(undefined8 *)(lVar8 + 0x1d0) = 0;
  }
  lVar8 = *(long *)(this + 0x1b8);
  cVar3 = *(char *)(lVar7 + 0x199);
  if ((cVar3 != *(char *)(lVar8 + 0x1d8)) && (*(char *)(lVar8 + 0x1d8) = cVar3, cVar3 != '\0')) {
    *(undefined8 *)(lVar8 + 0x1d0) = 0;
  }
  HealthBar::SetMaxHealth(*(HealthBar **)(this + 0x1e8),*(int *)(lVar7 + 0xbc) * 2 + 4);
  HealthBar::SetCurrentHealth(*(HealthBar **)(this + 0x1e8),*(int *)(*(long *)param_1 + 0xa8));
  ManaBar::SetMaxMana(*(ManaBar **)(this + 0x1f8),*(int *)(*(long *)param_1 + 0xc4) * 0x14 + 10);
  ManaBar::SetCurrentMana(*(ManaBar **)(this + 0x1f8),*(int *)(*(long *)param_1 + 0xac));
  ExperienceBar::InitWithGameState(*(ExperienceBar **)(this + 0x218),param_1);
  ItemOverlay::InitWithGameState(*(ItemOverlay **)(this + 0x228),param_1);
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar7 = local_58[1], local_58[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d4390 with catch @ 004d45a8
                        */
                    /* try { // try from 004d45ac to 005d45b3 has its CatchHandler @ 004d45bc */
  if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* try { // try from 004d45b4 to 005d45bf has its CatchHandler @ 004d4348 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d45ac with catch @ 004d45bc
                        */
                    /* catch() { ... } // from try @ 004d4614 with catch @ 004d45c0
                       catch() { ... } // from try @ 004d46bc with catch @ 004d45c0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004d4678 to 005d467b has its CatchHandler @ 004d46ac */
  __stack_chk_fail();
}


