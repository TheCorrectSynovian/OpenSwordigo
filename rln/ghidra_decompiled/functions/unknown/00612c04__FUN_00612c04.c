/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00612c04
 * Function: FUN_00612c04
 * Signature: undefined FUN_00612c04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00612c04(FILE *param_1,uint param_2,uint *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  size_t sVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  void *__ptr;
  undefined2 *puVar10;
  undefined4 local_6c;
  long local_68;
  
                    /* try { // try from 00612c24 to 00712c2f has its CatchHandler @ 00612b10 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00612bfc with catch @ 00612c2c */
  local_6c = param_2;
  sVar5 = fwrite(&local_6c,4,1,param_1);
  local_6c = 0;
  sVar6 = fwrite(&local_6c,4,1,param_1);
  bVar4 = false;
  if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
  local_6c = 9000;
  sVar5 = fwrite(&local_6c,4,1,param_1);
  local_6c = 4;
  sVar6 = fwrite(&local_6c,4,1,param_1);
  bVar4 = false;
  if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
  local_6c = *param_3;
                    /* try { // try from 00612d28 to 00712d8b has its CatchHandler @ 00612d28
                       catch() { ... } // from try @ 00612d28 with catch @ 00612d28
                       catch() { ... } // from try @ 00613adc with catch @ 00612d28
                       catch() { ... } // from try @ 00614634 with catch @ 00612d28
                       catch() { ... } // from try @ 006148dc with catch @ 00612d28 */
  sVar5 = fwrite(&local_6c,4,1,param_1);
  if (sVar5 != 1) {
LAB_00613374:
    bVar4 = false;
    goto LAB_00613378;
  }
  local_6c = 0x80002328;
  sVar5 = fwrite(&local_6c,4,1,param_1);
  local_6c = 0;
  sVar6 = fwrite(&local_6c,4,1,param_1);
  bVar4 = false;
  if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
                    /* try { // try from 00612d8c to 00712d9f has its CatchHandler @ 006147a8 */
                    /* try { // try from 00612da0 to 00712db7 has its CatchHandler @ 00614738 */
  local_6c = 0x2329;
  sVar5 = fwrite(&local_6c,4,1,param_1);
  local_6c = 4;
  sVar6 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00612dd0 to 00712e8f has its CatchHandler @ 006147c0 */
  bVar4 = false;
  if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
  local_6c = param_3[1];
  sVar5 = fwrite(&local_6c,4,1,param_1);
  if (sVar5 != 1) goto LAB_00613374;
  local_6c = 0x80002329;
  sVar5 = fwrite(&local_6c,4,1,param_1);
  local_6c = 0;
  sVar6 = fwrite(&local_6c,4,1,param_1);
  bVar4 = false;
  if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
  local_6c = 0x232a;
  sVar5 = fwrite(&local_6c,4,1,param_1);
  local_6c = 4;
                    /* try { // try from 00612ea8 to 00712eaf has its CatchHandler @ 00614734 */
  sVar6 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00612eb0 to 00712eb7 has its CatchHandler @ 006147bc */
  bVar4 = false;
                    /* try { // try from 00612eb8 to 00712ecb has its CatchHandler @ 00614730 */
  if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
  local_6c = param_3[2];
                    /* try { // try from 00612ecc to 00712edf has its CatchHandler @ 006146c4 */
                    /* try { // try from 00612ef0 to 00712ef7 has its CatchHandler @ 006147ac */
                    /* try { // try from 00612ef8 to 00712f0b has its CatchHandler @ 006146c0 */
  sVar5 = fwrite(&local_6c,4,1,param_1);
  if (sVar5 != 1) goto LAB_00613374;
                    /* try { // try from 00612f0c to 00712f1f has its CatchHandler @ 00614654 */
  local_6c = 0x8000232a;
  sVar5 = fwrite(&local_6c,4,1,param_1);
  local_6c = 0;
                    /* try { // try from 00612f3c to 00712f47 has its CatchHandler @ 006147d0 */
  sVar6 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00612f48 to 00712f53 has its CatchHandler @ 0061463c */
  bVar4 = false;
                    /* try { // try from 00612f54 to 00712fc7 has its CatchHandler @ 006147d0 */
  if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
  if ((param_5 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_3 + 4);
    local_6c = 0x232b;
    sVar5 = fwrite(&local_6c,4,1,param_1);
    local_6c = 4;
    sVar6 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0061309c to 007130c7 has its CatchHandler @ 0061486c */
    bVar4 = false;
    if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
                    /* try { // try from 006130c8 to 007130d3 has its CatchHandler @ 00614868 */
    local_6c = (uint)uVar8;
    sVar5 = fwrite(&local_6c,4,1,param_1);
    if (sVar5 != 1) goto LAB_00613374;
    local_6c = 0x8000232b;
    sVar6 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 0061311c to 0071314b has its CatchHandler @ 006147d8 */
    local_6c = 0;
    sVar5 = fwrite(&local_6c,4,1,param_1);
joined_r0x00613130:
    bVar4 = false;
    if ((sVar6 != 1) || (bVar4 = false, sVar5 != 1)) goto LAB_00613378;
  }
  else {
    uVar1 = *param_3;
    if (uVar1 < 0xf) {
      uVar2 = 1 << (ulong)(uVar1 & 0x1f);
      if ((uVar2 & 0x3f6) == 0) {
        if ((uVar2 & 0x1808) == 0) {
          if (((1 << (ulong)(uVar1 & 0x1f) & 0x6400U) != 0) &&
             (__ptr = *(void **)(param_3 + 4), __ptr != (void *)0x0)) {
                    /* try { // try from 0061316c to 00713193 has its CatchHandler @ 00614868 */
            uVar1 = param_3[2] * param_4;
            local_6c = 0x232b;
            sVar5 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00613194 to 00713247 has its CatchHandler @ 0061486c */
            local_6c = uVar1;
            sVar6 = fwrite(&local_6c,4,1,param_1);
            bVar4 = false;
            if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
            if ((uVar1 != 0) && (sVar5 = fwrite(__ptr,(ulong)uVar1,1,param_1), sVar5 != 1))
            goto LAB_00613374;
LAB_006132c4:
                    /* try { // try from 006132cc to 007132df has its CatchHandler @ 00614828 */
            local_6c = 0x8000232b;
            sVar6 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 006132f8 to 00713307 has its CatchHandler @ 006147d4 */
            local_6c = 0;
            sVar5 = fwrite(&local_6c,4,1,param_1);
            goto joined_r0x00613130;
          }
        }
        else {
          puVar10 = *(undefined2 **)(param_3 + 4);
          if (puVar10 != (undefined2 *)0x0) {
            uVar1 = (param_3[2] >> 1) * param_4;
            local_6c = 0x232b;
            sVar5 = fwrite(&local_6c,4,1,param_1);
            local_6c._0_2_ = CONCAT11((char)(uVar1 >> 7),(char)uVar1 * '\x02');
            local_6c._0_3_ = CONCAT12((char)(uVar1 >> 0xf),(undefined2)local_6c);
            local_6c = CONCAT13((char)(uVar1 >> 0x17),(undefined3)local_6c);
            sVar6 = fwrite(&local_6c,4,1,param_1);
            bVar4 = false;
            if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
                    /* try { // try from 0061327c to 00713287 has its CatchHandler @ 00614864 */
            if (uVar1 != 0) {
              uVar7 = (ulong)uVar1;
              bVar4 = true;
              do {
                local_6c = CONCAT22(local_6c._2_2_,*puVar10);
                sVar5 = fwrite(&local_6c,2,1,param_1);
                uVar7 = uVar7 - 1;
                bVar4 = (bool)(bVar4 & sVar5 == 1);
                puVar10 = puVar10 + 1;
              } while (uVar7 != 0);
              goto joined_r0x006132c0;
            }
            goto LAB_006132c4;
          }
        }
      }
      else {
        puVar9 = *(uint **)(param_3 + 4);
        if (puVar9 != (uint *)0x0) {
          uVar1 = (param_3[2] >> 2) * param_4;
                    /* try { // try from 00612fc8 to 00712fd3 has its CatchHandler @ 00614638 */
          local_6c = 0x232b;
          sVar5 = fwrite(&local_6c,4,1,param_1);
                    /* try { // try from 00612fd4 to 0071303b has its CatchHandler @ 006147d0 */
          local_6c._0_2_ = CONCAT11((char)(uVar1 >> 6),(char)uVar1 * '\x04');
          local_6c._0_3_ = CONCAT12((char)(uVar1 >> 0xe),(undefined2)local_6c);
          local_6c = CONCAT13((char)(uVar1 >> 0x16),(undefined3)local_6c);
          sVar6 = fwrite(&local_6c,4,1,param_1);
          bVar4 = false;
          if ((sVar5 != 1) || (sVar6 != 1)) goto LAB_00613378;
          if (uVar1 != 0) {
            uVar7 = (ulong)uVar1;
            bVar4 = true;
            do {
              local_6c = *puVar9;
              sVar5 = fwrite(&local_6c,4,1,param_1);
              uVar7 = uVar7 - 1;
              bVar4 = (bool)(bVar4 & sVar5 == 1);
              puVar9 = puVar9 + 1;
            } while (uVar7 != 0);
joined_r0x006132c0:
            if (!bVar4) goto LAB_00613374;
          }
          goto LAB_006132c4;
        }
      }
    }
  }
                    /* try { // try from 0061332c to 0071333f has its CatchHandler @ 006143d4 */
  local_6c = param_2 | 0x80000000;
  sVar5 = fwrite(&local_6c,4,1,param_1);
  local_6c = 0;
  sVar6 = fwrite(&local_6c,4,1,param_1);
  bVar4 = sVar5 == 1 && sVar6 == 1;
LAB_00613378:
                    /* try { // try from 00613380 to 0071338b has its CatchHandler @ 00614384 */
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


