/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3118
 * Function: lua_newstate
 * Signature: undefined __cdecl lua_newstate(_func_void_ptr_void_ptr_void_ptr_ulong_ulong * param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_newstate(void* (*)(void*, void*, unsigned long, unsigned long), void*) */

undefined8 * lua_newstate(_func_void_ptr_void_ptr_void_ptr_ulong_ulong *param_1,void *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 005f2c6c with catch @ 005f3118 */
  puVar2 = (*param_1)(param_2,(void *)0x0,0,0x268);
  if (puVar2 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 005f2c60 with catch @ 005f3150 */
                    /* catch() { ... } // from try @ 005f2d68 with catch @ 005f3154 */
    *(undefined2 *)(puVar2 + 1) = 0x6108;
    *(undefined1 *)(puVar2 + 0x1b) = 0x21;
    puVar2[4] = puVar2 + 0x17;
    puVar2[0x16] = 0;
    puVar2[0x15] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[0x18] = 0;
    puVar2[0x17] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x21] = 0;
    puVar2[0x20] = 0;
                    /* catch() { ... } // from try @ 005f2d54 with catch @ 005f3194 */
                    /* catch() { ... } // from try @ 005f2c00 with catch @ 005f3198 */
    *puVar2 = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0x19] = param_1;
    puVar2[0x1a] = param_2;
    puVar2[0x13] = 0;
    *(undefined1 *)((long)puVar2 + 10) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)((long)puVar2 + 0x5c) = 0;
    puVar2[0x2d] = puVar2;
    puVar2[0x24] = 0;
    puVar2[0x25] = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    puVar2[0x22] = 0;
    puVar2[0x2a] = 0;
    *(undefined1 *)((long)puVar2 + 0xd9) = 0;
                    /* catch() { ... } // from try @ 005f2bec with catch @ 005f31d8 */
    *(undefined4 *)((long)puVar2 + 0xdc) = 0;
    puVar2[0x28] = 0;
    *(undefined2 *)((long)puVar2 + 100) = 0x100;
    puVar2[0x31] = puVar2 + 0x2e;
    puVar2[0x32] = puVar2 + 0x2e;
    puVar2[0x1c] = puVar2;
    puVar2[0x1d] = puVar2 + 0x1c;
    puVar2[0x26] = 0x268;
    puVar2[0x29] = 0xc8000000c8;
    memset(puVar2 + 0x33,0,0x48);
    iVar1 = FUN_005eb998(puVar2,FUN_005f3230,0);
    if (iVar1 != 0) {
      FUN_005f3344(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


