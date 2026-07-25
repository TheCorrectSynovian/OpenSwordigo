/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057F97C
 * Mangled: __gcclibcxx_demangle_callback
 * Demangled: __gcclibcxx_demangle_callback
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000057F3DC  sub_57F3DC
 *
 * Referenced strings: 2
 *   insn=0x000000000057F984 string=0x000000000057F9A4 "@"
 *   insn=0x000000000057F990 string=0x000000000057F994 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall _gcclibcxx_demangle_callback(char *a1, void (__fastcall *a2)(_BYTE *), __int64 a3)
{
  if ( !a1 || !a2 )
    return 4294967293LL;
  if ( sub_57F3DC(a1, a2, a3) )
    return 0;
  return 4294967294LL;
}

