/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ca68
 * Function: __cxxabiv1::__class_type_info::__do_upcast
 * Signature: undefined __thiscall __do_upcast(__class_type_info * this, __class_type_info * param_1, void * param_2, __upcast_result * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void *param_2,__upcast_result *param_3
          )

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 != *(char **)(param_1 + 8)) {
    if (*__s1 != '*') {
      iVar1 = strcmp(__s1,*(char **)(param_1 + 8));
      if (iVar1 == 0) goto LAB_0061cab0;
    }
                    /* try { // try from 0061caa8 to 0071cab3 has its CatchHandler @ 0061cc54 */
    return 0;
  }
LAB_0061cab0:
                    /* try { // try from 0061cab4 to 0071cabb has its CatchHandler @ 0061cc3c */
  *(void **)param_3 = param_2;
  *(undefined8 *)(param_3 + 0x10) = 0x10;
                    /* try { // try from 0061cabc to 0071cb33 has its CatchHandler @ 0061cc54 */
  *(undefined4 *)(param_3 + 8) = 6;
  return 1;
}


