/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028315C
 * Mangled: _ZN5Caver15ComponentOutletINS_24ParticleEmitterComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::ParticleEmitterComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000283168 string=0x000000000028316C "`\n@"
 *   insn=0x0000000000283178 string=0x000000000028317C "T"
 *   insn=0x0000000000283180 string=0x0000000000283184 ""
 *   insn=0x0000000000283188 string=0x000000000028318C "t\n"
 *   insn=0x0000000000283190 string=0x0000000000283194 "@"
 *   insn=0x0000000000283194 string=0x0000000000283198 ""
 *   insn=0x0000000000283198 string=0x000000000028319C ""
 *   insn=0x00000000002831A0 string=0x00000000002831A4 ""
 *   insn=0x00000000002831A4 string=0x00000000002831A8 ""
 *   insn=0x00000000002831B0 string=0x00000000002831B4 "h\n"
 *   insn=0x00000000002831C8 string=0x00000000002831CC "@"
 *   insn=0x00000000002831CC string=0x00000000002831D0 ""
 *   insn=0x00000000002831D0 string=0x00000000002831D4 ""
 *   insn=0x00000000002831D8 string=0x00000000002831DC ""
 *   insn=0x00000000002831E8 string=0x00000000002831EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::ParticleEmitterComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

