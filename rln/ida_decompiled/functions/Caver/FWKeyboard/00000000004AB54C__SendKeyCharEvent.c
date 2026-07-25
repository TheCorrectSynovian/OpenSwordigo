/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB54C
 * Mangled: _ZN5Caver10FWKeyboard16SendKeyCharEventEjd
 * Demangled: Caver::FWKeyboard::SendKeyCharEvent(uint,double)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004AB560 string=0x00000000004AB564 "u"
 *   insn=0x00000000004AB564 string=0x00000000004AB568 ""
 *   insn=0x00000000004AB570 string=0x00000000004AB574 "@"
 *   insn=0x00000000004AB580 string=0x00000000004AB584 ""
 *   insn=0x00000000004AB584 string=0x00000000004AB588 "\t@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 **__fastcall Caver::FWKeyboard::SendKeyCharEvent(__int64 **this, unsigned int a2, long double a3)
{
  __int64 **v3; // x19
  __int64 **v4; // x21

  v3 = this;
  v4 = (__int64 **)*this;
  if ( this != (__int64 **)*this )
  {
    do
    {
      this = (__int64 **)(*(__int64 (__fastcall **)(__int64 *, _QWORD, long double))(*v4[2] + 16))(v4[2], a2, a3);
      v4 = (__int64 **)*v4;
    }
    while ( v3 != v4 );
  }
  return this;
}

