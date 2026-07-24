/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fc250
 * Function: FUN_005fc250
 * Signature: undefined FUN_005fc250(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fc250(lua_State *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  lua_State *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte bVar15;
  int iVar16;
  ulong local_6b0;
  ulong local_6a8;
  byte **local_6a0 [131];
  byte *local_288;
  byte *local_280;
  lua_State *local_278;
  int local_270;
  byte *local_268;
  ulong local_260;
  long local_68;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 005fc274 to 006fc287 has its CatchHandler @ 005fd1c4 */
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005fc288 to 006fc29b has its CatchHandler @ 005fd1ec */
  pbVar8 = (byte *)luaL_checklstring(param_1,1,&local_6b0);
                    /* try { // try from 005fc29c to 006fc2ab has its CatchHandler @ 005fd194 */
  pcVar9 = (char *)luaL_checklstring(param_1,2,(ulong *)0x0);
  iVar5 = lua_type(param_1,3);
  iVar6 = luaL_optinteger(param_1,4,local_6b0 + 1);
                    /* try { // try from 005fc2cc to 006fc2cf has its CatchHandler @ 005fd1ec */
  cVar2 = *pcVar9;
  pcVar1 = pcVar9 + 1;
  if (cVar2 != '^') {
    pcVar1 = pcVar9;
  }
  if (3 < iVar5 - 3U) {
    luaL_argerror(param_1,3,"string/function/table expected");
  }
  luaL_buffinit(param_1,(luaL_Buffer *)local_6a0);
                    /* try { // try from 005fc310 to 006fc317 has its CatchHandler @ 005fd16c */
                    /* try { // try from 005fc318 to 006fc35f has its CatchHandler @ 005fc1b8 */
  local_280 = pbVar8 + local_6b0;
  local_288 = pbVar8;
  local_278 = param_1;
  if (iVar6 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      local_270 = 0;
      pbVar10 = (byte *)FUN_005fcdb4(&local_288,pbVar8,pcVar1);
      plVar4 = local_278;
      if (pbVar10 == (byte *)0x0) {
LAB_005fc5b8:
        if (local_280 <= pbVar8) break;
        if (&local_288 <= local_6a0[0]) {
          luaL_prepbuffer((luaL_Buffer *)local_6a0);
        }
        *(byte *)local_6a0[0] = *pbVar8;
        pbVar10 = pbVar8 + 1;
        local_6a0[0] = (byte **)((long)local_6a0[0] + 1);
      }
      else {
                    /* try { // try from 005fc360 to 006fc36b has its CatchHandler @ 005fd11c */
        iVar5 = iVar5 + 1;
        iVar7 = lua_type(local_278,3);
        uVar14 = local_260;
                    /* try { // try from 005fc36c to 006fc3bb has its CatchHandler @ 005fc1b8 */
        if (iVar7 - 3U < 2) {
                    /* try { // try from 005fc3fc to 006fc40f has its CatchHandler @ 005fd0ac */
          lVar11 = lua_tolstring(local_278,3,&local_6a8);
                    /* try { // try from 005fc410 to 006fc423 has its CatchHandler @ 005fd040 */
          if (local_6a8 != 0) {
            uVar14 = 0;
            do {
                    /* try { // try from 005fc440 to 006fc447 has its CatchHandler @ 005fd028 */
              bVar15 = *(byte *)(lVar11 + uVar14);
                    /* try { // try from 005fc448 to 006fc453 has its CatchHandler @ 005fd258 */
              if (bVar15 == 0x25) {
                uVar14 = uVar14 + 1;
                bVar15 = *(byte *)(lVar11 + uVar14);
                    /* try { // try from 005fc458 to 006fc463 has its CatchHandler @ 005fd018 */
                if (9 < bVar15 - 0x30) goto LAB_005fc480;
                if (bVar15 == 0x30) {
                  luaL_addlstring((luaL_Buffer *)local_6a0,(char *)pbVar8,
                                  (long)pbVar10 - (long)pbVar8);
                }
                else {
                  FUN_005fd8d8(&local_288,(char)bVar15 + -0x31,pbVar8,pbVar10);
                    /* try { // try from 005fc434 to 006fc43f has its CatchHandler @ 005fd258 */
                  luaL_addvalue((luaL_Buffer *)local_6a0);
                }
              }
              else {
LAB_005fc480:
                    /* try { // try from 005fc480 to 006fc487 has its CatchHandler @ 005fd014 */
                if (&local_288 <= local_6a0[0]) {
                  luaL_prepbuffer((luaL_Buffer *)local_6a0);
                  bVar15 = *(byte *)(lVar11 + uVar14);
                }
                *(byte *)local_6a0[0] = bVar15;
                local_6a0[0] = (byte **)((long)local_6a0[0] + 1);
              }
                    /* try { // try from 005fc4ac to 006fc4b3 has its CatchHandler @ 005fcfc4 */
              uVar14 = uVar14 + 1;
            } while (uVar14 < local_6a8);
          }
        }
        else {
          if (iVar7 == 5) {
            if (local_270 < 1) {
              uVar14 = (long)pbVar10 - (long)pbVar8;
              pbVar13 = pbVar8;
LAB_005fc52c:
              lua_pushlstring(local_278,(char *)pbVar13,uVar14);
            }
            else {
                    /* try { // try from 005fc4d4 to 006fc4fb has its CatchHandler @ 005fcf40 */
              if (local_260 == 0xffffffffffffffff) {
                    /* try { // try from 005fc518 to 006fc52b has its CatchHandler @ 005fcf4c */
                luaL_error(local_278,"unfinished capture");
                pbVar13 = local_268;
                goto LAB_005fc52c;
              }
              pbVar13 = local_268;
              if (local_260 != 0xfffffffffffffffe) goto LAB_005fc52c;
              lua_pushinteger(local_278,(long)(local_268 + (1 - (long)local_288)));
                    /* try { // try from 005fc4fc to 006fc513 has its CatchHandler @ 005fcfc0 */
            }
                    /* try { // try from 005fc534 to 006fc547 has its CatchHandler @ 005fcf48 */
            lua_gettable(plVar4,3);
          }
          else if (iVar7 == 6) {
            lua_pushvalue(plVar4,3);
            iVar7 = local_270;
            if (local_270 == 0 && pbVar8 != (byte *)0x0) {
              iVar7 = 1;
            }
            luaL_checkstack(local_278,iVar7,"too many captures");
                    /* try { // try from 005fc3bc to 006fc3cf has its CatchHandler @ 005fd118 */
            if (0 < iVar7) {
              iVar16 = 0;
              do {
                    /* try { // try from 005fc3d0 to 006fc3e3 has its CatchHandler @ 005fd0b0 */
                FUN_005fd8d8(&local_288,iVar16,pbVar8,pbVar10);
                iVar16 = iVar16 + 1;
              } while (iVar7 != iVar16);
            }
            lua_call(plVar4,iVar7,1);
                    /* try { // try from 005fc3f4 to 006fc3fb has its CatchHandler @ 005fd1dc */
          }
          iVar7 = lua_toboolean(plVar4,-1);
          if (iVar7 == 0) {
            lua_settop(plVar4,-2);
            lua_pushlstring(plVar4,(char *)pbVar8,(long)pbVar10 - (long)pbVar8);
          }
          else {
                    /* try { // try from 005fc54c to 006fc55f has its CatchHandler @ 005fcf44 */
            iVar7 = lua_isstring(plVar4,-1);
            if (iVar7 == 0) {
              iVar7 = lua_type(plVar4,-1);
              uVar12 = lua_typename(plVar4,iVar7);
              luaL_error(plVar4,"invalid replacement value (a %s)",uVar12);
            }
          }
          luaL_addvalue((luaL_Buffer *)local_6a0);
        }
        if (pbVar10 <= pbVar8) goto LAB_005fc5b8;
      }
      pbVar8 = pbVar10;
    } while (iVar5 < iVar6 && cVar2 != '^');
  }
  luaL_addlstring((luaL_Buffer *)local_6a0,(char *)pbVar8,(long)local_280 - (long)pbVar8);
  luaL_pushresult((luaL_Buffer *)local_6a0);
  lua_pushinteger(param_1,(long)iVar5);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}


