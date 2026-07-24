/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e724
 * Function: __cxxabiv1::__si_class_type_info::__do_dyncast
 * Signature: undefined __thiscall __do_dyncast(__si_class_type_info * this, long param_1, __sub_kind param_2, __class_type_info * param_3, void * param_4, __class_type_info * param_5, void * param_6, __dyncast_result * param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__si_class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined1 __thiscall
__cxxabiv1::__si_class_type_info::__do_dyncast
          (__si_class_type_info *this,long param_1,undefined8 param_3,long param_4,long param_5,
          long param_6,long param_7,long *param_8)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_4 + 8)) {
LAB_0061e7c8:
    *param_8 = param_5;
    *(int *)(param_8 + 1) = (int)param_3;
    if (-1 < param_1) {
      uVar4 = 6;
      if (param_7 != param_5 + param_1) {
        uVar4 = 1;
      }
      *(undefined4 *)(param_8 + 2) = uVar4;
      return 0;
    }
    uVar2 = 0;
    if (param_1 == -2) {
      *(undefined4 *)(param_8 + 2) = 1;
    }
  }
  else {
    cVar1 = *__s1;
    if (cVar1 != '*') {
      iVar3 = strcmp(__s1,*(char **)(param_4 + 8));
      if (iVar3 == 0) goto LAB_0061e7c8;
    }
    if (param_5 == param_7) {
      if (__s1 == *(char **)(param_6 + 8)) {
LAB_0061e864:
        *(int *)((long)param_8 + 0xc) = (int)param_3;
        return 0;
      }
      if (cVar1 != '*') {
        iVar3 = strcmp(__s1,*(char **)(param_6 + 8));
        if (iVar3 == 0) goto LAB_0061e864;
      }
    }
    uVar2 = (**(code **)(**(long **)(this + 0x10) + 0x38))
                      (*(long **)(this + 0x10),param_1,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar2;
}


