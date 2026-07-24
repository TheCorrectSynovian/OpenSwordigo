/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048630c
 * Function: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,void*,Caver::GUIEvent*>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>>::manage
 * Signature: undefined __cdecl manage(function_buffer * param_1, function_buffer * param_2, functor_manager_operation_type param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf2<void,
   Caver::OfflineAchievementsViewController, void*, Caver::GUIEvent*>,
   boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>, boost::arg<1>,
   boost::arg<2> > > >::manage(boost::detail::function::function_buffer const&,
   boost::detail::function::function_buffer&,
   boost::detail::function::functor_manager_operation_type) */

void boost::detail::function::
     functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,void*,Caver::GUIEvent*>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>>
     ::manage(long *param_1,long *param_2,uint param_3)

{
  char *__s1;
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  
  puVar1 = PTR_typeinfo_007e7db0;
                    /* catch() { ... } // from try @ 0048604c with catch @ 00486320 */
  if (param_3 != 4) {
    if (param_3 < 2) {
      param_2[2] = param_1[2];
                    /* try { // try from 0048634c to 005863db has its CatchHandler @ 00485fe0 */
      lVar4 = *param_1;
                    /* catch() { ... } // from try @ 004862e4 with catch @ 00486350 */
      param_2[1] = param_1[1];
      *param_2 = lVar4;
      return;
                    /* catch() { ... } // from try @ 00486024 with catch @ 00486354 */
    }
                    /* catch() { ... } // from try @ 00486014 with catch @ 00486358 */
    if (param_3 == 2) {
      return;
    }
    if (param_3 == 3) {
                    /* catch() { ... } // from try @ 00486038 with catch @ 0048636c
                       catch() { ... } // from try @ 00486078 with catch @ 0048636c */
      pcVar3 = *(char **)(*param_2 + 8);
      __s1 = pcVar3 + 1;
      if (*pcVar3 != '*') {
        __s1 = pcVar3;
      }
      iVar2 = strcmp(__s1,PTR_typeinfo_name_007e58a0);
      if (iVar2 != 0) {
        param_1 = (long *)0x0;
      }
      goto LAB_00486334;
    }
  }
  *(undefined2 *)(param_2 + 1) = 0;
  param_1 = (long *)puVar1;
LAB_00486334:
  *param_2 = (long)param_1;
  return;
}


