/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005538e4
 * Function: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>
 * Signature: undefined __thiscall shared_ptr<Caver::WhooshParticleEmitter>(shared_ptr<Caver::ParticleEmitter> * this, WhooshParticleEmitter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>(Caver::WhooshParticleEmitter*)
    */

void __thiscall
boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>
          (shared_ptr<Caver::ParticleEmitter> *this,WhooshParticleEmitter *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 005538f0 to 006538f7 has its CatchHandler @ 00553c6c */
  *(WhooshParticleEmitter **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6860;
  plVar2[3] = (long)param_1;
                    /* try { // try from 0055391c to 0065398b has its CatchHandler @ 00553b54 */
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  return;
}


