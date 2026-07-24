/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006623d0
 * Function: FUN_006623d0
 * Signature: undefined FUN_006623d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006623d0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x30))(*(long **)(param_1 + 200));
                    /* catch() { ... } // from try @ 00662324 with catch @ 006623fc */
  if (cVar1 != '\0') {
    return (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18)) >> 2;
  }
                    /* try { // try from 0066242c to 00762453 has its CatchHandler @ 00662468 */
  iVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x38))
                    (*(long **)(param_1 + 200),param_2,*(undefined8 *)(param_1 + 0xd0),
                     *(undefined8 *)(param_1 + 0xe0),
                     *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2);
  return (ulong)(uint)(((int)*(undefined8 *)(param_1 + 0xd0) + iVar2) -
                      (int)*(undefined8 *)(param_1 + 0xe8));
}


