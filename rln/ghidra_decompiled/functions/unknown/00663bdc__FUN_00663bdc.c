/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663bdc
 * Function: FUN_00663bdc
 * Signature: undefined FUN_00663bdc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00663bdc(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1 + 0xd;
                    /* try { // try from 00663bfc to 00763c33 has its CatchHandler @ 00663824 */
                    /* catch() { ... } // from try @ 00663908 with catch @ 00663c00
                       catch() { ... } // from try @ 00663948 with catch @ 00663c00 */
  cVar2 = FUN_0061f654(plVar1);
                    /* catch() { ... } // from try @ 006638d8 with catch @ 00663c04 */
  if (cVar2 == '\0') {
                    /* catch() { ... } // from try @ 006639f8 with catch @ 00663c18
                       catch() { ... } // from try @ 00663a40 with catch @ 00663c18 */
    FUN_0061f5e8(plVar1,param_2,param_3,0x1b4);
    cVar2 = FUN_0061f654(plVar1);
    if (cVar2 != '\0') {
                    /* try { // try from 00663c34 to 00763c67 has its CatchHandler @ 00663c70 */
      if ((char)param_1[0x15] == '\0') {
        pvVar3 = (void *)param_1[0x13];
        if (pvVar3 == (void *)0x0) {
          uVar4 = param_1[0x14] << 2;
          if (0x1fc0000000000000 < (ulong)param_1[0x14]) {
            uVar4 = 0xffffffffffffffff;
          }
          pvVar3 = operator_new__(uVar4);
                    /* try { // try from 00663ca4 to 00763cbf has its CatchHandler @ 00663cf4 */
          param_1[0x13] = (long)pvVar3;
          *(undefined1 *)(param_1 + 0x15) = 1;
        }
      }
      else {
        pvVar3 = (void *)param_1[0x13];
      }
                    /* catch() { ... } // from try @ 006638ec with catch @ 00663c40
                       catch() { ... } // from try @ 00663954 with catch @ 00663c40 */
      *(uint *)(param_1 + 0xf) = param_3;
      *(undefined1 *)((long)param_1 + 0xa9) = 0;
      *(undefined1 *)((long)param_1 + 0xaa) = 0;
      param_1[1] = (long)pvVar3;
      param_1[2] = (long)pvVar3;
      param_1[3] = (long)pvVar3;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined8 *)((long)param_1 + 0x84) = *(undefined8 *)((long)param_1 + 0x7c);
                    /* try { // try from 00663c68 to 00763c73 has its CatchHandler @ 00663824 */
      *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x7c);
                    /* try { // try from 00663cc0 to 00763cf7 has its CatchHandler @ 00663c74 */
      if (((param_3 >> 1 & 1) == 0) ||
         (lVar5 = (**(code **)(*param_1 + 0x20))(param_1,0,2,param_3), lVar5 != -1)) {
                    /* catch() { ... } // from try @ 00663bcc with catch @ 00663c70
                       catch() { ... } // from try @ 00663c34 with catch @ 00663c70 */
                    /* try { // try from 00663c74 to 00763ca3 has its CatchHandler @ 00663c74
                       catch(type#1 @ 00000000) { ... } // from try @ 00663c74 with catch @ 00663c74
                       catch(type#1 @ 00000000) { ... } // from try @ 00663cc0 with catch @ 00663c74
                       catch(type#1 @ 00000000) { ... } // from try @ 00663d00 with catch @ 00663c74
                        */
        return param_1;
      }
      FUN_00662f10(param_1);
    }
  }
  return (long *)0x0;
}


