/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9594
 * Function: luaL_gsub
 * Signature: undefined __cdecl luaL_gsub(lua_State * param_1, char * param_2, char * param_3, char * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_gsub(lua_State*, char const*, char const*, char const*) */

void luaL_gsub(lua_State *param_1,char *param_2,char *param_3,char *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  long *local_480;
  int local_478;
  lua_State *local_470;
  long local_468 [128];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005f95d4 to 006f962b has its CatchHandler @ 005f8d9c */
  sVar5 = strlen(param_3);
                    /* catch() { ... } // from try @ 005f92dc with catch @ 005f95f4 */
  local_478 = 0;
  local_480 = local_468;
  local_470 = param_1;
                    /* catch() { ... } // from try @ 005f93ac with catch @ 005f95f8 */
  pcVar6 = strstr(param_2,param_3);
                    /* catch() { ... } // from try @ 005f9380 with catch @ 005f95fc */
  if (pcVar6 != (char *)0x0) {
    do {
                    /* catch() { ... } // from try @ 005f9324 with catch @ 005f9608 */
      if (pcVar6 != param_2) {
        lVar8 = (long)param_2 - (long)pcVar6;
        do {
          if (&local_68 <= local_480) {
            luaL_prepbuffer((luaL_Buffer *)&local_480);
          }
                    /* try { // try from 005f962c to 006f9633 has its CatchHandler @ 005f963c */
          plVar1 = (long *)((long)local_480 + 1);
          lVar8 = lVar8 + 1;
                    /* catch() { ... } // from try @ 005f962c with catch @ 005f963c */
          *(char *)local_480 = *param_2;
          param_2 = param_2 + 1;
          local_480 = plVar1;
                    /* catch() { ... } // from try @ 005f9654 with catch @ 005f9640 */
        } while (lVar8 != 0);
      }
      sVar7 = strlen(param_4);
      pcVar4 = param_4;
                    /* try { // try from 005f9650 to 006f9653 has its CatchHandler @ 005f9664 */
      while (sVar7 != 0) {
        sVar7 = sVar7 - 1;
                    /* catch() { ... } // from try @ 005f9650 with catch @ 005f9664 */
        if (&local_68 <= local_480) {
          luaL_prepbuffer((luaL_Buffer *)&local_480);
        }
        *(char *)local_480 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        local_480 = (long *)((long)local_480 + 1);
      }
      param_2 = pcVar6 + sVar5;
      pcVar6 = strstr(param_2,param_3);
    } while (pcVar6 != (char *)0x0);
  }
  sVar5 = strlen(param_2);
  if (sVar5 != 0) {
    do {
      sVar5 = sVar5 - 1;
      if (&local_68 <= local_480) {
        luaL_prepbuffer((luaL_Buffer *)&local_480);
      }
      plVar1 = (long *)((long)local_480 + 1);
      *(char *)local_480 = *param_2;
      param_2 = param_2 + 1;
      local_480 = plVar1;
    } while (sVar5 != 0);
  }
  uVar2 = (long)local_480 - (long)local_468;
  if (uVar2 != 0) {
    lua_pushlstring(local_470,(char *)local_468,uVar2);
    local_478 = local_478 + 1;
    local_480 = local_468;
  }
  lua_concat(local_470,local_478);
                    /* try { // try from 005f972c to 006f97a7 has its CatchHandler @ 005f972c
                       catch() { ... } // from try @ 005f972c with catch @ 005f972c
                       catch() { ... } // from try @ 005f97c8 with catch @ 005f972c
                       catch() { ... } // from try @ 005f9c74 with catch @ 005f972c */
  local_478 = 1;
  lua_tolstring(param_1,-1,(ulong *)0x0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


