/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFFF0
 * Mangled: ._ZN5Caver11SoundEffect21SaveToProtobufMessageEPNS_5Proto11SoundEffectE
 * Demangled: Caver::SoundEffect::SaveToProtobufMessage(Caver::Proto::SoundEffect *)
 *
 * Callers: 1
 *   0x00000000004859C8  Caver::SoundLibrary::SaveToProtobufMessage(Caver::Proto::SoundLibrary *)
 *
 * Callees: 1
 *   0x00000000004D1DB4  Caver::SoundEffect::SaveToProtobufMessage(Caver::Proto::SoundEffect *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFFF8 string=0x00000000001FFFFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffect::SaveToProtobufMessage(Caver::SoundEffect *this, Caver::Proto::SoundEffect *a2)
{
  return _ZN5Caver11SoundEffect21SaveToProtobufMessageEPNS_5Proto11SoundEffectE(this, a2);
}

