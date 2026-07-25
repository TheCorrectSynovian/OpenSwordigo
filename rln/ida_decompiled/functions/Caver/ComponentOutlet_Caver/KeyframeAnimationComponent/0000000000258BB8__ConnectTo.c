/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000258BB8
 * Mangled: _ZN5Caver15ComponentOutletINS_26KeyframeAnimationComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::KeyframeAnimationComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000258BC4 string=0x0000000000258BC8 "`\n@"
 *   insn=0x0000000000258BD4 string=0x0000000000258BD8 "T"
 *   insn=0x0000000000258BDC string=0x0000000000258BE0 ""
 *   insn=0x0000000000258BE4 string=0x0000000000258BE8 "t\n"
 *   insn=0x0000000000258BEC string=0x0000000000258BF0 "@"
 *   insn=0x0000000000258BF0 string=0x0000000000258BF4 ""
 *   insn=0x0000000000258BF4 string=0x0000000000258BF8 ""
 *   insn=0x0000000000258BFC string=0x0000000000258C00 ""
 *   insn=0x0000000000258C00 string=0x0000000000258C04 ""
 *   insn=0x0000000000258C0C string=0x0000000000258C10 "h\n"
 *   insn=0x0000000000258C24 string=0x0000000000258C28 "@"
 *   insn=0x0000000000258C28 string=0x0000000000258C2C ""
 *   insn=0x0000000000258C2C string=0x0000000000258C30 ""
 *   insn=0x0000000000258C34 string=0x0000000000258C38 ""
 *   insn=0x0000000000258C44 string=0x0000000000258C48 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::KeyframeAnimationComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

