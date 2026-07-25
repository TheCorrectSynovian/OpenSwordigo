/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000447430
 * Mangled: _ZN5Caver11MeshBuilder14CopyDataToMeshEPNS_8MeshDataEPKiii
 * Demangled: Caver::MeshBuilder::CopyDataToMesh(Caver::MeshData *,int const*,int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x0000000000447430 string=0x0000000000447434 ""
 *   insn=0x0000000000447434 string=0x0000000000447438 ")@"
 *   insn=0x000000000044743C string=0x0000000000447440 "j|@"
 *   insn=0x0000000000447440 string=0x0000000000447444 "k"
 *   insn=0x0000000000447444 string=0x0000000000447448 ","
 *   insn=0x000000000044744C string=0x0000000000447450 "a"
 *   insn=0x0000000000447450 string=0x0000000000447454 ","
 *   insn=0x0000000000447450 string=0x000000000044747C ",@"
 *   insn=0x0000000000447458 string=0x000000000044745C ""
 *   insn=0x0000000000447460 string=0x0000000000447464 "Mxl"
 *   insn=0x0000000000447464 string=0x0000000000447468 "-y,x-"
 *   insn=0x0000000000447468 string=0x000000000044746C "-"
 *   insn=0x0000000000447474 string=0x0000000000447478 "k"
 *   insn=0x000000000044747C string=0x0000000000447480 ""
 *   insn=0x0000000000447484 string=0x0000000000447488 "B"
 *   insn=0x0000000000447488 string=0x000000000044748C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshBuilder::CopyDataToMesh(
        Caver::MeshBuilder *this,
        Caver::MeshData *a2,
        const int *a3,
        int a4,
        int a5)
{
  __int64 v5; // x9
  int i; // w8
  __int64 v7; // x12

  if ( a5 >= 1 )
  {
    v5 = *((_QWORD *)a2 + 2);
    for ( i = 0; i != a5; ++i )
    {
      if ( *(_DWORD *)a2 == 5123 && *((int *)a2 + 1) >= 1 )
      {
        v7 = 0;
        do
        {
          *(_WORD *)(v5 + 2 * v7) = a3[v7];
          ++v7;
        }
        while ( v7 < *((int *)a2 + 1) );
      }
      a3 = (const int *)((char *)a3 + a4);
      v5 += *((unsigned int *)a2 + 2);
    }
  }
}

