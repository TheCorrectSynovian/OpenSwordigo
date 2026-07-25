/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A003C
 * Mangled: _ZN5Caver15ComponentOutletINS_23BlendAnimationComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::BlendAnimationComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002A0048 string=0x00000000002A004C "`\n@"
 *   insn=0x00000000002A0058 string=0x00000000002A005C "T"
 *   insn=0x00000000002A0060 string=0x00000000002A0064 ""
 *   insn=0x00000000002A0068 string=0x00000000002A006C "t\n"
 *   insn=0x00000000002A0070 string=0x00000000002A0074 "@"
 *   insn=0x00000000002A0074 string=0x00000000002A0078 ""
 *   insn=0x00000000002A0078 string=0x00000000002A007C ""
 *   insn=0x00000000002A0080 string=0x00000000002A0084 ""
 *   insn=0x00000000002A0084 string=0x00000000002A0088 ""
 *   insn=0x00000000002A0090 string=0x00000000002A0094 "h\n"
 *   insn=0x00000000002A00A8 string=0x00000000002A00AC "@"
 *   insn=0x00000000002A00AC string=0x00000000002A00B0 ""
 *   insn=0x00000000002A00B0 string=0x00000000002A00B4 ""
 *   insn=0x00000000002A00B8 string=0x00000000002A00BC ""
 *   insn=0x00000000002A00C8 string=0x00000000002A00CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::BlendAnimationComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

