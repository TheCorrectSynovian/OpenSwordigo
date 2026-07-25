/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203390
 * Mangled: ._ZN5Caver11SoundEffect10LoadBufferEv
 * Demangled: Caver::SoundEffect::LoadBuffer(void)
 *
 * Callers: 1
 *   0x0000000000483B14  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callees: 1
 *   0x00000000004D1E80  Caver::SoundEffect::LoadBuffer(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203398 string=0x000000000020339C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffect::LoadBuffer(Caver::SoundEffect *this)
{
  return _ZN5Caver11SoundEffect10LoadBufferEv(this);
}

