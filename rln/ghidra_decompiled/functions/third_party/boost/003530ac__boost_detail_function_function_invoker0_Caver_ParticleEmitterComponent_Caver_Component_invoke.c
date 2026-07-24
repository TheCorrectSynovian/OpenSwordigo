/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003530ac
 * Function: boost::detail::function::function_invoker0<Caver::ParticleEmitterComponent*(*)(),Caver::Component*>::invoke
 * Signature: undefined __cdecl invoke(function_buffer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::function_invoker0<Caver::ParticleEmitterComponent* (*)(),
   Caver::Component*>::invoke(boost::detail::function::function_buffer&) */

void boost::detail::function::
     function_invoker0<Caver::ParticleEmitterComponent*(*)(),Caver::Component*>::invoke
               (function_buffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003530b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)();
  return;
}


