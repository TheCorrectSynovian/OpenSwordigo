/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046924c
 * Function: Caver::HeroEquipmentManager::ModelNameForArmor
 * Signature: undefined __cdecl ModelNameForArmor(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::ModelNameForArmor(boost::shared_ptr<Caver::Item> const&) */

void Caver::HeroEquipmentManager::ModelNameForArmor(shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long *in_x1;
  int *piVar6;
  int iVar7;
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 00469258 to 0056925b has its CatchHandler @ 0046935c */
                    /* try { // try from 00469260 to 0056926b has its CatchHandler @ 00469424 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0046926c to 00569387 has its CatchHandler @ 00468ff0 */
  if (*in_x1 != 0) {
    FUN_0066a528(local_48,*in_x1 + 8);
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
                    /* catch() { ... } // from try @ 00469258 with catch @ 0046935c */
      if (iVar7 < 1) {
                    /* catch() { ... } // from try @ 004691b8 with catch @ 00469360 */
                    /* catch() { ... } // from try @ 00469230 with catch @ 00469364 */
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    if (iVar5 == 0) {
                    /* try { // try from 00469388 to 0056938f has its CatchHandler @ 00469458 */
      FUN_00666bb8();
      goto LAB_004693c4;
    }
    FUN_0066a528(local_48,*in_x1 + 8);
    iVar5 = FUN_006689e0(local_48,"magicarmor");
    if ((undefined *)(local_48[0] + -0x18) != puVar4) {
      piVar6 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00469390 to 0056944b has its CatchHandler @ 00468ff0 */
        iVar7 = *piVar6;
                    /* catch() { ... } // from try @ 004691e4 with catch @ 00469394 */
                    /* catch() { ... } // from try @ 0046910c with catch @ 00469398 */
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
                    /* catch() { ... } // from try @ 004690cc with catch @ 004693b0 */
      FUN_00666bb8();
      goto LAB_004693c4;
    }
  }
  FUN_00666bb8();
LAB_004693c4:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


