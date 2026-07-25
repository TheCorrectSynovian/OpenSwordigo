/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE500
 * Mangled: ._ZN5Caver12SoundLibrary25BufferForResourceWithNameERKSs
 * Demangled: Caver::SoundLibrary::BufferForResourceWithName(std::string const&)
 *
 * Callers: 1
 *   0x00000000004D1E80  Caver::SoundEffect::LoadBuffer(void)
 *
 * Callees: 1
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE508 string=0x00000000001FE50C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SoundLibrary::BufferForResourceWithName()
{
  JUMPOUT(0x485EBC);
}

