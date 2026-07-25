/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201F00
 * Mangled: ._ZN5Caver12ProfileStatsC2EPNS_13PlayerProfileE
 * Demangled: Caver::ProfileStats::ProfileStats(Caver::PlayerProfile *)
 *
 * Callers: 1
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000004BC740  Caver::ProfileStats::ProfileStats(Caver::PlayerProfile *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201F08 string=0x0000000000201F0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileStats::ProfileStats(Caver::ProfileStats *this, Caver::PlayerProfile *a2)
{
  return _ZN5Caver12ProfileStatsC2EPNS_13PlayerProfileE(this, a2);
}

