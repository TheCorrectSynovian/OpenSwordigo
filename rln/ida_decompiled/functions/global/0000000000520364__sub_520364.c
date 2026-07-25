/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520364
 * Mangled: sub_520364
 * Demangled: sub_520364
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000520364 string=0x0000000000520368 "?"
 *   insn=0x0000000000520380 string=0x0000000000520384 """
 *   insn=0x000000000052038C string=0x0000000000520390 "a"
 *   insn=0x0000000000520390 string=0x0000000000520394 "B@"
 *   insn=0x0000000000520394 string=0x0000000000520398 "@"
 *   insn=0x0000000000520398 string=0x000000000052039C "`"
 *   insn=0x00000000005203A0 string=0x00000000005203A4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall sub_520364(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // x19

  v3 = a2;
  if ( a2 < a3 )
  {
    do
    {
      *v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, (unsigned __int8)*v3);
      ++v3;
    }
    while ( v3 != a3 );
  }
  return a3;
}

