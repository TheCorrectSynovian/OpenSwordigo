/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f194
 * Function: FUN_0065f194
 * Signature: undefined FUN_0065f194(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0065f194(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065ef64 with catch @ 0065f1b4
                        */
  cVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x30))(*(long **)(param_1 + 200));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065eef8 with catch @ 0065f1c0
                        */
  if (cVar1 != '\0') {
    return (int)*(undefined8 *)(param_1 + 0x10) - (int)*(undefined8 *)(param_1 + 0x18);
  }
                    /* try { // try from 0065f1e0 to 0075f207 has its CatchHandler @ 0065f210 */
  iVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x38))
                    (*(long **)(param_1 + 200),param_2,*(undefined8 *)(param_1 + 0xd0),
                     *(undefined8 *)(param_1 + 0xe0),
                     *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
                    /* try { // try from 0065f208 to 0075f213 has its CatchHandler @ 0065ee38 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065f1e0 with catch @ 0065f210
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065f234 with catch @ 0065f214
                       catch(type#1 @ 00000000) { ... } // from try @ 0065f294 with catch @ 0065f214
                        */
  return ((int)*(undefined8 *)(param_1 + 0xd0) + iVar2) - (int)*(undefined8 *)(param_1 + 0xe8);
}


