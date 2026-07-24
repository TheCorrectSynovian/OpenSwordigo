/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059af84
 * Function: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>::manage
 * Signature: undefined __cdecl manage(function_buffer * param_1, function_buffer * param_2, functor_manager_operation_type param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf3<void,
   Caver::GUINavigationController, boost::shared_ptr<Caver::GUIViewController> const&, void*,
   Caver::GUIEvent*>, boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2> > >
   >::manage(boost::detail::function::function_buffer const&,
   boost::detail::function::function_buffer&,
   boost::detail::function::functor_manager_operation_type) */

void boost::detail::function::
     functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
     ::manage(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_typeinfo_007e7640;
  if (param_3 == 4) {
    *(undefined2 *)(param_2 + 1) = 0;
                    /* try { // try from 0059af98 to 0069afc7 has its CatchHandler @ 0059c8a4 */
    *param_2 = puVar1;
    return;
  }
  manager();
  return;
}


