/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049d474
 * Function: Caver::PlayerProfile::armorTrinketName
 * Signature: undefined __cdecl armorTrinketName(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::armorTrinketName() */

void Caver::PlayerProfile::armorTrinketName(void)

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
  
                    /* try { // try from 0049d474 to 0059d4eb has its CatchHandler @ 0049d4f4 */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar9 = *(long *)(in_x0 + 0x80);
  if (lVar9 != 0) {
    lVar1 = *(long *)(lVar9 + 0x88);
    plVar2 = *(long **)(lVar9 + 0x90);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    if (lVar1 == 0) {
                    /* catch() { ... } // from try @ 0049d474 with catch @ 0049d4f4 */
                    /* catch() { ... } // from try @ 0049d50c with catch @ 0049d4f8 */
      FUN_00666bb8(local_58,&DAT_0068fbeb,auStack_60);
      bVar6 = 0;
                    /* try { // try from 0049d508 to 0059d50b has its CatchHandler @ 0049d51c */
    }
    else {
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 1;
      }
      FUN_0066a528(local_58,lVar1 + 8);
      bVar6 = 1;
    }
                    /* try { // try from 0049d50c to 0059d52f has its CatchHandler @ 0049d4f8 */
    FUN_0066a6a8(in_x0 + 0x60,local_58);
                    /* catch() { ... } // from try @ 0049d508 with catch @ 0049d51c */
                    /* try { // try from 0049d530 to 0059d54b has its CatchHandler @ 0049d530
                       catch() { ... } // from try @ 0049d530 with catch @ 0049d530
                       catch() { ... } // from try @ 0049d550 with catch @ 0049d530 */
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
                    /* try { // try from 0049d624 to 0059d637 has its CatchHandler @ 0049d65c */
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
                    /* catch() { ... } // from try @ 0049d638 with catch @ 0049d608 */
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
                    /* try { // try from 0049d638 to 0059d65f has its CatchHandler @ 0049d608 */
                    /* try { // try from 0049d54c to 0059d54f has its CatchHandler @ 0049d57c */
    if (((plVar2 != (long *)0x0) && (!(bool)(bVar6 ^ 1))) &&
       (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 0049d550 to 0059d58f has its CatchHandler @ 0049d530 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar9 = plVar2[2];
      plVar2[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 0049d54c with catch @ 0049d57c */
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if ((plVar2 != (long *)0x0) && (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar9 = plVar2[2];
      plVar2[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
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


