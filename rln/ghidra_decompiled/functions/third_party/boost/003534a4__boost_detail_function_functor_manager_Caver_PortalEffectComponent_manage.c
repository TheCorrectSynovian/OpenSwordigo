/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003534a4
 * Function: boost::detail::function::functor_manager<Caver::PortalEffectComponent*(*)()>::manage
 * Signature: undefined __cdecl manage(function_buffer * param_1, function_buffer * param_2, functor_manager_operation_type param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::functor_manager<Caver::PortalEffectComponent*
   (*)()>::manage(boost::detail::function::function_buffer const&,
   boost::detail::function::function_buffer&,
   boost::detail::function::functor_manager_operation_type) */

void boost::detail::function::functor_manager<Caver::PortalEffectComponent*(*)()>::manage
               (long *param_1,long *param_2,undefined4 param_3)

{
  char *__s1;
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  
  puVar1 = PTR_typeinfo_007e6b28;
  switch(param_3) {
  case 0:
    param_1 = (long *)*param_1;
    break;
  case 1:
    *param_2 = *param_1;
    *param_1 = 0;
    return;
  case 2:
    *param_2 = 0;
    return;
  case 3:
    pcVar3 = *(char **)(*param_2 + 8);
    __s1 = pcVar3 + 1;
    if (*pcVar3 != '*') {
      __s1 = pcVar3;
    }
    iVar2 = strcmp(__s1,PTR_typeinfo_name_007e4f38);
    if (iVar2 != 0) {
      param_1 = (long *)0x0;
    }
    break;
  default:
    *(undefined2 *)(param_2 + 1) = 0;
    param_1 = (long *)puVar1;
  }
  *param_2 = (long)param_1;
  return;
}


