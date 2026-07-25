/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002022E0
 * Mangled: ._ZN5Caver17SoundEffectSource14InitWithEffectERKN5boost13intrusive_ptrINS_11SoundEffectEEE
 * Demangled: Caver::SoundEffectSource::InitWithEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callers: 1
 *   0x00000000004837BC  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callees: 1
 *   0x00000000004837BC  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002022E8 string=0x00000000002022EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SoundEffectSource::InitWithEffect()
{
  JUMPOUT(0x483960);
}

