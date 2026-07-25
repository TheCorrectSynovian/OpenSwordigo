/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AECF0
 * Mangled: _ZN5Caver15ComponentOutletINS_23TextureMappingComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::TextureMappingComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002AECFC string=0x00000000002AED00 "`\n@"
 *   insn=0x00000000002AED0C string=0x00000000002AED10 "T"
 *   insn=0x00000000002AED14 string=0x00000000002AED18 ""
 *   insn=0x00000000002AED1C string=0x00000000002AED20 "t\n"
 *   insn=0x00000000002AED24 string=0x00000000002AED28 "@"
 *   insn=0x00000000002AED28 string=0x00000000002AED2C ""
 *   insn=0x00000000002AED2C string=0x00000000002AED30 ""
 *   insn=0x00000000002AED34 string=0x00000000002AED38 ""
 *   insn=0x00000000002AED38 string=0x00000000002AED3C ""
 *   insn=0x00000000002AED44 string=0x00000000002AED48 "h\n"
 *   insn=0x00000000002AED5C string=0x00000000002AED60 "@"
 *   insn=0x00000000002AED60 string=0x00000000002AED64 ""
 *   insn=0x00000000002AED64 string=0x00000000002AED68 ""
 *   insn=0x00000000002AED6C string=0x00000000002AED70 ""
 *   insn=0x00000000002AED7C string=0x00000000002AED80 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::TextureMappingComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

