/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293D08
 * Mangled: _ZN5Caver15ComponentOutletINS_22MonsterEntityComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::MonsterEntityComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000293D14 string=0x0000000000293D18 "`\n@"
 *   insn=0x0000000000293D24 string=0x0000000000293D28 "T"
 *   insn=0x0000000000293D2C string=0x0000000000293D30 ""
 *   insn=0x0000000000293D34 string=0x0000000000293D38 "t\n"
 *   insn=0x0000000000293D3C string=0x0000000000293D40 "@"
 *   insn=0x0000000000293D40 string=0x0000000000293D44 ""
 *   insn=0x0000000000293D44 string=0x0000000000293D48 ""
 *   insn=0x0000000000293D4C string=0x0000000000293D50 ""
 *   insn=0x0000000000293D50 string=0x0000000000293D54 ""
 *   insn=0x0000000000293D5C string=0x0000000000293D60 "h\n"
 *   insn=0x0000000000293D74 string=0x0000000000293D78 "@"
 *   insn=0x0000000000293D78 string=0x0000000000293D7C ""
 *   insn=0x0000000000293D7C string=0x0000000000293D80 ""
 *   insn=0x0000000000293D84 string=0x0000000000293D88 ""
 *   insn=0x0000000000293D94 string=0x0000000000293D98 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::MonsterEntityComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

