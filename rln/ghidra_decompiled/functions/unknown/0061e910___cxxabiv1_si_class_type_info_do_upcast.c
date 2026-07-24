/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e910
 * Function: __cxxabiv1::__si_class_type_info::__do_upcast
 * Signature: undefined __thiscall __do_upcast(__si_class_type_info * this, __class_type_info * param_1, void * param_2, __upcast_result * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

char __thiscall
__cxxabiv1::__si_class_type_info::__do_upcast
          (__si_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  char cVar1;
  
                    /* catch() { ... } // from try @ 0061e694 with catch @ 0061e910 */
                    /* catch() { ... } // from try @ 0061e63c with catch @ 0061e914 */
  cVar1 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (cVar1 == '\0') {
                    /* catch() { ... } // from try @ 0061e630 with catch @ 0061e94c */
    cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x30))
                      (*(long **)(this + 0x10),param_1,param_2,param_3);
  }
  return cVar1;
}


