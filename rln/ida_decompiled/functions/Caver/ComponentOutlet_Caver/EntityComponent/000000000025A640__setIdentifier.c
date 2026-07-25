/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025A640
 * Mangled: _ZN5Caver15ComponentOutletINS_15EntityComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::EntityComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000025A640 string=0x000000000025A644 "\t\t@"
 *   insn=0x000000000025A644 string=0x000000000025A648 "?"
 *   insn=0x000000000025A648 string=0x000000000025A64C " "
 *   insn=0x000000000025A65C string=0x000000000025A660 "@"
 *   insn=0x000000000025A660 string=0x000000000025A664 ""
 *   insn=0x000000000025A664 string=0x000000000025A668 ""
 *   insn=0x000000000025A668 string=0x000000000025A66C "@"
 *   insn=0x000000000025A66C string=0x000000000025A674 ""
 *   insn=0x000000000025A678 string=0x000000000025A67C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::EntityComponent>::setIdentifier(__int64 result, int a2)
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

