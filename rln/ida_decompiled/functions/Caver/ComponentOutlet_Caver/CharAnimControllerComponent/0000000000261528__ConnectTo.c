/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261528
 * Mangled: _ZN5Caver15ComponentOutletINS_27CharAnimControllerComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::CharAnimControllerComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000261534 string=0x0000000000261538 "`\n@"
 *   insn=0x0000000000261544 string=0x0000000000261548 "T"
 *   insn=0x000000000026154C string=0x0000000000261550 ""
 *   insn=0x0000000000261554 string=0x0000000000261558 "t\n"
 *   insn=0x000000000026155C string=0x0000000000261560 "@"
 *   insn=0x0000000000261560 string=0x0000000000261564 ""
 *   insn=0x0000000000261564 string=0x0000000000261568 ""
 *   insn=0x000000000026156C string=0x0000000000261570 ""
 *   insn=0x0000000000261570 string=0x0000000000261574 ""
 *   insn=0x000000000026157C string=0x0000000000261580 "h\n"
 *   insn=0x0000000000261594 string=0x0000000000261598 "@"
 *   insn=0x0000000000261598 string=0x000000000026159C ""
 *   insn=0x000000000026159C string=0x00000000002615A0 ""
 *   insn=0x00000000002615A4 string=0x00000000002615A8 ""
 *   insn=0x00000000002615B4 string=0x00000000002615B8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::CharAnimControllerComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

