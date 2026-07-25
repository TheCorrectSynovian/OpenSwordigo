/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057FB24
 * Mangled: sub_57FB24
 * Demangled: sub_57FB24
 *
 * Callers: 1
 *   0x0000000000570590  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 1
 *   0x000000000058340C  sub_58340C
 *
 * Referenced strings: 23
 *   insn=0x000000000057FB38 string=0x000000000057FB3C "$"
 *   insn=0x000000000057FB3C string=0x000000000057FB40 "%"
 *   insn=0x000000000057FB44 string=0x000000000057FB48 ""
 *   insn=0x000000000057FB68 string=0x000000000057FB78 "?"
 *   insn=0x000000000057FB70 string=0x000000000057FB74 "5"
 *   insn=0x000000000057FB70 string=0x000000000057FC30 " "
 *   insn=0x000000000057FB74 string=0x000000000057FC48 "?"
 *   insn=0x000000000057FB78 string=0x000000000057FB7C "a"
 *   insn=0x000000000057FB80 string=0x000000000057FB84 "`"
 *   insn=0x000000000057FB8C string=0x000000000057FB9C "\n"
 *   insn=0x000000000057FBA0 string=0x000000000057FBB0 "_"
 *   insn=0x000000000057FBB8 string=0x000000000057FBBC "B"
 *   insn=0x000000000057FBBC string=0x000000000057FBC0 "_"
 *   insn=0x000000000057FBC4 string=0x000000000057FBC8 " "
 *   insn=0x000000000057FBD0 string=0x000000000057FBD4 "A"
 *   insn=0x000000000057FBDC string=0x000000000057FBE0 ""
 *   insn=0x000000000057FBFC string=0x000000000057FC00 " "
 *   insn=0x000000000057FC10 string=0x000000000057FC14 "a"
 *   insn=0x000000000057FC18 string=0x000000000057FC1C ")"
 *   insn=0x000000000057FC28 string=0x000000000057FC2C ""
 *   insn=0x000000000057FC34 string=0x000000000057FC38 "@"
 *   insn=0x000000000057FC38 string=0x000000000057FC3C ""
 *   insn=0x000000000057FC4C string=0x000000000057FC50 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57FB24(long double a1, long double a2)
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
  if ( v3 == 0x7FFF )
  {
    if ( v4 | *(_QWORD *)&a1 )
    {
LABEL_29:
      sub_58340C(1, *((_QWORD *)&a1 + 1) >> 63, *((_QWORD *)&a2 + 1) >> 63, *(_QWORD *)&a1, *(_QWORD *)&a2, v2, v4);
      return 2;
    }
    v2 = 0;
    if ( v6 != 0x7FFF )
      goto LABEL_8;
  }
  else if ( v6 != 0x7FFF )
  {
    goto LABEL_6;
  }
  if ( v5 | *(_QWORD *)&a2 )
    goto LABEL_29;
LABEL_6:
  LODWORD(v2) = 0;
  if ( !v3 )
    LODWORD(v2) = (v4 | *(_QWORD *)&a1) == 0;
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

