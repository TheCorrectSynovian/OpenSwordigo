/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AEDC0
 * Mangled: _ZN5Caver15ComponentOutletINS_22GroundPolygonComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::GroundPolygonComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002AEDCC string=0x00000000002AEDD0 "`\n@"
 *   insn=0x00000000002AEDDC string=0x00000000002AEDE0 "T"
 *   insn=0x00000000002AEDE4 string=0x00000000002AEDE8 ""
 *   insn=0x00000000002AEDEC string=0x00000000002AEDF0 "t\n"
 *   insn=0x00000000002AEDF4 string=0x00000000002AEDF8 "@"
 *   insn=0x00000000002AEDF8 string=0x00000000002AEDFC ""
 *   insn=0x00000000002AEDFC string=0x00000000002AEE00 ""
 *   insn=0x00000000002AEE04 string=0x00000000002AEE08 ""
 *   insn=0x00000000002AEE08 string=0x00000000002AEE0C ""
 *   insn=0x00000000002AEE14 string=0x00000000002AEE18 "h\n"
 *   insn=0x00000000002AEE2C string=0x00000000002AEE30 "@"
 *   insn=0x00000000002AEE30 string=0x00000000002AEE34 ""
 *   insn=0x00000000002AEE34 string=0x00000000002AEE38 ""
 *   insn=0x00000000002AEE3C string=0x00000000002AEE40 ""
 *   insn=0x00000000002AEE4C string=0x00000000002AEE50 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::GroundPolygonComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

