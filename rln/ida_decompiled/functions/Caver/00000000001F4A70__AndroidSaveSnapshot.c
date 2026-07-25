/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4A70
 * Mangled: ._ZN5Caver19AndroidSaveSnapshotERKSsS1_S1_xx
 * Demangled: Caver::AndroidSaveSnapshot(std::string const&,std::string const&,std::string const&,long long,long long)
 *
 * Callers: 1
 *   0x00000000004BBB00  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *
 * Callees: 1
 *   0x000000000047B380  Caver::AndroidSaveSnapshot(std::string const&,std::string const&,std::string const&,long long,long long)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4A78 string=0x00000000001F4A7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AndroidSaveSnapshot()
{
  return _ZN5Caver19AndroidSaveSnapshotERKSsS1_S1_xx();
}

