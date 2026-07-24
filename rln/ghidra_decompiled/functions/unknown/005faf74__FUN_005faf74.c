/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005faf74
 * Function: FUN_005faf74
 * Signature: undefined FUN_005faf74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005faf74(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
                    /* try { // try from 005faf80 to 006fb073 has its CatchHandler @ 005f9c98 */
  luaL_checkany(param_1,1);
                    /* catch() { ... } // from try @ 005f9d5c with catch @ 005faf8c */
                    /* catch() { ... } // from try @ 005f9d54 with catch @ 005faf90 */
  iVar1 = luaL_callmeta(param_1,1,"__tostring");
                    /* catch() { ... } // from try @ 005f9d2c with catch @ 005fafa0 */
  if (iVar1 != 0) {
    return 1;
  }
                    /* catch() { ... } // from try @ 005fa15c with catch @ 005fafb4
                       catch() { ... } // from try @ 005fa1f0 with catch @ 005fafb4 */
  uVar2 = lua_type(param_1,1);
  switch(uVar2) {
  case 0:
                    /* catch() { ... } // from try @ 005f9fdc with catch @ 005fafec
                       catch() { ... } // from try @ 005fa06c with catch @ 005fafec */
    lua_pushlstring(param_1,"nil",3);
    break;
  case 1:
    iVar1 = lua_toboolean(param_1,1);
    pcVar5 = "false";
    if (iVar1 != 0) {
      pcVar5 = "true";
    }
    goto LAB_005fb078;
  default:
    iVar1 = lua_type(param_1,1);
    uVar3 = lua_typename(param_1,iVar1);
    uVar4 = lua_topointer(param_1,1);
                    /* catch() { ... } // from try @ 005f9d84 with catch @ 005fb050
                       catch() { ... } // from try @ 005f9e14 with catch @ 005fb050 */
    lua_pushfstring(param_1,"%s: %p",uVar3,uVar4);
    break;
  case 3:
    pcVar5 = (char *)lua_tolstring(param_1,1,(ulong *)0x0);
                    /* try { // try from 005fb074 to 006fb0b3 has its CatchHandler @ 005fb16c */
LAB_005fb078:
    lua_pushstring(param_1,pcVar5);
    break;
  case 4:
    lua_pushvalue(param_1,1);
  }
                    /* catch() { ... } // from try @ 005f9d70 with catch @ 005fafa4
                       catch() { ... } // from try @ 005f9e5c with catch @ 005fafa4 */
                    /* catch() { ... } // from try @ 005f9d40 with catch @ 005fafac
                       catch() { ... } // from try @ 005f9e98 with catch @ 005fafac */
  return 1;
}


