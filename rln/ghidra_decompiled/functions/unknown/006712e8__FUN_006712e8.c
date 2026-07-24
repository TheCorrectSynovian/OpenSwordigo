/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006712e8
 * Function: FUN_006712e8
 * Signature: undefined FUN_006712e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_006712e8(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined4 local_4;
  
  if (param_1[8] != 0) {
    return *(undefined4 *)(param_1[8] + param_2 * 4);
  }
  do {
    puVar1 = param_1;
code_r0x00671318:
                    /* try { // try from 0067131c to 0077132f has its CatchHandler @ 00671840 */
    switch((char)puVar1[7]) {
    case '\0':
      return *(undefined4 *)(puVar1[0xe] + param_2 * 4);
    case '\x01':
      uVar2 = *(ulong *)puVar1[0xe];
      param_1 = (ulong *)puVar1[0xe];
      if (uVar2 <= param_2) {
        param_2 = param_2 - uVar2;
        param_1 = (ulong *)puVar1[0xf];
      }
      break;
    case '\x02':
    case '\x03':
                    /* try { // try from 00671340 to 0077134b has its CatchHandler @ 00671808 */
      (**(code **)(*(long *)puVar1[0xe] + 0x10))((long *)puVar1[0xe],param_2,1,&local_4);
      return local_4;
    default:
      goto code_r0x00671318;
    }
  } while( true );
}


