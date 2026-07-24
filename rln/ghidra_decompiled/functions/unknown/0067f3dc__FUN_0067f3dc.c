/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067f3dc
 * Function: FUN_0067f3dc
 * Signature: undefined FUN_0067f3dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0067f3dc(char *param_1,code *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  char *pcVar14;
  char *local_1c8;
  char *local_1c0;
  uint local_1b8;
  char *local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  undefined1 *local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  undefined1 local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 *local_28;
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_18;
  undefined4 local_10;
  uint local_c [3];
  
                    /* try { // try from 0067f3fc to 0077f407 has its CatchHandler @ 0067f558 */
  cVar7 = *param_1;
  if ((cVar7 == '_') && (param_1[1] == 'Z')) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
    iVar8 = strncmp(param_1,"_GLOBAL_",8);
                    /* try { // try from 0067f428 to 0077f433 has its CatchHandler @ 0067f534 */
                    /* try { // try from 0067f434 to 0077f47b has its CatchHandler @ 0067f338 */
    if ((iVar8 == 0) && ((cVar2 = param_1[8], cVar2 == '_' || cVar2 == '.' || (cVar2 == '$')))) {
      cVar2 = param_1[9];
                    /* try { // try from 0067f64c to 0077f663 has its CatchHandler @ 0067f6b4 */
                    /* try { // try from 0067f664 to 0077f6d7 has its CatchHandler @ 0067f608 */
      if (((cVar2 == 'I') || (iVar9 = 0, cVar2 == 'D')) &&
         ((iVar9 = 0, param_1[10] == '_' && (iVar9 = 2, cVar2 != 'I')))) {
        iVar9 = 3;
      }
    }
  }
  sVar10 = strlen(param_1);
  local_18c = (int)sVar10;
  local_19c = local_18c << 1;
  local_1c0 = param_1 + sVar10;
                    /* try { // try from 0067f47c to 0077f47f has its CatchHandler @ 0067f544 */
                    /* try { // try from 0067f480 to 0077f57b has its CatchHandler @ 0067f338 */
  lVar3 = -((long)local_19c * 0x18 + 0x10);
  local_1a8 = &stack0xfffffffffffffde0 + lVar3;
  local_1b8 = 0x11;
  lVar4 = -((-(sVar10 >> 0x1f & 1) & 0xfffffff800000000 | (sVar10 & 0xffffffff) << 3) + 0x16 &
           0xfffffffffffffff0);
  local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
  local_1a0 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_1c8 = param_1;
  if (iVar9 == 1) {
    if (cVar7 != '_') {
      return false;
    }
    if (param_1[1] != 'Z') {
      return false;
    }
    local_1b0 = param_1 + 2;
                    /* try { // try from 0067f6d8 to 0077f6df has its CatchHandler @ 0067f6e8 */
    lVar12 = FUN_00676fe0(&local_1c8,1);
                    /* try { // try from 0067f6e0 to 0077f6eb has its CatchHandler @ 0067f608 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067f6d8 with catch @ 0067f6e8
                        */
    if ((local_1b8 & 1) == 0) {
LAB_0067f7fc:
      cVar7 = *local_1b0;
    }
    else {
                    /* try { // try from 0067f6f8 to 0077f7f3 has its CatchHandler @ 0067f6f8
                       catch(type#1 @ 00000000) { ... } // from try @ 0067f6f8 with catch @ 0067f6f8
                       catch(type#1 @ 00000000) { ... } // from try @ 0067f8d0 with catch @ 0067f6f8
                       catch(type#1 @ 00000000) { ... } // from try @ 0067f924 with catch @ 0067f6f8
                        */
      while (pcVar1 = local_1b0, cVar7 = *local_1b0, cVar7 == '.') {
        cVar7 = local_1b0[1];
        if (((byte)(cVar7 + 0x9fU) < 0x1a) || (cVar7 == '_')) {
          cVar7 = local_1b0[2];
          pcVar14 = local_1b0 + 2;
          if (0x19 < (byte)(cVar7 + 0x9fU)) goto LAB_0067f7f0;
          do {
            do {
              pcVar14 = pcVar14 + 1;
              cVar7 = *pcVar14;
            } while ((byte)(cVar7 + 0x9fU) < 0x1a);
LAB_0067f7f0:
                    /* try { // try from 0067f7f4 to 0077f8cf has its CatchHandler @ 0067f8f8 */
          } while (cVar7 == '_');
        }
        else {
          if (9 < (byte)(cVar7 - 0x30U)) goto LAB_0067f7fc;
          cVar7 = *local_1b0;
          pcVar14 = local_1b0;
        }
        while (cVar7 == '.') {
          while( true ) {
            if (9 < (byte)(pcVar14[1] - 0x30U)) goto LAB_0067f780;
            cVar7 = pcVar14[2];
            pcVar14 = pcVar14 + 2;
            if (9 < (byte)(cVar7 - 0x30U)) break;
            do {
              pcVar14 = pcVar14 + 1;
            } while ((byte)(*pcVar14 - 0x30U) < 10);
            if (*pcVar14 != '.') goto LAB_0067f780;
          }
        }
LAB_0067f780:
        iVar8 = (int)local_1b0;
        local_1b0 = pcVar14;
        uVar11 = FUN_00671fa0(&local_1c8,pcVar1,(int)pcVar14 - iVar8);
        lVar12 = FUN_00671f00(&local_1c8,0x4c,lVar12,uVar11);
      }
    }
  }
  else if (iVar9 == 0) {
    local_1b0 = param_1;
    local_1a8 = &stack0xfffffffffffffde0 + lVar3;
    local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
    lVar12 = FUN_00674b04(&local_1c8);
    cVar7 = *local_1b0;
  }
  else {
    pcVar1 = param_1 + 0xb;
    uVar13 = 0x43;
    if (iVar9 != 2) {
      uVar13 = 0x44;
    }
    if ((param_1[0xb] == '_') && (param_1[0xc] == 'Z')) {
      local_1b0 = param_1 + 0xd;
      local_1a8 = &stack0xfffffffffffffde0 + lVar3;
      local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
      uVar11 = FUN_00676fe0(&local_1c8,0);
    }
    else {
      local_1b0 = pcVar1;
      local_1a8 = &stack0xfffffffffffffde0 + lVar3;
      local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
      sVar10 = strlen(pcVar1);
      uVar11 = FUN_00671fa0(&local_1c8,pcVar1,sVar10);
    }
                    /* catch() { ... } // from try @ 0067f428 with catch @ 0067f534 */
    lVar12 = FUN_00671f00(&local_1c8,uVar13,uVar11,0);
    pcVar1 = local_1b0;
                    /* catch() { ... } // from try @ 0067f47c with catch @ 0067f544 */
    sVar10 = strlen(local_1b0);
    local_1b0 = pcVar1 + sVar10;
    cVar7 = pcVar1[sVar10];
  }
                    /* catch() { ... } // from try @ 0067f3fc with catch @ 0067f558 */
  if ((cVar7 == '\0') && (lVar12 != 0)) {
    local_68 = 0;
                    /* try { // try from 0067f57c to 0077f587 has its CatchHandler @ 0067f5cc */
    local_60 = 0;
    local_48 = 0;
                    /* try { // try from 0067f588 to 0077f5b3 has its CatchHandler @ 0067f338 */
    local_40 = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = 0;
    local_28 = (undefined1 *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_18 = (undefined1 *)0x0;
    local_10 = 0;
    local_c[0] = 0;
    local_58 = param_2;
    local_50 = param_3;
    FUN_00672470(local_c,&local_1c,lVar12);
                    /* try { // try from 0067f5b4 to 0077f5bf has its CatchHandler @ 0067f5cc */
    local_c[1] = 0;
    local_c[2] = 0;
                    /* try { // try from 0067f5c0 to 0077f5cf has its CatchHandler @ 0067f338 */
                    /* catch() { ... } // from try @ 0067f57c with catch @ 0067f5cc
                       catch() { ... } // from try @ 0067f5b4 with catch @ 0067f5cc */
    local_c[0] = local_1c * local_c[0];
    lVar5 = -((-(ulong)(local_1c >> 0x1f) & 0xfffffff000000000 | (ulong)local_1c << 4) + 0x10);
    local_28 = &stack0xfffffffffffffde0 + lVar5 + lVar4 + lVar3;
    local_18 = &stack0xfffffffffffffde0 +
               ((lVar5 + lVar4 + lVar3) -
               ((-(ulong)(local_c[0] >> 0x1f) & 0xfffffff000000000 | (ulong)local_c[0] << 4) + 0x10)
               );
    FUN_0067a6e8(auStack_168,0x11,lVar12);
    uVar11 = local_50;
    pcVar6 = local_58;
    lVar3 = local_68;
                    /* try { // try from 0067f608 to 0077f64b has its CatchHandler @ 0067f608
                       catch(type#1 @ 00000000) { ... } // from try @ 0067f608 with catch @ 0067f608
                       catch(type#1 @ 00000000) { ... } // from try @ 0067f664 with catch @ 0067f608
                       catch(type#1 @ 00000000) { ... } // from try @ 0067f6e0 with catch @ 0067f608
                        */
    auStack_168[local_68] = 0;
    (*pcVar6)(auStack_168,lVar3,uVar11);
    return local_38 == 0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067f64c with catch @ 0067f6b4
                        */
  return false;
}


