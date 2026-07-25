/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9380
 * Mangled: ._ZN14MusicPlayerJNI8LoadFileERKSs
 * Demangled: MusicPlayerJNI::LoadFile(std::string const&)
 *
 * Callers: 1
 *   0x00000000004D173C  Caver::AudioPlayerImpl::InitWithFile(std::string const&)
 *
 * Callees: 1
 *   0x000000000047BFD4  MusicPlayerJNI::LoadFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9388 string=0x00000000001F938C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 MusicPlayerJNI::LoadFile()
{
  return _ZN14MusicPlayerJNI8LoadFileERKSs();
}

