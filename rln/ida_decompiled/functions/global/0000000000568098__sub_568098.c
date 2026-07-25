/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568098
 * Mangled: sub_568098
 * Demangled: sub_568098
 *
 * Callers: 5
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000004B3EFC  Caver::PathExtension(std::string const&)
 *   0x00000000004B48B4  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *   0x00000000004B4DD4  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000568098 string=0x000000000056809C "!"
 *   insn=0x00000000005680A4 string=0x00000000005680A8 "C"
 *   insn=0x00000000005680A8 string=0x00000000005680B0 "c"
 *   insn=0x00000000005680B0 string=0x00000000005680B4 "_"
 *   insn=0x00000000005680B4 string=0x00000000005680B8 "@"
 *   insn=0x00000000005680C4 string=0x00000000005680C8 " "
 *   insn=0x00000000005680D4 string=0x00000000005680D8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_568098(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 v3; // x4
  __int64 result; // x0
  __int64 v5; // x3
  unsigned __int64 v6; // x3

  v3 = *a1;
  result = -1;
  v5 = *(_QWORD *)(v3 - 24);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( a3 > v6 )
      result = v6;
    else
      result = a3;
    while ( result != -1 && *(unsigned __int8 *)(v3 + result) != a2 )
      --result;
  }
  return result;
}

