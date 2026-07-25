/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037E1BC
 * Mangled: _ZN5Caver19AchievementsManager11ReportScoreERKSsxS2_
 * Demangled: Caver::AchievementsManager::ReportScore(std::string const&,long long,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F3610  Caver::AchievementsManager::ReportScore(std::string const&,long long,std::string const&)
 *
 * Callees: 1
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000037E1D4 string=0x000000000037E1D8 "v"
 *   insn=0x000000000037E1D8 string=0x000000000037E1DC ""
 *   insn=0x000000000037E1D8 string=0x00000000001F93B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AchievementsManager::ReportScore(
        Caver::OnlineController *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // x0

  v7 = Caver::OnlineController::SharedController(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 224LL))(v7, a2, a3, a4);
}

