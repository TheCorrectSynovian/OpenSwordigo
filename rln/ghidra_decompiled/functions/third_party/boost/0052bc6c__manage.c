/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052bc6c
 * Function: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::NewMenuView,void*,Caver::GUIEvent*>,boost::_bi::list3<boost::_bi::value<Caver::NewMenuView*>,boost::arg<1>,boost::arg<2>>>>::manage
 * Signature: undefined __cdecl manage(function_buffer * param_1, function_buffer * param_2, functor_manager_operation_type param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf2<void,
   Caver::NewMenuView, void*, Caver::GUIEvent*>,
   boost::_bi::list3<boost::_bi::value<Caver::NewMenuView*>, boost::arg<1>, boost::arg<2> > >
   >::manage(boost::detail::function::function_buffer const&,
   boost::detail::function::function_buffer&,
   boost::detail::function::functor_manager_operation_type) */

void boost::detail::function::
     functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::NewMenuView,void*,Caver::GUIEvent*>,boost::_bi::list3<boost::_bi::value<Caver::NewMenuView*>,boost::arg<1>,boost::arg<2>>>>
     ::manage(long *param_1,long *param_2,uint param_3)

{
  char *__s1;
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  
  puVar1 = PTR_typeinfo_007e7da0;
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
                    /* try { // try from 0052bce8 to 0062bd03 has its CatchHandler @ 0052bd54 */
      iVar2 = strcmp(__s1,PTR_typeinfo_name_007e6420);
      if (iVar2 != 0) {
        param_1 = (long *)0x0;
      }
      goto LAB_0052bc94;
    }
  }
                    /* try { // try from 0052bc88 to 0062bc8b has its CatchHandler @ 0052bd3c */
                    /* try { // try from 0052bc8c to 0062bce7 has its CatchHandler @ 0052bbbc */
  *(undefined2 *)(param_2 + 1) = 0;
  param_1 = (long *)puVar1;
LAB_0052bc94:
  *param_2 = (long)param_1;
  return;
}


