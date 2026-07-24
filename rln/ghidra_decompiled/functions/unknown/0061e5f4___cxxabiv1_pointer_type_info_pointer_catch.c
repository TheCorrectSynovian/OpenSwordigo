/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e5f4
 * Function: __cxxabiv1::__pointer_type_info::__pointer_catch
 * Signature: undefined __thiscall __pointer_catch(__pointer_type_info * this, __pbase_type_info * param_1, void * * param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__pointer_type_info::__pointer_catch(__cxxabiv1::__pbase_type_info const*, void**,
   unsigned int) const */

byte __thiscall
__cxxabiv1::__pointer_type_info::__pointer_catch
          (__pointer_type_info *this,__pbase_type_info *param_1,void **param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  char *__s1;
  
  if (param_3 < 2) {
    plVar3 = *(long **)(this + 0x18);
                    /* try { // try from 0061e63c to 0071e64b has its CatchHandler @ 0061e914 */
    __s1 = (char *)plVar3[1];
    if ((__s1 == *(char **)(PTR_typeinfo_007e6008 + 8)) ||
       ((*__s1 != '*' && (iVar2 = strcmp(__s1,*(char **)(PTR_typeinfo_007e6008 + 8)), iVar2 == 0))))
    {
      bVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18));
                    /* try { // try from 0061e694 to 0071e6a7 has its CatchHandler @ 0061e910 */
      return bVar1 ^ 1;
    }
  }
  else {
    plVar3 = *(long **)(this + 0x18);
  }
  bVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined8 *)(param_1 + 0x18),param_2,param_3 + 2);
                    /* try { // try from 0061e624 to 0071e62f has its CatchHandler @ 0061e9a8 */
                    /* try { // try from 0061e630 to 0071e63b has its CatchHandler @ 0061e94c */
  return bVar1;
}


