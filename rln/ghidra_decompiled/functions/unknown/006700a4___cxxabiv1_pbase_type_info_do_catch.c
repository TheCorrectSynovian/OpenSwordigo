/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006700a4
 * Function: __cxxabiv1::__pbase_type_info::__do_catch
 * Signature: undefined __thiscall __do_catch(__pbase_type_info * this, type_info * param_1, void * * param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__pbase_type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined1 __thiscall
__cxxabiv1::__pbase_type_info::__do_catch
          (__pbase_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  char *__s2;
  long lVar5;
  
  pcVar4 = *(char **)(this + 8);
  if (pcVar4 == *(char **)(param_1 + 8)) {
    return 1;
  }
  if ((*pcVar4 != '*') && (iVar3 = strcmp(pcVar4,*(char **)(param_1 + 8)), iVar3 == 0)) {
    return 1;
  }
  lVar5 = *(long *)this;
  pcVar4 = *(char **)(*(long *)(lVar5 + -8) + 8);
  __s2 = *(char **)(*(long *)(*(long *)param_1 + -8) + 8);
  if ((((pcVar4 == __s2) || ((*pcVar4 != '*' && (iVar3 = strcmp(pcVar4,__s2), iVar3 == 0)))) &&
      ((param_3 & 1) != 0)) &&
     ((*(uint *)(param_1 + 0x10) & (*(uint *)(this + 0x10) ^ 0xffffffff)) == 0)) {
    uVar1 = param_3 & 0xfffffffe;
    if ((*(uint *)(this + 0x10) & 1) != 0) {
      uVar1 = param_3;
    }
    uVar2 = (**(code **)(lVar5 + 0x30))(this,param_1,param_2,uVar1);
    return uVar2;
  }
  return 0;
}


