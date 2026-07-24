/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049d17c
 * Function: Caver::PlayerProfile::weaponTrinketName
 * Signature: undefined __cdecl weaponTrinketName(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::weaponTrinketName() */

void Caver::PlayerProfile::weaponTrinketName(void)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  long in_x0;
  int *piVar7;
  int iVar8;
  long lVar9;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar9 = *(long *)(in_x0 + 0x80);
  if (lVar9 != 0) {
    lVar1 = *(long *)(lVar9 + 0x78);
    plVar2 = *(long **)(lVar9 + 0x80);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    if (lVar1 == 0) {
      FUN_00666bb8(local_58,&DAT_0068fbeb,auStack_60);
      bVar6 = 0;
    }
    else {
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 1;
      }
      FUN_0066a528(local_58,lVar1 + 8);
      bVar6 = 1;
    }
                    /* catch() { ... } // from try @ 0049cf50 with catch @ 0049d218 */
    FUN_0066a6a8(in_x0 + 0x58,local_58);
                    /* catch() { ... } // from try @ 0049cc40 with catch @ 0049d228 */
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
                    /* try { // try from 0049d248 to 0059d27f has its CatchHandler @ 0049d2c4 */
                    /* catch() { ... } // from try @ 0049d070 with catch @ 0049d254 */
    if (((plVar2 != (long *)0x0) && (!(bool)(bVar6 ^ 1))) &&
       (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar9 = plVar2[2];
      plVar2[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* try { // try from 0049d280 to 0059d2b3 has its CatchHandler @ 0049cb68 */
                    /* catch() { ... } // from try @ 0049cd10 with catch @ 0049d284 */
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
                    /* catch() { ... } // from try @ 0049cdb8 with catch @ 0049d298 */
    if ((plVar2 != (long *)0x0) && (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar9 = plVar2[2];
                    /* try { // try from 0049d2b4 to 0059d2bb has its CatchHandler @ 0049d2c4 */
      plVar2[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* try { // try from 0049d2bc to 0059d2c7 has its CatchHandler @ 0049cb68 */
                    /* catch() { ... } // from try @ 0049d248 with catch @ 0049d2c4
                       catch() { ... } // from try @ 0049d2b4 with catch @ 0049d2c4 */
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  FUN_0066a528();
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


