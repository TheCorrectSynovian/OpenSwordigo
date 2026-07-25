/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E4F8
 * Mangled: _ZN5Caver15ComponentOutletINS_14ShapeComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::ShapeComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x000000000026E504 string=0x000000000026E508 "`\n@"
 *   insn=0x000000000026E514 string=0x000000000026E518 "T"
 *   insn=0x000000000026E51C string=0x000000000026E520 ""
 *   insn=0x000000000026E524 string=0x000000000026E528 "t\n"
 *   insn=0x000000000026E52C string=0x000000000026E530 "@"
 *   insn=0x000000000026E530 string=0x000000000026E534 ""
 *   insn=0x000000000026E534 string=0x000000000026E538 ""
 *   insn=0x000000000026E53C string=0x000000000026E540 ""
 *   insn=0x000000000026E540 string=0x000000000026E544 ""
 *   insn=0x000000000026E54C string=0x000000000026E550 "h\n"
 *   insn=0x000000000026E564 string=0x000000000026E568 "@"
 *   insn=0x000000000026E568 string=0x000000000026E56C ""
 *   insn=0x000000000026E56C string=0x000000000026E570 ""
 *   insn=0x000000000026E574 string=0x000000000026E578 ""
 *   insn=0x000000000026E584 string=0x000000000026E588 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::ShapeComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

