/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC288
 * Mangled: _ZN5Caver15ComponentOutletINS_17ParticleComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::ParticleComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002AC294 string=0x00000000002AC298 "`\n@"
 *   insn=0x00000000002AC2A4 string=0x00000000002AC2A8 "T"
 *   insn=0x00000000002AC2AC string=0x00000000002AC2B0 ""
 *   insn=0x00000000002AC2B4 string=0x00000000002AC2B8 "t\n"
 *   insn=0x00000000002AC2BC string=0x00000000002AC2C0 "@"
 *   insn=0x00000000002AC2C0 string=0x00000000002AC2C4 ""
 *   insn=0x00000000002AC2C4 string=0x00000000002AC2C8 ""
 *   insn=0x00000000002AC2CC string=0x00000000002AC2D0 ""
 *   insn=0x00000000002AC2D0 string=0x00000000002AC2D4 ""
 *   insn=0x00000000002AC2DC string=0x00000000002AC2E0 "h\n"
 *   insn=0x00000000002AC2F4 string=0x00000000002AC2F8 "@"
 *   insn=0x00000000002AC2F8 string=0x00000000002AC2FC ""
 *   insn=0x00000000002AC2FC string=0x00000000002AC300 ""
 *   insn=0x00000000002AC304 string=0x00000000002AC308 ""
 *   insn=0x00000000002AC314 string=0x00000000002AC318 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::ParticleComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

