/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044735C
 * Mangled: _ZN5Caver11MeshBuilder14CopyDataToMeshEPNS_8MeshDataEPKfii
 * Demangled: Caver::MeshBuilder::CopyDataToMesh(Caver::MeshData *,float const*,int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x000000000044735C string=0x0000000000447360 "+"
 *   insn=0x0000000000447360 string=0x0000000000447364 ")@"
 *   insn=0x0000000000447368 string=0x000000000044736C "j|@"
 *   insn=0x0000000000447370 string=0x0000000000447374 ","
 *   insn=0x000000000044737C string=0x0000000000447380 ","
 *   insn=0x000000000044737C string=0x00000000004473AC ",@"
 *   insn=0x0000000000447384 string=0x0000000000447388 "+"
 *   insn=0x0000000000447390 string=0x0000000000447394 "Nhm"
 *   insn=0x0000000000447398 string=0x000000000044739C ".i-"
 *   insn=0x000000000044739C string=0x00000000004473A0 "-"
 *   insn=0x00000000004473A4 string=0x00000000004473A8 "K"
 *   insn=0x00000000004473AC string=0x00000000004473B0 ""
 *   insn=0x00000000004473B4 string=0x00000000004473B8 "B"
 *   insn=0x00000000004473B8 string=0x00000000004473BC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshBuilder::CopyDataToMesh(
        Caver::MeshBuilder *this,
        Caver::MeshData *a2,
        const float *a3,
        int a4,
        int a5)
{
  __int64 v5; // x9
  int i; // w8
  __int64 v7; // x12
  __int64 v8; // x13
  float v9; // w14

  if ( a5 >= 1 )
  {
    v5 = *((_QWORD *)a2 + 2);
    for ( i = 0; i != a5; ++i )
    {
      if ( *(_DWORD *)a2 == 5126 && *((int *)a2 + 1) >= 1 )
      {
        v7 = 0;
        do
        {
          v8 = 4 * v7;
          v9 = a3[v7++];
          *(float *)(v5 + v8) = v9;
        }
        while ( v7 < *((int *)a2 + 1) );
      }
      a3 = (const float *)((char *)a3 + a4);
      v5 += *((unsigned int *)a2 + 2);
    }
  }
}

