/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa0f4
 * Function: FUN_005fa0f4
 * Signature: undefined FUN_005fa0f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa0f4(lua_State *param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 005fa100 to 006fa13b has its CatchHandler @ 005f9c98 */
  uVar1 = lua_tolstring(param_1,-1,(ulong *)0x0);
  fprintf((FILE *)(PTR___sF_007e5cd0 + 0x130),"PANIC: unprotected error in call to Lua API (%s)\n",
          uVar1);
  return 0;
}


