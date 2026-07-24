/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e2a38
 * Function: boost::detail::sp_counted_impl_p<Caver::FountainParticleEmitter>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::FountainParticleEmitter> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::FountainParticleEmitter>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::FountainParticleEmitter>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::FountainParticleEmitter> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}


