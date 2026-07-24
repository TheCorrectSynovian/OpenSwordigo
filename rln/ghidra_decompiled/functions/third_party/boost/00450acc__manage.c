/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00450acc
 * Function: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GameSceneView,void*,Caver::GUIEvent*>,boost::_bi::list3<boost::_bi::value<Caver::GameSceneView*>,boost::arg<1>,boost::arg<2>>>>::manage
 * Signature: undefined __cdecl manage(function_buffer * param_1, function_buffer * param_2, functor_manager_operation_type param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf2<void,
   Caver::GameSceneView, void*, Caver::GUIEvent*>,
   boost::_bi::list3<boost::_bi::value<Caver::GameSceneView*>, boost::arg<1>, boost::arg<2> > >
   >::manage(boost::detail::function::function_buffer const&,
   boost::detail::function::function_buffer&,
   boost::detail::function::functor_manager_operation_type) */

void boost::detail::function::
     functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GameSceneView,void*,Caver::GUIEvent*>,boost::_bi::list3<boost::_bi::value<Caver::GameSceneView*>,boost::arg<1>,boost::arg<2>>>>
     ::manage(long *param_1,long *param_2,uint param_3)

{
  char *__s1;
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  
                    /* try { // try from 00450acc to 00550af3 has its CatchHandler @ 00450b0c */
  puVar1 = PTR_typeinfo_007e5230;
  if (param_3 != 4) {
    if (param_3 < 2) {
      param_2[2] = param_1[2];
                    /* catch() { ... } // from try @ 00450acc with catch @ 00450b0c */
      lVar4 = *param_1;
                    /* try { // try from 00450b10 to 00550b17 has its CatchHandler @ 00450b1c */
      param_2[1] = param_1[1];
      *param_2 = lVar4;
      return;
    }
                    /* try { // try from 00450b18 to 00550b33 has its CatchHandler @ 00450a78 */
                    /* catch() { ... } // from try @ 00450b10 with catch @ 00450b1c */
    if (param_3 == 2) {
      return;
    }
                    /* catch() { ... } // from try @ 00450af4 with catch @ 00450b20 */
    if (param_3 == 3) {
      pcVar3 = *(char **)(*param_2 + 8);
                    /* try { // try from 00450b34 to 00550b5b has its CatchHandler @ 00450b34
                       catch() { ... } // from try @ 00450b34 with catch @ 00450b34
                       catch() { ... } // from try @ 00450b64 with catch @ 00450b34 */
      __s1 = pcVar3 + 1;
      if (*pcVar3 != '*') {
        __s1 = pcVar3;
      }
      iVar2 = strcmp(__s1,PTR_typeinfo_name_007e6b60);
      if (iVar2 != 0) {
        param_1 = (long *)0x0;
      }
      goto LAB_00450af4;
    }
  }
  *(undefined2 *)(param_2 + 1) = 0;
  param_1 = (long *)puVar1;
LAB_00450af4:
                    /* try { // try from 00450af4 to 00550afb has its CatchHandler @ 00450b20 */
  *param_2 = (long)param_1;
                    /* try { // try from 00450b5c to 00550b63 has its CatchHandler @ 00450ba4 */
  return;
}


