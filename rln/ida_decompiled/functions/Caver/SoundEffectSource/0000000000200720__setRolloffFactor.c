/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200720
 * Mangled: ._ZN5Caver17SoundEffectSource16setRolloffFactorEf
 * Demangled: Caver::SoundEffectSource::setRolloffFactor(float)
 *
 * Callers: 2
 *   0x00000000004837BC  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x0000000000483B14  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callees: 1
 *   0x0000000000484068  Caver::SoundEffectSource::setReferenceDistance(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200728 string=0x000000000020072C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundEffectSource::setRolloffFactor(Caver::SoundEffectSource *this, float a2)
{
  JUMPOUT(0x48419C);
}

