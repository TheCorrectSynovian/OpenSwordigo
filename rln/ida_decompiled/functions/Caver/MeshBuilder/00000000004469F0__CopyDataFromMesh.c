/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004469F0
 * Mangled: _ZN5Caver11MeshBuilder16CopyDataFromMeshEPiiPKNS_8MeshDataEi
 * Demangled: Caver::MeshBuilder::CopyDataFromMesh(int *,int,Caver::MeshData const*,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004469F0 string=0x00000000004469F4 ""
 *   insn=0x00000000004469F4 string=0x00000000004469F8 "i@"
 *   insn=0x00000000004469F8 string=0x00000000004469FC "j"
 *   insn=0x0000000000446A00 string=0x0000000000446A04 "K|@"
 *   insn=0x0000000000446A04 string=0x0000000000446A08 "l"
 *   insn=0x0000000000446A08 string=0x0000000000446A0C "_"
 *   insn=0x0000000000446A0C string=0x0000000000446A10 "a"
 *   insn=0x0000000000446A10 string=0x0000000000446A14 "m"
 *   insn=0x0000000000446A10 string=0x0000000000446A3C "m@"
 *   insn=0x0000000000446A18 string=0x0000000000446A1C ""
 *   insn=0x0000000000446A20 string=0x0000000000446A24 ".ymx.x-"
 *   insn=0x0000000000446A24 string=0x0000000000446A28 ".x-"
 *   insn=0x0000000000446A28 string=0x0000000000446A2C "n"
 *   insn=0x0000000000446A34 string=0x0000000000446A38 "k"
 *   insn=0x0000000000446A3C string=0x0000000000446A40 ""
 *   insn=0x0000000000446A44 string=0x0000000000446A48 "!"
 *   insn=0x0000000000446A48 string=0x0000000000446A4C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshBuilder::CopyDataFromMesh(
        Caver::MeshBuilder *this,
        int *a2,
        int a3,
        const Caver::MeshData *a4,
        int a5)
{
  __int64 v5; // x9
  int v6; // w10
  int i; // w8
  __int64 v8; // x13

  if ( a5 >= 1 )
  {
    v5 = *((_QWORD *)a4 + 2);
    v6 = *(_DWORD *)a4;
    for ( i = 0; i != a5; ++i )
    {
      if ( v6 == 5123 && *((int *)a4 + 1) >= 1 )
      {
        v8 = 0;
        do
        {
          a2[v8] = *(unsigned __int16 *)(v5 + 2 * v8);
          ++v8;
        }
        while ( v8 < *((int *)a4 + 1) );
      }
      a2 = (int *)((char *)a2 + a3);
      v5 += *((unsigned int *)a4 + 2);
    }
  }
}

