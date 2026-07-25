/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD5F0
 * Mangled: ._ZNK5Caver17SoundEffectSource8isActiveEv
 * Demangled: Caver::SoundEffectSource::isActive(void)
 *
 * Callers: 1
 *   0x0000000000484068  Caver::SoundEffectSource::setReferenceDistance(float)
 *
 * Callees: 1
 *   0x00000000004845E0  Caver::SoundEffectSource::isActive(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD5F8 string=0x00000000001FD5FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffectSource::isActive(Caver::SoundEffectSource *this)
{
  return _ZNK5Caver17SoundEffectSource8isActiveEv(this);
}

