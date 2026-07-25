/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004473C8
 * Mangled: _ZN5Caver11MeshBuilder14CopyDataToMeshEPNS_8MeshDataEPKhii
 * Demangled: Caver::MeshBuilder::CopyDataToMesh(Caver::MeshData *,uchar const*,int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000004473C8 string=0x00000000004473CC ""
 *   insn=0x00000000004473CC string=0x00000000004473D0 ")@"
 *   insn=0x00000000004473D4 string=0x00000000004473D8 "j|@"
 *   insn=0x00000000004473D8 string=0x00000000004473DC "+"
 *   insn=0x00000000004473DC string=0x00000000004473E0 ","
 *   insn=0x00000000004473E4 string=0x00000000004473E8 "a"
 *   insn=0x00000000004473E8 string=0x00000000004473EC ","
 *   insn=0x00000000004473E8 string=0x0000000000447414 ",@"
 *   insn=0x00000000004473F0 string=0x00000000004473F4 ""
 *   insn=0x00000000004473F8 string=0x00000000004473FC "Mhl8-i,8-"
 *   insn=0x00000000004473FC string=0x0000000000447400 "-i,8-"
 *   insn=0x0000000000447400 string=0x0000000000447404 "-"
 *   insn=0x000000000044740C string=0x0000000000447410 "k"
 *   insn=0x0000000000447414 string=0x0000000000447418 ""
 *   insn=0x000000000044741C string=0x0000000000447420 "B"
 *   insn=0x0000000000447420 string=0x0000000000447424 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshBuilder::CopyDataToMesh(
        Caver::MeshBuilder *this,
        Caver::MeshData *a2,
        const unsigned __int8 *a3,
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
      if ( *(_DWORD *)a2 == 5121 && *((int *)a2 + 1) >= 1 )
      {
        v7 = 0;
        do
        {
          *(_BYTE *)(v5 + v7) = a3[v7];
          ++v7;
        }
        while ( v7 < *((int *)a2 + 1) );
      }
      a3 += a4;
      v5 += *((unsigned int *)a2 + 2);
    }
  }
}

