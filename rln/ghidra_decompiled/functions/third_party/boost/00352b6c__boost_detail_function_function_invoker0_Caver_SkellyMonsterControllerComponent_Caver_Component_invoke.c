/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00352b6c
 * Function: boost::detail::function::function_invoker0<Caver::SkellyMonsterControllerComponent*(*)(),Caver::Component*>::invoke
 * Signature: undefined __cdecl invoke(function_buffer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::function_invoker0<Caver::SkellyMonsterControllerComponent* (*)(),
   Caver::Component*>::invoke(boost::detail::function::function_buffer&) */

void boost::detail::function::
     function_invoker0<Caver::SkellyMonsterControllerComponent*(*)(),Caver::Component*>::invoke
               (function_buffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00352b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)();
  return;
}


