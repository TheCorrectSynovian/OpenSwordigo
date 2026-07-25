/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293BF0
 * Mangled: _ZN5Caver15ComponentOutletINS_21UtilityShapeComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::UtilityShapeComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000293BFC string=0x0000000000293C00 "`\n@"
 *   insn=0x0000000000293C0C string=0x0000000000293C10 "T"
 *   insn=0x0000000000293C14 string=0x0000000000293C18 ""
 *   insn=0x0000000000293C1C string=0x0000000000293C20 "t\n"
 *   insn=0x0000000000293C24 string=0x0000000000293C28 "@"
 *   insn=0x0000000000293C28 string=0x0000000000293C2C ""
 *   insn=0x0000000000293C2C string=0x0000000000293C30 ""
 *   insn=0x0000000000293C34 string=0x0000000000293C38 ""
 *   insn=0x0000000000293C38 string=0x0000000000293C3C ""
 *   insn=0x0000000000293C44 string=0x0000000000293C48 "h\n"
 *   insn=0x0000000000293C5C string=0x0000000000293C60 "@"
 *   insn=0x0000000000293C60 string=0x0000000000293C64 ""
 *   insn=0x0000000000293C64 string=0x0000000000293C68 ""
 *   insn=0x0000000000293C6C string=0x0000000000293C70 ""
 *   insn=0x0000000000293C7C string=0x0000000000293C80 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::UtilityShapeComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

