/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202B00
 * Mangled: ._ZN5Caver32AndroidReportAchievementProgressERKSsib
 * Demangled: Caver::AndroidReportAchievementProgress(std::string const&,int,bool)
 *
 * Callers: 1
 *   0x00000000004BAC78  Caver::OnlineController_Android::ReportAchievementProgress(boost::shared_ptr<Caver::Achievement> const&,double)
 *
 * Callees: 1
 *   0x000000000047B250  Caver::AndroidReportAchievementProgress(std::string const&,int,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202B08 string=0x0000000000202B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AndroidReportAchievementProgress()
{
  return _ZN5Caver32AndroidReportAchievementProgressERKSsib();
}

