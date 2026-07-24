/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005faa1c
 * Function: FUN_005faa1c
 * Signature: undefined FUN_005faa1c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005faa1c(lua_State *param_1)

{
  FILE *__stream;
  undefined *puVar1;
  int iVar2;
  char *__s;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = lua_gettop(param_1);
  lua_getfield(param_1,-0x2712,"tostring");
  puVar1 = PTR___sF_007e5cd0;
  if (0 < iVar2) {
    iVar4 = 0;
    __stream = (FILE *)(PTR___sF_007e5cd0 + 0x98);
    do {
      lua_pushvalue(param_1,-1);
      lua_pushvalue(param_1,iVar4 + 1U);
      lua_call(param_1,1,1);
      __s = (char *)lua_tolstring(param_1,-1,(ulong *)0x0);
      if (__s == (char *)0x0) {
                    /* try { // try from 005fab34 to 006fabfb has its CatchHandler @ 005fb16c */
        uVar3 = luaL_error(param_1,"\'tostring\' must return a string to \'print\'");
        return uVar3;
      }
      if (1 < iVar4 + 1U) {
        fputc(9,__stream);
      }
      fputs(__s,(FILE *)(puVar1 + 0x98));
      lua_settop(param_1,-2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  fputc(10,(FILE *)(PTR___sF_007e5cd0 + 0x98));
                    /* catch() { ... } // from try @ 005fa1a8 with catch @ 005fab10 */
  return 0;
}


