/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ea630
 * Function: lua_getinfo
 * Signature: undefined __cdecl lua_getinfo(lua_State * param_1, char * param_2, lua_Debug * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_getinfo(lua_State*, char const*, lua_Debug*) */

undefined4 lua_getinfo(lua_State *param_1,char *param_2,lua_Debug *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
                    /* try { // try from 005ea658 to 006ea65b has its CatchHandler @ 005ea7a4 */
  if (*param_2 == '>') {
    lVar21 = 0;
    param_2 = param_2 + 1;
    lVar20 = *(long *)(*(long *)(param_1 + 0x10) + -0x10);
    *(long **)(param_1 + 0x10) = (long *)(*(long *)(param_1 + 0x10) + -0x10);
                    /* try { // try from 005ea67c to 006ea687 has its CatchHandler @ 005ea768 */
joined_r0x005ea6c8:
    if (lVar20 != 0) {
      cVar8 = *param_2;
      if (cVar8 == '\0') {
        bVar3 = false;
        uVar18 = 1;
      }
      else {
        lVar19 = 1;
        uVar18 = 1;
                    /* try { // try from 005ea6a4 to 006ea6cb has its CatchHandler @ 005ea7e8 */
        do {
          switch(cVar8) {
          case 'L':
          case 'f':
            break;
          default:
                    /* try { // try from 005ea844 to 006ea8f7 has its CatchHandler @ 005ea934 */
            uVar18 = 0;
            break;
          case 'S':
                    /* try { // try from 005ea814 to 006ea81f has its CatchHandler @ 005ea900 */
            if (*(char *)(lVar20 + 10) == '\0') {
              puVar7 = (undefined *)(*(long *)(*(long *)(lVar20 + 0x20) + 0x40) + 0x18);
              *(undefined **)(param_3 + 0x20) = puVar7;
                    /* try { // try from 005ea8f8 to 006ea923 has its CatchHandler @ 005ea4ec */
              iVar1 = *(int *)(*(long *)(lVar20 + 0x20) + 0x60);
                    /* catch() { ... } // from try @ 005ea814 with catch @ 005ea900 */
              *(int *)(param_3 + 0x30) = iVar1;
              uVar15 = *(undefined4 *)(*(long *)(lVar20 + 0x20) + 100);
              puVar13 = &DAT_00699a07;
              if (iVar1 != 0) {
                puVar13 = &DAT_00699a0c;
              }
            }
            else {
              puVar7 = &DAT_00699a00;
              *(undefined **)(param_3 + 0x20) = &DAT_00699a00;
              uVar15 = 0xffffffff;
              *(undefined4 *)(param_3 + 0x30) = 0xffffffff;
              puVar13 = &DAT_00699a05;
            }
                    /* try { // try from 005ea924 to 006ea92b has its CatchHandler @ 005ea930 */
            *(undefined4 *)(param_3 + 0x34) = uVar15;
            *(undefined **)(param_3 + 0x18) = puVar13;
            FUN_005ef46c(param_3 + 0x38,puVar7,0x3c);
                    /* catch() { ... } // from try @ 005ea924 with catch @ 005ea930 */
            break;
          case 'l':
            if (((lVar21 != 0) && (plVar14 = *(long **)(lVar21 + 8), (int)plVar14[1] == 6)) &&
               (lVar10 = *plVar14, *(char *)(lVar10 + 10) == '\0')) {
                    /* catch() { ... } // from try @ 005ea844 with catch @ 005ea934 */
              if (*(long *)(param_1 + 0x28) == lVar21) {
                lVar17 = *(long *)(param_1 + 0x30);
                *(long *)(lVar21 + 0x18) = lVar17;
                lVar10 = *plVar14;
              }
              else {
                    /* try { // try from 005ea940 to 006eaa03 has its CatchHandler @ 005ea940
                       catch() { ... } // from try @ 005ea940 with catch @ 005ea940
                       catch() { ... } // from try @ 005eab30 with catch @ 005ea940
                       catch() { ... } // from try @ 005eaca0 with catch @ 005ea940 */
                lVar17 = *(long *)(lVar21 + 0x18);
              }
                    /* try { // try from 005ea748 to 006ea74f has its CatchHandler @ 005ea754 */
              uVar9 = lVar17 - *(long *)(*(long *)(lVar10 + 0x20) + 0x18);
                    /* try { // try from 005ea750 to 006ea793 has its CatchHandler @ 005ea4ec */
                    /* catch() { ... } // from try @ 005ea748 with catch @ 005ea754 */
              if (0 < (int)(uVar9 >> 2)) {
                lVar10 = *(long *)(*(long *)(lVar10 + 0x20) + 0x28);
                if (lVar10 == 0) {
                    /* catch() { ... } // from try @ 005ea5f8 with catch @ 005ea7f0 */
                  *(undefined4 *)(param_3 + 0x28) = 0;
                }
                else {
                    /* catch() { ... } // from try @ 005ea67c with catch @ 005ea768 */
                    /* catch() { ... } // from try @ 005ea628 with catch @ 005ea770 */
                  *(undefined4 *)(param_3 + 0x28) =
                       *(undefined4 *)(lVar10 + ((long)(uVar9 * 0x40000000 + -0x100000000) >> 0x1e))
                  ;
                }
                break;
              }
            }
            *(undefined4 *)(param_3 + 0x28) = 0xffffffff;
            break;
          case 'n':
            if (((lVar21 == 0) ||
                ((((int)(*(long **)(lVar21 + 8))[1] == 6 &&
                  (*(char *)(**(long **)(lVar21 + 8) + 10) == '\0')) &&
                 (0 < *(int *)(lVar21 + 0x24))))) ||
               ((plVar14 = *(long **)(lVar21 + -0x20), (int)plVar14[1] != 6 ||
                (*(char *)(*plVar14 + 10) != '\0')))) {
LAB_005ea954:
              *(undefined8 *)(param_3 + 0x10) = 0;
            }
            else {
              plVar11 = (long *)(*(long *)(*plVar14 + 0x20) + 0x18);
              lVar10 = *plVar11;
              if (*(long *)(param_1 + 0x28) == lVar21 + -0x28) {
                lVar17 = *(long *)(param_1 + 0x30);
                *(long *)(lVar21 + -0x10) = lVar17;
                plVar11 = (long *)(*(long *)(*plVar14 + 0x20) + 0x18);
              }
              else {
                lVar17 = *(long *)(lVar21 + -0x10);
              }
                    /* try { // try from 005ea794 to 006ea79b has its CatchHandler @ 005ea7a0 */
                    /* catch() { ... } // from try @ 005ea794 with catch @ 005ea7a0 */
              uVar2 = *(uint *)(lVar10 + ((lVar17 - *plVar11) * 0x40000000 + -0x100000000 >> 0x1e));
                    /* catch() { ... } // from try @ 005ea658 with catch @ 005ea7a4 */
                    /* catch() { ... } // from try @ 005ea5dc with catch @ 005ea7b4 */
              if ((0x21 < (uVar2 & 0x3f)) || ((1L << ((ulong)uVar2 & 0x3f) & 0x230000000U) == 0))
              goto LAB_005ea954;
                    /* try { // try from 005ea7d8 to 006ea7df has its CatchHandler @ 005ea7e4 */
              lVar10 = FUN_005eb12c(param_1,lVar21 + -0x28,uVar2 >> 6 & 0xff,param_3 + 8);
              *(long *)(param_3 + 0x10) = lVar10;
                    /* catch() { ... } // from try @ 005ea7d8 with catch @ 005ea7e4 */
              if (lVar10 != 0) break;
            }
            *(undefined **)(param_3 + 0x10) = &DAT_0068fbeb;
            *(undefined8 *)(param_3 + 8) = 0;
            break;
          case 'u':
            *(uint *)(param_3 + 0x2c) = (uint)*(byte *)(lVar20 + 0xb);
          }
          cVar8 = param_2[lVar19];
          lVar19 = lVar19 + 1;
        } while (cVar8 != '\0');
        bVar3 = false;
      }
      goto LAB_005ea97c;
    }
  }
  else if (*(int *)(param_3 + 0x74) != 0) {
    lVar21 = *(long *)(param_1 + 0x50) + (long)*(int *)(param_3 + 0x74) * 0x28;
    lVar20 = **(long **)(lVar21 + 8);
    goto joined_r0x005ea6c8;
  }
                    /* try { // try from 005ea6cc to 006ea747 has its CatchHandler @ 005ea4ec */
  *(undefined8 *)(param_3 + 0x30) = 0xffffffffffffffff;
  *(undefined4 *)(param_3 + 0x28) = 0xffffffff;
  *(undefined **)(param_3 + 0x10) = &DAT_0068fbeb;
  *(undefined **)(param_3 + 8) = &DAT_0068fbeb;
  *(char **)(param_3 + 0x20) = "=(tail call)";
  *(undefined **)(param_3 + 0x18) = &UNK_006999ee;
  FUN_005ef46c(param_3 + 0x38,"=(tail call)",0x3c);
  lVar20 = 0;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  bVar3 = true;
  uVar18 = 1;
LAB_005ea97c:
  pcVar4 = strchr(param_2,0x66);
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(param_1 + 0x10);
    if (bVar3) {
      uVar15 = 0;
      plVar11 = plVar14;
    }
    else {
      *plVar14 = lVar20;
      plVar11 = *(long **)(param_1 + 0x10);
      uVar15 = 6;
    }
    *(undefined4 *)(plVar14 + 1) = uVar15;
    if (*(long *)(param_1 + 0x38) - (long)plVar11 < 0x11) {
      FUN_005ebbb8(param_1,1);
      plVar11 = *(long **)(param_1 + 0x10);
    }
    *(long **)(param_1 + 0x10) = plVar11 + 2;
  }
  pcVar4 = strchr(param_2,0x4c);
  if (pcVar4 != (char *)0x0) {
    if ((bVar3) || (*(char *)(lVar20 + 10) != '\0')) {
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      uVar15 = 0;
      puVar16 = puVar12;
    }
    else {
      uVar5 = FUN_005f3db4(param_1,0,0);
                    /* try { // try from 005eaa74 to 006eaa7b has its CatchHandler @ 005eac00 */
      if (0 < *(int *)(*(long *)(lVar20 + 0x20) + 0x54)) {
        lVar19 = *(long *)(*(long *)(lVar20 + 0x20) + 0x28);
        lVar21 = 0;
        do {
          puVar6 = (undefined4 *)FUN_005f49e8(param_1,uVar5,*(undefined4 *)(lVar19 + lVar21 * 4));
                    /* try { // try from 005eaa94 to 006eaa9b has its CatchHandler @ 005eac10 */
          *puVar6 = 1;
          puVar6[2] = 1;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(*(long *)(lVar20 + 0x20) + 0x54));
      }
      puVar16 = *(undefined8 **)(param_1 + 0x10);
                    /* try { // try from 005eaab8 to 006eaadf has its CatchHandler @ 005eac00 */
      uVar15 = 5;
      *puVar16 = uVar5;
      puVar12 = *(undefined8 **)(param_1 + 0x10);
    }
                    /* try { // try from 005eaa04 to 006eaa17 has its CatchHandler @ 005ead78 */
    *(undefined4 *)(puVar16 + 1) = uVar15;
    if (*(long *)(param_1 + 0x38) - (long)puVar12 < 0x11) {
                    /* try { // try from 005eaa18 to 006eaa2b has its CatchHandler @ 005ead0c */
      FUN_005ebbb8(param_1,1);
      puVar12 = *(undefined8 **)(param_1 + 0x10);
    }
                    /* try { // try from 005eaa2c to 006eaa47 has its CatchHandler @ 005eaca8 */
    *(undefined8 **)(param_1 + 0x10) = puVar12 + 2;
  }
  return uVar18;
}


