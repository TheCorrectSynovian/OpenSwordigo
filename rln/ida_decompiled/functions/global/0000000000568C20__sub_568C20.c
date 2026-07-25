/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568C20
 * Mangled: sub_568C20
 * Demangled: sub_568C20
 *
 * Callers: 7
 *   0x0000000000489FE0  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *   0x000000000052B4F4  sub_52B4F4
 *   0x000000000052B780  sub_52B780
 *   0x0000000000544AB8  sub_544AB8
 *   0x0000000000568CB8  sub_568CB8
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A278  sub_56A278
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 16
 *   insn=0x0000000000568C28 string=0x0000000000568C2C """
 *   insn=0x0000000000568C44 string=0x0000000000568C48 "i"
 *   insn=0x0000000000568C48 string=0x0000000000568C4C " "
 *   insn=0x0000000000568C48 string=0x0000000000568C94 "S2"
 *   insn=0x0000000000568C50 string=0x0000000000568C54 "s""
 *   insn=0x0000000000568C54 string=0x0000000000568C58 "`"
 *   insn=0x0000000000568C60 string=0x0000000000568C64 "?"
 *   insn=0x0000000000568C60 string=0x0000000000568C90 "`f"
 *   insn=0x0000000000568C64 string=0x0000000000568C68 "B"
 *   insn=0x0000000000568C6C string=0x0000000000568C70 "s"
 *   insn=0x0000000000568C74 string=0x0000000000568C78 "s"
 *   insn=0x0000000000568C78 string=0x0000000000568C7C "!"
 *   insn=0x0000000000568C88 string=0x0000000000568C8C "s"
 *   insn=0x0000000000568C94 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000568CAC string=0x0000000000568CB4 "&"
 *   insn=0x0000000000568CAC string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_568C20(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x19
  bool v3; // cc
  unsigned __int64 v4; // x0
  __int64 result; // x0

  v2 = a1;
  if ( a1 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  v3 = a1 > a2;
  v4 = a1 + 25;
  if ( v3 )
  {
    if ( v2 < 2 * a2 )
      v2 = 2 * a2;
    if ( v2 + 57 > 0x1000 && a2 < v2 )
    {
      v2 = v2 + 4096 - (((_WORD)v2 + 57) & 0xFFF);
      if ( v2 > 0x3FFFFFFFFFFFFFF9LL )
        v2 = 0x3FFFFFFFFFFFFFF9LL;
    }
    v4 = v2 + 25;
  }
  result = operator new(v4);
  *(_QWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 16) = 0;
  return result;
}

