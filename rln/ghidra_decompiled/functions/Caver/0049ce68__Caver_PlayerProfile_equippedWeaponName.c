/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049ce68
 * Function: Caver::PlayerProfile::equippedWeaponName
 * Signature: undefined __cdecl equippedWeaponName(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::equippedWeaponName() */

void Caver::PlayerProfile::equippedWeaponName(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long in_x0;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_80 [8];
  long local_78;
  long *local_70;
  long local_68;
  long *local_60;
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(in_x0 + 0x80) != 0) {
    CharacterState::HighestLevelItemOfType(&local_68,*(long *)(in_x0 + 0x80) + 0x10,1);
    if (local_68 == 0) {
      FUN_00666bb8(local_58,&DAT_0068fbeb,auStack_80);
    }
    else {
      CharacterState::HighestLevelItemOfType(&local_78,*(long *)(in_x0 + 0x80) + 0x10,1);
      FUN_0066a528(local_58,local_78 + 8);
    }
    FUN_0066a6a8(in_x0 + 0x48,local_58);
    plVar4 = local_70;
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
        plVar4 = local_70;
      }
    }
    if (((local_68 != 0) && (plVar4 != (long *)0x0)) &&
       (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 0049cf50 to 0059cfab has its CatchHandler @ 0049d218 */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar5 = plVar4[2];
      plVar4[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = local_60[2];
                    /* try { // try from 0049cfac to 0059d06f has its CatchHandler @ 0049cb68 */
      local_60[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
  }
  FUN_0066a528();
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


