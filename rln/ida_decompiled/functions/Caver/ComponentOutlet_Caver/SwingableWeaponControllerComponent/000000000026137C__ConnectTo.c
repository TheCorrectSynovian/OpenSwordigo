/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026137C
 * Mangled: _ZN5Caver15ComponentOutletINS_34SwingableWeaponControllerComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::SwingableWeaponControllerComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000261388 string=0x000000000026138C "`\n@"
 *   insn=0x0000000000261398 string=0x000000000026139C "T"
 *   insn=0x00000000002613A0 string=0x00000000002613A4 ""
 *   insn=0x00000000002613A8 string=0x00000000002613AC "t\n"
 *   insn=0x00000000002613B0 string=0x00000000002613B4 "@"
 *   insn=0x00000000002613B4 string=0x00000000002613B8 ""
 *   insn=0x00000000002613B8 string=0x00000000002613BC ""
 *   insn=0x00000000002613C0 string=0x00000000002613C4 ""
 *   insn=0x00000000002613C4 string=0x00000000002613C8 ""
 *   insn=0x00000000002613D0 string=0x00000000002613D4 "h\n"
 *   insn=0x00000000002613E8 string=0x00000000002613EC "@"
 *   insn=0x00000000002613EC string=0x00000000002613F0 ""
 *   insn=0x00000000002613F0 string=0x00000000002613F4 ""
 *   insn=0x00000000002613F8 string=0x00000000002613FC ""
 *   insn=0x0000000000261408 string=0x000000000026140C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::SwingableWeaponControllerComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

