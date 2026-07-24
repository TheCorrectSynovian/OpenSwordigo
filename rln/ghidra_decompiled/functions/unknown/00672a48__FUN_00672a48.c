/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00672a48
 * Function: FUN_00672a48
 * Signature: undefined FUN_00672a48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00672a48(char *param_1,undefined8 param_2)

{
  char cVar1;
  size_t sVar2;
  long lVar3;
  size_t sVar4;
  char local_20 [32];
  
                    /* try { // try from 00672a74 to 00772a83 has its CatchHandler @ 00672ec4 */
  sprintf(local_20,"%ld",param_2);
  sVar2 = strlen(local_20);
  if (sVar2 != 0) {
                    /* try { // try from 00672a8c to 00772a9f has its CatchHandler @ 00672f34 */
    sVar4 = 0;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      while (cVar1 = local_20[sVar4], lVar3 == 0xff) {
        sVar4 = sVar4 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_1[0x100] = '\x01';
        param_1[0x101] = '\0';
        param_1[0x102] = '\0';
        param_1[0x103] = '\0';
        param_1[0x104] = '\0';
        param_1[0x105] = '\0';
        param_1[0x106] = '\0';
        param_1[0x107] = '\0';
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *param_1 = cVar1;
        param_1[0x108] = cVar1;
        lVar3 = 1;
        if (sVar4 == sVar2) {
          return;
        }
      }
      *(long *)(param_1 + 0x100) = lVar3 + 1;
      sVar4 = sVar4 + 1;
                    /* try { // try from 00672aa0 to 00772b1f has its CatchHandler @ 00672850 */
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar3 + 1;
    } while (sVar4 != sVar2);
  }
  return;
}


