/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB844
 * Mangled: _ZN5Caver7FWMouse16SendMouseUpEventERKNS_7Vector2Ejd
 * Demangled: Caver::FWMouse::SendMouseUpEvent(Caver::Vector2 const&,uint,double)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004AB86C string=0x00000000004AB870 ""
 *   insn=0x00000000004AB87C string=0x00000000004AB880 "`"
 *   insn=0x00000000004AB890 string=0x00000000004AB894 ""
 *   insn=0x00000000004AB894 string=0x00000000004AB898 "\t@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWMouse::SendMouseUpEvent(__int64 result, _QWORD *a2, unsigned int a3, long double a4)
{
  __int64 v4; // x21
  __int64 *v6; // x22
  bool v9; // zf

  v4 = result;
  *(_BYTE *)(result + 16) = 1;
  v6 = *(__int64 **)result;
  v9 = result == *(_QWORD *)result;
  *(_QWORD *)(result + 20) = *a2;
  if ( !v9 )
  {
    do
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, long double))(*(_QWORD *)v6[2] + 16LL))(
                 v6[2],
                 a2,
                 a3,
                 a4);
      v6 = (__int64 *)*v6;
    }
    while ( (__int64 *)v4 != v6 );
  }
  return result;
}

