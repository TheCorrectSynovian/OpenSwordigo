/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298C6C
 * Mangled: _ZN5Caver15ComponentOutletINS_15AttackComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::AttackComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x0000000000298C6C string=0x0000000000298C70 "\t\t@"
 *   insn=0x0000000000298C70 string=0x0000000000298C74 "?"
 *   insn=0x0000000000298C74 string=0x0000000000298C78 " "
 *   insn=0x0000000000298C88 string=0x0000000000298C8C "@"
 *   insn=0x0000000000298C8C string=0x0000000000298C90 ""
 *   insn=0x0000000000298C90 string=0x0000000000298C94 ""
 *   insn=0x0000000000298C94 string=0x0000000000298C98 "@"
 *   insn=0x0000000000298C98 string=0x0000000000298CA0 ""
 *   insn=0x0000000000298CA4 string=0x0000000000298CA8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::AttackComponent>::setIdentifier(__int64 result, int a2)
{
  __int64 v2; // x8
  int v3; // w8

  v2 = result;
  if ( *(_DWORD *)(result + 8) != a2 )
  {
    result = *(_QWORD *)(result + 16);
    *(_DWORD *)(v2 + 8) = a2;
    *(_QWORD *)(v2 + 16) = 0;
    if ( result )
    {
      v3 = *(_DWORD *)(result + 8) - 1;
      *(_DWORD *)(result + 8) = v3;
      if ( !v3 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}

