/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056DDF8
 * Mangled: sub_56DDF8
 * Demangled: sub_56DDF8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056DA58  sub_56DA58
 *
 * Referenced strings: 4
 *   insn=0x000000000056DDF8 string=0x000000000056DDFC "B"
 *   insn=0x000000000056DDFC string=0x000000000056DE00 "B"
 *   insn=0x000000000056DE00 string=0x000000000056DE04 "!"
 *   insn=0x000000000056DE04 string=0x000000000056DE08 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56DDF8(
        const wchar_t **a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5)
{
  return sub_56DA58(a1, (a2 - (__int64)*a1) >> 2, (a3 - a2) >> 2, a4, a5);
}

