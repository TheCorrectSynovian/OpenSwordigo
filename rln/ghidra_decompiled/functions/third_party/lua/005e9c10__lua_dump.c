/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9c10
 * Function: lua_dump
 * Signature: undefined __cdecl lua_dump(lua_State * param_1, _func_int_lua_State_ptr_void_ptr_ulong_void_ptr * param_2, void * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_dump(lua_State*, int (*)(lua_State*, void const*, unsigned long, void*), void*) */

undefined8
lua_dump(lua_State *param_1,_func_int_lua_State_ptr_void_ptr_ulong_void_ptr *param_2,void *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
                    /* try { // try from 005e9c24 to 006e9c27 has its CatchHandler @ 005ea224 */
                    /* try { // try from 005e9c28 to 006e9c2b has its CatchHandler @ 005e9f10 */
                    /* try { // try from 005e9c2c to 006e9c2f has its CatchHandler @ 005e9c30 */
                    /* catch() { ... } // from try @ 005e95f0 with catch @ 005e9c30
                       catch() { ... } // from try @ 005e9c2c with catch @ 005e9c30
                       try { // try from 005e9c30 to 006ea4eb has its CatchHandler @ 005e8c80 */
  if ((*(int *)(*(long *)(param_1 + 0x10) + -8) == 6) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + -0x10), *(char *)(lVar2 + 10) == '\0')) {
    uVar1 = FUN_005ecd48(param_1,*(undefined8 *)(lVar2 + 0x20),param_2,param_3,0);
    return uVar1;
  }
                    /* catch() { ... } // from try @ 005e9630 with catch @ 005e9c38 */
  return 1;
}


