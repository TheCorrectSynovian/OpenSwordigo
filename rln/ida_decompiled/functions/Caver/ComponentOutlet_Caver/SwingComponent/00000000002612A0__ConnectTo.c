/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002612A0
 * Mangled: _ZN5Caver15ComponentOutletINS_14SwingComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::SwingComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002612AC string=0x00000000002612B0 "`\n@"
 *   insn=0x00000000002612BC string=0x00000000002612C0 "T"
 *   insn=0x00000000002612C4 string=0x00000000002612C8 ""
 *   insn=0x00000000002612CC string=0x00000000002612D0 "t\n"
 *   insn=0x00000000002612D4 string=0x00000000002612D8 "@"
 *   insn=0x00000000002612D8 string=0x00000000002612DC ""
 *   insn=0x00000000002612DC string=0x00000000002612E0 ""
 *   insn=0x00000000002612E4 string=0x00000000002612E8 ""
 *   insn=0x00000000002612E8 string=0x00000000002612EC ""
 *   insn=0x00000000002612F4 string=0x00000000002612F8 "h\n"
 *   insn=0x000000000026130C string=0x0000000000261310 "@"
 *   insn=0x0000000000261310 string=0x0000000000261314 ""
 *   insn=0x0000000000261314 string=0x0000000000261318 ""
 *   insn=0x000000000026131C string=0x0000000000261320 ""
 *   insn=0x000000000026132C string=0x0000000000261330 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::SwingComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

