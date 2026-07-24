/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00677e84
 * Function: FUN_00677e84
 * Signature: undefined FUN_00677e84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00677e84(long param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 == 'F') {
    pcVar1 = pcVar7 + 1;
    *(char **)(param_1 + 0x18) = pcVar1;
    cVar2 = pcVar7[1];
    if (cVar2 == 'Y') {
      pcVar1 = pcVar7 + 2;
      *(char **)(param_1 + 0x18) = pcVar1;
      cVar2 = pcVar7[2];
    }
    if (cVar2 == 'J') {
      *(char **)(param_1 + 0x18) = pcVar1 + 1;
    }
    lVar4 = FUN_00674b04();
                    /* catch() { ... } // from try @ 00677dd0 with catch @ 00677ed4 */
                    /* try { // try from 00677ed8 to 00777f0b has its CatchHandler @ 00677ed8
                       catch() { ... } // from try @ 00677ed8 with catch @ 00677ed8
                       catch() { ... } // from try @ 00677f20 with catch @ 00677ed8 */
    if ((lVar4 == 0) || (lVar5 = FUN_006761ac(param_1), lVar5 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00671f00(param_1,0x29,lVar4,lVar5);
    }
    pcVar7 = *(char **)(param_1 + 0x18);
    cVar2 = *pcVar7;
                    /* try { // try from 00677f0c to 00777f17 has its CatchHandler @ 00678010 */
    if (cVar2 == 'O') {
      uVar8 = 0x20;
      iVar3 = *(int *)(param_1 + 0x50) + 3;
    }
    else {
                    /* try { // try from 00677f18 to 00777f1f has its CatchHandler @ 00677fa0 */
      if (cVar2 != 'R') {
                    /* try { // try from 00677f20 to 00778013 has its CatchHandler @ 00677ed8 */
        if (cVar2 != 'E') {
          return 0;
        }
        goto LAB_00677f24;
      }
                    /* catch() { ... } // from try @ 00677f18 with catch @ 00677fa0 */
      uVar8 = 0x1f;
      iVar3 = *(int *)(param_1 + 0x50) + 2;
    }
    *(int *)(param_1 + 0x50) = iVar3;
    *(char **)(param_1 + 0x18) = pcVar7 + 1;
    uVar6 = FUN_00671f00(param_1,uVar8,uVar6,0);
    pcVar7 = *(char **)(param_1 + 0x18);
    if (*pcVar7 == 'E') {
LAB_00677f24:
      *(char **)(param_1 + 0x18) = pcVar7 + 1;
      return uVar6;
    }
  }
  return 0;
}


