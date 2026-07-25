/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB4E0
 * Mangled: _ZN5Caver10FWKeyboard14SendKeyUpEventEjjd
 * Demangled: Caver::FWKeyboard::SendKeyUpEvent(uint,uint,double)
 *
 * Callers: 1
 *   0x00000000001F5930  Caver::FWKeyboard::SendKeyUpEvent(uint,uint,double)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004AB4F8 string=0x00000000004AB4FC ""
 *   insn=0x00000000004AB508 string=0x00000000004AB50C "`"
 *   insn=0x00000000004AB51C string=0x00000000004AB520 ""
 *   insn=0x00000000004AB520 string=0x00000000004AB524 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 **__fastcall Caver::FWKeyboard::SendKeyUpEvent(
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
      this = (__int64 **)(*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, long double))(*v5[2] + 8))(
                           v5[2],
                           a2,
                           a3,
                           a4);
      v5 = (__int64 **)*v5;
    }
    while ( v4 != v5 );
  }
  return this;
}

