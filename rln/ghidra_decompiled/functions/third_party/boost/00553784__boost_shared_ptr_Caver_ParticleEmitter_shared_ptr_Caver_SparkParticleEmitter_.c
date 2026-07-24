/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553784
 * Function: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>
 * Signature: undefined __thiscall shared_ptr<Caver::SparkParticleEmitter>(shared_ptr<Caver::ParticleEmitter> * this, SparkParticleEmitter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>(Caver::SparkParticleEmitter*)
    */

void __thiscall
boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>
          (shared_ptr<Caver::ParticleEmitter> *this,SparkParticleEmitter *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(SparkParticleEmitter **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e7b48;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 005537c4 to 006537cb has its CatchHandler @ 00553b38 */
  *(long **)(this + 8) = plVar2;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  return;
}


