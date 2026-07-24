/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061eb24
 * Function: __cxxabiv1::__vmi_class_type_info::__do_dyncast
 * Signature: undefined __thiscall __do_dyncast(__vmi_class_type_info * this, long param_1, __sub_kind param_2, __class_type_info * param_3, void * param_4, __class_type_info * param_5, void * param_6, __dyncast_result * param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__vmi_class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

char __thiscall
__cxxabiv1::__vmi_class_type_info::__do_dyncast
          (__vmi_class_type_info *this,long param_1,uint param_3,long *param_4,long *param_5,
          long param_6,long *param_7,long *param_8)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  char *__s2;
  long lVar11;
  ulong uVar12;
  char *__s1;
  ulong uVar13;
  char cVar14;
  ulong uVar15;
  __vmi_class_type_info *p_Var16;
  long local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if ((*(uint *)((long)param_8 + 0x14) >> 4 & 1) != 0) {
    *(undefined4 *)((long)param_8 + 0x14) = *(undefined4 *)(this + 0x10);
  }
  __s1 = *(char **)(this + 8);
  if (param_5 == param_7) {
    if (__s1 == *(char **)(param_6 + 8)) {
LAB_0061ee5c:
      *(uint *)((long)param_8 + 0xc) = param_3;
      return '\0';
    }
    if (*__s1 == '*') {
      if (__s1 != (char *)param_4[1]) goto LAB_0061ebb0;
      goto LAB_0061eee4;
    }
    iVar5 = strcmp(__s1,*(char **)(param_6 + 8));
    if (iVar5 == 0) goto LAB_0061ee5c;
    __s2 = (char *)param_4[1];
    if (__s1 == __s2) goto LAB_0061eee4;
  }
  else {
    __s2 = (char *)param_4[1];
    if (__s2 == __s1) goto LAB_0061eee4;
    if (*__s1 == '*') goto LAB_0061ebb0;
  }
  iVar5 = strcmp(__s1,__s2);
  if (iVar5 != 0) {
LAB_0061ebb0:
    cVar14 = '\0';
    bVar3 = 0;
    uVar12 = (long)param_7 - param_1;
    if (param_1 < 0) {
      uVar12 = 0;
    }
                    /* catch() { ... } // from try @ 0061e588 with catch @ 0061ebd0 */
    bVar2 = true;
    do {
      uVar15 = 0;
      uVar13 = (ulong)*(uint *)(this + 0x14);
      p_Var16 = this + uVar13 * 0x10;
      if (uVar13 != 0) {
        do {
          local_4 = *(uint *)((long)param_8 + 0x14);
          uVar8 = *(ulong *)(p_Var16 + 0x10);
          local_18 = 0;
          local_10 = 0;
          lVar11 = (long)uVar8 >> 8;
          local_c = 0;
          local_8 = 0;
          uVar9 = param_3;
          if ((uVar8 & 1) != 0) {
            lVar11 = *(long *)(*param_5 + lVar11);
            uVar9 = param_3 | 1;
          }
                    /* try { // try from 0061ec38 to 0071ec5f has its CatchHandler @ 0061ec7c */
          if ((uVar12 == 0) || (uVar12 < (ulong)((long)param_5 + lVar11) != bVar2)) {
            if (((uint)uVar8 >> 1 & 1) == 0) {
              if ((param_1 == -2) && ((local_4 & 3) == 0)) goto LAB_0061eccc;
              uVar9 = uVar9 & 0xfffffffd;
            }
                    /* try { // try from 0061ec60 to 0071ed6b has its CatchHandler @ 0061e2f8 */
            cVar4 = (**(code **)(**(long **)(p_Var16 + 8) + 0x38))
                              (*(long **)(p_Var16 + 8),param_1,uVar9,param_4,(long)param_5 + lVar11,
                               param_6,param_7,&local_18);
            uVar7 = local_8;
                    /* catch() { ... } // from try @ 0061ec38 with catch @ 0061ec7c */
                    /* catch() { ... } // from try @ 0061e3f4 with catch @ 0061ec80 */
            uVar9 = local_c | *(uint *)((long)param_8 + 0xc);
            *(uint *)((long)param_8 + 0xc) = uVar9;
            if ((local_8 & 0xfffffffb) == 2) {
              *param_8 = local_18;
              *(uint *)(param_8 + 1) = local_10;
              *(uint *)(param_8 + 2) = local_8;
              return cVar4;
            }
            lVar11 = *param_8;
            if (cVar14 == '\0') {
              if (lVar11 == 0) {
                *param_8 = local_18;
                *(uint *)(param_8 + 1) = local_10;
                cVar14 = cVar4;
                if (((uVar9 != 0) && (local_18 != 0)) && ((*(uint *)(this + 0x10) & 1) == 0)) {
                  return cVar4;
                }
              }
              else {
LAB_0061ecb0:
                    /* catch() { ... } // from try @ 0061e3d8 with catch @ 0061ecb8 */
                if (lVar11 == local_18) {
                  *(uint *)(param_8 + 1) = *(uint *)(param_8 + 1) | local_10;
                }
                else {
                    /* catch() { ... } // from try @ 0061e3a8 with catch @ 0061ecbc */
                  if ((cVar4 != '\0') || (local_18 != 0)) goto LAB_0061ed24;
                }
              }
            }
            else {
              if (lVar11 != 0) goto LAB_0061ecb0;
              if (local_18 == 0) goto LAB_0061ecc4;
LAB_0061ed24:
              uVar6 = *(uint *)(param_8 + 2);
              if (((int)uVar9 < 4) ||
                 (((uVar9 & 1) != 0 && ((*(uint *)((long)param_8 + 0x14) >> 1 & 1) != 0)))) {
                if (0 < (int)uVar6) {
LAB_0061ed4c:
                  if (0 < (int)uVar7) {
LAB_0061ed54:
                    uVar9 = uVar6 ^ uVar7;
                    local_8 = uVar7;
                    goto joined_r0x0061ede0;
                  }
                  if ((3 < (int)uVar6) &&
                     (((uVar6 & 1) == 0 || ((*(uint *)(this + 0x10) >> 1 & 1) == 0)))) {
                    if (3 < (int)(uVar6 ^ 1)) {
                      uVar9 = uVar6 & 2;
                      goto LAB_0061ed6c;
                    }
                    goto LAB_0061edf0;
                  }
                  if (param_1 < 0) {
                    if (param_1 == -2) goto LAB_0061ee14;
                    uVar7 = (**(code **)(*param_4 + 0x40))(param_4,param_1,local_18,param_6,param_7)
                    ;
                    goto LAB_0061ed54;
                  }
                  if (param_7 != (long *)(local_18 + param_1)) {
                    uVar7 = uVar6 ^ 1;
                    goto LAB_0061ee18;
                  }
                  local_8 = uVar6 & 6;
                  if (3 < (int)(uVar6 ^ 6)) goto LAB_0061f094;
LAB_0061ede8:
                  if (3 < (int)local_8) {
                    *param_8 = 0;
                    *(undefined4 *)(param_8 + 2) = 2;
                    return '\x01';
                  }
                  goto LAB_0061edf0;
                }
                if (((int)local_8 < 4) ||
                   (((local_8 & 1) != 0 && ((*(uint *)(this + 0x10) >> 1 & 1) != 0)))) {
                  if (param_1 < 0) {
                    if (param_1 != -2) {
                      uVar6 = (**(code **)(*param_4 + 0x40))(param_4,param_1,lVar11,param_6,param_7)
                      ;
                      goto LAB_0061ed4c;
                    }
                    if ((int)local_8 < 1) goto LAB_0061edf4;
LAB_0061ef7c:
                    uVar6 = 1;
                    goto LAB_0061ed54;
                  }
                  if (param_7 == (long *)(lVar11 + param_1)) {
                    uVar6 = 6;
                    if (0 < (int)local_8) goto LAB_0061ed54;
                    goto LAB_0061ed68;
                  }
                  if (0 < (int)local_8) goto LAB_0061ef7c;
                  if (param_7 != (long *)(local_18 + param_1)) {
                    uVar6 = 1;
                    uVar7 = 0;
                    goto LAB_0061ee18;
                  }
LAB_0061f094:
                  local_8 = 0;
                  uVar9 = 2;
                }
                else {
                  uVar6 = 1;
                  if ((int)(local_8 ^ 1) < 4) goto LAB_0061ede4;
LAB_0061eda0:
                  uVar9 = local_8 & 2;
                }
                *param_8 = local_18;
                cVar14 = '\0';
                *(uint *)(param_8 + 1) = local_10;
                uVar6 = local_8;
LAB_0061ed6c:
                *(uint *)(param_8 + 2) = uVar6;
                if (uVar9 != 0) {
                  return '\0';
                }
                if ((uVar6 & 1) == 0) {
                  return '\0';
                }
                uVar9 = *(uint *)((long)param_8 + 0xc);
              }
              else {
                if (uVar6 == 0) {
                  if (local_8 != 0) {
                    uVar6 = 1;
LAB_0061edd0:
                    uVar9 = uVar6 ^ local_8;
joined_r0x0061ede0:
                    if (3 < (int)uVar9) {
                      if (3 < (int)local_8) goto LAB_0061eda0;
LAB_0061ed68:
                    /* catch() { ... } // from try @ 0061e348 with catch @ 0061ed68 */
                      uVar9 = uVar6 & 2;
                      goto LAB_0061ed6c;
                    }
LAB_0061ede4:
                    local_8 = uVar6 & local_8;
                    goto LAB_0061ede8;
                  }
                }
                else {
                  if (local_8 != 0) goto LAB_0061edd0;
LAB_0061ee14:
                  uVar7 = uVar6 ^ 1;
LAB_0061ee18:
                  uVar9 = uVar6 & 2;
                  if (3 < (int)uVar7) goto LAB_0061ed6c;
LAB_0061edf0:
                  uVar9 = *(uint *)((long)param_8 + 0xc);
                }
LAB_0061edf4:
                *param_8 = 0;
                *(undefined4 *)(param_8 + 2) = 1;
                cVar14 = '\x01';
              }
            }
LAB_0061ecc4:
            if (uVar9 == 4) {
              return cVar14;
            }
          }
          else {
            bVar3 = 1;
          }
LAB_0061eccc:
          uVar15 = uVar15 + 1;
          p_Var16 = p_Var16 + -0x10;
        } while (uVar13 != uVar15);
      }
      bVar1 = bVar3 & bVar2;
      bVar3 = 1;
                    /* catch() { ... } // from try @ 0061e35c with catch @ 0061ecf4 */
      bVar2 = false;
      if (bVar1 == 0) {
        return cVar14;
      }
    } while( true );
  }
LAB_0061eee4:
  *param_8 = (long)param_5;
  *(uint *)(param_8 + 1) = param_3;
  if (-1 < param_1) {
    uVar10 = 6;
    if (param_7 != (long *)((long)param_5 + param_1)) {
      uVar10 = 1;
    }
    *(undefined4 *)(param_8 + 2) = uVar10;
    return '\0';
  }
  if (param_1 == -2) {
    *(undefined4 *)(param_8 + 2) = 1;
  }
  return '\0';
}


