/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00672dd8
 * Function: FUN_00672dd8
 * Signature: undefined FUN_00672dd8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00672dd8(long param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_2 == 0) {
    pbVar1 = *(byte **)(param_1 + 0x18);
    if (*pbVar1 == 0) {
      return 0;
    }
    *(byte **)(param_1 + 0x18) = pbVar1 + 1;
    param_2 = (uint)*pbVar1;
  }
  if (param_2 == 0x68) {
    pcVar3 = *(char **)(param_1 + 0x18);
    cVar4 = *pcVar3;
    pcVar2 = pcVar3;
    if (cVar4 == 'n') {
      pcVar2 = pcVar3 + 1;
      *(char **)(param_1 + 0x18) = pcVar2;
                    /* try { // try from 00672eb8 to 00772ebb has its CatchHandler @ 00672ec0 */
      cVar4 = pcVar3[1];
                    /* try { // try from 00672ebc to 0077301b has its CatchHandler @ 00672850 */
                    /* catch() { ... } // from try @ 00672eb8 with catch @ 00672ec0 */
    }
                    /* catch() { ... } // from try @ 00672c04 with catch @ 00672e88 */
                    /* catch() { ... } // from try @ 00672c50 with catch @ 00672e8c */
    if ((byte)(cVar4 - 0x30U) < 10) {
      do {
                    /* catch() { ... } // from try @ 00672b20 with catch @ 00672e90 */
        pcVar2 = pcVar2 + 1;
                    /* catch() { ... } // from try @ 00672a28 with catch @ 00672e94 */
        *(char **)(param_1 + 0x18) = pcVar2;
        cVar4 = *pcVar2;
      } while ((byte)(cVar4 - 0x30U) < 10);
      goto LAB_00672e58;
    }
  }
  else {
    if (param_2 != 0x76) {
      return 0;
    }
    FUN_006725b4(param_1 + 0x18);
    if (**(char **)(param_1 + 0x18) != '_') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    FUN_006725b4(param_1 + 0x18);
    pcVar2 = *(char **)(param_1 + 0x18);
  }
  cVar4 = *pcVar2;
LAB_00672e58:
  if (cVar4 != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 1;
  return 1;
}


