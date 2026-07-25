/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB474
 * Mangled: _ZN5Caver10FWKeyboard16SendKeyDownEventEjjd
 * Demangled: Caver::FWKeyboard::SendKeyDownEvent(uint,uint,double)
 *
 * Callers: 1
 *   0x00000000001FE590  Caver::FWKeyboard::SendKeyDownEvent(uint,uint,double)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004AB48C string=0x00000000004AB490 ""
 *   insn=0x00000000004AB49C string=0x00000000004AB4A0 "`"
 *   insn=0x00000000004AB4B0 string=0x00000000004AB4B4 ""
 *   insn=0x00000000004AB4B4 string=0x00000000004AB4B8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 **__fastcall Caver::FWKeyboard::SendKeyDownEvent(
        __int64 **this,
        unsigned int a2,
        unsigned int a3,
        long double a4)
{
  __int64 **v4; // x20
  __int64 **v5; // x22

  v4 = this;
  v5 = (__int64 **)*this;
  if ( this != (__int64 **)*this )
  {
    do
    {
      this = (__int64 **)(*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, long double))*v5[2])(v5[2], a2, a3, a4);
      v5 = (__int64 **)*v5;
    }
    while ( v4 != v5 );
  }
  return this;
}

