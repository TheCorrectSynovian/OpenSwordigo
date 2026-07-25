/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF510
 * Mangled: ._ZN5Caver5Proto11SoundEffect10SharedDtorEv
 * Demangled: Caver::Proto::SoundEffect::SharedDtor(void)
 *
 * Callers: 2
 *   0x00000000002D7620  Caver::Proto::SoundEffect::SoundEffect(Caver::Proto::SoundEffect const&)
 *   0x00000000002D79BC  Caver::Proto::SoundEffect::~SoundEffect()
 *
 * Callees: 1
 *   0x00000000002D7620  Caver::Proto::SoundEffect::SoundEffect(Caver::Proto::SoundEffect const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF518 string=0x00000000001FF51C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundEffect::SharedDtor(Caver::Proto::SoundEffect *this)
{
  JUMPOUT(0x2D7878);
}

