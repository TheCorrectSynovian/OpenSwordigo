/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C7618
 * Mangled: _ZN5Caver15ComponentOutletINS_20WeaponTrailComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::WeaponTrailComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002C7624 string=0x00000000002C7628 "`\n@"
 *   insn=0x00000000002C7634 string=0x00000000002C7638 "T"
 *   insn=0x00000000002C763C string=0x00000000002C7640 ""
 *   insn=0x00000000002C7644 string=0x00000000002C7648 "t\n"
 *   insn=0x00000000002C764C string=0x00000000002C7650 "@"
 *   insn=0x00000000002C7650 string=0x00000000002C7654 ""
 *   insn=0x00000000002C7654 string=0x00000000002C7658 ""
 *   insn=0x00000000002C765C string=0x00000000002C7660 ""
 *   insn=0x00000000002C7660 string=0x00000000002C7664 ""
 *   insn=0x00000000002C766C string=0x00000000002C7670 "h\n"
 *   insn=0x00000000002C7684 string=0x00000000002C7688 "@"
 *   insn=0x00000000002C7688 string=0x00000000002C768C ""
 *   insn=0x00000000002C768C string=0x00000000002C7690 ""
 *   insn=0x00000000002C7694 string=0x00000000002C7698 ""
 *   insn=0x00000000002C76A4 string=0x00000000002C76A8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::WeaponTrailComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

