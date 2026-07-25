/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551F08
 * Mangled: sub_551F08
 * Demangled: sub_551F08
 *
 * Callers: 2
 *   0x00000000005532C0  sub_5532C0
 *   0x0000000000553630  sub_553630
 *
 * Callees: 2
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000551BB0  sub_551BB0
 *
 * Referenced strings: 4
 *   insn=0x0000000000551F50 string=0x0000000000551BB0 "H"
 *   insn=0x0000000000551F5C string=0x0000000000551F60 "s"
 *   insn=0x0000000000551F60 string=0x0000000000551F64 "B"
 *   insn=0x0000000000551F64 string=0x0000000000551F68 "B|@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_551F08(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        char *a6,
        unsigned __int64 a7,
        _DWORD *a8)
{
  __int64 v11; // x20
  wchar_t *v12; // x0
  __int64 v13; // x19
  unsigned __int64 result; // x0

  if ( a5 )
  {
    v11 = (__int64)((__int64)a5 - a7) >> 2;
    v12 = sub_551BB0(a6, a4, a2, a3, a7, a7 + 4LL * (int)v11);
    v13 = ((char *)v12 - a6) >> 2;
    wmemcpy(v12, a5, *a8 - (int)v11);
    result = (unsigned int)*a8;
    *a8 = result - v11 + v13;
  }
  else
  {
    result = (char *)sub_551BB0(a6, a4, a2, a3, a7, a7 + 4LL * (int)*a8) - a6;
    *a8 = result >> 2;
  }
  return result;
}

