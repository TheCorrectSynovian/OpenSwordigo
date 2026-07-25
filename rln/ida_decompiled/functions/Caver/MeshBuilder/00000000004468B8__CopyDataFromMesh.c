/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004468B8
 * Mangled: _ZN5Caver11MeshBuilder16CopyDataFromMeshEPfiPKNS_8MeshDataEi
 * Demangled: Caver::MeshBuilder::CopyDataFromMesh(float *,int,Caver::MeshData const*,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 22
 *   insn=0x00000000004468B8 string=0x00000000004468BC "K"
 *   insn=0x00000000004468BC string=0x00000000004468C0 "i@"
 *   insn=0x00000000004468C0 string=0x00000000004468C4 "j"
 *   insn=0x00000000004468C8 string=0x00000000004468CC "K|@"
 *   insn=0x00000000004468D4 string=0x00000000004468D8 "_"
 *   insn=0x00000000004468DC string=0x00000000004468E0 "n"
 *   insn=0x00000000004468DC string=0x000000000044696C "n@"
 *   insn=0x00000000004468E4 string=0x00000000004468E8 "+"
 *   insn=0x00000000004468EC string=0x00000000004468F0 "b"
 *   insn=0x0000000000446900 string=0x0000000000446904 "1"
 *   insn=0x0000000000446910 string=0x0000000000446914 "?"
 *   insn=0x0000000000446914 string=0x0000000000446918 "b"
 *   insn=0x000000000044691C string=0x0000000000446920 ""
 *   insn=0x000000000044692C string=0x0000000000446930 "2"
 *   insn=0x0000000000446930 string=0x0000000000446934 "@"
 *   insn=0x0000000000446938 string=0x000000000044693C "1""
 *   insn=0x0000000000446940 string=0x0000000000446944 "@"
 *   insn=0x0000000000446944 string=0x0000000000446948 "A"
 *   insn=0x0000000000446954 string=0x0000000000446958 "1ip"
 *   insn=0x0000000000446964 string=0x0000000000446968 "k"
 *   insn=0x000000000044696C string=0x0000000000446970 ""
 *   insn=0x0000000000446978 string=0x000000000044697C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshBuilder::CopyDataFromMesh(
        Caver::MeshBuilder *this,
        float *a2,
        int a3,
        const Caver::MeshData *a4,
        int a5)
{
  unsigned __int64 v5; // x9
  int v6; // w10
  __int64 v7; // x8
  float *v8; // x13
  __int64 v9; // x14
  __int64 v10; // x15
  char *v11; // x15
  __int64 v12; // x16
  unsigned __int64 v13; // x17
  __int128 v14; // q0
  __int128 v15; // q1
  float *v16; // x18
  __int64 v17; // x16
  float v18; // w17

  if ( a5 >= 1 )
  {
    v5 = *((_QWORD *)a4 + 2);
    v6 = *(_DWORD *)a4;
    v7 = 0;
    v8 = a2;
    do
    {
      if ( v6 != 5126 )
        goto LABEL_14;
      v9 = *((int *)a4 + 1);
      if ( (int)v9 < 1 )
        goto LABEL_14;
      if ( (unsigned int)v9 >= 8 )
      {
        v11 = (char *)a2 + v7 * a3;
        if ( (unsigned __int64)v11 >= v5 + 4 * v9 || v5 >= (unsigned __int64)&v11[4 * v9] )
        {
          v10 = v9 & 0x7FFFFFF8;
          v12 = 0;
          v13 = v9 & 0xFFFFFFFFFFFFFFF8LL;
          do
          {
            v14 = *(_OWORD *)(v5 + v12 * 4);
            v15 = *(_OWORD *)(v5 + v12 * 4 + 16);
            v16 = &v8[v12];
            v13 -= 8LL;
            v12 += 8;
            *(_OWORD *)v16 = v14;
            *((_OWORD *)v16 + 1) = v15;
          }
          while ( v13 );
          if ( v10 == v9 )
            goto LABEL_14;
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = 0;
      }
      do
      {
        v17 = v10;
        v18 = *(float *)(v5 + 4 * v10++);
        v8[v17] = v18;
      }
      while ( v10 < v9 );
LABEL_14:
      ++v7;
      v8 = (float *)((char *)v8 + a3);
      v5 += *((unsigned int *)a4 + 2);
    }
    while ( (_DWORD)v7 != a5 );
  }
}

