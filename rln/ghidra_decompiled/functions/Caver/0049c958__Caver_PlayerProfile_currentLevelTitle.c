/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049c958
 * Function: Caver::PlayerProfile::currentLevelTitle
 * Signature: undefined __cdecl currentLevelTitle(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::currentLevelTitle() */

void Caver::PlayerProfile::currentLevelTitle(void)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long in_x0;
  int *piVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar8 = *(long *)(in_x0 + 0x80);
  if (lVar8 == 0) goto LAB_0049ca30;
  lVar1 = *(long *)(lVar8 + 0x170);
  plVar2 = *(long **)(lVar8 + 0x178);
  if ((plVar2 == (long *)0x0) || (plVar2[1] != 0)) {
LAB_0049c9bc:
    if (lVar1 != 0) goto LAB_0049c9c0;
LAB_0049c9f0:
                    /* try { // try from 0049c9fc to 0059ca2f has its CatchHandler @ 0049c6ec */
                    /* catch() { ... } // from try @ 0049c884 with catch @ 0049ca00 */
    FUN_00666bb8(local_58,&DAT_0068fbeb,auStack_60);
                    /* catch() { ... } // from try @ 0049c764 with catch @ 0049ca04 */
  }
  else {
                    /* catch() { ... } // from try @ 0049c874 with catch @ 0049c99c */
                    /* catch() { ... } // from try @ 0049c908 with catch @ 0049c9a0 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar8 = plVar2[2];
    plVar2[2] = lVar8 + -1;
    if (lVar8 + -1 != 0) goto LAB_0049c9bc;
    (**(code **)(*plVar2 + 0x18))(plVar2);
    if (lVar1 == 0) goto LAB_0049c9f0;
LAB_0049c9c0:
                    /* try { // try from 0049c9c4 to 0059c9fb has its CatchHandler @ 0049ca48 */
    MapNode::Title();
                    /* catch() { ... } // from try @ 0049c7d8 with catch @ 0049c9d0 */
  }
                    /* catch() { ... } // from try @ 0049c7a4 with catch @ 0049ca0c
                       catch() { ... } // from try @ 0049c84c with catch @ 0049ca0c */
  FUN_0066a6a8(in_x0 + 0x30,local_58);
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
LAB_0049ca30:
                    /* try { // try from 0049ca30 to 0059ca33 has its CatchHandler @ 0049ca48 */
                    /* try { // try from 0049ca34 to 0059cab7 has its CatchHandler @ 0049c6ec */
  if (*(long *)(*(long *)(in_x0 + 0x30) + -0x18) == 0) {
                    /* catch() { ... } // from try @ 0049c898 with catch @ 0049ca4c */
    FUN_00666bb8();
  }
  else {
    FUN_0066a528();
                    /* catch() { ... } // from try @ 0049c9c4 with catch @ 0049ca48
                       catch() { ... } // from try @ 0049ca30 with catch @ 0049ca48 */
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


