/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3750
 * Mangled: ._ZN5Caver5Proto11SoundEffectC2Ev
 * Demangled: Caver::Proto::SoundEffect::SoundEffect(void)
 *
 * Callers: 1
 *   0x00000000004859C8  Caver::SoundLibrary::SaveToProtobufMessage(Caver::Proto::SoundLibrary *)
 *
 * Callees: 1
 *   0x00000000002D7550  Caver::Proto::GUIViewLayout::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3754 string=0x00000000002D75A8 "h "
 *   insn=0x00000000001F3758 string=0x00000000001F375C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundEffect::SoundEffect(Caver::Proto::SoundEffect *this)
{
  JUMPOUT(0x2D75A8);
}

