/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F81B0
 * Mangled: ._ZN5Caver17SoundEffectSource20setReferenceDistanceEf
 * Demangled: Caver::SoundEffectSource::setReferenceDistance(float)
 *
 * Callers: 2
 *   0x00000000004837BC  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x0000000000483B14  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callees: 1
 *   0x0000000000484068  Caver::SoundEffectSource::setReferenceDistance(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F81B8 string=0x00000000001F81BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffectSource::setReferenceDistance(Caver::SoundEffectSource *this, float a2)
{
  return _ZN5Caver17SoundEffectSource20setReferenceDistanceEf(this, a2);
}

