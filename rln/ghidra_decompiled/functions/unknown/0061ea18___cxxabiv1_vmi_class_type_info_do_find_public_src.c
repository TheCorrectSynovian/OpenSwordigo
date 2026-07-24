/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ea18
 * Function: __cxxabiv1::__vmi_class_type_info::__do_find_public_src
 * Signature: undefined __thiscall __do_find_public_src(__vmi_class_type_info * this, long param_1, void * param_2, __class_type_info * param_3, void * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__vmi_class_type_info::__do_find_public_src(long, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

uint __thiscall
__cxxabiv1::__vmi_class_type_info::__do_find_public_src
          (__vmi_class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *__s1;
  long lVar5;
  __vmi_class_type_info *p_Var6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == param_4) {
    __s1 = *(char **)(this + 8);
    if (__s1 == *(char **)(param_3 + 8)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar3 = strcmp(__s1,*(char **)(param_3 + 8)), iVar3 == 0)) {
      return 6;
    }
  }
  uVar8 = (ulong)*(uint *)(this + 0x14);
                    /* catch() { ... } // from try @ 0061e5bc with catch @ 0061ea54 */
  uVar7 = 1;
                    /* catch() { ... } // from try @ 0061e544 with catch @ 0061ea5c */
  p_Var6 = this + uVar8 * 0x10;
  if (uVar8 != 0) {
    do {
      uVar4 = *(ulong *)(p_Var6 + 0x10);
      lVar5 = (long)uVar4 >> 8;
      if ((((uint)uVar4 >> 1 & 1) != 0) && (((uVar4 & 1) == 0 || (param_1 != -3)))) {
        if ((uVar4 & 1) != 0) {
          lVar5 = *(long *)(*(long *)param_2 + lVar5);
        }
        uVar2 = (**(code **)(**(long **)(p_Var6 + 8) + 0x40))
                          (*(long **)(p_Var6 + 8),param_1,(long)param_2 + lVar5,param_3,param_4);
        if (3 < (int)uVar2) {
          return uVar2 | (uint)(uVar4 & 1);
        }
      }
                    /* catch() { ... } // from try @ 0061e530 with catch @ 0061eab8 */
      bVar1 = uVar7 != uVar8;
      p_Var6 = p_Var6 + -0x10;
      uVar7 = uVar7 + 1;
    } while (bVar1);
  }
                    /* catch() { ... } // from try @ 0061e5f0 with catch @ 0061eac8 */
  return 1;
}


