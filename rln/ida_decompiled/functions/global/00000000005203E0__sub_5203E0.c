/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005203E0
 * Mangled: sub_5203E0
 * Demangled: sub_5203E0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000005203E0 string=0x00000000005203E4 "?"
 *   insn=0x00000000005203FC string=0x0000000000520400 """
 *   insn=0x0000000000520408 string=0x000000000052040C "a"
 *   insn=0x000000000052040C string=0x0000000000520410 "B"
 *   insn=0x0000000000520410 string=0x0000000000520414 "@"
 *   insn=0x0000000000520414 string=0x0000000000520418 "`"
 *   insn=0x000000000052041C string=0x0000000000520420 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall sub_5203E0(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // x19

  v3 = a2;
  if ( a2 < a3 )
  {
    do
    {
      *v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, (unsigned __int8)*v3);
      ++v3;
    }
    while ( v3 != a3 );
  }
  return a3;
}

