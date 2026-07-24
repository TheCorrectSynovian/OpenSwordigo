/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eeefc
 * Function: FUN_005eeefc
 * Signature: undefined FUN_005eeefc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eeefc(byte *param_1,double *param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  double dVar8;
  byte *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 005eedfc with catch @ 005eef18 */
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 005eee64 with catch @ 005eef1c */
                    /* catch() { ... } // from try @ 005eedd4 with catch @ 005eef2c */
  dVar8 = strtod((char *)param_1,(char **)&local_50);
  *param_2 = dVar8;
  if (local_50 == param_1) {
    bVar3 = false;
  }
  else {
    bVar1 = *local_50;
    if ((bVar1 | 0x20) == 0x78) {
                    /* try { // try from 005eef50 to 006eefbf has its CatchHandler @ 005ef028 */
      uVar5 = strtoul((char *)param_1,(char **)&local_50,0x10);
      *param_2 = (double)uVar5;
      bVar1 = *local_50;
    }
    pbVar7 = local_50;
    uVar6 = (uint)bVar1;
    if (uVar6 == 0) {
      bVar3 = true;
    }
    else {
      iVar4 = isspace(uVar6);
      while (iVar4 != 0) {
        pbVar7 = pbVar7 + 1;
        uVar6 = (uint)*pbVar7;
        iVar4 = isspace(uVar6);
        local_50 = pbVar7;
      }
      bVar3 = uVar6 == 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 005eefc0 to 006eeff7 has its CatchHandler @ 005eec7c */
                    /* catch() { ... } // from try @ 005eeda0 with catch @ 005eefc4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


