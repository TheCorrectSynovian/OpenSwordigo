/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00606484
 * Function: FUN_00606484
 * Signature: undefined FUN_00606484(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00606484(FILE *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined1 (*pauVar17) [12];
  undefined1 (*pauVar18) [12];
  undefined1 *puVar19;
  bool bVar20;
  size_t sVar21;
  size_t sVar22;
  size_t sVar23;
  size_t sVar24;
  long *plVar25;
  undefined4 *puVar26;
  long *plVar27;
  long *plVar28;
  int *piVar29;
  undefined8 *puVar30;
  ulong uVar31;
  undefined1 (*pauVar32) [12];
  long *plVar33;
  long lVar34;
  char *pcVar35;
  ulong uVar36;
  long lVar37;
  uint *puVar38;
  undefined2 *puVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint *puVar46;
  int iVar47;
  uint uVar48;
  int iVar50;
  int iVar51;
  int iVar52;
  undefined1 auVar49 [16];
  int iVar54;
  int iVar55;
  int iVar56;
  undefined1 auVar53 [16];
  uint local_a4;
  ulong local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
                    /* try { // try from 006064a8 to 007064cf has its CatchHandler @ 006066a8 */
  local_68 = *(long *)(lVar4 + 0x28);
  local_6c = 1000;
  sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006064f0 to 00706517 has its CatchHandler @ 00606698 */
  local_6c = 0xb;
  sVar22 = fwrite(&local_6c,4,1,param_1);
  bVar20 = false;
  if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
  sVar21 = fwrite("AB.POD.2.0",0xb,1,param_1);
  if (sVar21 == 1) {
                    /* try { // try from 00606538 to 0070655f has its CatchHandler @ 00606688 */
    local_6c = 0x800003e8;
    sVar21 = fwrite(&local_6c,4,1,param_1);
    local_6c = 0;
    sVar22 = fwrite(&local_6c,4,1,param_1);
    bVar20 = false;
                    /* try { // try from 00606580 to 007065a7 has its CatchHandler @ 00606680 */
    if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      sVar21 = strlen(param_2);
      uVar48 = (int)sVar21 + 1;
      local_6c = 0x3ea;
      sVar21 = fwrite(&local_6c,4,1,param_1);
      local_6c = uVar48;
                    /* try { // try from 006065d4 to 007065fb has its CatchHandler @ 00606888 */
      sVar22 = fwrite(&local_6c,4,1,param_1);
      bVar20 = false;
      if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
      if ((uVar48 != 0) && (sVar21 = fwrite(param_2,(ulong)uVar48,1,param_1), sVar21 != 1))
      goto LAB_0060c5d8;
                    /* try { // try from 00606638 to 0070665f has its CatchHandler @ 00606678 */
      local_6c = 0x800003ea;
      sVar21 = fwrite(&local_6c,4,1,param_1);
      local_6c = 0;
                    /* try { // try from 00606660 to 007066db has its CatchHandler @ 00606418 */
      sVar22 = fwrite(&local_6c,4,1,param_1);
      bVar20 = false;
                    /* catch() { ... } // from try @ 00606638 with catch @ 00606678 */
      if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
    }
                    /* catch() { ... } // from try @ 00606580 with catch @ 00606680 */
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
                    /* catch() { ... } // from try @ 00606538 with catch @ 00606688 */
      sVar21 = strlen(param_3);
      uVar48 = (int)sVar21 + 1;
                    /* catch() { ... } // from try @ 006064f0 with catch @ 00606698 */
                    /* catch() { ... } // from try @ 006064a8 with catch @ 006066a8 */
      local_6c = 0x3eb;
      sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00606460 with catch @ 006066b8 */
      local_6c = uVar48;
                    /* try { // try from 006066dc to 007067db has its CatchHandler @ 006068f4 */
      sVar22 = fwrite(&local_6c,4,1,param_1);
      bVar20 = false;
      if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
      if ((uVar48 != 0) && (sVar21 = fwrite(param_3,(ulong)uVar48,1,param_1), sVar21 != 1))
      goto LAB_0060c5d8;
      local_6c = 0x800003eb;
      sVar21 = fwrite(&local_6c,4,1,param_1);
      local_6c = 0;
      sVar22 = fwrite(&local_6c,4,1,param_1);
      bVar20 = false;
      if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
    }
    local_6c = 0x3e9;
    sVar21 = fwrite(&local_6c,4,1,param_1);
    local_6c = 0;
    sVar22 = fwrite(&local_6c,4,1,param_1);
    bVar20 = false;
    if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
    local_6c = 2000;
    sVar21 = fwrite(&local_6c,4,1,param_1);
    local_6c = 0xc;
    sVar22 = fwrite(&local_6c,4,1,param_1);
    bVar20 = false;
    if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
    local_6c = *param_4;
                    /* try { // try from 00606818 to 00706853 has its CatchHandler @ 0060686c */
    sVar21 = fwrite(&local_6c,4,1,param_1);
    local_6c = param_4[1];
                    /* catch() { ... } // from try @ 00606818 with catch @ 0060686c */
    sVar22 = fwrite(&local_6c,4,1,param_1);
    local_6c = param_4[2];
                    /* catch() { ... } // from try @ 006065d4 with catch @ 00606888 */
    sVar23 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006068bc to 007068eb has its CatchHandler @ 006068f4 */
    bVar20 = false;
    if ((sVar21 != 1) || ((sVar22 != 1 || (sVar23 != 1)))) goto LAB_0060c5dc;
                    /* try { // try from 006068ec to 007068ff has its CatchHandler @ 00606418 */
    local_6c = 0x800007d0;
                    /* catch() { ... } // from try @ 006066dc with catch @ 006068f4
                       catch() { ... } // from try @ 006068bc with catch @ 006068f4 */
    sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00606914 with catch @ 00606900 */
    local_6c = 0;
                    /* try { // try from 00606910 to 00706913 has its CatchHandler @ 00606924 */
    sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00606914 to 00706937 has its CatchHandler @ 00606900 */
    bVar20 = false;
                    /* catch() { ... } // from try @ 00606910 with catch @ 00606924 */
    if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
    local_6c = 0x7d1;
    sVar21 = fwrite(&local_6c,4,1,param_1);
    local_6c = 0xc;
    sVar22 = fwrite(&local_6c,4,1,param_1);
    bVar20 = false;
    if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
    local_6c = param_4[3];
    sVar21 = fwrite(&local_6c,4,1,param_1);
    local_6c = param_4[4];
    sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006069ec to 00706a2f has its CatchHandler @ 006069ec
                       catch() { ... } // from try @ 006069ec with catch @ 006069ec
                       catch() { ... } // from try @ 00606d9c with catch @ 006069ec
                       catch() { ... } // from try @ 00607094 with catch @ 006069ec */
    local_6c = param_4[5];
    sVar23 = fwrite(&local_6c,4,1,param_1);
    bVar20 = false;
                    /* try { // try from 00606a30 to 00706a43 has its CatchHandler @ 00606f9c */
    if ((sVar21 != 1) || ((sVar22 != 1 || (sVar23 != 1)))) goto LAB_0060c5dc;
                    /* try { // try from 00606a58 to 00706a6b has its CatchHandler @ 00606ff0 */
    local_6c = 0x800007d1;
    sVar21 = fwrite(&local_6c,4,1,param_1);
    local_6c = 0;
    sVar22 = fwrite(&local_6c,4,1,param_1);
    bVar20 = false;
    if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 00606aa4 to 00706acb has its CatchHandler @ 00606e64 */
    local_6c = 0x7d2;
    sVar21 = fwrite(&local_6c,4,1,param_1);
    local_6c = 4;
    sVar22 = fwrite(&local_6c,4,1,param_1);
    bVar20 = false;
    if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 00606aec to 00706b13 has its CatchHandler @ 00606ff0 */
    local_6c = param_4[6];
    sVar21 = fwrite(&local_6c,4,1,param_1);
    if (sVar21 == 1) {
                    /* try { // try from 00606b38 to 00706b3b has its CatchHandler @ 00606f98 */
      local_6c = 0x800007d2;
      sVar21 = fwrite(&local_6c,4,1,param_1);
      local_6c = 0;
      sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00606b64 to 00706b6f has its CatchHandler @ 00606f48 */
      bVar20 = false;
      if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 00606b90 to 00706bb7 has its CatchHandler @ 00606e60 */
      local_6c = 0x7d3;
      sVar21 = fwrite(&local_6c,4,1,param_1);
      local_6c = 4;
      sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00606bb8 to 00706bbf has its CatchHandler @ 00606fa0 */
      bVar20 = false;
      if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
      local_6c = param_4[10];
                    /* try { // try from 00606bf8 to 00706c1f has its CatchHandler @ 00606e10 */
      sVar21 = fwrite(&local_6c,4,1,param_1);
      if (sVar21 == 1) {
        local_6c = 0x800007d3;
        sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00606c40 to 00706c67 has its CatchHandler @ 00606fa0 */
        local_6c = 0;
        sVar22 = fwrite(&local_6c,4,1,param_1);
        bVar20 = false;
        if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
        local_6c = 0x7d4;
        sVar21 = fwrite(&local_6c,4,1,param_1);
        local_6c = 4;
        sVar22 = fwrite(&local_6c,4,1,param_1);
        bVar20 = false;
        if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
        local_6c = param_4[0xe];
                    /* try { // try from 00606cb8 to 00706ccb has its CatchHandler @ 00606f08 */
        sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00606cec to 00706cf7 has its CatchHandler @ 00606e08 */
        if (sVar21 == 1) {
          local_6c = 0x800007d4;
          sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00606d24 to 00706d2f has its CatchHandler @ 00606eb8 */
          local_6c = 0;
          sVar22 = fwrite(&local_6c,4,1,param_1);
          bVar20 = false;
          if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 00606d50 to 00706d77 has its CatchHandler @ 00606e0c */
          local_6c = 0x7d5;
          sVar21 = fwrite(&local_6c,4,1,param_1);
          local_6c = 4;
          sVar22 = fwrite(&local_6c,4,1,param_1);
          bVar20 = false;
                    /* try { // try from 00606d90 to 00706d9b has its CatchHandler @ 00606eb4 */
          if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
          local_6c = param_4[0x12];
                    /* try { // try from 00606d9c to 00706e33 has its CatchHandler @ 006069ec */
          sVar21 = fwrite(&local_6c,4,1,param_1);
          if (sVar21 == 1) {
            local_6c = 0x800007d5;
            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00606cec with catch @ 00606e08 */
            local_6c = 0;
                    /* catch() { ... } // from try @ 00606d50 with catch @ 00606e0c */
            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00606bf8 with catch @ 00606e10 */
            bVar20 = false;
            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 00606e34 to 00707093 has its CatchHandler @ 006070b4 */
            local_6c = 0x7d6;
            sVar21 = fwrite(&local_6c,4,1,param_1);
            local_6c = 4;
                    /* catch() { ... } // from try @ 00606b90 with catch @ 00606e60 */
            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00606aa4 with catch @ 00606e64 */
            bVar20 = false;
            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
            local_6c = param_4[0x13];
            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00606d90 with catch @ 00606eb4 */
            if (sVar21 == 1) {
                    /* catch() { ... } // from try @ 00606d24 with catch @ 00606eb8 */
              local_6c = 0x800007d6;
              sVar21 = fwrite(&local_6c,4,1,param_1);
              local_6c = 0;
              sVar22 = fwrite(&local_6c,4,1,param_1);
              bVar20 = false;
                    /* catch() { ... } // from try @ 00606cb8 with catch @ 00606f08 */
              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
              local_6c = 0x7d7;
              sVar21 = fwrite(&local_6c,4,1,param_1);
              local_6c = 4;
              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00606b64 with catch @ 00606f48 */
              bVar20 = false;
              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
              local_6c = param_4[0x16];
              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00606b38 with catch @ 00606f98 */
              if (sVar21 == 1) {
                    /* catch() { ... } // from try @ 00606a30 with catch @ 00606f9c */
                    /* catch() { ... } // from try @ 00606bb8 with catch @ 00606fa0
                       catch() { ... } // from try @ 00606c40 with catch @ 00606fa0 */
                local_6c = 0x800007d7;
                sVar21 = fwrite(&local_6c,4,1,param_1);
                local_6c = 0;
                sVar22 = fwrite(&local_6c,4,1,param_1);
                bVar20 = false;
                if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* catch() { ... } // from try @ 00606a58 with catch @ 00606ff0
                       catch() { ... } // from try @ 00606aec with catch @ 00606ff0 */
                local_6c = 0x7d8;
                sVar21 = fwrite(&local_6c,4,1,param_1);
                local_6c = 4;
                sVar22 = fwrite(&local_6c,4,1,param_1);
                bVar20 = false;
                if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                local_6c = param_4[0x1a];
                sVar21 = fwrite(&local_6c,4,1,param_1);
                if (sVar21 == 1) {
                    /* try { // try from 00607094 to 007070b7 has its CatchHandler @ 006069ec */
                  local_6c = 0x800007d8;
                  sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00606e34 with catch @ 006070b4 */
                  local_6c = 0;
                  sVar22 = fwrite(&local_6c,4,1,param_1);
                  bVar20 = false;
                  if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                  local_6c = 0x7d9;
                  sVar21 = fwrite(&local_6c,4,1,param_1);
                  local_6c = 4;
                  sVar22 = fwrite(&local_6c,4,1,param_1);
                  bVar20 = false;
                  if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                  local_6c = param_4[0x1e];
                  sVar21 = fwrite(&local_6c,4,1,param_1);
                  if (sVar21 == 1) {
                    local_6c = 0x800007d9;
                    sVar21 = fwrite(&local_6c,4,1,param_1);
                    local_6c = 0;
                    sVar22 = fwrite(&local_6c,4,1,param_1);
                    bVar20 = false;
                    if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    local_6c = 0x7e0;
                    sVar21 = fwrite(&local_6c,4,1,param_1);
                    local_6c = 4;
                    sVar22 = fwrite(&local_6c,4,1,param_1);
                    bVar20 = false;
                    if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    local_6c = param_4[0x1f];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006072c8 with catch @ 00607214
                       catch(type#1 @ 00000000) { ... } // from try @ 00607338 with catch @ 00607214
                        */
                    sVar21 = fwrite(&local_6c,4,1,param_1);
                    if (sVar21 == 1) {
                    /* try { // try from 00607258 to 0070727f has its CatchHandler @ 006072e4 */
                      local_6c = 0x800007e0;
                      sVar21 = fwrite(&local_6c,4,1,param_1);
                      local_6c = 0;
                      sVar22 = fwrite(&local_6c,4,1,param_1);
                      bVar20 = false;
                      if ((sVar21 == 1) && (sVar22 == 1)) {
                    /* try { // try from 006072a0 to 007072c7 has its CatchHandler @ 006072dc */
                        if (param_4[6] != 0) {
                          uVar36 = 0;
                          do {
                            local_6c = 0x7da;
                    /* try { // try from 006072c8 to 00707307 has its CatchHandler @ 00607214 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006072a0 with catch @ 006072dc
                        */
                            local_6c = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00607258 with catch @ 006072e4
                        */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *(long *)(param_4 + 8);
                    /* try { // try from 00607308 to 00707337 has its CatchHandler @ 00607340 */
                            puVar46 = (uint *)(lVar40 + uVar36 * 0x18);
                            if (puVar46 != (uint *)0x0) {
                              local_6c = 8000;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00607338 to 00707343 has its CatchHandler @ 00607214 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00607308 with catch @ 00607340
                        */
                              local_6c = 4;
                    /* catch() { ... } // from try @ 00607358 with catch @ 00607344 */
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                    /* try { // try from 00607354 to 00707357 has its CatchHandler @ 00607368 */
                    /* try { // try from 00607358 to 0070737b has its CatchHandler @ 00607344 */
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              local_6c = *puVar46;
                    /* catch() { ... } // from try @ 00607354 with catch @ 00607368 */
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              if (sVar21 != 1) goto LAB_0060c5d8;
                              local_6c = 0x80001f40;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 8);
                            }
                            local_6c = 0x1f41;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar40 + uVar36 * 0x18 + 4);
                    /* try { // try from 00607478 to 0070750f has its CatchHandler @ 00607478
                       catch() { ... } // from try @ 00607478 with catch @ 00607478
                       catch() { ... } // from try @ 00607514 with catch @ 00607478
                       catch() { ... } // from try @ 00607604 with catch @ 00607478
                       catch() { ... } // from try @ 0060762c with catch @ 00607478
                       catch() { ... } // from try @ 006076d8 with catch @ 00607478
                       catch() { ... } // from try @ 00607730 with catch @ 00607478
                       catch() { ... } // from try @ 006077ec with catch @ 00607478
                       catch() { ... } // from try @ 00607954 with catch @ 00607478
                       catch() { ... } // from try @ 00607abc with catch @ 00607478
                       catch() { ... } // from try @ 00607f5c with catch @ 00607478
                       catch() { ... } // from try @ 00607fb0 with catch @ 00607478
                       catch() { ... } // from try @ 00608004 with catch @ 00607478
                       catch() { ... } // from try @ 0060809c with catch @ 00607478 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80001f41;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *(long *)(param_4 + 8);
                            local_6c = 0x1f42;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                    /* try { // try from 00607510 to 00707513 has its CatchHandler @ 006080a8 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00607514 to 0070759f has its CatchHandler @ 00607478 */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar40 + uVar36 * 0x18 + 8);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80001f42;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006075a0 to 007075b3 has its CatchHandler @ 006080a4 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* try { // try from 006075b4 to 007075c7 has its CatchHandler @ 006080bc */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *(long *)(param_4 + 8);
                    /* try { // try from 006075cc to 007075df has its CatchHandler @ 00608070 */
                            local_6c = 0x1f43;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00607600 to 00707603 has its CatchHandler @ 006080bc */
                    /* try { // try from 00607604 to 00707627 has its CatchHandler @ 00607478 */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar40 + uVar36 * 0x18 + 0xc);
                    /* try { // try from 00607628 to 0070762b has its CatchHandler @ 0060806c */
                    /* try { // try from 0060762c to 007076cb has its CatchHandler @ 00607478 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80001f43;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            puVar46 = *(uint **)(*(long *)(param_4 + 8) + uVar36 * 0x18 + 0x10);
                            if (puVar46 != (uint *)0x0) {
                              uVar48 = param_4[0x1e];
                              uVar41 = (ulong)uVar48;
                    /* try { // try from 006076cc to 007076d7 has its CatchHandler @ 0060801c */
                              local_6c = 0x1f44;
                    /* try { // try from 006076d8 to 0070772b has its CatchHandler @ 00607478 */
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 0060772c to 0070772f has its CatchHandler @ 00608008 */
                              if (uVar48 != 0) {
                    /* try { // try from 00607730 to 007077df has its CatchHandler @ 00607478 */
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar41 = uVar41 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar41 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                              local_6c = 0x80001f44;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            }
                    /* try { // try from 006077e0 to 007077eb has its CatchHandler @ 00607fb8 */
                    /* try { // try from 006077ec to 00707833 has its CatchHandler @ 00607478 */
                            local_6c = 0x800007da;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            uVar36 = uVar36 + 1;
                    /* try { // try from 00607834 to 00707847 has its CatchHandler @ 00607fb4 */
                          } while (uVar36 < (uint)param_4[6]);
                        }
                        if (param_4[10] != 0) {
                          lVar40 = 0;
                          uVar36 = 0;
                          do {
                    /* try { // try from 00607854 to 00707867 has its CatchHandler @ 00608160 */
                            local_6c = 0x7db;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *(long *)(param_4 + 0xc);
                    /* try { // try from 006078a0 to 007078c7 has its CatchHandler @ 00607ec0 */
                            if (lVar37 + lVar40 != 0) {
                              local_6c = 7000;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 4;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006078e8 to 0070790f has its CatchHandler @ 00608160 */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              local_6c = *(uint *)(lVar37 + lVar40);
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              if (sVar21 != 1) goto LAB_0060c5d8;
                    /* try { // try from 00607948 to 00707953 has its CatchHandler @ 00607f64 */
                              local_6c = 0x80001b58;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00607954 to 0070799b has its CatchHandler @ 00607478 */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *(long *)(param_4 + 0xc);
                            }
                    /* try { // try from 0060799c to 007079af has its CatchHandler @ 00607f60 */
                            local_6c = 0x1b59;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006079bc to 007079cf has its CatchHandler @ 00608128 */
                            local_6c = 0xc;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = lVar37 + lVar40;
                            local_6c = *(undefined4 *)(lVar37 + 4);
                    /* try { // try from 00607a08 to 00707a2f has its CatchHandler @ 00607e70 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(undefined4 *)(lVar37 + 8);
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00607a50 to 00707a77 has its CatchHandler @ 00608128 */
                            local_6c = *(uint *)(lVar37 + 0xc);
                            sVar23 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || ((sVar22 != 1 || (sVar23 != 1))))
                            goto LAB_0060c5dc;
                    /* try { // try from 00607ab0 to 00707abb has its CatchHandler @ 00607f10 */
                    /* try { // try from 00607abc to 00707e93 has its CatchHandler @ 00607478 */
                            local_6c = 0x80001b59;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *(long *)(param_4 + 0xc);
                            local_6c = 0x1b5a;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + 0x10);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80001b5a;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *(long *)(param_4 + 0xc);
                            if (*(int *)(lVar37 + lVar40 + 0x10) != 1) {
                              local_6c = 0x1b5b;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 4;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              local_6c = *(uint *)(lVar37 + lVar40 + 0x14);
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              if (sVar21 != 1) goto LAB_0060c5d8;
                              local_6c = 0x80001b5b;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *(long *)(param_4 + 0xc);
                              local_6c = 0x1b5c;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 4;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              local_6c = *(uint *)(lVar37 + lVar40 + 0x18);
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              if (sVar21 != 1) goto LAB_0060c5d8;
                              local_6c = 0x80001b5c;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *(long *)(param_4 + 0xc);
                              local_6c = 0x1b5d;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 4;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              local_6c = *(uint *)(lVar37 + lVar40 + 0x1c);
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              if (sVar21 != 1) goto LAB_0060c5d8;
                    /* catch() { ... } // from try @ 00607a08 with catch @ 00607e70 */
                              local_6c = 0x80001b5d;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00607e94 to 00707f5b has its CatchHandler @ 006080a0 */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *(long *)(param_4 + 0xc);
                              if (*(int *)(lVar37 + lVar40 + 0x10) == 2) {
                    /* catch() { ... } // from try @ 006078a0 with catch @ 00607ec0 */
                                local_6c = 0x1b5e;
                                sVar21 = fwrite(&local_6c,4,1,param_1);
                                local_6c = 4;
                                sVar22 = fwrite(&local_6c,4,1,param_1);
                                bVar20 = false;
                                if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* catch() { ... } // from try @ 00607ab0 with catch @ 00607f10 */
                                local_6c = *(uint *)(lVar37 + lVar40 + 0x20);
                                sVar21 = fwrite(&local_6c,4,1,param_1);
                                if (sVar21 != 1) goto LAB_0060c5d8;
                    /* try { // try from 00607f5c to 00707f87 has its CatchHandler @ 00607478 */
                    /* catch() { ... } // from try @ 0060799c with catch @ 00607f60 */
                    /* catch() { ... } // from try @ 00607948 with catch @ 00607f64 */
                                local_6c = 0x80001b5e;
                                sVar21 = fwrite(&local_6c,4,1,param_1);
                                local_6c = 0;
                    /* try { // try from 00607f88 to 00707faf has its CatchHandler @ 006080a0 */
                                sVar22 = fwrite(&local_6c,4,1,param_1);
                                bVar20 = false;
                                if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                                lVar37 = *(long *)(param_4 + 0xc);
                    /* try { // try from 00607fb0 to 00707fdb has its CatchHandler @ 00607478 */
                    /* catch() { ... } // from try @ 00607834 with catch @ 00607fb4 */
                    /* catch() { ... } // from try @ 006077e0 with catch @ 00607fb8 */
                                local_6c = 0x1b5f;
                                sVar21 = fwrite(&local_6c,4,1,param_1);
                                local_6c = 4;
                    /* try { // try from 00607fdc to 00708003 has its CatchHandler @ 006080a0 */
                                sVar22 = fwrite(&local_6c,4,1,param_1);
                                bVar20 = false;
                                if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                                local_6c = *(uint *)(lVar37 + lVar40 + 0x24);
                    /* try { // try from 00608004 to 0070803f has its CatchHandler @ 00607478 */
                    /* catch() { ... } // from try @ 0060772c with catch @ 00608008 */
                    /* catch() { ... } // from try @ 006076cc with catch @ 0060801c */
                                sVar21 = fwrite(&local_6c,4,1,param_1);
                                if (sVar21 != 1) goto LAB_0060c5d8;
                    /* try { // try from 00608040 to 0070809b has its CatchHandler @ 006080a0 */
                                local_6c = 0x80001b5f;
                                sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00607628 with catch @ 0060806c */
                                local_6c = 0;
                    /* catch() { ... } // from try @ 006075cc with catch @ 00608070 */
                                sVar22 = fwrite(&local_6c,4,1,param_1);
                                bVar20 = false;
                                if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              }
                            }
                    /* try { // try from 0060809c to 007081c7 has its CatchHandler @ 00607478 */
                    /* catch() { ... } // from try @ 00607e94 with catch @ 006080a0
                       catch() { ... } // from try @ 00607f88 with catch @ 006080a0
                       catch() { ... } // from try @ 00607fdc with catch @ 006080a0
                       catch() { ... } // from try @ 00608040 with catch @ 006080a0 */
                    /* catch() { ... } // from try @ 006075a0 with catch @ 006080a4 */
                            local_6c = 0x800007db;
                    /* catch() { ... } // from try @ 00607510 with catch @ 006080a8 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 006075b4 with catch @ 006080bc
                       catch() { ... } // from try @ 00607600 with catch @ 006080bc */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            uVar36 = uVar36 + 1;
                            lVar40 = lVar40 + 0x28;
                          } while (uVar36 < (uint)param_4[10]);
                        }
                        if (param_4[0x1a] != 0) {
                          local_78 = 0;
                          plVar3 = (long *)(param_4 + 0x1c);
                          lVar40 = 0xa8;
                          do {
                            local_6c = 0x7df;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 006079bc with catch @ 00608128
                       catch() { ... } // from try @ 00607a50 with catch @ 00608128 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* catch() { ... } // from try @ 00607854 with catch @ 00608160
                       catch() { ... } // from try @ 006078e8 with catch @ 00608160 */
                            local_6c = 0xbd2;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40);
                    /* catch() { ... } // from try @ 00609350 with catch @ 006081c8
                       catch() { ... } // from try @ 0060acf0 with catch @ 006081c8 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bd2;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            pcVar35 = *(char **)(lVar37 + lVar40 + -0xa8);
                            sVar21 = strlen(pcVar35);
                            if (pcVar35 != (char *)0x0) {
                              uVar48 = (int)sVar21 + 1;
                    /* try { // try from 0060825c to 00708283 has its CatchHandler @ 0060ac14 */
                              local_6c = 3000;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = uVar48;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 006082c4 to 007082df has its CatchHandler @ 0060aa14 */
                              if ((uVar48 != 0) &&
                                 (sVar21 = fwrite(pcVar35,(ulong)uVar48,1,param_1), sVar21 != 1))
                              goto LAB_0060c5d8;
                              local_6c = 0x80000bb8;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608318 to 0070833f has its CatchHandler @ 00609bf0 */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *plVar3;
                            }
                            local_6c = 0xbb9;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608360 to 00708387 has its CatchHandler @ 0060aa14 */
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0xa0);
                    /* try { // try from 0060839c to 007083a3 has its CatchHandler @ 0060abb8 */
                    /* try { // try from 006083a4 to 007083b7 has its CatchHandler @ 0060ab48 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bb9;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006083ec to 00708413 has its CatchHandler @ 00609e04 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* try { // try from 00608438 to 0070843f has its CatchHandler @ 0060a838 */
                            local_6c = 0xbc1;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608440 to 00708453 has its CatchHandler @ 0060a7d0 */
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x9c);
                    /* try { // try from 00608480 to 007084a7 has its CatchHandler @ 00609c44 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                    /* try { // try from 006084cc to 007084d3 has its CatchHandler @ 0060a554 */
                            local_6c = 0x80000bc1;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006084d4 to 007084e7 has its CatchHandler @ 0060a4ec */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* try { // try from 00608514 to 0070853b has its CatchHandler @ 00609be8 */
                            local_6c = 0xbc2;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                    /* try { // try from 00608540 to 0070855f has its CatchHandler @ 00609c40 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x98);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608598 to 007085bf has its CatchHandler @ 00609ae0 */
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bc2;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006085e0 to 00708607 has its CatchHandler @ 00609c40 */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbc3;
                    /* try { // try from 0060860c to 00708627 has its CatchHandler @ 0060a6bc */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x94);
                    /* try { // try from 00608660 to 00708687 has its CatchHandler @ 00609b98 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bc3;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006086a8 to 007086cf has its CatchHandler @ 0060a6bc */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* try { // try from 006086d4 to 007086f3 has its CatchHandler @ 00609e0c */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbc4;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 0060872c to 00708753 has its CatchHandler @ 00609b30 */
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x90);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                    /* try { // try from 00608774 to 0070879b has its CatchHandler @ 00609e0c */
                            local_6c = 0x80000bc4;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                    /* try { // try from 006087a4 to 007087a7 has its CatchHandler @ 0060ac14 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* try { // try from 006087c8 to 007087db has its CatchHandler @ 0060a364 */
                            local_6c = 0xbc5;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006087e4 to 007087f3 has its CatchHandler @ 0060a320 */
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x8c);
                    /* try { // try from 0060883c to 0070884f has its CatchHandler @ 0060a4e8 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                    /* try { // try from 00608858 to 00708867 has its CatchHandler @ 0060a4a8 */
                            local_6c = 0x80000bc5;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                    /* try { // try from 0060888c to 00708893 has its CatchHandler @ 0060a4a4 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* try { // try from 0060889c to 007088ab has its CatchHandler @ 0060a46c */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbc6;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006088e4 to 007088f7 has its CatchHandler @ 0060a360 */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 00608900 to 0070890f has its CatchHandler @ 0060a2e0 */
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x88);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608934 to 0070893b has its CatchHandler @ 0060ab44 */
                            if (sVar21 != 1) goto LAB_0060c5d8;
                    /* try { // try from 00608944 to 00708953 has its CatchHandler @ 0060aadc */
                            local_6c = 0x80000bc6;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608970 to 00708973 has its CatchHandler @ 0060ac14 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* try { // try from 00608998 to 0070899b has its CatchHandler @ 0060ac04 */
                            local_6c = 0xbc7;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x84);
                    /* try { // try from 006089fc to 00708a2b has its CatchHandler @ 0060ac14 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bc7;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* try { // try from 00608a84 to 00708a93 has its CatchHandler @ 0060a290 */
                            local_6c = 0xbc8;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608ab4 to 00708adb has its CatchHandler @ 00609b8c */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x80);
                    /* try { // try from 00608ae0 to 00708af3 has its CatchHandler @ 0060a23c */
                    /* try { // try from 00608af4 to 00708b03 has its CatchHandler @ 0060a204 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bc8;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608b30 to 00708b63 has its CatchHandler @ 0060a988 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* try { // try from 00608b64 to 00708b6f has its CatchHandler @ 0060a14c */
                    /* try { // try from 00608b70 to 00708b83 has its CatchHandler @ 0060a098 */
                            local_6c = 0xbc9;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                    /* try { // try from 00608b98 to 00708bcb has its CatchHandler @ 0060a884 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x7c);
                    /* try { // try from 00608bcc to 00708bd7 has its CatchHandler @ 00609f58 */
                    /* try { // try from 00608bd8 to 00708be3 has its CatchHandler @ 00609efc */
                    /* try { // try from 00608be4 to 00708bf3 has its CatchHandler @ 00609ec4 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bc9;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* try { // try from 00608c60 to 00708c6b has its CatchHandler @ 00609e74 */
                            local_6c = 0xbba;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608c6c to 00708c77 has its CatchHandler @ 00609e10 */
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x78);
                    /* try { // try from 00608ca8 to 00708ccf has its CatchHandler @ 00609b80 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bba;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608d08 to 00708d17 has its CatchHandler @ 0060a41c */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* try { // try from 00608d38 to 00708d5f has its CatchHandler @ 00609b94 */
                            local_6c = 0xbbb;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0xc;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608d70 to 00708d83 has its CatchHandler @ 00609e00 */
                            bVar20 = false;
                    /* try { // try from 00608d84 to 00708d93 has its CatchHandler @ 00609dc8 */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = lVar37 + lVar40;
                            local_6c = *(undefined4 *)(lVar37 + -0x74);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608dc0 to 00708df3 has its CatchHandler @ 0060a684 */
                            local_6c = *(undefined4 *)(lVar37 + -0x70);
                    /* try { // try from 00608df4 to 00708dff has its CatchHandler @ 00609dc0 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(uint *)(lVar37 + -0x6c);
                    /* try { // try from 00608e00 to 00708e13 has its CatchHandler @ 00609d68 */
                    /* try { // try from 00608e24 to 00708e57 has its CatchHandler @ 0060a5a0 */
                            sVar23 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if (((sVar21 != 1) || (sVar22 != 1)) || (sVar23 != 1))
                            goto LAB_0060c5dc;
                    /* try { // try from 00608e58 to 00708e63 has its CatchHandler @ 00609d14 */
                    /* try { // try from 00608e64 to 00708e6f has its CatchHandler @ 00609cb8 */
                            local_6c = 0x80000bbb;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608e70 to 00708e7f has its CatchHandler @ 00609c80 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbbc;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0xc;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = lVar37 + lVar40;
                            local_6c = *(undefined4 *)(lVar37 + -0x68);
                    /* try { // try from 00608f10 to 00708f1f has its CatchHandler @ 0060a240 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(undefined4 *)(lVar37 + -100);
                    /* try { // try from 00608f40 to 00708f67 has its CatchHandler @ 00609b88 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(uint *)(lVar37 + -0x60);
                    /* try { // try from 00608f90 to 00708fc3 has its CatchHandler @ 0060a9c0 */
                            sVar23 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if (((sVar21 != 1) || (sVar22 != 1)) || (sVar23 != 1))
                            goto LAB_0060c5dc;
                    /* try { // try from 00608fc4 to 00708fd7 has its CatchHandler @ 0060a1ac */
                    /* try { // try from 00608fd8 to 00708fe3 has its CatchHandler @ 0060a154 */
                            local_6c = 0x80000bbc;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00608fe4 to 00708ff7 has its CatchHandler @ 0060a0f0 */
                    /* try { // try from 00608ff8 to 00709007 has its CatchHandler @ 0060a060 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbbd;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0xc;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* try { // try from 00609064 to 0070906f has its CatchHandler @ 0060a010 */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 00609070 to 0070907b has its CatchHandler @ 00609fac */
                            lVar37 = lVar37 + lVar40;
                            local_6c = *(undefined4 *)(lVar37 + -0x5c);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(undefined4 *)(lVar37 + -0x58);
                    /* try { // try from 006090ac to 007090d3 has its CatchHandler @ 00609b84 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006090e0 to 007090e7 has its CatchHandler @ 00609bec */
                            local_6c = *(uint *)(lVar37 + -0x54);
                    /* try { // try from 00609114 to 00709123 has its CatchHandler @ 00609c48 */
                            sVar23 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if (((sVar21 != 1) || (sVar22 != 1)) || (sVar23 != 1))
                            goto LAB_0060c5dc;
                            local_6c = 0x80000bbd;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00609160 to 0070916b has its CatchHandler @ 0060a3cc */
                    /* try { // try from 0060916c to 00709177 has its CatchHandler @ 0060a368 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbbe;
                    /* try { // try from 006091a8 to 007091cf has its CatchHandler @ 00609b90 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 006091e0 to 007091f3 has its CatchHandler @ 0060a7ac */
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x50);
                    /* try { // try from 006091f4 to 007091ff has its CatchHandler @ 0060a754 */
                    /* try { // try from 00609200 to 00709213 has its CatchHandler @ 0060a6f8 */
                    /* try { // try from 00609214 to 0070921f has its CatchHandler @ 0060a6c0 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bbe;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00609264 to 00709277 has its CatchHandler @ 00609e08 */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                    /* try { // try from 0060927c to 0070928f has its CatchHandler @ 0060aa74 */
                            pcVar35 = *(char **)(lVar37 + lVar40 + -0x48);
                            if (pcVar35 != (char *)0x0) {
                              sVar21 = strlen(pcVar35);
                              uVar48 = (int)sVar21 + 1;
                    /* try { // try from 00609290 to 0070929f has its CatchHandler @ 0060aa18 */
                              local_6c = 0xbbf;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = uVar48;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006092e0 to 00709307 has its CatchHandler @ 0060a7c0 */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if ((uVar48 != 0) &&
                                 (sVar21 = fwrite(pcVar35,(ulong)uVar48,1,param_1), sVar21 != 1))
                              goto LAB_0060c5d8;
                    /* try { // try from 00609328 to 0070934f has its CatchHandler @ 0060a7b0 */
                              local_6c = 0x80000bbf;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                    /* try { // try from 00609350 to 00709b03 has its CatchHandler @ 006081c8 */
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *plVar3;
                            }
                            pcVar35 = *(char **)(lVar37 + lVar40 + -0x40);
                            if (pcVar35 != (char *)0x0) {
                              sVar21 = strlen(pcVar35);
                              uVar48 = (int)sVar21 + 1;
                              local_6c = 0xbc0;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = uVar48;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if ((uVar48 != 0) &&
                                 (sVar21 = fwrite(pcVar35,(ulong)uVar48,1,param_1), sVar21 != 1))
                              goto LAB_0060c5d8;
                              local_6c = 0x80000bc0;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *plVar3;
                            }
                            local_6c = 0xbca;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x38);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bca;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbcb;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x34);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bcb;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbcc;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x30);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bcc;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbcd;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x2c);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bcd;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbce;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x28);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bce;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbcf;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar37 + lVar40 + -0x24);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80000bcf;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            local_6c = 0xbd0;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0x10;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = lVar37 + lVar40;
                            local_6c = *(undefined4 *)(lVar37 + -0x20);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(undefined4 *)(lVar37 + -0x1c);
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(undefined4 *)(lVar37 + -0x18);
                            sVar23 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(uint *)(lVar37 + -0x14);
                    /* catch() { ... } // from try @ 00608598 with catch @ 00609ae0 */
                    /* try { // try from 00609b04 to 0070acef has its CatchHandler @ 0060acf8 */
                            sVar24 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* catch() { ... } // from try @ 0060872c with catch @ 00609b30 */
                            if ((((sVar21 != 1) || (sVar22 != 1)) || (sVar23 != 1)) || (sVar24 != 1)
                               ) goto LAB_0060c5dc;
                            local_6c = 0x80000bd0;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* catch() { ... } // from try @ 00608ca8 with catch @ 00609b80 */
                    /* catch() { ... } // from try @ 006090ac with catch @ 00609b84 */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* catch() { ... } // from try @ 00608f40 with catch @ 00609b88 */
                            lVar37 = *plVar3;
                    /* catch() { ... } // from try @ 00608ab4 with catch @ 00609b8c */
                    /* catch() { ... } // from try @ 006091a8 with catch @ 00609b90 */
                    /* catch() { ... } // from try @ 00608d38 with catch @ 00609b94 */
                    /* catch() { ... } // from try @ 00608660 with catch @ 00609b98 */
                            local_6c = 0xbd1;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0x10;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = lVar37 + lVar40;
                            local_6c = *(undefined4 *)(lVar37 + -0x10);
                    /* catch() { ... } // from try @ 00608514 with catch @ 00609be8 */
                    /* catch() { ... } // from try @ 006090e0 with catch @ 00609bec */
                    /* catch() { ... } // from try @ 00608318 with catch @ 00609bf0 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(undefined4 *)(lVar37 + -0xc);
                    /* catch() { ... } // from try @ 00608540 with catch @ 00609c40
                       catch() { ... } // from try @ 006085e0 with catch @ 00609c40 */
                    /* catch() { ... } // from try @ 00608480 with catch @ 00609c44 */
                    /* catch() { ... } // from try @ 00609114 with catch @ 00609c48 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(undefined4 *)(lVar37 + -8);
                    /* catch() { ... } // from try @ 00608e70 with catch @ 00609c80 */
                            sVar23 = fwrite(&local_6c,4,1,param_1);
                            local_6c = *(uint *)(lVar37 + -4);
                    /* catch() { ... } // from try @ 00608e64 with catch @ 00609cb8 */
                            sVar24 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if (((sVar21 != 1) || (sVar22 != 1)) || ((sVar23 != 1 || (sVar24 != 1)))
                               ) goto LAB_0060c5dc;
                            local_6c = 0x80000bd1;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608e58 with catch @ 00609d14 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = 0x800007df;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608e00 with catch @ 00609d68 */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = lVar40 + 0xb0;
                            local_78 = local_78 + 1;
                          } while (local_78 < (uint)param_4[0x1a]);
                        }
                        if (param_4[0xe] != 0) {
                          plVar3 = (long *)(param_4 + 0x10);
                          local_78 = 0;
                    /* catch() { ... } // from try @ 00608df4 with catch @ 00609dc0 */
                          do {
                    /* catch() { ... } // from try @ 00608d84 with catch @ 00609dc8 */
                            local_6c = 0x7dc;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608d70 with catch @ 00609e00 */
                    /* catch() { ... } // from try @ 006083ec with catch @ 00609e04 */
                            bVar20 = false;
                    /* catch() { ... } // from try @ 00609264 with catch @ 00609e08 */
                    /* catch() { ... } // from try @ 006086d4 with catch @ 00609e0c
                       catch() { ... } // from try @ 00608774 with catch @ 00609e0c */
                    /* catch() { ... } // from try @ 00608c6c with catch @ 00609e10 */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *plVar3;
                            puVar46 = (uint *)(lVar40 + local_78 * 0x158);
                            if (puVar46 != (uint *)0x0) {
                              local_6c = 6000;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 4;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608c60 with catch @ 00609e74 */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              local_6c = *puVar46;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              if (sVar21 != 1) goto LAB_0060c5d8;
                    /* catch() { ... } // from try @ 00608be4 with catch @ 00609ec4 */
                              local_6c = 0x80001770;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608bd8 with catch @ 00609efc */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *plVar3;
                            }
                            local_6c = 0x1771;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608bcc with catch @ 00609f58 */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar40 + local_78 * 0x158 + 4);
                    /* catch() { ... } // from try @ 00609070 with catch @ 00609fac */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80001771;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* catch() { ... } // from try @ 00609064 with catch @ 0060a010 */
                            lVar40 = *plVar3;
                            local_6c = 0x1772;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* catch() { ... } // from try @ 00608ff8 with catch @ 0060a060 */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar40 + local_78 * 0x158 + 8);
                    /* catch() { ... } // from try @ 00608b70 with catch @ 0060a098 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80001772;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608fe4 with catch @ 0060a0f0 */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *plVar3 + local_78 * 0x158;
                            puVar46 = (uint *)(lVar40 + 0x30);
                            uVar48 = *puVar46;
                            uVar36 = (ulong)uVar48;
                            puVar38 = *(uint **)(lVar40 + 0x28);
                            if (puVar38 != (uint *)0x0) {
                              local_6c = 0x1774;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608b64 with catch @ 0060a14c */
                    /* catch() { ... } // from try @ 00608fd8 with catch @ 0060a154 */
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                bVar20 = true;
                                do {
                                  local_6c = *puVar38;
                    /* catch() { ... } // from try @ 00608fc4 with catch @ 0060a1ac */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar36 = uVar36 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar38 = puVar38 + 1;
                                } while (uVar36 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                              local_6c = 0x80001774;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608af4 with catch @ 0060a204 */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* catch() { ... } // from try @ 00608ae0 with catch @ 0060a23c */
                    /* catch() { ... } // from try @ 00608f10 with catch @ 0060a240 */
                              puVar46 = (uint *)(*plVar3 + local_78 * 0x158 + 0x30);
                            }
                            local_6c = 0x1775;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608a84 with catch @ 0060a290 */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *puVar46;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                    /* catch() { ... } // from try @ 00608900 with catch @ 0060a2e0 */
                            local_6c = 0x80001775;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 006087e4 with catch @ 0060a320 */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *plVar3;
                            plVar27 = (long *)(lVar40 + local_78 * 0x158 + 0xe8);
                            if (*plVar27 != 0) {
                    /* catch() { ... } // from try @ 006088e4 with catch @ 0060a360 */
                              lVar37 = lVar40 + local_78 * 0x158;
                    /* catch() { ... } // from try @ 006087c8 with catch @ 0060a364 */
                              uVar48 = *(uint *)(lVar37 + 8);
                              uVar36 = (ulong)uVar48;
                    /* catch() { ... } // from try @ 0060916c with catch @ 0060a368 */
                              plVar25 = operator_new__((ulong)(uVar48 + 7) << 3);
                              bVar20 = *(int *)(lVar37 + 0x3c) != 0;
                              if (bVar20) {
                                *plVar25 = lVar40 + local_78 * 0x158 + 0x38;
                              }
                              uVar43 = (uint)bVar20;
                              uVar44 = uVar43;
                              if (*(int *)(lVar40 + local_78 * 0x158 + 0x54) != 0) {
                                uVar44 = uVar43 + 1;
                                plVar25[uVar43] = lVar40 + local_78 * 0x158 + 0x50;
                    /* catch() { ... } // from try @ 00609160 with catch @ 0060a3cc */
                              }
                              uVar43 = uVar44;
                              if (*(int *)(lVar40 + local_78 * 0x158 + 0x6c) != 0) {
                                uVar43 = uVar44 + 1;
                                plVar25[uVar44] = lVar40 + local_78 * 0x158 + 0x68;
                              }
                              uVar44 = uVar43;
                              if (*(int *)(lVar40 + local_78 * 0x158 + 0x84) != 0) {
                    /* catch() { ... } // from try @ 00608d08 with catch @ 0060a41c */
                                uVar44 = uVar43 + 1;
                                plVar25[uVar43] = lVar40 + local_78 * 0x158 + 0x80;
                              }
                              uVar43 = uVar44;
                              if (*(int *)(lVar40 + local_78 * 0x158 + 0xa4) != 0) {
                                uVar43 = uVar44 + 1;
                                plVar25[uVar44] = lVar40 + local_78 * 0x158 + 0xa0;
                              }
                    /* catch() { ... } // from try @ 0060889c with catch @ 0060a46c */
                              uVar44 = uVar43;
                              if (*(int *)(lVar40 + local_78 * 0x158 + 0xbc) != 0) {
                                uVar44 = uVar43 + 1;
                                plVar25[uVar43] = lVar40 + local_78 * 0x158 + 0xb8;
                              }
                              uVar43 = uVar44;
                              if (*(int *)(lVar40 + local_78 * 0x158 + 0xd4) != 0) {
                    /* catch() { ... } // from try @ 0060888c with catch @ 0060a4a4 */
                    /* catch() { ... } // from try @ 00608858 with catch @ 0060a4a8 */
                                uVar43 = uVar44 + 1;
                                plVar25[uVar44] = lVar40 + local_78 * 0x158 + 0xd0;
                              }
                              uVar44 = uVar43;
                              uVar45 = uVar43;
                              if (uVar48 != 0) {
                                lVar37 = *(long *)(lVar40 + local_78 * 0x158 + 0x98);
                                do {
                                  if (*(int *)(lVar37 + 4) != 0) {
                                    plVar25[uVar43] = lVar37;
                                    uVar43 = uVar43 + 1;
                                  }
                    /* catch() { ... } // from try @ 0060883c with catch @ 0060a4e8 */
                                  uVar36 = uVar36 - 1;
                    /* catch() { ... } // from try @ 006084d4 with catch @ 0060a4ec */
                                  lVar37 = lVar37 + 0x18;
                                  uVar44 = uVar43;
                                  uVar45 = uVar43;
                                } while (uVar36 != 0);
                              }
                              do {
                                uVar43 = uVar43 - 1;
                                if (uVar43 == 0) break;
                                lVar37 = *plVar25;
                                uVar36 = (ulong)(uVar44 - 1);
                                bVar20 = false;
                                plVar28 = plVar25;
                                do {
                                  plVar33 = plVar28 + 1;
                                  puVar1 = (ulong *)(lVar37 + 0x10);
                                  lVar34 = *plVar33;
                                  lVar37 = lVar34;
                                  if (*(ulong *)(lVar34 + 0x10) < *puVar1) {
                                    lVar37 = *plVar28;
                                    bVar20 = true;
                                    *plVar28 = lVar34;
                                    *plVar33 = lVar37;
                                  }
                                  uVar36 = uVar36 - 1;
                                  plVar28 = plVar33;
                                } while (uVar36 != 0);
                                uVar44 = uVar44 - 1;
                              } while (bVar20);
                    /* catch() { ... } // from try @ 006084cc with catch @ 0060a554 */
                              iVar47 = 0;
                              if (uVar45 != 0) {
                                uVar36 = (ulong)uVar45;
                                plVar28 = plVar25;
                                do {
                                  piVar29 = (int *)*plVar28;
                                  uVar48 = *piVar29 - 1;
                                  if (uVar48 < 0xe) {
                                    iVar50 = *(int *)(&DAT_0069b7b0 + (long)(int)uVar48 * 4);
                                  }
                                  else {
                                    iVar50 = 0;
                                  }
                                  uVar36 = uVar36 - 1;
                                  plVar28 = plVar28 + 1;
                                  iVar47 = iVar47 + piVar29[1] * iVar50;
                                } while (uVar36 != 0);
                              }
                    /* catch() { ... } // from try @ 00608e24 with catch @ 0060a5a0 */
                              puVar46 = (uint *)(lVar40 + local_78 * 0x158);
                              uVar44 = puVar46[0x10];
                              uVar48 = *puVar46;
                              local_6c = 0x177e;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = uVar48 * uVar44;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (*puVar46 != 0) {
                                local_a4 = 0;
                                do {
                                  if (uVar45 != 0) {
                                    uVar36 = 0;
                                    lVar37 = *plVar27;
                                    uVar41 = (ulong)(puVar46[0x10] * local_a4);
                                    lVar40 = lVar37 + uVar41;
                                    do {
                                      puVar38 = (uint *)plVar25[uVar36];
                    /* catch() { ... } // from try @ 00608dc0 with catch @ 0060a684 */
                                      if (*puVar38 < 0xf) {
                                        lVar34 = *(long *)(puVar38 + 4);
                                        uVar48 = 1 << (ulong)(*puVar38 & 0x1f);
                                        if ((uVar48 & 0x3f6) == 0) {
                                          if ((uVar48 & 0x1808) == 0) {
                                            if ((((uVar48 & 0x6400) != 0) && (puVar38[1] != 0)) &&
                                               (sVar21 = fwrite((void *)(lVar37 + uVar41 + lVar34),
                                                                (ulong)puVar38[1],1,param_1),
                                               sVar21 != 1)) goto LAB_0060c5d8;
                                          }
                                          else {
                                            uVar42 = (ulong)puVar38[1];
                                            if (puVar38[1] != 0) {
                                              bVar20 = true;
                    /* catch() { ... } // from try @ 006091f4 with catch @ 0060a754 */
                                              puVar39 = (undefined2 *)(lVar40 + lVar34);
                                              do {
                                                local_6c = CONCAT22(local_6c._2_2_,*puVar39);
                                                sVar21 = fwrite(&local_6c,2,1,param_1);
                                                uVar42 = uVar42 - 1;
                                                bVar20 = (bool)(bVar20 & sVar21 == 1);
                                                puVar39 = puVar39 + 1;
                                              } while (uVar42 != 0);
                                              goto joined_r0x0060a790;
                                            }
                                          }
                                        }
                                        else {
                                          uVar42 = (ulong)puVar38[1];
                                          if (puVar38[1] != 0) {
                                            bVar20 = true;
                                            puVar38 = (uint *)(lVar40 + lVar34);
                                            do {
                                              local_6c = *puVar38;
                    /* catch() { ... } // from try @ 0060860c with catch @ 0060a6bc
                       catch() { ... } // from try @ 006086a8 with catch @ 0060a6bc */
                    /* catch() { ... } // from try @ 00609214 with catch @ 0060a6c0 */
                                              sVar21 = fwrite(&local_6c,4,1,param_1);
                                              uVar42 = uVar42 - 1;
                                              bVar20 = (bool)(bVar20 & sVar21 == 1);
                                              puVar38 = puVar38 + 1;
                    /* catch() { ... } // from try @ 00609200 with catch @ 0060a6f8 */
                                            } while (uVar42 != 0);
joined_r0x0060a790:
                                            if (!bVar20) goto LAB_0060c5d8;
                                          }
                                        }
                                      }
                                      uVar36 = uVar36 + 1;
                                    } while (uVar36 < uVar45);
                                  }
                    /* catch() { ... } // from try @ 006091e0 with catch @ 0060a7ac */
                    /* catch() { ... } // from try @ 00609328 with catch @ 0060a7b0 */
                                  fwrite(&DAT_0069b6ac,(ulong)(uVar44 - iVar47),1,param_1);
                    /* catch() { ... } // from try @ 006092e0 with catch @ 0060a7c0 */
                                  local_a4 = local_a4 + 1;
                    /* catch() { ... } // from try @ 00608440 with catch @ 0060a7d0 */
                                } while (local_a4 < *puVar46);
                              }
                              local_6c = 0x8000177e;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              operator_delete__(plVar25);
                              lVar40 = *plVar3;
                            }
                    /* catch() { ... } // from try @ 00608438 with catch @ 0060a838 */
                            local_6c = 0x1782;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* catch() { ... } // from try @ 00608b98 with catch @ 0060a884 */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar40 + local_78 * 0x158 + 0x108);
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80001782;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *plVar3;
                            local_6c = 0x1783;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* catch() { ... } // from try @ 00608b30 with catch @ 0060a988 */
                            local_6c = *(uint *)(lVar40 + local_78 * 0x158 + 0x10c);
                    /* catch() { ... } // from try @ 00608f90 with catch @ 0060a9c0 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80001783;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* catch() { ... } // from try @ 006082c4 with catch @ 0060aa14
                       catch() { ... } // from try @ 00608360 with catch @ 0060aa14 */
                    /* catch() { ... } // from try @ 00609290 with catch @ 0060aa18 */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar37 = *plVar3;
                            lVar40 = lVar37 + local_78 * 0x158;
                            puVar46 = *(uint **)(lVar40 + 0xf0);
                            uVar48 = *(uint *)(lVar40 + 0x10c);
                            if (puVar46 != (uint *)0x0) {
                              uVar48 = uVar48 * *(int *)(lVar40 + 0x108);
                              local_6c = 0x177f;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 0060927c with catch @ 0060aa74 */
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)uVar48 * '\x04')));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                uVar36 = (ulong)uVar48;
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* catch() { ... } // from try @ 00608944 with catch @ 0060aadc */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar36 = uVar36 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar36 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                              local_6c = 0x8000177f;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 00608934 with catch @ 0060ab44 */
                              local_6c = 0;
                    /* catch() { ... } // from try @ 006083a4 with catch @ 0060ab48 */
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *plVar3;
                              uVar48 = *(uint *)(lVar37 + local_78 * 0x158 + 0x10c);
                            }
                            puVar46 = *(uint **)(lVar37 + local_78 * 0x158 + 0xf8);
                            if (puVar46 != (uint *)0x0) {
                              local_6c = 0x1780;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 0060839c with catch @ 0060abb8 */
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                    /* catch() { ... } // from try @ 00608998 with catch @ 0060ac04 */
                                uVar36 = (ulong)uVar48;
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* catch() { ... } // from try @ 0060825c with catch @ 0060ac14
                       catch() { ... } // from try @ 006087a4 with catch @ 0060ac14
                       catch() { ... } // from try @ 00608970 with catch @ 0060ac14
                       catch() { ... } // from try @ 006089fc with catch @ 0060ac14 */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar36 = uVar36 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar36 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                              local_6c = 0x80001780;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *plVar3;
                              uVar48 = *(uint *)(lVar37 + local_78 * 0x158 + 0x10c);
                            }
                            puVar46 = *(uint **)(lVar37 + local_78 * 0x158 + 0x100);
                            if (puVar46 != (uint *)0x0) {
                    /* try { // try from 0060acf0 to 0070acfb has its CatchHandler @ 006081c8 */
                              local_6c = 0x1781;
                    /* catch() { ... } // from try @ 00609b04 with catch @ 0060acf8 */
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                uVar36 = (ulong)uVar48;
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* try { // try from 0060ad68 to 0070adaf has its CatchHandler @ 0060ad68
                       catch() { ... } // from try @ 0060ad68 with catch @ 0060ad68
                       catch() { ... } // from try @ 0060ae18 with catch @ 0060ad68
                       catch() { ... } // from try @ 0060aef0 with catch @ 0060ad68 */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar36 = uVar36 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar36 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                    /* try { // try from 0060adb0 to 0070adc3 has its CatchHandler @ 0060aec0 */
                              local_6c = 0x80001781;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060adc8 to 0070addb has its CatchHandler @ 0060aeb8 */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                    /* try { // try from 0060ade8 to 0070adf3 has its CatchHandler @ 0060aec4 */
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar37 = *plVar3;
                            }
                            local_6c = 0x1784;
                    /* try { // try from 0060ae14 to 0070ae17 has its CatchHandler @ 0060aeac */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060ae18 to 0070aee7 has its CatchHandler @ 0060ad68 */
                            local_6c = 0x40;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = 0;
                            bVar20 = true;
                            do {
                              local_6c = *(uint *)(lVar37 + local_78 * 0x158 + 0x114 + lVar40);
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              lVar40 = lVar40 + 4;
                    /* catch() { ... } // from try @ 0060ae14 with catch @ 0060aeac */
                              bVar20 = (bool)(bVar20 & sVar21 == 1);
                            } while (lVar40 != 0x40);
                            if (!bVar20) goto LAB_0060c5d8;
                    /* catch() { ... } // from try @ 0060adc8 with catch @ 0060aeb8 */
                    /* catch() { ... } // from try @ 0060adb0 with catch @ 0060aec0 */
                    /* catch() { ... } // from try @ 0060ade8 with catch @ 0060aec4 */
                            local_6c = 0x80001784;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060aee8 to 0070aeef has its CatchHandler @ 0060af5c */
                            local_6c = 0;
                    /* try { // try from 0060aef0 to 0070af5f has its CatchHandler @ 0060ad68 */
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *plVar3;
                            lVar37 = lVar40 + local_78 * 0x158;
                            uVar48 = *(uint *)(lVar37 + 0x30);
                            uVar36 = (ulong)uVar48;
                            if (uVar48 == 0) {
                    /* catch() { ... } // from try @ 0060aee8 with catch @ 0060af5c */
                    /* try { // try from 0060af60 to 0070afab has its CatchHandler @ 0060af60
                       catch() { ... } // from try @ 0060af60 with catch @ 0060af60
                       catch() { ... } // from try @ 0060b014 with catch @ 0060af60
                       catch() { ... } // from try @ 0060b0ec with catch @ 0060af60 */
                              iVar47 = *(int *)(lVar40 + local_78 * 0x158 + 4) * 3;
                            }
                            else {
                              lVar40 = *(long *)(lVar40 + local_78 * 0x158 + 0x28);
                              if (uVar48 < 8) {
                                uVar42 = 0;
                                iVar47 = 0;
                              }
                              else {
                                uVar42 = uVar36 & 0xfffffff8;
                                puVar30 = (undefined8 *)(lVar40 + 0x10);
                                iVar47 = 0;
                                iVar50 = 0;
                                iVar51 = 0;
                                iVar52 = 0;
                                auVar49 = ZEXT816(0);
                                uVar41 = uVar42;
                                do {
                                  puVar2 = puVar30 + -2;
                                  puVar5 = puVar30 + -1;
                                  puVar6 = puVar30 + 1;
                                  uVar15 = *puVar30;
                                  uVar41 = uVar41 - 8;
                                  puVar30 = puVar30 + 4;
                                  iVar54 = auVar49._4_4_;
                                  iVar55 = auVar49._8_4_;
                                  iVar56 = auVar49._12_4_;
                                  iVar47 = iVar47 + (int)*puVar2 + 2;
                                  iVar50 = iVar50 + (int)((ulong)*puVar2 >> 0x20) + 2;
                                  iVar51 = iVar51 + (int)*puVar5 + 2;
                                  iVar52 = iVar52 + (int)((ulong)*puVar5 >> 0x20) + 2;
                                  auVar49._0_4_ = auVar49._0_4_ + (int)uVar15 + 2;
                                  auVar49._4_4_ = iVar54 + (int)((ulong)uVar15 >> 0x20) + 2;
                                  auVar49._8_4_ = iVar55 + (int)*puVar6 + 2;
                                  auVar49._12_4_ = iVar56 + (int)((ulong)*puVar6 >> 0x20) + 2;
                                } while (uVar41 != 0);
                                iVar47 = auVar49._0_4_ + iVar47 + auVar49._4_4_ + iVar50 +
                                         auVar49._8_4_ + iVar51 + auVar49._12_4_ + iVar52;
                    /* try { // try from 0060afac to 0070afbf has its CatchHandler @ 0060b0bc */
                                if (uVar42 == uVar36) goto LAB_0060afd4;
                              }
                              lVar34 = uVar36 - uVar42;
                              piVar29 = (int *)(lVar40 + uVar42 * 4);
                              do {
                    /* try { // try from 0060afc4 to 0070afd7 has its CatchHandler @ 0060b0b4 */
                                lVar34 = lVar34 + -1;
                                iVar47 = iVar47 + *piVar29 + 2;
                                piVar29 = piVar29 + 1;
                              } while (lVar34 != 0);
                            }
LAB_0060afd4:
                            uVar36 = FUN_00612c04(param_1,0x1773,lVar37 + 0x10,iVar47,1);
                    /* try { // try from 0060afe4 to 0070afef has its CatchHandler @ 0060b0c0 */
                            if ((uVar36 & 1) == 0) goto LAB_0060c5d8;
                            puVar26 = (undefined4 *)(*plVar3 + local_78 * 0x158);
                    /* try { // try from 0060b010 to 0070b013 has its CatchHandler @ 0060b0a8 */
                    /* try { // try from 0060b014 to 0070b0e3 has its CatchHandler @ 0060af60 */
                            uVar36 = FUN_00612c04(param_1,0x1776,puVar26 + 0xe,*puVar26,
                                                  *(long *)(puVar26 + 0x3a) == 0);
                            if ((uVar36 & 1) == 0) goto LAB_0060c5d8;
                            puVar26 = (undefined4 *)(*plVar3 + local_78 * 0x158);
                            uVar36 = FUN_00612c04(param_1,0x1777,puVar26 + 0x14,*puVar26,
                                                  *(long *)(puVar26 + 0x3a) == 0);
                            if ((uVar36 & 1) == 0) goto LAB_0060c5d8;
                            puVar26 = (undefined4 *)(*plVar3 + local_78 * 0x158);
                            uVar36 = FUN_00612c04(param_1,0x1778,puVar26 + 0x1a,*puVar26,
                                                  *(long *)(puVar26 + 0x3a) == 0);
                            if ((uVar36 & 1) == 0) goto LAB_0060c5d8;
                    /* catch() { ... } // from try @ 0060b010 with catch @ 0060b0a8 */
                            puVar26 = (undefined4 *)(*plVar3 + local_78 * 0x158);
                    /* catch() { ... } // from try @ 0060afc4 with catch @ 0060b0b4 */
                    /* catch() { ... } // from try @ 0060afac with catch @ 0060b0bc */
                    /* catch() { ... } // from try @ 0060afe4 with catch @ 0060b0c0 */
                            uVar36 = FUN_00612c04(param_1,0x1779,puVar26 + 0x20,*puVar26,
                                                  *(long *)(puVar26 + 0x3a) == 0);
                            if ((uVar36 & 1) == 0) goto LAB_0060c5d8;
                            lVar40 = *plVar3;
                            if (*(int *)(lVar40 + local_78 * 0x158 + 8) != 0) {
                    /* try { // try from 0060b0e4 to 0070b0eb has its CatchHandler @ 0060b158 */
                              lVar37 = 0;
                              uVar36 = 0;
                              do {
                    /* try { // try from 0060b0ec to 0070b15b has its CatchHandler @ 0060af60 */
                                puVar26 = (undefined4 *)(lVar40 + local_78 * 0x158);
                                uVar41 = FUN_00612c04(param_1,0x177a,
                                                      *(long *)(puVar26 + 0x26) + lVar37,*puVar26,
                                                      *(long *)(puVar26 + 0x3a) == 0);
                                if ((uVar41 & 1) == 0) goto LAB_0060c5d8;
                                uVar36 = uVar36 + 1;
                                lVar37 = lVar37 + 0x18;
                                lVar40 = *plVar3;
                              } while (uVar36 < *(uint *)(lVar40 + local_78 * 0x158 + 8));
                            }
                    /* catch() { ... } // from try @ 0060b0e4 with catch @ 0060b158 */
                            puVar26 = (undefined4 *)(lVar40 + local_78 * 0x158);
                            uVar36 = FUN_00612c04(param_1,0x177b,puVar26 + 0x28,*puVar26,
                                                  *(long *)(puVar26 + 0x3a) == 0);
                            if ((uVar36 & 1) == 0) goto LAB_0060c5d8;
                            puVar26 = (undefined4 *)(*plVar3 + local_78 * 0x158);
                            uVar36 = FUN_00612c04(param_1,0x177c,puVar26 + 0x2e,*puVar26,
                                                  *(long *)(puVar26 + 0x3a) == 0);
                            if ((uVar36 & 1) == 0) goto LAB_0060c5d8;
                            puVar26 = (undefined4 *)(*plVar3 + local_78 * 0x158);
                            uVar36 = FUN_00612c04(param_1,0x177d,puVar26 + 0x34,*puVar26,
                                                  *(long *)(puVar26 + 0x3a) == 0);
                            if ((uVar36 & 1) == 0) goto LAB_0060c5d8;
                            local_6c = 0x800007dc;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060b21c to 0070b263 has its CatchHandler @ 0060b21c
                       catch(type#1 @ 00000000) { ... } // from try @ 0060b21c with catch @ 0060b21c
                       catch(type#1 @ 00000000) { ... } // from try @ 0060b26c with catch @ 0060b21c
                       catch(type#1 @ 00000000) { ... } // from try @ 0060b350 with catch @ 0060b21c
                        */
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_78 = local_78 + 1;
                          } while (local_78 < (uint)param_4[0xe]);
                        }
                        if (param_4[0x12] != 0) {
                          uVar36 = 0;
                    /* try { // try from 0060b264 to 0070b26b has its CatchHandler @ 0060b304 */
                          do {
                    /* try { // try from 0060b26c to 0070b327 has its CatchHandler @ 0060b21c */
                            local_6c = 0x7dd;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *(long *)(param_4 + 0x14);
                            puVar46 = (uint *)(lVar40 + uVar36 * 0x60);
                            if (puVar46 != (uint *)0x0) {
                              local_6c = 5000;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 4;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0060b264 with catch @ 0060b304
                        */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              local_6c = *puVar46;
                    /* try { // try from 0060b328 to 0070b34f has its CatchHandler @ 0060b358 */
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060b350 to 0070b35b has its CatchHandler @ 0060b21c */
                              if (sVar21 != 1) goto LAB_0060c5d8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0060b328 with catch @ 0060b358
                        */
                    /* try { // try from 0060b35c to 0070b3ff has its CatchHandler @ 0060b35c
                       catch(type#1 @ 00000000) { ... } // from try @ 0060b35c with catch @ 0060b35c
                       catch(type#1 @ 00000000) { ... } // from try @ 0060b428 with catch @ 0060b35c
                       catch(type#1 @ 00000000) { ... } // from try @ 0060b53c with catch @ 0060b35c
                        */
                              local_6c = 0x80001388;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 0x14);
                            }
                            pcVar35 = *(char **)(lVar40 + uVar36 * 0x60 + 8);
                            sVar21 = strlen(pcVar35);
                            if (pcVar35 != (char *)0x0) {
                              uVar48 = (int)sVar21 + 1;
                              local_6c = 0x1389;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = uVar48;
                    /* try { // try from 0060b400 to 0070b427 has its CatchHandler @ 0060b4f4 */
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                    /* try { // try from 0060b428 to 0070b513 has its CatchHandler @ 0060b35c */
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if ((uVar48 != 0) &&
                                 (sVar21 = fwrite(pcVar35,(ulong)uVar48,1,param_1), sVar21 != 1))
                              goto LAB_0060c5d8;
                              local_6c = 0x80001389;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 0x14);
                            }
                            local_6c = 0x138a;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0060b400 with catch @ 0060b4f4
                        */
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar40 + uVar36 * 0x60 + 0x10);
                    /* try { // try from 0060b514 to 0070b53b has its CatchHandler @ 0060b544 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                    /* try { // try from 0060b53c to 0070b547 has its CatchHandler @ 0060b35c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0060b514 with catch @ 0060b544
                        */
                            local_6c = 0x8000138a;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *(long *)(param_4 + 0x14);
                            local_6c = 0x138b;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            local_6c = *(uint *)(lVar40 + uVar36 * 0x60 + 0x14);
                    /* try { // try from 0060b614 to 0070b6c7 has its CatchHandler @ 0060b614
                       catch() { ... } // from try @ 0060b614 with catch @ 0060b614
                       catch() { ... } // from try @ 0060b6f0 with catch @ 0060b614
                       catch() { ... } // from try @ 0060b804 with catch @ 0060b614
                       catch() { ... } // from try @ 0060b948 with catch @ 0060b614
                       catch() { ... } // from try @ 0060ba68 with catch @ 0060b614
                       catch() { ... } // from try @ 0060bb78 with catch @ 0060b614 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x8000138b;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *(long *)(param_4 + 0x14);
                            local_6c = 0x1394;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 4;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 0060b6c8 to 0070b6ef has its CatchHandler @ 0060bae0 */
                            local_6c = *(uint *)(lVar40 + uVar36 * 0x60 + 0x18);
                    /* try { // try from 0060b6f0 to 0070b7db has its CatchHandler @ 0060b614 */
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            if (sVar21 != 1) goto LAB_0060c5d8;
                            local_6c = 0x80001394;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            lVar40 = *(long *)(param_4 + 0x14);
                            puVar46 = *(uint **)(lVar40 + uVar36 * 0x60 + 0x20);
                            if (puVar46 != (uint *)0x0) {
                              uVar48 = param_4[0x1e];
                              uVar41 = (ulong)uVar48;
                              local_6c = 0x1395;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                    /* try { // try from 0060b7dc to 0070b803 has its CatchHandler @ 0060ba20 */
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* try { // try from 0060b804 to 0070b85f has its CatchHandler @ 0060b614 */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar41 = uVar41 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar41 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                              local_6c = 0x80001395;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060b860 to 0070b873 has its CatchHandler @ 0060ba6c */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060b874 to 0070b8ab has its CatchHandler @ 0060ba70 */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 0x14);
                            }
                            if ((*(byte *)(lVar40 + uVar36 * 0x60 + 0x18) & 1) == 0) {
                              uVar48 = 3;
                            }
                            else {
                              lVar37 = *(long *)(lVar40 + uVar36 * 0x60 + 0x20);
                              uVar48 = param_4[0x1e];
                              uVar41 = (ulong)uVar48;
                              if (lVar37 == 0) {
                                uVar48 = uVar48 * 3;
                              }
                              else {
                                if (uVar48 == 0) {
                                  uVar48 = 0;
                                }
                                else {
                                  if (uVar48 < 8) {
                                    uVar31 = 0;
                                    uVar48 = 0;
                                  }
                                  else {
                                    uVar31 = uVar41 & 0xfffffff8;
                                    pauVar32 = (undefined1 (*) [12])(lVar37 + 0x10);
                                    auVar49 = ZEXT816(0);
                                    auVar53 = ZEXT816(0);
                                    uVar42 = uVar31;
                                    do {
                                      pauVar17 = pauVar32 + -2;
                                      pauVar18 = pauVar32 + -1;
                                      puVar19 = *pauVar32;
                                      auVar16 = *pauVar32;
                                      uVar42 = uVar42 - 8;
                                      pauVar32 = (undefined1 (*) [12])(pauVar32[2] + 8);
                                      auVar10._12_4_ =
                                           (int)((ulong)*(undefined8 *)(*pauVar18 + 4) >> 0x20);
                                      auVar10._0_12_ = *(undefined1 (*) [12])(*pauVar17 + 8);
                                      auVar49 = NEON_umax(auVar49,auVar10,4);
                                      auVar14._12_4_ =
                                           (int)((ulong)*(undefined8 *)(puVar19 + 8) >> 0x20);
                                      auVar14._0_12_ = auVar16;
                                      auVar53 = NEON_umax(auVar53,auVar14,4);
                    /* try { // try from 0060b904 to 0070b947 has its CatchHandler @ 0060bb2c */
                                    } while (uVar42 != 0);
                                    auVar49 = NEON_umax(auVar49,auVar53,4);
                                    uVar48 = NEON_umaxv(auVar49,4);
                                    if (uVar31 == uVar41) goto LAB_0060b938;
                                  }
                                  lVar34 = uVar41 - uVar31;
                                  puVar46 = (uint *)(lVar37 + uVar31 * 4);
                                  uVar44 = uVar48;
                                  do {
                                    uVar48 = *puVar46;
                                    if (*puVar46 <= uVar44) {
                                      uVar48 = uVar44;
                                    }
                                    lVar34 = lVar34 + -1;
                                    puVar46 = puVar46 + 1;
                                    uVar44 = uVar48;
                                  } while (lVar34 != 0);
                                }
LAB_0060b938:
                                uVar48 = uVar48 + 3;
                              }
                            }
                            puVar46 = *(uint **)(lVar40 + uVar36 * 0x60 + 0x28);
                            if (puVar46 != (uint *)0x0) {
                    /* try { // try from 0060b948 to 0070ba3f has its CatchHandler @ 0060b614 */
                              local_6c = 0x138f;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                uVar41 = (ulong)uVar48;
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar41 = uVar41 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar41 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                    /* catch() { ... } // from try @ 0060b7dc with catch @ 0060ba20 */
                              local_6c = 0x8000138f;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060ba40 to 0070ba67 has its CatchHandler @ 0060bb80 */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 0x14);
                            }
                    /* try { // try from 0060ba68 to 0070baff has its CatchHandler @ 0060b614 */
                    /* catch() { ... } // from try @ 0060b860 with catch @ 0060ba6c */
                            puVar46 = *(uint **)(lVar40 + uVar36 * 0x60 + 0x30);
                    /* catch() { ... } // from try @ 0060b874 with catch @ 0060ba70 */
                            if (puVar46 != (uint *)0x0) {
                              uVar48 = param_4[0x1e];
                              uVar41 = (ulong)uVar48;
                              local_6c = 0x1396;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                    /* catch() { ... } // from try @ 0060b6c8 with catch @ 0060bae0 */
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* try { // try from 0060bb00 to 0070bb77 has its CatchHandler @ 0060bb80 */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar41 = uVar41 - 1;
                    /* catch() { ... } // from try @ 0060b904 with catch @ 0060bb2c */
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar41 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                              local_6c = 0x80001396;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060bb78 to 0070bb83 has its CatchHandler @ 0060b614 */
                              bVar20 = false;
                    /* catch() { ... } // from try @ 0060ba40 with catch @ 0060bb80
                       catch() { ... } // from try @ 0060bb00 with catch @ 0060bb80 */
                    /* try { // try from 0060bb84 to 0070bc07 has its CatchHandler @ 0060bb84
                       catch(type#1 @ 00000000) { ... } // from try @ 0060bb84 with catch @ 0060bb84
                       catch(type#1 @ 00000000) { ... } // from try @ 0060bc48 with catch @ 0060bb84
                       catch(type#1 @ 00000000) { ... } // from try @ 0060bd3c with catch @ 0060bb84
                        */
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 0x14);
                            }
                            if ((*(byte *)(lVar40 + uVar36 * 0x60 + 0x18) >> 1 & 1) == 0) {
                              uVar48 = 4;
                            }
                            else {
                              lVar37 = *(long *)(lVar40 + uVar36 * 0x60 + 0x30);
                              uVar48 = param_4[0x1e];
                              uVar41 = (ulong)uVar48;
                              if (lVar37 == 0) {
                                uVar48 = uVar48 << 2;
                              }
                              else {
                                if (uVar48 == 0) {
                                  uVar48 = 0;
                                }
                                else {
                                  if (uVar48 < 8) {
                                    uVar31 = 0;
                                    uVar48 = 0;
                                  }
                                  else {
                                    uVar31 = uVar41 & 0xfffffff8;
                                    pauVar32 = (undefined1 (*) [12])(lVar37 + 0x10);
                                    auVar49 = ZEXT816(0);
                                    auVar53 = ZEXT816(0);
                                    uVar42 = uVar31;
                                    do {
                                      pauVar17 = pauVar32 + -2;
                                      pauVar18 = pauVar32 + -1;
                                      puVar19 = *pauVar32;
                                      auVar16 = *pauVar32;
                                      uVar42 = uVar42 - 8;
                                      pauVar32 = (undefined1 (*) [12])(pauVar32[2] + 8);
                                      auVar9._12_4_ =
                                           (int)((ulong)*(undefined8 *)(*pauVar18 + 4) >> 0x20);
                                      auVar9._0_12_ = *(undefined1 (*) [12])(*pauVar17 + 8);
                                      auVar49 = NEON_umax(auVar49,auVar9,4);
                                      auVar13._12_4_ =
                                           (int)((ulong)*(undefined8 *)(puVar19 + 8) >> 0x20);
                                      auVar13._0_12_ = auVar16;
                                      auVar53 = NEON_umax(auVar53,auVar13,4);
                    /* try { // try from 0060bc08 to 0070bc47 has its CatchHandler @ 0060bcf0 */
                                    } while (uVar42 != 0);
                                    auVar49 = NEON_umax(auVar49,auVar53,4);
                                    uVar48 = NEON_umaxv(auVar49,4);
                                    if (uVar31 == uVar41) goto LAB_0060bc3c;
                                  }
                                  lVar34 = uVar41 - uVar31;
                                  puVar46 = (uint *)(lVar37 + uVar31 * 4);
                                  uVar44 = uVar48;
                                  do {
                                    uVar48 = *puVar46;
                                    if (*puVar46 <= uVar44) {
                                      uVar48 = uVar44;
                                    }
                                    lVar34 = lVar34 + -1;
                                    puVar46 = puVar46 + 1;
                                    uVar44 = uVar48;
                                  } while (lVar34 != 0);
                                }
LAB_0060bc3c:
                                uVar48 = uVar48 + 4;
                              }
                            }
                            puVar46 = *(uint **)(lVar40 + uVar36 * 0x60 + 0x38);
                    /* try { // try from 0060bc48 to 0070bd13 has its CatchHandler @ 0060bb84 */
                            if (puVar46 != (uint *)0x0) {
                              local_6c = 0x1390;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                uVar41 = (ulong)uVar48;
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0060bc08 with catch @ 0060bcf0
                        */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar41 = uVar41 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar41 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                    /* try { // try from 0060bd14 to 0070bd3b has its CatchHandler @ 0060bd44 */
                              local_6c = 0x80001390;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060bd3c to 0070bd47 has its CatchHandler @ 0060bb84 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0060bd14 with catch @ 0060bd44
                        */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060bd50 to 0070bd83 has its CatchHandler @ 0060bd50
                       catch() { ... } // from try @ 0060bd50 with catch @ 0060bd50
                       catch() { ... } // from try @ 0060bd88 with catch @ 0060bd50
                       catch() { ... } // from try @ 0060c17c with catch @ 0060bd50
                       catch() { ... } // from try @ 0060c204 with catch @ 0060bd50
                       catch() { ... } // from try @ 0060c33c with catch @ 0060bd50
                       catch() { ... } // from try @ 0060c4f4 with catch @ 0060bd50 */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 0x14);
                            }
                            puVar46 = *(uint **)(lVar40 + uVar36 * 0x60 + 0x40);
                            if (puVar46 != (uint *)0x0) {
                              uVar48 = param_4[0x1e];
                              uVar41 = (ulong)uVar48;
                    /* try { // try from 0060bd84 to 0070bd87 has its CatchHandler @ 0060c34c */
                    /* try { // try from 0060bd88 to 0070bdb7 has its CatchHandler @ 0060bd50 */
                              local_6c = 0x1397;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060bdb8 to 0070bdc3 has its CatchHandler @ 0060c4a4 */
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* try { // try from 0060be04 to 0070be2b has its CatchHandler @ 0060c2f0 */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar41 = uVar41 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar41 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                    /* try { // try from 0060be4c to 0070be73 has its CatchHandler @ 0060c4a4 */
                              local_6c = 0x80001397;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060be78 to 0070be83 has its CatchHandler @ 0060c4a0 */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 0x14);
                            }
                            if ((*(byte *)(lVar40 + uVar36 * 0x60 + 0x18) >> 2 & 1) == 0) {
                              uVar48 = 7;
                            }
                            else {
                              lVar37 = *(long *)(lVar40 + uVar36 * 0x60 + 0x40);
                              uVar48 = param_4[0x1e];
                              uVar41 = (ulong)uVar48;
                              if (lVar37 == 0) {
                                uVar48 = uVar48 * 7;
                              }
                              else {
                                if (uVar48 == 0) {
                                  uVar48 = 0;
                                }
                                else {
                    /* try { // try from 0060bec4 to 0070beeb has its CatchHandler @ 0060c2a0 */
                                  if (uVar48 < 8) {
                                    uVar31 = 0;
                                    uVar48 = 0;
                                  }
                                  else {
                                    uVar31 = uVar41 & 0xfffffff8;
                                    pauVar32 = (undefined1 (*) [12])(lVar37 + 0x10);
                                    auVar49 = ZEXT816(0);
                                    auVar53 = ZEXT816(0);
                                    uVar42 = uVar31;
                                    do {
                                      pauVar17 = pauVar32 + -2;
                                      pauVar18 = pauVar32 + -1;
                                      puVar19 = *pauVar32;
                                      auVar16 = *pauVar32;
                                      uVar42 = uVar42 - 8;
                                      pauVar32 = (undefined1 (*) [12])(pauVar32[2] + 8);
                                      auVar8._12_4_ =
                                           (int)((ulong)*(undefined8 *)(*pauVar18 + 4) >> 0x20);
                                      auVar8._0_12_ = *(undefined1 (*) [12])(*pauVar17 + 8);
                                      auVar49 = NEON_umax(auVar49,auVar8,4);
                                      auVar12._12_4_ =
                                           (int)((ulong)*(undefined8 *)(puVar19 + 8) >> 0x20);
                                      auVar12._0_12_ = auVar16;
                    /* try { // try from 0060bf0c to 0070bf33 has its CatchHandler @ 0060c4a0 */
                                      auVar53 = NEON_umax(auVar53,auVar12,4);
                                    } while (uVar42 != 0);
                                    auVar49 = NEON_umax(auVar49,auVar53,4);
                                    uVar48 = NEON_umaxv(auVar49,4);
                                    if (uVar31 == uVar41) goto LAB_0060bf44;
                                  }
                                  lVar34 = uVar41 - uVar31;
                                  puVar46 = (uint *)(lVar37 + uVar31 * 4);
                                  uVar44 = uVar48;
                                  do {
                                    uVar48 = *puVar46;
                                    if (*puVar46 <= uVar44) {
                                      uVar48 = uVar44;
                                    }
                                    lVar34 = lVar34 + -1;
                                    puVar46 = puVar46 + 1;
                                    uVar44 = uVar48;
                                  } while (lVar34 != 0);
                                }
LAB_0060bf44:
                                uVar48 = uVar48 + 7;
                              }
                            }
                            puVar46 = *(uint **)(lVar40 + uVar36 * 0x60 + 0x48);
                            if (puVar46 != (uint *)0x0) {
                              local_6c = 0x1391;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                uVar41 = (ulong)uVar48;
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* try { // try from 0060bfe8 to 0070bfef has its CatchHandler @ 0060c26c */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar41 = uVar41 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar41 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                              local_6c = 0x80001391;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060c048 to 0070c05f has its CatchHandler @ 0060c360 */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 0x14);
                            }
                            puVar46 = *(uint **)(lVar40 + uVar36 * 0x60 + 0x50);
                            if (puVar46 != (uint *)0x0) {
                    /* try { // try from 0060c080 to 0070c08b has its CatchHandler @ 0060c228 */
                              uVar48 = param_4[0x1e];
                              uVar41 = (ulong)uVar48;
                              local_6c = 0x1398;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060c0b0 to 0070c0b3 has its CatchHandler @ 0060c25c */
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                    /* try { // try from 0060c0d4 to 0070c0df has its CatchHandler @ 0060c220 */
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              if (uVar48 != 0) {
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* try { // try from 0060c0fc to 0070c123 has its CatchHandler @ 0060c344 */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar41 = uVar41 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                    /* try { // try from 0060c13c to 0070c163 has its CatchHandler @ 0060c340 */
                                } while (uVar41 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                              local_6c = 0x80001398;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060c168 to 0070c17b has its CatchHandler @ 0060c4a8 */
                              local_6c = 0;
                    /* try { // try from 0060c17c to 0070c1fb has its CatchHandler @ 0060bd50 */
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                              lVar40 = *(long *)(param_4 + 0x14);
                            }
                            if ((*(byte *)(lVar40 + uVar36 * 0x60 + 0x18) >> 3 & 1) == 0) {
                              uVar48 = 0x10;
                            }
                            else {
                              lVar37 = *(long *)(lVar40 + uVar36 * 0x60 + 0x50);
                              uVar48 = param_4[0x1e];
                              uVar41 = (ulong)uVar48;
                              if (lVar37 == 0) {
                                uVar48 = uVar48 << 4;
                              }
                              else {
                                if (uVar48 == 0) {
                                  uVar48 = 0;
                                }
                                else {
                                  if (uVar48 < 8) {
                                    uVar31 = 0;
                                    uVar48 = 0;
                                  }
                                  else {
                                    uVar31 = uVar41 & 0xfffffff8;
                                    pauVar32 = (undefined1 (*) [12])(lVar37 + 0x10);
                                    auVar49 = ZEXT816(0);
                    /* try { // try from 0060c1fc to 0070c203 has its CatchHandler @ 0060c208 */
                                    auVar53 = ZEXT816(0);
                                    uVar42 = uVar31;
                                    do {
                                      pauVar17 = pauVar32 + -2;
                                      pauVar18 = pauVar32 + -1;
                                      puVar19 = *pauVar32;
                                      auVar16 = *pauVar32;
                    /* try { // try from 0060c204 to 0070c24b has its CatchHandler @ 0060bd50 */
                                      uVar42 = uVar42 - 8;
                    /* catch() { ... } // from try @ 0060c1fc with catch @ 0060c208 */
                                      pauVar32 = (undefined1 (*) [12])(pauVar32[2] + 8);
                                      auVar7._12_4_ =
                                           (int)((ulong)*(undefined8 *)(*pauVar18 + 4) >> 0x20);
                                      auVar7._0_12_ = *(undefined1 (*) [12])(*pauVar17 + 8);
                                      auVar49 = NEON_umax(auVar49,auVar7,4);
                                      auVar11._12_4_ =
                                           (int)((ulong)*(undefined8 *)(puVar19 + 8) >> 0x20);
                                      auVar11._0_12_ = auVar16;
                                      auVar53 = NEON_umax(auVar53,auVar11,4);
                                    } while (uVar42 != 0);
                                    auVar49 = NEON_umax(auVar49,auVar53,4);
                                    uVar48 = NEON_umaxv(auVar49,4);
                    /* catch() { ... } // from try @ 0060c0d4 with catch @ 0060c220 */
                    /* catch() { ... } // from try @ 0060c080 with catch @ 0060c228 */
                                    if (uVar31 == uVar41) goto LAB_0060c248;
                                  }
                                  lVar34 = uVar41 - uVar31;
                                  puVar46 = (uint *)(lVar37 + uVar31 * 4);
                                  uVar44 = uVar48;
                                  do {
                                    uVar48 = *puVar46;
                                    if (*puVar46 <= uVar44) {
                                      uVar48 = uVar44;
                                    }
                                    lVar34 = lVar34 + -1;
                                    puVar46 = puVar46 + 1;
                                    uVar44 = uVar48;
                                  } while (lVar34 != 0);
                                }
LAB_0060c248:
                                uVar48 = uVar48 + 0x10;
                              }
                            }
                    /* try { // try from 0060c24c to 0070c253 has its CatchHandler @ 0060c258 */
                            puVar46 = *(uint **)(lVar40 + uVar36 * 0x60 + 0x58);
                            if (puVar46 != (uint *)0x0) {
                    /* catch() { ... } // from try @ 0060c24c with catch @ 0060c258 */
                    /* catch() { ... } // from try @ 0060c0b0 with catch @ 0060c25c */
                    /* catch() { ... } // from try @ 0060bfe8 with catch @ 0060c26c */
                              local_6c = 0x1393;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060c290 to 0070c297 has its CatchHandler @ 0060c29c */
                    /* catch() { ... } // from try @ 0060c290 with catch @ 0060c29c */
                    /* catch() { ... } // from try @ 0060bec4 with catch @ 0060c2a0 */
                              local_6c = CONCAT13((char)(uVar48 >> 0x16),
                                                  CONCAT12((char)(uVar48 >> 0xe),
                                                           CONCAT11((char)(uVar48 >> 6),
                                                                    (char)(uVar48 << 2))));
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 0060c2c4 to 0070c33b has its CatchHandler @ 0060c4fc */
                              if (uVar48 != 0) {
                                uVar41 = (ulong)uVar48;
                                bVar20 = true;
                                do {
                                  local_6c = *puVar46;
                    /* catch() { ... } // from try @ 0060be04 with catch @ 0060c2f0 */
                                  sVar21 = fwrite(&local_6c,4,1,param_1);
                                  uVar41 = uVar41 - 1;
                                  bVar20 = (bool)(bVar20 & sVar21 == 1);
                                  puVar46 = puVar46 + 1;
                                } while (uVar41 != 0);
                                if (!bVar20) goto LAB_0060c5d8;
                              }
                              local_6c = 0x80001393;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060c33c to 0070c383 has its CatchHandler @ 0060bd50 */
                    /* catch() { ... } // from try @ 0060c13c with catch @ 0060c340 */
                    /* catch() { ... } // from try @ 0060c0fc with catch @ 0060c344 */
                    /* catch() { ... } // from try @ 0060bd84 with catch @ 0060c34c */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 0060c048 with catch @ 0060c360 */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            }
                    /* try { // try from 0060c384 to 0070c38f has its CatchHandler @ 0060c46c */
                            local_6c = 0x800007dd;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0060c3b4 to 0070c467 has its CatchHandler @ 0060c4fc */
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            uVar36 = uVar36 + 1;
                          } while (uVar36 < (uint)param_4[0x12]);
                        }
                        if (param_4[0x16] != 0) {
                          uVar36 = 0;
                          do {
                            local_6c = 0x7de;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            pcVar35 = *(char **)(*(long *)(param_4 + 0x18) + uVar36 * 8);
                            sVar21 = strlen(pcVar35);
                            if (pcVar35 != (char *)0x0) {
                              uVar48 = (int)sVar21 + 1;
                              local_6c = 4000;
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 0060c384 with catch @ 0060c46c */
                              local_6c = uVar48;
                    /* try { // try from 0060c490 to 0070c497 has its CatchHandler @ 0060c49c */
                    /* catch() { ... } // from try @ 0060c490 with catch @ 0060c49c */
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 0060be78 with catch @ 0060c4a0
                       catch() { ... } // from try @ 0060bf0c with catch @ 0060c4a0 */
                    /* catch() { ... } // from try @ 0060bdb8 with catch @ 0060c4a4
                       catch() { ... } // from try @ 0060be4c with catch @ 0060c4a4 */
                    /* catch() { ... } // from try @ 0060c168 with catch @ 0060c4a8 */
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                    /* try { // try from 0060c4cc to 0070c4f3 has its CatchHandler @ 0060c4fc */
                              if ((uVar48 != 0) &&
                                 (sVar21 = fwrite(pcVar35,(ulong)uVar48,1,param_1), sVar21 != 1))
                              goto LAB_0060c5d8;
                              local_6c = 0x80000fa0;
                    /* try { // try from 0060c4f4 to 0070c507 has its CatchHandler @ 0060bd50 */
                              sVar21 = fwrite(&local_6c,4,1,param_1);
                    /* catch() { ... } // from try @ 0060c2c4 with catch @ 0060c4fc
                       catch() { ... } // from try @ 0060c3b4 with catch @ 0060c4fc
                       catch() { ... } // from try @ 0060c4cc with catch @ 0060c4fc */
                    /* try { // try from 0060c508 to 0070c5df has its CatchHandler @ 0060c508
                       catch() { ... } // from try @ 0060c508 with catch @ 0060c508
                       catch() { ... } // from try @ 0060c5e4 with catch @ 0060c508
                       catch() { ... } // from try @ 0060c9d4 with catch @ 0060c508
                       catch() { ... } // from try @ 0060ca5c with catch @ 0060c508
                       catch() { ... } // from try @ 0060cb94 with catch @ 0060c508
                       catch() { ... } // from try @ 0060cd4c with catch @ 0060c508 */
                              local_6c = 0;
                              sVar22 = fwrite(&local_6c,4,1,param_1);
                              bVar20 = false;
                              if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            }
                            local_6c = 0x800007de;
                            sVar21 = fwrite(&local_6c,4,1,param_1);
                            local_6c = 0;
                            sVar22 = fwrite(&local_6c,4,1,param_1);
                            bVar20 = false;
                            if ((sVar21 != 1) || (sVar22 != 1)) goto LAB_0060c5dc;
                            uVar36 = uVar36 + 1;
                          } while (uVar36 < (uint)param_4[0x16]);
                        }
                        local_6c = 0x800003e9;
                        sVar21 = fwrite(&local_6c,4,1,param_1);
                        local_6c = 0;
                        sVar22 = fwrite(&local_6c,4,1,param_1);
                        bVar20 = sVar21 == 1 && sVar22 == 1;
                      }
                      goto LAB_0060c5dc;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0060c5d8:
  bVar20 = false;
LAB_0060c5dc:
                    /* try { // try from 0060c5e0 to 0070c5e3 has its CatchHandler @ 0060cba4 */
                    /* try { // try from 0060c5e4 to 0070c613 has its CatchHandler @ 0060c508 */
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar20);
  }
  return;
}


