/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F47F0
 * Mangled: ._ZN5Caver17LastPathComponentERKSs
 * Demangled: Caver::LastPathComponent(std::string const&)
 *
 * Callers: 4
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004D173C  Caver::AudioPlayerImpl::InitWithFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004B504C  Caver::LastPathComponent(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F47F8 string=0x00000000001F47FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::LastPathComponent()
{
  return _ZN5Caver17LastPathComponentERKSs();
}

