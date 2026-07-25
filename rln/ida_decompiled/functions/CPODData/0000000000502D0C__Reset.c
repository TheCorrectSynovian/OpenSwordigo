/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000502D0C
 * Mangled: _ZN8CPODData5ResetEv
 * Demangled: CPODData::Reset(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F89E0  .free
 *
 * Referenced strings: 6
 *   insn=0x0000000000502D18 string=0x0000000000502D1C "("
 *   insn=0x0000000000502D20 string=0x0000000000502D24 "`\n@"
 *   insn=0x0000000000502D28 string=0x0000000000502D2C "`"
 *   insn=0x0000000000502D2C string=0x0000000000502D30 "`"
 *   insn=0x0000000000502D30 string=0x0000000000502D34 "+"
 *   insn=0x0000000000502D34 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPODData::Reset(CPODData *this)
{
  void *v2; // x0

  v2 = (void *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 1;
  if ( v2 )
  {
    free(v2);
    *((_QWORD *)this + 2) = 0;
  }
}

