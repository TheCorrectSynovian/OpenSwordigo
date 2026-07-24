/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005800fc
 * Function: boost::detail::function::void_function_obj_invoker0<boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>,void>::invoke
 * Signature: undefined __cdecl invoke(function_buffer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::void_function_obj_invoker0<boost::_bi::bind_t<void,
   boost::_mfi::mf0<void, Caver::AudioSystem>,
   boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*> > >,
   void>::invoke(boost::detail::function::function_buffer&) */

void boost::detail::function::
     void_function_obj_invoker0<boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>,void>
     ::invoke(function_buffer *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(param_1 + 0x10) + ((long)*(ulong *)(param_1 + 8) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00580114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


