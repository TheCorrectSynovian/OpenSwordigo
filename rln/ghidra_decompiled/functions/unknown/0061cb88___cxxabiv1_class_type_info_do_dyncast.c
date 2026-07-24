/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061cb88
 * Function: __cxxabiv1::__class_type_info::__do_dyncast
 * Signature: undefined __thiscall __do_dyncast(__class_type_info * this, long param_1, __sub_kind param_2, __class_type_info * param_3, void * param_4, __class_type_info * param_5, void * param_6, __dyncast_result * param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_dyncast
          (__class_type_info *this,undefined8 param_2,undefined4 param_3,long param_4,long param_5,
          long param_6,long param_7,long *param_8)

{
  int iVar1;
  char *__s2;
  char *__s1;
  
                    /* try { // try from 0061cb88 to 0071cbaf has its CatchHandler @ 0061cbdc */
  __s1 = *(char **)(this + 8);
  if (param_5 == param_7) {
                    /* catch() { ... } // from try @ 0061cb5c with catch @ 0061cbec */
    if (__s1 == *(char **)(param_6 + 8)) {
LAB_0061cc5c:
      *(undefined4 *)((long)param_8 + 0xc) = param_3;
      return 0;
    }
    if (*__s1 == '*') {
      if (__s1 != *(char **)(param_4 + 8)) {
        return 0;
      }
      goto LAB_0061cc3c;
    }
                    /* try { // try from 0061cc10 to 0071ccef has its CatchHandler @ 0061ccf8 */
    iVar1 = strcmp(__s1,*(char **)(param_6 + 8));
    if (iVar1 == 0) goto LAB_0061cc5c;
    __s2 = *(char **)(param_4 + 8);
    if (__s1 == __s2) goto LAB_0061cc3c;
  }
  else {
    __s2 = *(char **)(param_4 + 8);
    if (__s1 == __s2) goto LAB_0061cc3c;
                    /* try { // try from 0061cbb0 to 0071cc0f has its CatchHandler @ 0061ca50 */
    if (*__s1 == '*') {
      return 0;
    }
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 0061cb88 with catch @ 0061cbdc */
    return 0;
  }
LAB_0061cc3c:
                    /* catch() { ... } // from try @ 0061cab4 with catch @ 0061cc3c */
  *param_8 = param_5;
  *(undefined4 *)(param_8 + 1) = param_3;
  *(undefined4 *)(param_8 + 2) = 1;
                    /* catch() { ... } // from try @ 0061caa8 with catch @ 0061cc54
                       catch() { ... } // from try @ 0061cabc with catch @ 0061cc54 */
  return 0;
}


