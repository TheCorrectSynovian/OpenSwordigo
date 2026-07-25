/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057F9E8
 * Mangled: sub_57F9E8
 * Demangled: sub_57F9E8
 *
 * Callers: 1
 *   0x0000000000570590  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 1
 *   0x000000000058340C  sub_58340C
 *
 * Referenced strings: 24
 *   insn=0x000000000057F9FC string=0x000000000057FA00 "$"
 *   insn=0x000000000057FA00 string=0x000000000057FA04 "%"
 *   insn=0x000000000057FA08 string=0x000000000057FA0C ""
 *   insn=0x000000000057FA2C string=0x000000000057FA3C "?"
 *   insn=0x000000000057FA34 string=0x000000000057FA38 "/"
 *   insn=0x000000000057FA34 string=0x000000000057FB0C "?"
 *   insn=0x000000000057FA38 string=0x000000000057FAF4 " "
 *   insn=0x000000000057FA3C string=0x000000000057FA40 "a"
 *   insn=0x000000000057FA44 string=0x000000000057FA48 "`"
 *   insn=0x000000000057FA50 string=0x000000000057FA60 "\n"
 *   insn=0x000000000057FA64 string=0x000000000057FA74 "_"
 *   insn=0x000000000057FA7C string=0x000000000057FA80 "B"
 *   insn=0x000000000057FA80 string=0x000000000057FA84 "_"
 *   insn=0x000000000057FA88 string=0x000000000057FA8C " "
 *   insn=0x000000000057FA94 string=0x000000000057FA98 "A"
 *   insn=0x000000000057FAA0 string=0x000000000057FAA4 ""
 *   insn=0x000000000057FAC0 string=0x000000000057FAC4 " "
 *   insn=0x000000000057FAD4 string=0x000000000057FAD8 "a"
 *   insn=0x000000000057FADC string=0x000000000057FAE0 ")"
 *   insn=0x000000000057FAEC string=0x000000000057FAF0 ""
 *   insn=0x000000000057FAF4 string=0x000000000057FAF8 "E"
 *   insn=0x000000000057FAF8 string=0x000000000057FAFC " "
 *   insn=0x000000000057FAFC string=0x000000000057FB00 ""
 *   insn=0x000000000057FB10 string=0x000000000057FB14 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57F9E8(long double a1, long double a2)
{
  __int64 v2; // x5
  __int64 v3; // x7
  unsigned __int64 v4; // x6
  unsigned __int64 v5; // x8
  __int64 v6; // x9
  _BOOL4 v7; // w10
  __int64 result; // x0
  bool v9; // zf

  v2 = *((_QWORD *)&a2 + 1);
  _ReadStatusReg(FPCR);
  v3 = HIWORD(*((_QWORD *)&a1 + 1)) & 0x7FFFLL;
  v4 = *((_QWORD *)&a1 + 1) & 0xFFFFFFFFFFFFLL;
  v5 = *((_QWORD *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
  v6 = HIWORD(*((_QWORD *)&a2 + 1)) & 0x7FFFLL;
  if ( v3 != 0x7FFF )
  {
    if ( v6 != 0x7FFF )
    {
LABEL_6:
      LODWORD(v2) = 0;
      if ( !v3 )
        LODWORD(v2) = (v4 | *(_QWORD *)&a1) == 0;
      goto LABEL_8;
    }
LABEL_5:
    if ( v5 | *(_QWORD *)&a2 )
    {
LABEL_29:
      sub_58340C(1, *((_QWORD *)&a1 + 1) >> 63, *((_QWORD *)&a2 + 1) >> 63, *(_QWORD *)&a1, *(_QWORD *)&a2, v2, v4);
      return 4294967294LL;
    }
    goto LABEL_6;
  }
  if ( v4 | *(_QWORD *)&a1 )
    goto LABEL_29;
  v2 = 0;
  if ( v6 == 0x7FFF )
    goto LABEL_5;
LABEL_8:
  v7 = 0;
  if ( !v6 )
    v7 = (v5 | *(_QWORD *)&a2) == 0;
  result = 0;
  if ( (v7 & (unsigned int)v2) == 0 )
  {
    v9 = a2 >= 0.0;
    if ( !(_DWORD)v2 )
    {
      if ( v7 || a1 < 0.0 != (unsigned __int64)(a2 < 0.0) || v3 > v6 )
        goto LABEL_19;
      if ( v3 >= v6 )
      {
        if ( v4 > v5 || v4 == v5 && *(_QWORD *)&a1 > *(_QWORD *)&a2 )
        {
LABEL_19:
          if ( a1 < 0.0 )
            return 0xFFFFFFFFLL;
          else
            return 1;
        }
        if ( v5 <= v4 && (v4 != v5 || *(_QWORD *)&a2 <= *(_QWORD *)&a1) )
          return 0;
      }
      v9 = a1 >= 0.0;
    }
    if ( v9 )
      return 0xFFFFFFFFLL;
    else
      return 1;
  }
  return result;
}

