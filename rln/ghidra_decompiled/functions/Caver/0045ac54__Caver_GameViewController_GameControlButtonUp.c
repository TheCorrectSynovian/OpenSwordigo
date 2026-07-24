/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045ac54
 * Function: Caver::GameViewController::GameControlButtonUp
 * Signature: undefined __thiscall GameControlButtonUp(GameViewController * this, GameControlButton param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton) */

void __thiscall Caver::GameViewController::GameControlButtonUp(GameViewController *this,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  string *psVar10;
  undefined1 auStack_60 [8];
  long local_58;
  long local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0045ac70 to 0055ac83 has its CatchHandler @ 0045b310 */
  plVar6 = *(long **)(this + 200);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6,param_2);
                    /* try { // try from 0045ac94 to 0055ac9f has its CatchHandler @ 0045b2d8 */
    if (param_2 == 0xd) {
      this[0x110] = (GameViewController)0x1;
    }
    else if (param_2 == 9) {
      lVar9 = *(long *)(this + 0xa8);
                    /* try { // try from 0045acc0 to 0055acfb has its CatchHandler @ 0045b27c */
      if ((0 < *(int *)(lVar9 + 0xa8)) && (*(int *)(lVar9 + 0xa8) < *(int *)(lVar9 + 0xbc) * 2 + 4))
      {
        FUN_00666bb8(&local_50,"healingpotion",auStack_40);
        iVar5 = CharacterState::ItemCount((CharacterState *)(lVar9 + 0x10),(string *)&local_50);
        puVar4 = PTR_DAT_007e5de8;
        if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
          piVar7 = (int *)(local_50 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = *piVar7;
            *piVar7 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = *piVar7;
                    /* try { // try from 0045adec to 0055adf7 has its CatchHandler @ 0045b1a8 */
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar2) {
                *piVar7 = iVar8 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete((undefined *)(local_50 + -0x18));
          }
        }
        if (0 < iVar5) {
          psVar10 = *(string **)(this + 0x98);
                    /* try { // try from 0045ad1c to 0055ad2f has its CatchHandler @ 0045b278 */
          FUN_00666bb8(&local_58,"healingpotion",auStack_60);
          GameData::ItemForName(psVar10);
                    /* try { // try from 0045ad40 to 0055ad4b has its CatchHandler @ 0045b240 */
          if ((undefined *)(local_58 + -0x18) != puVar4) {
            piVar7 = (int *)(local_58 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar5 = *piVar7;
                    /* try { // try from 0045ae54 to 0055b47f has its CatchHandler @ 0045aad8 */
              *piVar7 = iVar5 + -1;
            }
            else {
              do {
                iVar5 = *piVar7;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                if (bVar2) {
                  *piVar7 = iVar5 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                    /* try { // try from 0045ae18 to 0055ae53 has its CatchHandler @ 0045b14c */
              } while (cVar1 != '\0');
            }
            if (iVar5 < 1) {
              operator_delete((undefined *)(local_58 + -0x18));
            }
          }
          GameSceneController::ConsumeItem
                    (*(GameSceneController **)(this + 200),(shared_ptr *)&local_50);
          RemoveItemFromCharacter(this,(shared_ptr *)&local_50);
                    /* try { // try from 0045ad6c to 0055ada7 has its CatchHandler @ 0045b1e4 */
          if ((local_48 != (long *)0x0) &&
             (lVar9 = local_48[1], local_48[1] = lVar9 + -1, lVar9 + -1 == 0)) {
            (**(code **)(*local_48 + 0x10))(local_48);
            lVar9 = local_48[2];
            local_48[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
              (**(code **)(*local_48 + 0x18))(local_48);
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0045adc8 to 0055addb has its CatchHandler @ 0045b1e0 */
  return;
}


