/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f6ec
 * Function: Caver::AudioSystem::PlaySoundEffect
 * Signature: undefined __cdecl PlaySoundEffect(intrusive_ptr * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::PlaySoundEffect(boost::intrusive_ptr<Caver::SoundEffect> const&, float) */

void Caver::AudioSystem::PlaySoundEffect(intrusive_ptr *param_1,float param_2)

{
  PlaySoundEffectAfterDelay(param_1,0.0,param_2);
  return;
}


