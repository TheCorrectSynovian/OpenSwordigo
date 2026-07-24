/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00580064
 * Function: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>>::manage
 * Signature: undefined __cdecl manage(function_buffer * param_1, function_buffer * param_2, functor_manager_operation_type param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf0<void,
   Caver::AudioSystem>, boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*> > >
   >::manage(boost::detail::function::function_buffer const&,
   boost::detail::function::function_buffer&,
   boost::detail::function::functor_manager_operation_type) */

void boost::detail::function::
     functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>>
     ::manage(long *param_1,long *param_2,uint param_3)

{
  char *__s1;
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  
  puVar1 = PTR_typeinfo_007e5558;
  if (param_3 != 4) {
    if (param_3 < 2) {
      param_2[2] = param_1[2];
      lVar4 = *param_1;
      param_2[1] = param_1[1];
      *param_2 = lVar4;
      return;
    }
    if (param_3 == 2) {
      return;
    }
    if (param_3 == 3) {
      pcVar3 = *(char **)(*param_2 + 8);
      __s1 = pcVar3 + 1;
      if (*pcVar3 != '*') {
        __s1 = pcVar3;
      }
      iVar2 = strcmp(__s1,PTR_typeinfo_name_007e5068);
      if (iVar2 != 0) {
        param_1 = (long *)0x0;
      }
      goto LAB_0058008c;
    }
  }
  *(undefined2 *)(param_2 + 1) = 0;
  param_1 = (long *)puVar1;
LAB_0058008c:
  *param_2 = (long)param_1;
  return;
}


