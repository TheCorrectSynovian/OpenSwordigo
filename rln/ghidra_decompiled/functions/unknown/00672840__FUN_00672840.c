/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00672840
 * Function: FUN_00672840
 * Signature: undefined FUN_00672840(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00672840(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 00672834 with catch @ 00672844 */
                    /* try { // try from 00672850 to 007728eb has its CatchHandler @ 00672850
                       catch() { ... } // from try @ 00672850 with catch @ 00672850
                       catch() { ... } // from try @ 006728f8 with catch @ 00672850
                       catch() { ... } // from try @ 00672a30 with catch @ 00672850
                       catch() { ... } // from try @ 00672aa0 with catch @ 00672850
                       catch() { ... } // from try @ 00672c58 with catch @ 00672850
                       catch() { ... } // from try @ 00672ebc with catch @ 00672850 */
  sVar3 = strlen(param_2);
  if (sVar3 != 0) {
    pcVar1 = param_2 + sVar3;
    lVar4 = *(long *)(param_1 + 0x100);
    do {
      while (cVar2 = *param_2, lVar4 == 0xff) {
        param_2 = param_2 + 1;
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
        *param_1 = cVar2;
        param_1[0x108] = cVar2;
        lVar4 = 1;
        if (param_2 == pcVar1) {
          return;
        }
      }
      *(long *)(param_1 + 0x100) = lVar4 + 1;
      param_2 = param_2 + 1;
      param_1[lVar4] = cVar2;
      param_1[0x108] = cVar2;
      lVar4 = lVar4 + 1;
    } while (param_2 != pcVar1);
  }
                    /* try { // try from 006728ec to 007728f7 has its CatchHandler @ 00673008 */
  return;
}


