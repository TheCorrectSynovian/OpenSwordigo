/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005edb10
 * Function: FUN_005edb10
 * Signature: undefined FUN_005edb10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_005edb10(long param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if (plVar3 != (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x20);
    param_3 = ~param_3;
    bVar1 = *(byte *)(lVar4 + 0x20);
    do {
      param_3 = param_3 + 1;
      if (param_3 == 0) {
        return param_2;
      }
      if ((char)plVar3[1] == '\b') {
        FUN_005edb10(param_1,plVar3 + 0x13,0xfffffffffffffffd);
      }
      if ((byte)((*(byte *)((long)plVar3 + 9) ^ 3) & (bVar1 ^ 3)) != 0) {
        *(byte *)((long)plVar3 + 9) =
             *(byte *)((long)plVar3 + 9) & 0xf8 | *(byte *)(lVar4 + 0x20) & 3;
        param_2 = plVar3;
switchD_005edbdc_default:
        plVar3 = (long *)*param_2;
        goto joined_r0x005edc78;
      }
      *param_2 = *plVar3;
      if (plVar3 == *(long **)(lVar4 + 0x28)) {
        *(long *)(lVar4 + 0x28) = *plVar3;
      }
                    /* try { // try from 005edbc8 to 006edbd3 has its CatchHandler @ 005ed824 */
                    /* catch() { ... } // from try @ 005eda78 with catch @ 005edbd0 */
                    /* catch() { ... } // from try @ 005edbe8 with catch @ 005edbd4 */
      switch((char)plVar3[1]) {
      case '\x04':
                    /* try { // try from 005edbe4 to 006edbe7 has its CatchHandler @ 005edbf8 */
                    /* try { // try from 005edbe8 to 006edc0b has its CatchHandler @ 005edbd4 */
        *(int *)(*(long *)(param_1 + 0x20) + 8) = *(int *)(*(long *)(param_1 + 0x20) + 8) + -1;
        lVar2 = plVar3[2] + 0x19;
                    /* catch() { ... } // from try @ 005edbe4 with catch @ 005edbf8 */
        goto LAB_005edc34;
      case '\x05':
        FUN_005f3fb8(param_1,plVar3);
        plVar3 = (long *)*param_2;
                    /* try { // try from 005edc0c to 006edc5b has its CatchHandler @ 005edc0c
                       catch() { ... } // from try @ 005edc0c with catch @ 005edc0c
                       catch() { ... } // from try @ 005ee44c with catch @ 005edc0c
                       catch() { ... } // from try @ 005eec44 with catch @ 005edc0c */
        break;
      case '\x06':
        FUN_005ed7dc(param_1,plVar3);
        plVar3 = (long *)*param_2;
        break;
      case '\a':
        lVar2 = plVar3[4] + 0x28;
LAB_005edc34:
        FUN_005eed74(param_1,plVar3,lVar2,0);
        plVar3 = (long *)*param_2;
        break;
      case '\b':
        FUN_005f30a8(param_1,plVar3);
                    /* try { // try from 005edc5c to 006edc67 has its CatchHandler @ 005eea60 */
        plVar3 = (long *)*param_2;
        break;
      case '\t':
                    /* try { // try from 005edc68 to 006edc6f has its CatchHandler @ 005ee8e8 */
                    /* try { // try from 005edc70 to 006edcd7 has its CatchHandler @ 005eea60 */
        FUN_005ed720(param_1,plVar3);
        plVar3 = (long *)*param_2;
        break;
      case '\n':
        FUN_005ed5c8(param_1,plVar3);
        plVar3 = (long *)*param_2;
        break;
      default:
        goto switchD_005edbdc_default;
      }
joined_r0x005edc78:
    } while (plVar3 != (long *)0x0);
  }
  return param_2;
}


