/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00552d00
 * Function: Caver::ParticleEmitter::Clone
 * Signature: undefined __thiscall Clone(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitter::Clone() */

void __thiscall Caver::ParticleEmitter::Clone(ParticleEmitter *this)

{
  long lVar1;
  ParticleEmitter aPStack_90 [88];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Proto::ParticleEmitter::ParticleEmitter(aPStack_90);
  SaveToProtobufMessage(this,aPStack_90);
                    /* try { // try from 00552d3c to 00652d63 has its CatchHandler @ 00552ee4 */
  LoadFromProtobufMessage(aPStack_90);
  Proto::ParticleEmitter::~ParticleEmitter(aPStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00552d64 to 00652f13 has its CatchHandler @ 00552b64 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


