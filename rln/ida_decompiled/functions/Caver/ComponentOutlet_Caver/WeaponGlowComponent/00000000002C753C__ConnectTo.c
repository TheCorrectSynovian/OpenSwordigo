/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C753C
 * Mangled: _ZN5Caver15ComponentOutletINS_19WeaponGlowComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::WeaponGlowComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002C7548 string=0x00000000002C754C "`\n@"
 *   insn=0x00000000002C7558 string=0x00000000002C755C "T"
 *   insn=0x00000000002C7560 string=0x00000000002C7564 ""
 *   insn=0x00000000002C7568 string=0x00000000002C756C "t\n"
 *   insn=0x00000000002C7570 string=0x00000000002C7574 "@"
 *   insn=0x00000000002C7574 string=0x00000000002C7578 ""
 *   insn=0x00000000002C7578 string=0x00000000002C757C ""
 *   insn=0x00000000002C7580 string=0x00000000002C7584 ""
 *   insn=0x00000000002C7584 string=0x00000000002C7588 ""
 *   insn=0x00000000002C7590 string=0x00000000002C7594 "h\n"
 *   insn=0x00000000002C75A8 string=0x00000000002C75AC "@"
 *   insn=0x00000000002C75AC string=0x00000000002C75B0 ""
 *   insn=0x00000000002C75B0 string=0x00000000002C75B4 ""
 *   insn=0x00000000002C75B8 string=0x00000000002C75BC ""
 *   insn=0x00000000002C75C8 string=0x00000000002C75CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::WeaponGlowComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

