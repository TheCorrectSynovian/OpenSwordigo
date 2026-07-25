/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C1C9C
 * Mangled: _ZN5Caver13PlayerProfile15ValueForCounterERKSs
 * Demangled: Caver::PlayerProfile::ValueForCounter(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FC240  Caver::PlayerProfile::ValueForCounter(std::string const&)
 *
 * Callees: 1
 *   0x00000000001FBC50  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find(std::string const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000003C1CA8 string=0x00000000003C1CAC "`B"
 *   insn=0x00000000003C1CB0 string=0x00000000003C1CB4 "hb"
 *   insn=0x00000000003C1CB0 string=0x00000000001FBC50 "0'"
 *   insn=0x00000000003C1CB8 string=0x00000000003C1CBC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PlayerProfile::ValueForCounter(__int64 a1)
{
  __int64 v2; // x0

  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find();
  if ( a1 + 152 == v2 )
    return 0;
  else
    return *(unsigned int *)(v2 + 40);
}

