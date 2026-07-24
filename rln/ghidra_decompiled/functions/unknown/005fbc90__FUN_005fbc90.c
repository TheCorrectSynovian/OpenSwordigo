/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fbc90
 * Function: FUN_005fbc90
 * Signature: undefined FUN_005fbc90(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fbc90(lua_State *param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined1 uVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  byte bVar13;
  ulong uVar14;
  byte *pbVar15;
  char *__dest;
  int iVar16;
  double dVar17;
  ulong local_6a8;
  ulong local_6a0;
  char acStack_694 [511];
  undefined2 uStack_495;
  undefined1 auStack_493 [19];
  byte *local_480 [131];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar5 = lua_gettop(param_1);
  pbVar6 = (byte *)luaL_checklstring(param_1,1,&local_6a8);
  luaL_buffinit(param_1,(luaL_Buffer *)local_480);
  if (0 < (long)local_6a8) {
    pbVar2 = pbVar6 + local_6a8;
    __dest = (char *)((long)&uStack_495 + 1U | 1);
    iVar16 = 1;
    do {
      while (bVar13 = *pbVar6, bVar13 == 0x25) {
        pbVar15 = pbVar6 + 1;
        bVar13 = *pbVar15;
        if (bVar13 == 0x25) {
          if (local_480[0] < &local_68) {
                    /* catch() { ... } // from try @ 005fb948 with catch @ 005fc148
                       catch() { ... } // from try @ 005fb9ec with catch @ 005fc148 */
            bVar13 = 0x25;
                    /* catch() { ... } // from try @ 005fb644 with catch @ 005fc14c
                       catch() { ... } // from try @ 005fb6e8 with catch @ 005fc14c */
          }
          else {
            luaL_prepbuffer((luaL_Buffer *)local_480);
            bVar13 = *pbVar15;
                    /* catch() { ... } // from try @ 005fbbb8 with catch @ 005fbd88 */
          }
                    /* catch() { ... } // from try @ 005fb8a0 with catch @ 005fbd8c */
                    /* catch() { ... } // from try @ 005fb59c with catch @ 005fbd90 */
          pbVar6 = pbVar6 + 2;
                    /* catch() { ... } // from try @ 005fb99c with catch @ 005fbd94 */
          *local_480[0] = bVar13;
          local_480[0] = local_480[0] + 1;
          goto joined_r0x005fc108;
        }
        iVar1 = iVar16 + 1;
        pbVar6 = pbVar15;
        if (iVar5 <= iVar16) {
          luaL_argerror(param_1,iVar1,"no value");
          bVar13 = *pbVar15;
        }
        while (((bVar13 != 0 && (((long)(char)bVar13 & 0xffffffffU) < 0x40)) &&
               ((1L << ((long)(char)bVar13 & 0x3fU) & 0x1280900000001U) != 0))) {
          bVar13 = pbVar6[1];
          pbVar6 = pbVar6 + 1;
        }
        if (5 < (ulong)((long)pbVar6 - (long)pbVar15)) {
                    /* try { // try from 005fbdb8 to 006fbfe3 has its CatchHandler @ 005fc1b4 */
          luaL_error(param_1,"invalid format (repeated flags)");
          bVar13 = *pbVar6;
        }
        if (bVar13 - 0x30 < 10) {
          pbVar6 = pbVar6 + 1;
        }
                    /* catch() { ... } // from try @ 005fb698 with catch @ 005fbde4 */
        pbVar12 = pbVar6 + 1;
        if (9 < *pbVar6 - 0x30) {
          pbVar12 = pbVar6;
        }
        bVar13 = *pbVar12;
        if (bVar13 == 0x2e) {
          pbVar6 = pbVar12 + 1;
          if (*pbVar6 - 0x30 < 10) {
            pbVar6 = pbVar12 + 2;
          }
          pbVar12 = pbVar6 + 1;
          if (9 < *pbVar6 - 0x30) {
            pbVar12 = pbVar6;
          }
          bVar13 = *pbVar12;
        }
        if (bVar13 - 0x30 < 10) {
                    /* catch() { ... } // from try @ 005fb3a0 with catch @ 005fbe34 */
          luaL_error(param_1,"invalid format (width or precision too long)");
        }
        uStack_495._1_1_ = 0x25;
        strncpy(__dest,(char *)pbVar15,(size_t)(pbVar12 + (1 - (long)pbVar15)));
        __dest[(long)(pbVar12 + (1 - (long)pbVar15))] = '\0';
        pbVar6 = pbVar12 + 1;
        iVar16 = iVar1;
                    /* catch() { ... } // from try @ 005fbb90 with catch @ 005fbe84 */
        switch(*pbVar12) {
        case 0x45:
        case 0x47:
        case 0x65:
        case 0x66:
        case 0x67:
          luaL_checknumber(param_1,iVar1);
          sprintf(acStack_694,(char *)((long)&uStack_495 + 1));
          break;
        default:
          uVar9 = luaL_error(param_1,"invalid option \'%%%c\' to \'format\'");
          goto LAB_005fc190;
        case 0x58:
        case 0x6f:
        case 0x75:
        case 0x78:
          sVar7 = strlen((char *)((long)&uStack_495 + 1));
          uVar3 = *(undefined1 *)((long)&uStack_495 + sVar7);
          *(undefined2 *)((long)&uStack_495 + sVar7) = 0x6c;
          *(undefined1 *)((long)&uStack_495 + sVar7 + 1) = uVar3;
          auStack_493[sVar7] = 0;
          dVar17 = (double)luaL_checknumber(param_1,iVar1);
                    /* catch() { ... } // from try @ 005fbaf8 with catch @ 005fbed8 */
                    /* catch() { ... } // from try @ 005fbb04 with catch @ 005fbed4 */
          goto LAB_005fbf10;
        case 99:
          dVar17 = (double)luaL_checknumber(param_1,iVar1);
                    /* catch() { ... } // from try @ 005fb4f0 with catch @ 005fbfa8 */
          sprintf(acStack_694,(char *)((long)&uStack_495 + 1),(ulong)(uint)(int)dVar17);
                    /* catch() { ... } // from try @ 005fb4e4 with catch @ 005fbfac */
          break;
        case 100:
        case 0x69:
                    /* catch() { ... } // from try @ 005fbac4 with catch @ 005fbedc */
                    /* catch() { ... } // from try @ 005fb8d4 with catch @ 005fbee0 */
          sVar7 = strlen((char *)((long)&uStack_495 + 1));
                    /* catch() { ... } // from try @ 005fb878 with catch @ 005fbee4 */
          uVar3 = *(undefined1 *)((long)&uStack_495 + sVar7);
          *(undefined2 *)((long)&uStack_495 + sVar7) = 0x6c;
          *(undefined1 *)((long)&uStack_495 + sVar7 + 1) = uVar3;
          auStack_493[sVar7] = 0;
          dVar17 = (double)luaL_checknumber(param_1,iVar1);
LAB_005fbf10:
          lVar10 = (long)dVar17;
LAB_005fbf18:
          sprintf(acStack_694,(char *)((long)&uStack_495 + 1),lVar10);
          break;
        case 0x71:
                    /* catch() { ... } // from try @ 005fb4cc with catch @ 005fbfb0 */
                    /* catch() { ... } // from try @ 005fb338 with catch @ 005fbfb4 */
                    /* catch() { ... } // from try @ 005fb2c8 with catch @ 005fbfb8 */
          pbVar15 = (byte *)luaL_checklstring(param_1,iVar1,&local_6a0);
          if (&local_68 <= local_480[0]) {
            luaL_prepbuffer((luaL_Buffer *)local_480);
          }
                    /* try { // try from 005fbfe4 to 006fc183 has its CatchHandler @ 005fb1f0 */
                    /* catch() { ... } // from try @ 005fb2a0 with catch @ 005fbfe8 */
          *local_480[0] = 0x22;
          local_480[0] = local_480[0] + 1;
                    /* catch() { ... } // from try @ 005fb228 with catch @ 005fbfec */
                    /* catch() { ... } // from try @ 005fb2b4 with catch @ 005fc000
                       catch() { ... } // from try @ 005fb2f8 with catch @ 005fc000 */
          while (uVar14 = local_6a0 - 1, local_6a0 != 0) {
            bVar13 = *pbVar15;
            switch(bVar13) {
            case 0:
              uVar11 = 4;
              pcVar8 = "\\000";
              break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xb:
            case 0xc:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x21:
              goto switchD_005fc028_caseD_1;
            case 10:
            case 0x22:
switchD_005fc028_caseD_a:
              pbVar12 = local_480[0];
              local_6a0 = uVar14;
              if (&local_68 <= local_480[0]) {
                luaL_prepbuffer((luaL_Buffer *)local_480);
                pbVar12 = local_480[0];
              }
              local_480[0] = pbVar12 + 1;
                    /* catch() { ... } // from try @ 005fbb44 with catch @ 005fc06c */
              *pbVar12 = 0x5c;
              if (&local_68 <= local_480[0]) {
                luaL_prepbuffer((luaL_Buffer *)local_480);
              }
              bVar13 = *pbVar15;
              goto LAB_005fc08c;
            case 0xd:
              uVar11 = 2;
              pcVar8 = "\\r";
              break;
            default:
              if (bVar13 == 0x5c) goto switchD_005fc028_caseD_a;
              goto switchD_005fc028_caseD_1;
            }
            local_6a0 = uVar14;
            luaL_addlstring((luaL_Buffer *)local_480,pcVar8,uVar11);
LAB_005fbff4:
            pbVar15 = pbVar15 + 1;
          }
                    /* catch() { ... } // from try @ 005fb530 with catch @ 005fc0dc */
          local_6a0 = uVar14;
          if (&local_68 <= local_480[0]) {
            luaL_prepbuffer((luaL_Buffer *)local_480);
          }
          *local_480[0] = 0x22;
          local_480[0] = local_480[0] + 1;
          goto joined_r0x005fc108;
        case 0x73:
                    /* catch() { ... } // from try @ 005fb5d0 with catch @ 005fbf40 */
          lVar10 = luaL_checklstring(param_1,iVar1,&local_6a0);
                    /* catch() { ... } // from try @ 005fb574 with catch @ 005fbf58 */
          pcVar8 = strchr((char *)((long)&uStack_495 + 1),0x2e);
          if ((pcVar8 == (char *)0x0) && (99 < local_6a0)) {
            lua_pushvalue(param_1,iVar1);
            luaL_addvalue((luaL_Buffer *)local_480);
            goto joined_r0x005fc180;
          }
          goto LAB_005fbf18;
        }
        sVar7 = strlen(acStack_694);
        luaL_addlstring((luaL_Buffer *)local_480,acStack_694,sVar7);
                    /* catch() { ... } // from try @ 005fb7ec with catch @ 005fbf34 */
                    /* catch() { ... } // from try @ 005fb7e0 with catch @ 005fbf38 */
joined_r0x005fc108:
        if (pbVar2 <= pbVar6) goto LAB_005fc184;
      }
                    /* catch() { ... } // from try @ 005fb34c with catch @ 005fc150
                       catch() { ... } // from try @ 005fb3f0 with catch @ 005fc150 */
      if (&local_68 <= local_480[0]) {
                    /* catch() { ... } // from try @ 005fb478 with catch @ 005fc160
                       catch() { ... } // from try @ 005fb5c4 with catch @ 005fc160
                       catch() { ... } // from try @ 005fb5d8 with catch @ 005fc160
                       catch() { ... } // from try @ 005fb770 with catch @ 005fc160
                       catch() { ... } // from try @ 005fb7cc with catch @ 005fc160
                       catch() { ... } // from try @ 005fb8c8 with catch @ 005fc160
                       catch() { ... } // from try @ 005fb8dc with catch @ 005fc160
                       catch() { ... } // from try @ 005fba78 with catch @ 005fc160
                       catch() { ... } // from try @ 005fbad4 with catch @ 005fc160 */
        luaL_prepbuffer((luaL_Buffer *)local_480);
        bVar13 = *pbVar6;
      }
      pbVar6 = pbVar6 + 1;
      *local_480[0] = bVar13;
      local_480[0] = local_480[0] + 1;
joined_r0x005fc180:
    } while (pbVar6 < pbVar2);
  }
LAB_005fc184:
                    /* try { // try from 005fc184 to 006fc1ab has its CatchHandler @ 005fc1b4 */
  luaL_pushresult((luaL_Buffer *)local_480);
  uVar9 = 1;
LAB_005fc190:
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 005fc1ac to 006fc1b7 has its CatchHandler @ 005fb1f0 */
                    /* catch() { ... } // from try @ 005fbdb8 with catch @ 005fc1b4
                       catch() { ... } // from try @ 005fc184 with catch @ 005fc1b4 */
                    /* try { // try from 005fc1b8 to 006fc1fb has its CatchHandler @ 005fc1b8
                       catch() { ... } // from try @ 005fc1b8 with catch @ 005fc1b8
                       catch() { ... } // from try @ 005fc200 with catch @ 005fc1b8
                       catch() { ... } // from try @ 005fc318 with catch @ 005fc1b8
                       catch() { ... } // from try @ 005fc36c with catch @ 005fc1b8
                       catch() { ... } // from try @ 005fcbfc with catch @ 005fc1b8
                       catch() { ... } // from try @ 005fd010 with catch @ 005fc1b8
                       catch() { ... } // from try @ 005fd1c0 with catch @ 005fc1b8
                       catch() { ... } // from try @ 005fd5e0 with catch @ 005fc1b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
switchD_005fc028_caseD_1:
  local_6a0 = uVar14;
                    /* catch() { ... } // from try @ 005fb82c with catch @ 005fc0a4 */
  if (&local_68 <= local_480[0]) {
    luaL_prepbuffer((luaL_Buffer *)local_480);
    bVar13 = *pbVar15;
  }
LAB_005fc08c:
  *local_480[0] = bVar13;
  local_480[0] = local_480[0] + 1;
  goto LAB_005fbff4;
}


