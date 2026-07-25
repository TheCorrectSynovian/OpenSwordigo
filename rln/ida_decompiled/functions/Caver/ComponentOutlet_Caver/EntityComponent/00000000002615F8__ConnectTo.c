/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002615F8
 * Mangled: _ZN5Caver15ComponentOutletINS_15EntityComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::EntityComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000261604 string=0x0000000000261608 "`\n@"
 *   insn=0x0000000000261614 string=0x0000000000261618 "T"
 *   insn=0x000000000026161C string=0x0000000000261620 ""
 *   insn=0x0000000000261624 string=0x0000000000261628 "t\n"
 *   insn=0x000000000026162C string=0x0000000000261630 "@"
 *   insn=0x0000000000261630 string=0x0000000000261634 ""
 *   insn=0x0000000000261634 string=0x0000000000261638 ""
 *   insn=0x000000000026163C string=0x0000000000261640 ""
 *   insn=0x0000000000261640 string=0x0000000000261644 ""
 *   insn=0x000000000026164C string=0x0000000000261650 "h\n"
 *   insn=0x0000000000261664 string=0x0000000000261668 "@"
 *   insn=0x0000000000261668 string=0x000000000026166C ""
 *   insn=0x000000000026166C string=0x0000000000261670 ""
 *   insn=0x0000000000261674 string=0x0000000000261678 ""
 *   insn=0x0000000000261684 string=0x0000000000261688 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::EntityComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

