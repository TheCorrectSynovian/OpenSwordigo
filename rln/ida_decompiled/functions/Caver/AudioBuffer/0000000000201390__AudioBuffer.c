/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201390
 * Mangled: ._ZN5Caver11AudioBufferC2Ev
 * Demangled: Caver::AudioBuffer::AudioBuffer(void)
 *
 * Callers: 1
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000004D0C60  Caver::AudioBuffer::AudioBuffer(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201398 string=0x000000000020139C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioBuffer::AudioBuffer(Caver::AudioBuffer *this)
{
  return _ZN5Caver11AudioBufferC2Ev(this);
}

