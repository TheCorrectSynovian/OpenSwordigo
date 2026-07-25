/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB8C0
 * Mangled: _ZN5Caver7FWMouse26SendMouseWheelRotatedEventEfjd
 * Demangled: Caver::FWMouse::SendMouseWheelRotatedEvent(float,uint,double)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004AB8D8 string=0x00000000004AB8DC "("
 *   insn=0x00000000004AB8E0 string=0x00000000004AB8E4 "\t"
 *   insn=0x00000000004AB8F4 string=0x00000000004AB8F8 " "
 *   insn=0x00000000004AB900 string=0x00000000004AB904 ""
 *   insn=0x00000000004AB908 string=0x00000000004AB90C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 **__fastcall Caver::FWMouse::SendMouseWheelRotatedEvent(
        __int64 **this,
        long double a2,
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
      this = (__int64 **)(*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, long double, long double))(*v5[2] + 24))(
                           v5[2],
                           (__int64)v4 + 20,
                           a3,
                           a2,
                           a4);
      v5 = (__int64 **)*v5;
    }
    while ( v4 != v5 );
  }
  return this;
}

