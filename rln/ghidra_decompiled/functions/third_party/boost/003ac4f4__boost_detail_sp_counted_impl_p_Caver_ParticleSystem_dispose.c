/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac4f4
 * Function: boost::detail::sp_counted_impl_p<Caver::ParticleSystem>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ParticleSystem> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ParticleSystem>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ParticleSystem>::dispose
          (sp_counted_impl_p<Caver::ParticleSystem> *this)

{
  ParticleSystem *this_00;
  
  this_00 = *(ParticleSystem **)(this + 0x18);
  if (this_00 != (ParticleSystem *)0x0) {
    Caver::ParticleSystem::~ParticleSystem(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


