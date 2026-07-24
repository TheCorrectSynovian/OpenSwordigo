/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8610
 * Function: lua_pushstring
 * Signature: undefined __cdecl lua_pushstring(lua_State * param_1, char * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushstring(lua_State*, char const*) */

void lua_pushstring(lua_State *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_2 == (char *)0x0) {
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar3 + 8) = 0;
  }
  else {
    sVar1 = strlen(param_2);
                    /* catch() { ... } // from try @ 005e846c with catch @ 005e8648 */
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78)
       ) {
      FUN_005edcb0(param_1);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
                    /* try { // try from 005e8668 to 006e86f7 has its CatchHandler @ 005e8704 */
    uVar2 = FUN_005f356c(param_1,param_2,sVar1);
    *puVar4 = uVar2;
    *(undefined4 *)(puVar4 + 1) = 4;
    lVar3 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
                    /* catch() { ... } // from try @ 005e85d4 with catch @ 005e8694 */
  return;
}


