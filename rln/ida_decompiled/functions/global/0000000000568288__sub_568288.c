/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568288
 * Mangled: sub_568288
 * Demangled: sub_568288
 *
 * Callers: 2
 *   0x00000000004B504C  Caver::LastPathComponent(std::string const&)
 *   0x00000000004B50F0  Caver::StringByRemovingLastPathComponent(std::string const&)
 *
 * Callees: 1
 *   0x0000000000203020  .memchr
 *
 * Referenced strings: 6
 *   insn=0x000000000056829C string=0x00000000005682A0 "C"
 *   insn=0x00000000005682C0 string=0x00000000005682C4 "_"
 *   insn=0x00000000005682C8 string=0x00000000005682CC "S"
 *   insn=0x00000000005682E4 string=0x00000000005682E8 "Nk"
 *   insn=0x00000000005682E8 string=0x00000000005682EC "b"
 *   insn=0x00000000005682EC string=0x00000000005682F0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_568288(__int64 *a1, void *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x21
  __int64 v5; // x0
  unsigned __int64 v7; // x0
  unsigned __int64 v10; // x19

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 - 24);
  if ( !a4 || !v5 )
    return -1;
  v7 = v5 - 1;
  if ( a3 > v7 )
    v10 = v7;
  else
    v10 = a3;
  while ( !memchr(a2, *(unsigned __int8 *)(v4 + v10), a4) )
  {
    if ( !v10 )
      return -1;
    --v10;
  }
  return v10;
}

