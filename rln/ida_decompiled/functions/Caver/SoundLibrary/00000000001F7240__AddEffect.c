/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7240
 * Mangled: ._ZN5Caver12SoundLibrary9AddEffectERKN5boost13intrusive_ptrINS_11SoundEffectEEE
 * Demangled: Caver::SoundLibrary::AddEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callers: 2
 *   0x0000000000485478  Caver::SoundLibrary::LoadFromProtobufMessage(Caver::Proto::SoundLibrary const&)
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Callees: 1
 *   0x0000000000485478  Caver::SoundLibrary::LoadFromProtobufMessage(Caver::Proto::SoundLibrary const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7248 string=0x00000000001F724C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SoundLibrary::AddEffect()
{
  JUMPOUT(0x485590);
}

