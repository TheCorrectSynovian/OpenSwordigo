/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553994
 * Function: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>
 * Signature: undefined __thiscall shared_ptr<Caver::FountainParticleEmitter>(shared_ptr<Caver::ParticleEmitter> * this, FountainParticleEmitter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter*)
    */

void __thiscall
boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>
          (shared_ptr<Caver::ParticleEmitter> *this,FountainParticleEmitter *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 005539a8 to 006539af has its CatchHandler @ 00553c6c */
  *(FountainParticleEmitter **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e7f08;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
                    /* try { // try from 005539d0 to 006539d3 has its CatchHandler @ 00553b30 */
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  return;
}


