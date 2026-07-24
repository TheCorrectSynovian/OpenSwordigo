/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052bd04
 * Function: boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::NewMenuView,void*,Caver::GUIEvent*>,boost::_bi::list3<boost::_bi::value<Caver::NewMenuView*>,boost::arg<1>,boost::arg<2>>>,void,void*,Caver::GUIEvent*>::invoke
 * Signature: undefined __cdecl invoke(function_buffer * param_1, void * param_2, GUIEvent * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,
   boost::_mfi::mf2<void, Caver::NewMenuView, void*, Caver::GUIEvent*>,
   boost::_bi::list3<boost::_bi::value<Caver::NewMenuView*>, boost::arg<1>, boost::arg<2> > >, void,
   void*, Caver::GUIEvent*>::invoke(boost::detail::function::function_buffer&, void*,
   Caver::GUIEvent*) */

void boost::detail::function::
     void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::NewMenuView,void*,Caver::GUIEvent*>,boost::_bi::list3<boost::_bi::value<Caver::NewMenuView*>,boost::arg<1>,boost::arg<2>>>,void,void*,Caver::GUIEvent*>
     ::invoke(function_buffer *param_1,void *param_2,GUIEvent *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 0052bd04 to 0062bd57 has its CatchHandler @ 0052bbbc */
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(param_1 + 0x10) + ((long)*(ulong *)(param_1 + 8) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x0052bd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


