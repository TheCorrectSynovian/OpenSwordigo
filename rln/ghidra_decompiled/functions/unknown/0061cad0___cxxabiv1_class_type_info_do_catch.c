/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061cad0
 * Function: __cxxabiv1::__class_type_info::__do_catch
 * Signature: undefined __thiscall __do_catch(__class_type_info * this, type_info * param_1, void * * param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined1 __thiscall
__cxxabiv1::__class_type_info::__do_catch
          (__class_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_1 + 8)) {
    return 1;
  }
  if ((*__s1 != '*') && (iVar2 = strcmp(__s1,*(char **)(param_1 + 8)), iVar2 == 0)) {
    return 1;
  }
  if (3 < param_3) {
    return 0;
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this,param_2);
                    /* try { // try from 0061cb5c to 0071cb67 has its CatchHandler @ 0061cbec */
  return uVar1;
}


