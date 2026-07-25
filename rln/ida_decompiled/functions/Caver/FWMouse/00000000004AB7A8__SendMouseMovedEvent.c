/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB7A8
 * Mangled: _ZN5Caver7FWMouse19SendMouseMovedEventERKNS_7Vector2Ejd
 * Demangled: Caver::FWMouse::SendMouseMovedEvent(Caver::Vector2 const&,uint,double)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004AB7C4 string=0x00000000004AB7C8 ""
 *   insn=0x00000000004AB804 string=0x00000000004AB808 ""
 *   insn=0x00000000004AB80C string=0x00000000004AB810 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWMouse::SendMouseMovedEvent(__int64 result, _QWORD *a2, unsigned int a3, long double a4)
{
  __int64 v4; // x20
  _QWORD *v8; // x22
  __int64 *v9; // x23

  v4 = result;
  if ( !*(_BYTE *)(result + 16) )
  {
    *(_BYTE *)(result + 16) = 1;
    *(_QWORD *)(result + 20) = *a2;
  }
  v8 = (_QWORD *)(result + 20);
  v9 = *(__int64 **)result;
  if ( result != *(_QWORD *)result )
  {
    do
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, long double))(*(_QWORD *)v9[2] + 8LL))(
                 v9[2],
                 v4 + 20,
                 a2,
                 a3,
                 a4);
      v9 = (__int64 *)*v9;
    }
    while ( (__int64 *)v4 != v9 );
  }
  *v8 = *a2;
  return result;
}

