/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ada5c
 * Function: Caver::CharacterState::ArmorDamageMultiplierWithItem
 * Signature: undefined __cdecl ArmorDamageMultiplierWithItem(shared_ptr * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::ArmorDamageMultiplierWithItem(boost::shared_ptr<Caver::Item> const&,
   boost::shared_ptr<Caver::Item> const&) */

void Caver::CharacterState::ArmorDamageMultiplierWithItem(shared_ptr *param_1,shared_ptr *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 004ada64 to 005add2b has its CatchHandler @ 004ad8e8 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(long *)param_2 != 0) {
    FUN_0066a528(local_48,*(long *)param_2 + 8);
    iVar5 = FUN_006689e0(local_48,"platearmor");
    puVar4 = PTR_DAT_007e5de8;
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_48[0] + -8);
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
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    if (iVar5 == 0) {
      uVar8 = 0x3f000000;
      goto LAB_004adba0;
    }
    FUN_0066a528(local_48,*(long *)param_2 + 8);
    iVar5 = FUN_006689e0(local_48,"magicarmor");
    if ((undefined *)(local_48[0] + -0x18) != puVar4) {
      piVar6 = (int *)(local_48[0] + -8);
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
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    if (iVar5 == 0) {
      uVar8 = 0x3e800000;
      goto LAB_004adba0;
    }
  }
  uVar8 = 0x3f800000;
LAB_004adba0:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 004ada28 with catch @ 004adbc0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


