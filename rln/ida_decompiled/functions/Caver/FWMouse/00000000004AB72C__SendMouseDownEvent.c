/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB72C
 * Mangled: _ZN5Caver7FWMouse18SendMouseDownEventERKNS_7Vector2Ejd
 * Demangled: Caver::FWMouse::SendMouseDownEvent(Caver::Vector2 const&,uint,double)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004AB754 string=0x00000000004AB758 ""
 *   insn=0x00000000004AB764 string=0x00000000004AB768 "`"
 *   insn=0x00000000004AB778 string=0x00000000004AB77C ""
 *   insn=0x00000000004AB77C string=0x00000000004AB780 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWMouse::SendMouseDownEvent(__int64 result, _QWORD *a2, unsigned int a3, long double a4)
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
      result = (**(__int64 (__fastcall ***)(__int64, _QWORD *, _QWORD, long double))v6[2])(v6[2], a2, a3, a4);
      v6 = (__int64 *)*v6;
    }
    while ( (__int64 *)v4 != v6 );
  }
  return result;
}

