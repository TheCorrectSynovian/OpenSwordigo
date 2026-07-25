/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293C98
 * Mangled: _ZN5Caver15ComponentOutletINS_22MonsterEntityComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::MonsterEntityComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x0000000000293C98 string=0x0000000000293C9C "\t\t@"
 *   insn=0x0000000000293C9C string=0x0000000000293CA0 "?"
 *   insn=0x0000000000293CA0 string=0x0000000000293CA4 " "
 *   insn=0x0000000000293CB4 string=0x0000000000293CB8 "@"
 *   insn=0x0000000000293CB8 string=0x0000000000293CBC ""
 *   insn=0x0000000000293CBC string=0x0000000000293CC0 ""
 *   insn=0x0000000000293CC0 string=0x0000000000293CC4 "@"
 *   insn=0x0000000000293CC4 string=0x0000000000293CCC ""
 *   insn=0x0000000000293CD0 string=0x0000000000293CD4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::MonsterEntityComponent>::setIdentifier(__int64 result, int a2)
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

