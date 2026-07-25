/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037E200
 * Mangled: _ZN5Caver19AchievementsManager30ClearReportedAchievementsCacheEv
 * Demangled: Caver::AchievementsManager::ClearReportedAchievementsCache(void)
 *
 * Callers: 1
 *   0x00000000001FFE40  Caver::AchievementsManager::ClearReportedAchievementsCache(void)
 *
 * Callees: 1
 *   0x00000000001F93A0  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *
 * Referenced strings: 6
 *   insn=0x000000000037E20C string=0x000000000037E210 "a"
 *   insn=0x000000000037E210 string=0x000000000037E214 "`""
 *   insn=0x000000000037E214 string=0x000000000037E218 "tB"
 *   insn=0x000000000037E218 string=0x000000000037E21C "a"
 *   insn=0x000000000037E21C string=0x00000000001F93A0 "0'"
 *   insn=0x000000000037E220 string=0x000000000037E224 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AchievementsManager::ClearReportedAchievementsCache(Caver::AchievementsManager *this)
{
  char *v2; // x20
  __int64 result; // x0

  v2 = (char *)this + 336;
  result = std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase();
  *((_QWORD *)this + 43) = 0;
  *((_QWORD *)this + 44) = v2;
  *((_QWORD *)this + 45) = v2;
  *((_QWORD *)this + 46) = 0;
  return result;
}

