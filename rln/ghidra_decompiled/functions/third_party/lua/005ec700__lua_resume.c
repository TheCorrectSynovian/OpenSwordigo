/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ec700
 * Function: lua_resume
 * Signature: undefined __cdecl lua_resume(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_resume(lua_State*, int) */

uint lua_resume(lua_State *param_1,int param_2)

{
  lua_State lVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 local_48;
  uint local_3c;
  long local_38;
  
                    /* try { // try from 005ec710 to 006ec737 has its CatchHandler @ 005ed1fc */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1[10];
  if (lVar1 == (lua_State)0x0) {
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    if (puVar8 != *(undefined8 **)(param_1 + 0x50)) goto LAB_005ec74c;
LAB_005ec760:
    if (*(ushort *)(param_1 + 0x60) < 200) {
      sVar2 = *(ushort *)(param_1 + 0x60) + 1;
                    /* try { // try from 005ec7c4 to 006ec7d7 has its CatchHandler @ 005ece50 */
      *(short *)(param_1 + 0x60) = sVar2;
      *(short *)(param_1 + 0x62) = sVar2;
      local_3c = 0;
      local_48 = *(undefined8 *)(param_1 + 0xa8);
                    /* try { // try from 005ec7e4 to 006ec7f7 has its CatchHandler @ 005ed1c4 */
      *(undefined8 **)(param_1 + 0xa8) = &local_48;
      if (lVar1 == (lua_State)0x0) {
        iVar4 = FUN_005ebcf4(param_1,*(long *)(param_1 + 0x10) + (long)param_2 * -0x10 + -0x10,
                             0xffffffff);
        if (iVar4 == 0) goto LAB_005ec860;
      }
      else {
        param_1[10] = (lua_State)0x0;
        if (*(char *)(*(long *)(*(undefined8 **)(param_1 + 0x28))[1] + 10) == '\0') {
          *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(param_1 + 0x28);
        }
        else {
          iVar4 = FUN_005ec3a4(param_1);
          if (iVar4 != 0) {
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
          }
        }
LAB_005ec860:
                    /* try { // try from 005ec878 to 006ec89f has its CatchHandler @ 005ed1c4 */
        FUN_005f6b64(param_1,(int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x50)) >>
                                  3) * -0x33333333);
      }
      uVar9 = local_3c;
      *(undefined8 *)(param_1 + 0xa8) = local_48;
      if (local_3c == 0) {
        uVar9 = (uint)(byte)param_1[10];
      }
      else {
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        param_1[10] = SUB41(local_3c,0);
        if (local_3c - 2 < 2) {
          uVar7 = *(undefined4 *)(puVar8 + -1);
          *puVar8 = puVar8[-2];
LAB_005ec8fc:
          *(undefined4 *)(puVar8 + 1) = uVar7;
        }
        else {
          if (local_3c == 5) {
            pcVar5 = "error in error handling";
            uVar6 = 0x17;
LAB_005ec8ec:
            uVar6 = FUN_005f356c(param_1,pcVar5,uVar6);
            *puVar8 = uVar6;
            uVar7 = 4;
            goto LAB_005ec8fc;
          }
                    /* try { // try from 005ec8b4 to 006ec8bf has its CatchHandler @ 005ed2b4 */
          if (local_3c == 4) {
            pcVar5 = "not enough memory";
            uVar6 = 0x11;
            goto LAB_005ec8ec;
          }
        }
                    /* try { // try from 005ec908 to 006ec937 has its CatchHandler @ 005ecdb0 */
        *(undefined8 **)(param_1 + 0x10) = puVar8 + 2;
        *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x10) = puVar8 + 2;
      }
      *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + -1;
      goto LAB_005ec91c;
    }
                    /* try { // try from 005ec774 to 006ec77b has its CatchHandler @ 005ece54 */
    pcVar5 = "C stack overflow";
    uVar6 = 0x10;
    puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 0x28);
  }
  else {
    if (lVar1 == (lua_State)0x1) goto LAB_005ec760;
    puVar8 = *(undefined8 **)(param_1 + 0x28);
LAB_005ec74c:
    puVar8 = (undefined8 *)*puVar8;
    pcVar5 = "cannot resume non-suspended coroutine";
    uVar6 = 0x25;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar8;
  uVar6 = FUN_005f356c(param_1,pcVar5,uVar6);
  *puVar8 = uVar6;
  *(undefined4 *)(puVar8 + 1) = 4;
                    /* try { // try from 005ec79c to 006ec7c3 has its CatchHandler @ 005ecd00 */
  if (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x10) < 0x11) {
    iVar4 = *(int *)(param_1 + 0x58);
    if (iVar4 < 1) {
      iVar4 = iVar4 + 1;
    }
    else {
      iVar4 = iVar4 << 1;
    }
    FUN_005eba24(param_1,iVar4);
  }
                    /* try { // try from 005ec830 to 006ec857 has its CatchHandler @ 005eccb0 */
  uVar9 = 2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
LAB_005ec91c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


