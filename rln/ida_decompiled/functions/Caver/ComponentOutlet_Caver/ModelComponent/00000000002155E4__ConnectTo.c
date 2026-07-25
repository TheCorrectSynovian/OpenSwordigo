/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002155E4
 * Mangled: _ZN5Caver15ComponentOutletINS_14ModelComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::ModelComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002155F0 string=0x00000000002155F4 "`\n@"
 *   insn=0x0000000000215600 string=0x0000000000215604 "T"
 *   insn=0x0000000000215608 string=0x000000000021560C ""
 *   insn=0x0000000000215610 string=0x0000000000215614 "t\n"
 *   insn=0x0000000000215618 string=0x000000000021561C "@"
 *   insn=0x000000000021561C string=0x0000000000215620 ""
 *   insn=0x0000000000215620 string=0x0000000000215624 ""
 *   insn=0x0000000000215628 string=0x000000000021562C ""
 *   insn=0x000000000021562C string=0x0000000000215630 ""
 *   insn=0x0000000000215638 string=0x000000000021563C "h\n"
 *   insn=0x0000000000215650 string=0x0000000000215654 "@"
 *   insn=0x0000000000215654 string=0x0000000000215658 ""
 *   insn=0x0000000000215658 string=0x000000000021565C ""
 *   insn=0x0000000000215660 string=0x0000000000215664 ""
 *   insn=0x0000000000215670 string=0x0000000000215674 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::ModelComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

