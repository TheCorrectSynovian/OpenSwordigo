/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E994
 * Mangled: sub_56E994
 * Demangled: sub_56E994
 *
 * Callers: 2
 *   0x00000000005586A4  sub_5586A4
 *   0x000000000056E9F0  sub_56E9F0
 *
 * Callees: 3
 *   0x000000000056554C  sub_56554C
 *   0x000000000056C650  sub_56C650
 *   0x000000000056E86C  sub_56E86C
 *
 * Referenced strings: 4
 *   insn=0x000000000056E9A0 string=0x000000000056E9A4 "?"
 *   insn=0x000000000056E9AC string=0x000000000056E9B0 "?"
 *   insn=0x000000000056E9B4 string=0x000000000056E9C4 "!"
 *   insn=0x000000000056E9E4 string=0x000000000059FA90 "basic_string::resize"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56E994(const wchar_t **result, size_t a2, wchar_t a3)
{
  unsigned __int64 v3; // x4
  size_t v4; // x1

  v3 = *((_QWORD *)*result - 3);
  if ( a2 > 0xFFFFFFFFFFFFFFELL )
    sub_56554C("basic_string::resize");
  if ( a2 > v3 )
  {
    v4 = a2 - v3;
    if ( v4 )
      return (const wchar_t **)sub_56E86C(result, v4, a3);
  }
  else if ( a2 < v3 )
  {
    return (const wchar_t **)sub_56C650(result, a2, v3 - a2, 0);
  }
  return result;
}

