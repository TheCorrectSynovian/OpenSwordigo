/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B260
 * Mangled: sub_54B260
 * Demangled: sub_54B260
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000054B274 string=0x000000000054B278 "?"
 *   insn=0x000000000054B278 string=0x000000000054B27C """
 *   insn=0x000000000054B27C string=0x000000000054B280 "!"
 *   insn=0x000000000054B284 string=0x000000000054B288 "_"
 *   insn=0x000000000054B28C string=0x000000000054B290 " "
 *   insn=0x000000000054B28C string=0x000000000054B2C4 "a"
 *   insn=0x000000000054B2A0 string=0x000000000054B2A4 "!(@"
 *   insn=0x000000000054B2A4 string=0x000000000054B2A8 " "
 *   insn=0x000000000054B2B4 string=0x000000000054B2B8 "a\n@"
 *   insn=0x000000000054B2B8 string=0x000000000054B2BC "b"
 *   insn=0x000000000054B2C8 string=0x000000000054B2CC "!$@"
 *   insn=0x000000000054B2CC string=0x000000000054B2D0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B260(_QWORD *a1)
{
  unsigned __int64 v1; // x1
  unsigned __int64 v2; // x2
  unsigned __int8 *v4; // x1
  __int64 result; // x0
  bool v6; // zf

  v1 = a1[2];
  v2 = a1[3];
  if ( v1 >= v2 )
  {
    v6 = (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1) == -1;
    result = 0xFFFFFFFFLL;
    if ( v6 )
      return result;
    v4 = (unsigned __int8 *)a1[2];
    v2 = a1[3];
  }
  else
  {
    v4 = (unsigned __int8 *)(v1 + 1);
    a1[2] = v4;
  }
  if ( v2 <= (unsigned __int64)v4 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  else
    return *v4;
}

