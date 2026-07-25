/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA610
 * Mangled: ._ZN5Caver22ProfileManager_Android12SaveSnapshotEPNS_13PlayerProfileERKSs
 * Demangled: Caver::ProfileManager_Android::SaveSnapshot(Caver::PlayerProfile *,std::string const&)
 *
 * Callers: 1
 *   0x00000000004BB8D0  Caver::ProfileManager_Android::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callees: 1
 *   0x00000000004BBB00  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA618 string=0x00000000001FA61C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ProfileManager_Android::SaveSnapshot()
{
  JUMPOUT(0x4BBB8C);
}

