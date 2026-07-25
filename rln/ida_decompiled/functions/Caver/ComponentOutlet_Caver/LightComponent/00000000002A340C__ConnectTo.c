/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A340C
 * Mangled: _ZN5Caver15ComponentOutletINS_14LightComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::LightComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002A3418 string=0x00000000002A341C "`\n@"
 *   insn=0x00000000002A3428 string=0x00000000002A342C "T"
 *   insn=0x00000000002A3430 string=0x00000000002A3434 ""
 *   insn=0x00000000002A3438 string=0x00000000002A343C "t\n"
 *   insn=0x00000000002A3440 string=0x00000000002A3444 "@"
 *   insn=0x00000000002A3444 string=0x00000000002A3448 ""
 *   insn=0x00000000002A3448 string=0x00000000002A344C ""
 *   insn=0x00000000002A3450 string=0x00000000002A3454 ""
 *   insn=0x00000000002A3454 string=0x00000000002A3458 ""
 *   insn=0x00000000002A3460 string=0x00000000002A3464 "h\n"
 *   insn=0x00000000002A3478 string=0x00000000002A347C "@"
 *   insn=0x00000000002A347C string=0x00000000002A3480 ""
 *   insn=0x00000000002A3480 string=0x00000000002A3484 ""
 *   insn=0x00000000002A3488 string=0x00000000002A348C ""
 *   insn=0x00000000002A3498 string=0x00000000002A349C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::LightComponent>::ConnectTo(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w8

  result = *(_DWORD **)(a1 + 16);
  if ( result != a2 )
  {
    if ( a2 )
    {
      ++a2[2];
      *(_QWORD *)(a1 + 16) = a2;
      if ( result )
      {
        v5 = result[2] - 1;
        result[2] = v5;
        if ( !v5 )
          result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
      }
      *(_DWORD *)(a1 + 8) = a2[8];
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
      if ( result )
      {
        v6 = result[2] - 1;
        result[2] = v6;
        if ( !v6 )
          return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
      }
    }
  }
  return result;
}

