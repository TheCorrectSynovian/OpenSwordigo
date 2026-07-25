/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD520
 * Mangled: ._ZN5Caver17SoundEffectSource11setPositionERKNS_7Vector3E
 * Demangled: Caver::SoundEffectSource::setPosition(Caver::Vector3 const&)
 *
 * Callers: 2
 *   0x00000000004837BC  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x0000000000483B14  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callees: 1
 *   0x0000000000484068  Caver::SoundEffectSource::setReferenceDistance(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD528 string=0x00000000001FD52C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SoundEffectSource::setPosition()
{
  JUMPOUT(0x484424);
}

