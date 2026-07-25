/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005208B4
 * Mangled: sub_5208B4
 * Demangled: sub_5208B4
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000005208B4 string=0x00000000005208B8 "_"
 *   insn=0x00000000005208D0 string=0x00000000005208D4 "6"
 *   insn=0x00000000005208F4 string=0x00000000005208F8 "b"
 *   insn=0x00000000005208FC string=0x0000000000520900 "c@"
 *   insn=0x0000000000520900 string=0x0000000000520904 "`"
 *   insn=0x000000000052090C string=0x0000000000520910 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_5208B4(__int64 a1, unsigned __int8 a2, unsigned int *a3, unsigned __int64 a4)
{
  unsigned int *v4; // x19
  unsigned int v7; // w22

  v4 = a3;
  v7 = a2;
  if ( (unsigned __int64)a3 < a4 )
  {
    while ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, v7, *v4) )
    {
      if ( a4 <= (unsigned __int64)++v4 )
        return v4;
    }
  }
  return v4;
}

