/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671094
 * Function: FUN_00671094
 * Signature: undefined FUN_00671094(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 FUN_00671094(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 local_1;
  
  if (param_1[8] != 0) {
    return *(undefined1 *)(param_1[8] + param_2);
  }
  do {
    puVar1 = param_1;
code_r0x006710c4:
                    /* try { // try from 006710c0 to 007710cb has its CatchHandler @ 00670ec4 */
                    /* catch() { ... } // from try @ 0067104c with catch @ 006710c8 */
                    /* catch() { ... } // from try @ 00671748 with catch @ 006710cc */
    switch((char)puVar1[7]) {
    case '\0':
      return *(undefined1 *)(puVar1[0xe] + param_2);
    case '\x01':
      uVar2 = *(ulong *)puVar1[0xe];
      param_1 = (ulong *)puVar1[0xe];
      if (uVar2 <= param_2) {
                    /* try { // try from 00671124 to 0077112f has its CatchHandler @ 006719d8 */
        param_2 = param_2 - uVar2;
        param_1 = (ulong *)puVar1[0xf];
      }
      break;
    case '\x02':
    case '\x03':
      (**(code **)(*(long *)puVar1[0xe] + 0x10))((long *)puVar1[0xe],param_2,1,&local_1);
                    /* try { // try from 00671104 to 00771117 has its CatchHandler @ 00671a18 */
      return local_1;
    default:
      goto code_r0x006710c4;
    }
  } while( true );
}


