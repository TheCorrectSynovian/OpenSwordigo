/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE7F4
 * Mangled: _ZN5Caver15ComponentOutletINS_19GroundMeshComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::GroundMeshComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002BE800 string=0x00000000002BE804 "`\n@"
 *   insn=0x00000000002BE810 string=0x00000000002BE814 "T"
 *   insn=0x00000000002BE818 string=0x00000000002BE81C ""
 *   insn=0x00000000002BE820 string=0x00000000002BE824 "t\n"
 *   insn=0x00000000002BE828 string=0x00000000002BE82C "@"
 *   insn=0x00000000002BE82C string=0x00000000002BE830 ""
 *   insn=0x00000000002BE830 string=0x00000000002BE834 ""
 *   insn=0x00000000002BE838 string=0x00000000002BE83C ""
 *   insn=0x00000000002BE83C string=0x00000000002BE840 ""
 *   insn=0x00000000002BE848 string=0x00000000002BE84C "h\n"
 *   insn=0x00000000002BE860 string=0x00000000002BE864 "@"
 *   insn=0x00000000002BE864 string=0x00000000002BE868 ""
 *   insn=0x00000000002BE868 string=0x00000000002BE86C ""
 *   insn=0x00000000002BE870 string=0x00000000002BE874 ""
 *   insn=0x00000000002BE880 string=0x00000000002BE884 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::GroundMeshComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

