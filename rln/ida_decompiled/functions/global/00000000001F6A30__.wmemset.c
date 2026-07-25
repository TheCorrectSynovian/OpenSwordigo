/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6A30
 * Mangled: .wmemset
 * Demangled: .wmemset
 *
 * Callers: 13
 *   0x00000000005530A4  sub_5530A4
 *   0x0000000000553A38  sub_553A38
 *   0x000000000056B31C  sub_56B31C
 *   0x000000000056CA1C  sub_56CA1C
 *   0x000000000056D400  sub_56D400
 *   0x000000000056D490  sub_56D490
 *   0x000000000056D54C  sub_56D54C
 *   0x000000000056D5F4  sub_56D5F4
 *   0x000000000056D6C0  sub_56D6C0
 *   0x000000000056D754  sub_56D754
 *   0x000000000056E200  sub_56E200
 *   0x000000000056E28C  sub_56E28C
 *   0x000000000056E86C  sub_56E86C
 *
 * Callees: 1
 *   0x00000000006FE738  wmemset
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6A38 string=0x00000000001F6A3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
wchar_t *wmemset(wchar_t *s, wchar_t c, size_t n)
{
  return wmemset(s, c, n);
}

