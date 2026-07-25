/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568644
 * Mangled: sub_568644
 * Demangled: sub_568644
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203020  .memchr
 *
 * Referenced strings: 5
 *   insn=0x0000000000568678 string=0x000000000056867C "_"
 *   insn=0x0000000000568680 string=0x0000000000568684 "S"
 *   insn=0x000000000056869C string=0x00000000005686A0 "`j"
 *   insn=0x00000000005686A0 string=0x00000000005686A4 "b"
 *   insn=0x00000000005686A4 string=0x00000000005686A8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_568644(__int64 *a1, void *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x20
  unsigned __int64 result; // x0
  __int64 v6; // x4
  unsigned __int64 v9; // x19

  v4 = *a1;
  result = -1;
  v6 = *(_QWORD *)(v4 - 24);
  if ( v6 )
  {
    if ( a3 > v6 - 1 )
      v9 = v6 - 1;
    else
      v9 = a3;
    while ( 1 )
    {
      if ( !memchr(a2, *(unsigned __int8 *)(v4 + v9), a4) )
        return v9;
      if ( !v9 )
        break;
      --v9;
    }
    return -1;
  }
  return result;
}

