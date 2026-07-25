/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201BB0
 * Mangled: ._ZN5Caver11SoundEffectC2Ev
 * Demangled: Caver::SoundEffect::SoundEffect(void)
 *
 * Callers: 2
 *   0x0000000000485478  Caver::SoundLibrary::LoadFromProtobufMessage(Caver::Proto::SoundLibrary const&)
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000004D1990  Caver::SoundEffect::SoundEffect(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201BB8 string=0x0000000000201BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffect::SoundEffect(Caver::SoundEffect *this)
{
  return _ZN5Caver11SoundEffectC2Ev(this);
}

