/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299074
 * Mangled: _ZN5Caver15ComponentOutletINS_15AttackComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::AttackComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000299080 string=0x0000000000299084 "`\n@"
 *   insn=0x0000000000299090 string=0x0000000000299094 "T"
 *   insn=0x0000000000299098 string=0x000000000029909C ""
 *   insn=0x00000000002990A0 string=0x00000000002990A4 "t\n"
 *   insn=0x00000000002990A8 string=0x00000000002990AC "@"
 *   insn=0x00000000002990AC string=0x00000000002990B0 ""
 *   insn=0x00000000002990B0 string=0x00000000002990B4 ""
 *   insn=0x00000000002990B8 string=0x00000000002990BC ""
 *   insn=0x00000000002990BC string=0x00000000002990C0 ""
 *   insn=0x00000000002990C8 string=0x00000000002990CC "h\n"
 *   insn=0x00000000002990E0 string=0x00000000002990E4 "@"
 *   insn=0x00000000002990E4 string=0x00000000002990E8 ""
 *   insn=0x00000000002990E8 string=0x00000000002990EC ""
 *   insn=0x00000000002990F0 string=0x00000000002990F4 ""
 *   insn=0x0000000000299100 string=0x0000000000299104 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::AttackComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

