/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022F944
 * Mangled: _ZN5Caver15ComponentOutletINS_23CollisionShapeComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::CollisionShapeComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000022F944 string=0x000000000022F948 "\t\t@"
 *   insn=0x000000000022F948 string=0x000000000022F94C "?"
 *   insn=0x000000000022F94C string=0x000000000022F950 " "
 *   insn=0x000000000022F960 string=0x000000000022F964 "@"
 *   insn=0x000000000022F964 string=0x000000000022F968 ""
 *   insn=0x000000000022F968 string=0x000000000022F96C ""
 *   insn=0x000000000022F96C string=0x000000000022F970 "@"
 *   insn=0x000000000022F970 string=0x000000000022F978 ""
 *   insn=0x000000000022F97C string=0x000000000022F980 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::CollisionShapeComponent>::setIdentifier(__int64 result, int a2)
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

