/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553340
 * Function: Caver::ParticleEmitter::CreateFromType
 * Signature: undefined __thiscall CreateFromType(ParticleEmitter * this, Type param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitter::CreateFromType(Caver::ParticleEmitter::Type) */

void __thiscall Caver::ParticleEmitter::CreateFromType(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  FountainParticleEmitter *this;
  TrailParticleEmitter *this_00;
  ParticleEmitter *pPVar3;
  WhooshParticleEmitter *this_01;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  switch(param_2) {
  case 1:
    pPVar3 = operator_new(0xd8);
                    /* try { // try from 00553398 to 0065339f has its CatchHandler @ 00553cf4 */
                    /* try { // try from 005533a0 to 006533ab has its CatchHandler @ 00553cbc */
    memset(pPVar3,0,0xd8);
    ParticleEmitter(pPVar3);
    *(undefined **)pPVar3 = PTR_vtable_007e6fa0 + 0x10;
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_48,(BlastParticleEmitter *)pPVar3);
    break;
  case 2:
    pPVar3 = operator_new(0xd8);
    memset(pPVar3,0,0xd8);
    ParticleEmitter(pPVar3);
    *(undefined **)pPVar3 = PTR_vtable_007e6a90 + 0x10;
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_48,(SparkParticleEmitter *)pPVar3);
    break;
  case 3:
    this_00 = operator_new(0xe0);
    TrailParticleEmitter::TrailParticleEmitter(this_00);
                    /* try { // try from 00553404 to 0065340b has its CatchHandler @ 00553c10 */
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_48,this_00);
    break;
  case 4:
                    /* try { // try from 0055345c to 00653463 has its CatchHandler @ 00553c0c */
    this_01 = operator_new(0xe0);
                    /* try { // try from 00553464 to 00653473 has its CatchHandler @ 00553bd4 */
    WhooshParticleEmitter::WhooshParticleEmitter(this_01);
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_48,this_01);
    break;
  case 5:
    this = operator_new(0xe0);
                    /* try { // try from 005533d8 to 006533eb has its CatchHandler @ 00553f24 */
    FountainParticleEmitter::FountainParticleEmitter(this);
    boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>
              ((shared_ptr<Caver::ParticleEmitter> *)&local_48,this);
    break;
  default:
    goto switchD_00553384_default;
  }
  uVar2 = local_48;
  local_48 = 0;
  *param_1 = uVar2;
  param_1[1] = uStack_40;
switchD_00553384_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00553498 to 0065349f has its CatchHandler @ 00553bc4 */
                    /* try { // try from 005534a0 to 006534b3 has its CatchHandler @ 00553b58 */
  return;
}


