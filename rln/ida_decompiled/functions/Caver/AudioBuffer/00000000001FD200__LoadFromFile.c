/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD200
 * Mangled: ._ZN5Caver11AudioBuffer12LoadFromFileERKSs
 * Demangled: Caver::AudioBuffer::LoadFromFile(std::string const&)
 *
 * Callers: 1
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000004D0C74  Caver::AudioBuffer::~AudioBuffer()
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD204 string=0x00000000004D0DBC "u"
 *   insn=0x00000000001FD208 string=0x00000000001FD20C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::AudioBuffer::LoadFromFile()
{
  JUMPOUT(0x4D0DBC);
}

