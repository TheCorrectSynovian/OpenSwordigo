/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029EA74
 * Mangled: _ZN5Caver15ComponentOutletINS_23CharControllerComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::CharControllerComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x000000000029EA80 string=0x000000000029EA84 "`\n@"
 *   insn=0x000000000029EA90 string=0x000000000029EA94 "T"
 *   insn=0x000000000029EA98 string=0x000000000029EA9C ""
 *   insn=0x000000000029EAA0 string=0x000000000029EAA4 "t\n"
 *   insn=0x000000000029EAA8 string=0x000000000029EAAC "@"
 *   insn=0x000000000029EAAC string=0x000000000029EAB0 ""
 *   insn=0x000000000029EAB0 string=0x000000000029EAB4 ""
 *   insn=0x000000000029EAB8 string=0x000000000029EABC ""
 *   insn=0x000000000029EABC string=0x000000000029EAC0 ""
 *   insn=0x000000000029EAC8 string=0x000000000029EACC "h\n"
 *   insn=0x000000000029EAE0 string=0x000000000029EAE4 "@"
 *   insn=0x000000000029EAE4 string=0x000000000029EAE8 ""
 *   insn=0x000000000029EAE8 string=0x000000000029EAEC ""
 *   insn=0x000000000029EAF0 string=0x000000000029EAF4 ""
 *   insn=0x000000000029EB00 string=0x000000000029EB04 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::CharControllerComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

