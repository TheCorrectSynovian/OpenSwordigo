/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520838
 * Mangled: sub_520838
 * Demangled: sub_520838
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000520838 string=0x000000000052083C "_"
 *   insn=0x0000000000520854 string=0x0000000000520858 "6"
 *   insn=0x0000000000520878 string=0x000000000052087C "b"
 *   insn=0x0000000000520880 string=0x0000000000520884 "c@"
 *   insn=0x0000000000520884 string=0x0000000000520888 "`"
 *   insn=0x0000000000520890 string=0x0000000000520894 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_520838(__int64 a1, unsigned __int8 a2, unsigned int *a3, unsigned __int64 a4)
{
  unsigned int *v4; // x19
  unsigned int v7; // w22

  v4 = a3;
  v7 = a2;
  if ( (unsigned __int64)a3 < a4 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, v7, *v4) )
    {
      if ( a4 <= (unsigned __int64)++v4 )
        return v4;
    }
  }
  return v4;
}

