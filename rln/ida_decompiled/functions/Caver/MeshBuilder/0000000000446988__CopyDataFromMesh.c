/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000446988
 * Mangled: _ZN5Caver11MeshBuilder16CopyDataFromMeshEPhiPKNS_8MeshDataEi
 * Demangled: Caver::MeshBuilder::CopyDataFromMesh(uchar *,int,Caver::MeshData const*,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x0000000000446988 string=0x000000000044698C ""
 *   insn=0x000000000044698C string=0x0000000000446990 "i@"
 *   insn=0x0000000000446994 string=0x0000000000446998 "J|@"
 *   insn=0x0000000000446998 string=0x000000000044699C "+"
 *   insn=0x000000000044699C string=0x00000000004469A0 "l"
 *   insn=0x00000000004469A4 string=0x00000000004469A8 "a"
 *   insn=0x00000000004469A8 string=0x00000000004469AC "l"
 *   insn=0x00000000004469A8 string=0x00000000004469D4 "l@"
 *   insn=0x00000000004469B0 string=0x00000000004469B4 ""
 *   insn=0x00000000004469B8 string=0x00000000004469BC "-il8-h,8m"
 *   insn=0x00000000004469BC string=0x00000000004469C0 "-h,8m"
 *   insn=0x00000000004469C0 string=0x00000000004469C4 "m"
 *   insn=0x00000000004469CC string=0x00000000004469D0 "k"
 *   insn=0x00000000004469D4 string=0x00000000004469D8 ""
 *   insn=0x00000000004469DC string=0x00000000004469E0 "!"
 *   insn=0x00000000004469E0 string=0x00000000004469E4 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshBuilder::CopyDataFromMesh(
        Caver::MeshBuilder *this,
        unsigned __int8 *a2,
        int a3,
        const Caver::MeshData *a4,
        int a5)
{
  __int64 v5; // x9
  int i; // w8
  __int64 v7; // x12

  if ( a5 >= 1 )
  {
    v5 = *((_QWORD *)a4 + 2);
    for ( i = 0; i != a5; ++i )
    {
      if ( *(_DWORD *)a4 == 5121 && *((int *)a4 + 1) >= 1 )
      {
        v7 = 0;
        do
        {
          a2[v7] = *(_BYTE *)(v5 + v7);
          ++v7;
        }
        while ( v7 < *((int *)a4 + 1) );
      }
      a2 += a3;
      v5 += *((unsigned int *)a4 + 2);
    }
  }
}

