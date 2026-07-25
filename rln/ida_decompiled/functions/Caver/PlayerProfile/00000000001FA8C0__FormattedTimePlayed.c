/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA8C0
 * Mangled: ._ZN5Caver13PlayerProfile19FormattedTimePlayedEdb
 * Demangled: Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *
 * Callers: 2
 *   0x00000000003A7308  Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *   0x00000000003C1890  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *
 * Callees: 1
 *   0x00000000003C1890  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA8C8 string=0x00000000001FA8CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PlayerProfile::FormattedTimePlayed(Caver::PlayerProfile *this, double a2, bool a3)
{
  return _ZN5Caver13PlayerProfile19FormattedTimePlayedEdb(this, a2, a3);
}

