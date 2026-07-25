/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569110
 * Mangled: sub_569110
 * Demangled: sub_569110
 *
 * Callers: 1
 *   0x0000000000489FE0  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *
 * Callees: 2
 *   0x0000000000201760  .memcpy
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 4
 *   insn=0x000000000056913C string=0x0000000000569140 "a"
 *   insn=0x0000000000569144 string=0x0000000000569148 " "
 *   insn=0x0000000000569148 string=0x000000000056914C " "
 *   insn=0x0000000000569170 string=0x0000000000569174 " h48"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569110(__int64 *a1, size_t a2, __int64 a3, _BYTE *a4, size_t a5)
{
  sub_568CB8(a1, a2, a3, a5);
  if ( !a5 )
    return a1;
  if ( a5 != 1 )
  {
    memcpy((void *)(*a1 + a2), a4, a5);
    return a1;
  }
  *(_BYTE *)(*a1 + a2) = *a4;
  return a1;
}

