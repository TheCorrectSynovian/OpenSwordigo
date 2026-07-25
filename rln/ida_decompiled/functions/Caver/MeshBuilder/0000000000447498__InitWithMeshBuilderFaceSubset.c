/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000447498
 * Mangled: _ZN5Caver11MeshBuilder29InitWithMeshBuilderFaceSubsetERKS0_Pii
 * Demangled: Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *
 * Callers: 1
 *   0x00000000001F88E0  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *
 * Callees: 10
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B80  Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&)
 *   0x00000000001F8200  Caver::MeshBuilder::AddFace(int,int,int)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBC40  .memset
 *   0x0000000000201070  Caver::MeshBuilder::GetFaceAtIndex(int,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *)
 *   0x0000000000202C80  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *   0x00000000004476EC  Caver::MeshBuilder::GetFaceAtIndex(int,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x00000000004474B4 string=0x00000000004474B8 "Y"
 *   insn=0x00000000004474B8 string=0x00000000004474BC "("
 *   insn=0x00000000004474E0 string=0x00000000004474E4 "@"
 *   insn=0x00000000004474E8 string=0x00000000004474EC "+\t"
 *   insn=0x00000000004474F0 string=0x00000000004474F4 "X"
 *   insn=0x0000000000447500 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000447510 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000447514 string=0x0000000000447518 "\t"
 *   insn=0x0000000000447518 string=0x000000000044751C "H"
 *   insn=0x0000000000447534 string=0x0000000000447570 "_"
 *   insn=0x0000000000447544 string=0x0000000000447548 "lE"
 *   insn=0x0000000000447548 string=0x000000000044754C ")"
 *   insn=0x0000000000447550 string=0x0000000000447554 ""
 *   insn=0x0000000000447570 string=0x0000000000447574 ""
 *   insn=0x0000000000447580 string=0x0000000000447584 ""
 *   insn=0x0000000000447588 string=0x000000000044758C "{<"
 *   insn=0x0000000000447598 string=0x000000000044759C "y"
 *   insn=0x000000000044759C string=0x00000000001F6B80 "0'"
 *   insn=0x00000000004475A8 string=0x00000000004475AC "{"
 *   insn=0x00000000004475B4 string=0x00000000004475B8 "+"
 *   insn=0x00000000004475C0 string=0x00000000004475C4 "hz"
 *   insn=0x00000000004475C8 string=0x00000000004475CC ""
 *   insn=0x00000000004475CC string=0x00000000004475D0 "*"
 *   insn=0x00000000004475D0 string=0x00000000004475D4 "(y"
 *   insn=0x00000000004475D4 string=0x00000000004475D8 "I"
 *   insn=0x00000000004475EC string=0x00000000004475F0 "Z"
 *   insn=0x00000000004475EC string=0x00000000001F8200 "0'"
 *   insn=0x00000000004475F0 string=0x00000000004475F4 "_"
 *   insn=0x00000000004475F4 string=0x00000000004475F8 "k"
 *   insn=0x00000000004475FC string=0x0000000000447600 "X"
 *   insn=0x0000000000447600 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000447604 string=0x0000000000447608 "V"
 *   insn=0x0000000000447608 string=0x000000000044760C "!"
 *   insn=0x000000000044760C string=0x0000000000447690 "("
 *   insn=0x0000000000447644 string=0x0000000000447648 "~"
 *   insn=0x0000000000447648 string=0x000000000044764C "aF@"
 *   insn=0x0000000000447668 string=0x000000000044766C "E"
 *   insn=0x0000000000447674 string=0x0000000000447678 "B"
 *   insn=0x0000000000447680 string=0x0000000000447684 "?"
 *   insn=0x0000000000447698 string=0x000000000044769C "!"
 *   insn=0x00000000004476C0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004476D4 string=0x00000000004476D8 """
 *   insn=0x00000000004476DC string=0x00000000004476E0 " "
 *   insn=0x00000000004476E4 string=0x00000000004476E8 "w"
 *   insn=0x00000000004476E8 string=0x00000000004476EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(
        Caver::MeshBuilder *this,
        const Caver::Mesh **a2,
        int *a3,
        int a4)
{
  int v8; // w26
  unsigned __int64 v9; // x0
  void *v10; // x22
  unsigned __int64 v11; // x0
  _DWORD *v12; // x24
  const Caver::Mesh *v13; // x8
  __int64 v14; // x9
  int *v15; // x11
  __int64 v16; // t1
  char *v17; // x13
  __int64 v18; // x13
  __int64 v19; // x14
  __int64 v20; // x27
  __int64 i; // x28
  __int64 v22; // x26
  const Caver::Mesh *v23; // x9
  char *v24; // x10
  __int64 v25; // x22
  char v26[72]; // [xsp+10h] [xbp-130h] BYREF
  char v27[72]; // [xsp+58h] [xbp-E8h] BYREF
  char v28[72]; // [xsp+A0h] [xbp-A0h] BYREF
  __int64 v29; // [xsp+E8h] [xbp-58h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MeshBuilder::InitWithMesh(this, *a2, 0);
  if ( *(int *)(*(_QWORD *)this + 12LL) < 1 )
  {
    if ( a4 >= 1 )
    {
      v25 = (unsigned int)a4;
      do
      {
        memset(v28, 0, 0x44u);
        memset(v27, 0, 0x44u);
        memset(v26, 0, 0x44u);
        ++a3;
        Caver::MeshBuilder::GetFaceAtIndex();
        Caver::MeshBuilder::AddVertex();
        Caver::MeshBuilder::AddVertex();
        Caver::MeshBuilder::AddVertex();
        --v25;
      }
      while ( v25 );
    }
  }
  else
  {
    v8 = *((_DWORD *)a2 + 4);
    if ( v8 < 0LL )
      v9 = -1;
    else
      v9 = v8;
    v10 = (void *)operator new[](v9);
    memset(v10, 0, v8);
    if ( is_mul_ok(v8, 4u) )
      v11 = 4LL * v8;
    else
      v11 = -1;
    v12 = (_DWORD *)operator new[](v11);
    if ( a4 >= 1 )
    {
      v13 = a2[7];
      v14 = (unsigned int)a4;
      v15 = a3;
      do
      {
        v16 = *v15++;
        --v14;
        v17 = (char *)v13 + 12 * (int)v16;
        v19 = *((int *)v17 + 1);
        v18 = *((int *)v17 + 2);
        *((_BYTE *)v10 + *((int *)v13 + 3 * v16)) = 1;
        *((_BYTE *)v10 + v19) = 1;
        *((_BYTE *)v10 + v18) = 1;
      }
      while ( v14 );
    }
    if ( v8 >= 1 )
    {
      v20 = 0;
      for ( i = 0; i < v8; ++i )
      {
        if ( *((_BYTE *)v10 + i) )
        {
          v12[i] = *((_DWORD *)this + 4);
          Caver::MeshBuilder::AddVertex();
          v8 = *((_DWORD *)a2 + 4);
        }
        v20 += 68;
      }
    }
    if ( a4 >= 1 )
    {
      v22 = 0;
      do
      {
        v23 = a2[7];
        v24 = (char *)v23 + 12 * a3[v22];
        Caver::MeshBuilder::AddFace(
          this,
          v12[*((int *)v23 + 3 * a3[v22++])],
          v12[*((int *)v24 + 1)],
          v12[*((int *)v24 + 2)]);
      }
      while ( v22 < a4 );
    }
    operator delete[](v12);
    operator delete[](v10);
  }
}

