/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BB87C
 * Mangled: _ZNSt6vectorIN5Caver11MeshBuilder6VertexESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,Caver::MeshBuilder::Vertex const&)
 *
 * Callers: 2
 *   0x0000000000201CE0  std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,Caver::MeshBuilder::Vertex const&)
 *   0x00000000002BB564  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 76
 *   insn=0x00000000002BB8A4 string=0x00000000002BB8A8 "`"
 *   insn=0x00000000002BB8AC string=0x00000000002BB8B0 " "
 *   insn=0x00000000002BB8B4 string=0x00000000002BB8B8 "\n"
 *   insn=0x00000000002BB8B8 string=0x00000000002BB8BC ""
 *   insn=0x00000000002BB8BC string=0x00000000002BB8C0 "#"
 *   insn=0x00000000002BB8C8 string=0x00000000002BB8CC "\n!"
 *   insn=0x00000000002BB910 string=0x00000000002BB914 "k"
 *   insn=0x00000000002BB914 string=0x00000000002BB960 "J"
 *   insn=0x00000000002BB918 string=0x00000000002BB920 "c|"
 *   insn=0x00000000002BB920 string=0x00000000002BB924 "c"
 *   insn=0x00000000002BB924 string=0x00000000002BB928 "c"
 *   insn=0x00000000002BB930 string=0x00000000002BB934 "!"
 *   insn=0x00000000002BB934 string=0x00000000002BB938 "%"
 *   insn=0x00000000002BB938 string=0x00000000002BB93C """
 *   insn=0x00000000002BB93C string=0x00000000002BB940 "c"
 *   insn=0x00000000002BB944 string=0x00000000002BB948 " "
 *   insn=0x00000000002BB948 string=0x00000000002BB94C "%!"
 *   insn=0x00000000002BB94C string=0x00000000002BB950 ""A"
 *   insn=0x00000000002BB950 string=0x00000000002BB954 "#A"
 *   insn=0x00000000002BB960 string=0x00000000002BB964 "j"
 *   insn=0x00000000002BB968 string=0x00000000002BB96C "q"
 *   insn=0x00000000002BB96C string=0x00000000002BB970 "rB"
 *   insn=0x00000000002BB970 string=0x00000000002BB974 "`"
 *   insn=0x00000000002BB974 string=0x00000000002BB978 "aB"
 *   insn=0x00000000002BB978 string=0x00000000002BB97C "nB"
 *   insn=0x00000000002BB97C string=0x00000000002BB980 "o"
 *   insn=0x00000000002BB980 string=0x00000000002BB984 "pB"
 *   insn=0x00000000002BB984 string=0x00000000002BB988 "h"
 *   insn=0x00000000002BB988 string=0x00000000002BB98C "m"
 *   insn=0x00000000002BB98C string=0x00000000002BB990 "g"
 *   insn=0x00000000002BB9A0 string=0x00000000002BB9A4 ""
 *   insn=0x00000000002BB9A4 string=0x00000000002BB9A8 ""
 *   insn=0x00000000002BB9A8 string=0x00000000002BB9AC "}"
 *   insn=0x00000000002BB9AC string=0x00000000002BB9B0 "\n"
 *   insn=0x00000000002BB9B0 string=0x00000000002BB9B4 "ix"
 *   insn=0x00000000002BB9B4 string=0x00000000002BB9B8 "H"
 *   insn=0x00000000002BB9C4 string=0x00000000002BB9C8 "J"
 *   insn=0x00000000002BB9C8 string=0x00000000002BB9CC "_"
 *   insn=0x00000000002BB9CC string=0x00000000002BB9D0 "7"
 *   insn=0x00000000002BB9D8 string=0x00000000002BB9DC "H"
 *   insn=0x00000000002BB9E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002BB9F0 string=0x00000000002BB9F8 "h"
 *   insn=0x00000000002BB9FC string=0x00000000002BBA00 ""
 *   insn=0x00000000002BBA00 string=0x00000000002BBA04 "}"
 *   insn=0x00000000002BBA08 string=0x00000000002BBA0C "U\t"
 *   insn=0x00000000002BBA1C string=0x00000000002BBA20 "\t"
 *   insn=0x00000000002BBA24 string=0x00000000002BBA28 "\t"
 *   insn=0x00000000002BBA2C string=0x00000000002BBA30 "\t"
 *   insn=0x00000000002BBA34 string=0x00000000002BBA38 "\t"
 *   insn=0x00000000002BBA60 string=0x00000000002BBA64 " "
 *   insn=0x00000000002BBA68 string=0x00000000002BBA6C " "
 *   insn=0x00000000002BBA70 string=0x00000000002BBA74 "*"
 *   insn=0x00000000002BBA74 string=0x00000000002BBA78 "\n"
 *   insn=0x00000000002BBA78 string=0x00000000002BBA7C "*"
 *   insn=0x00000000002BBA7C string=0x00000000002BBA80 "\n"
 *   insn=0x00000000002BBA80 string=0x00000000002BBA84 "*"
 *   insn=0x00000000002BBA84 string=0x00000000002BBA88 "\n"
 *   insn=0x00000000002BBA88 string=0x00000000002BBA8C "*"
 *   insn=0x00000000002BBA8C string=0x00000000002BBA90 "\n"
 *   insn=0x00000000002BBA90 string=0x00000000002BBA94 " A"
 *   insn=0x00000000002BBA98 string=0x00000000002BBA9C " A"
 *   insn=0x00000000002BBA9C string=0x00000000002BBAA0 ")"
 *   insn=0x00000000002BBAA0 string=0x00000000002BBAA4 "?"
 *   insn=0x00000000002BBAA8 string=0x00000000002BBAAC ""
 *   insn=0x00000000002BBAB8 string=0x00000000002BBABC "?"
 *   insn=0x00000000002BBAC0 string=0x00000000002BBAC4 "`"
 *   insn=0x00000000002BBAC0 string=0x00000000002BBB14 "@"
 *   insn=0x00000000002BBAC8 string=0x00000000002BBACC "`"
 *   insn=0x00000000002BBAD0 string=0x00000000002BBAD4 "h"
 *   insn=0x00000000002BBAD8 string=0x00000000002BBADC "h"
 *   insn=0x00000000002BBAE0 string=0x00000000002BBAE4 "h"
 *   insn=0x00000000002BBAE8 string=0x00000000002BBAEC "h"
 *   insn=0x00000000002BBAF0 string=0x00000000002BBAF4 "`B"
 *   insn=0x00000000002BBAF8 string=0x00000000002BBAFC "`B"
 *   insn=0x00000000002BBAFC string=0x00000000002BBB00 "s"
 *   insn=0x00000000002BBB18 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::MeshBuilder::Vertex>::_M_insert_aux(__int64 *a1, __int64 a2, int *a3)
{
  __int64 v4; // x8
  __int64 v6; // x19
  __int64 v7; // x9
  __int128 v8; // q1
  int v9; // w10
  __int64 v10; // x3
  __int128 v11; // q0
  __int128 v12; // q2
  int v13; // w17
  __int64 v14; // x18
  __int64 v15; // x0
  __int64 v16; // x1
  int v17; // w8
  unsigned __int8 v18; // w10
  unsigned __int8 v19; // w2
  unsigned __int8 v20; // w11
  unsigned __int8 v21; // w12
  __int64 v22; // x14
  __int64 v23; // x15
  __int64 v24; // x16
  __int64 v25; // x13
  signed __int64 v26; // x3
  __int64 v27; // x4
  __int128 v28; // t1
  __int128 v29; // q1
  int v30; // w5
  __int128 v31; // q2
  __int128 v32; // q3
  __int64 v33; // x25
  bool v34; // zf
  __int64 v35; // x8
  unsigned __int64 v36; // x8
  __int64 v37; // x10
  bool v38; // cf
  unsigned __int64 v39; // x8
  int v40; // w10
  unsigned __int64 v41; // x23
  __int64 v42; // x21
  __int64 v43; // x8
  void *v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  __int128 v47; // q0
  __int64 v48; // x9
  __int64 i; // x22
  __int128 v50; // q0

  v4 = a1[1];
  v6 = a2;
  if ( v4 == a1[2] )
  {
    v33 = *a1;
    v35 = v4 - *a1;
    v34 = v35 == 0;
    v36 = 0xF0F0F0F0F0F0F0F1LL * (v35 >> 2);
    if ( v34 )
      v37 = 1;
    else
      v37 = v36;
    v38 = __CFADD__(v37, v36);
    v39 = v37 + v36;
    v40 = v38;
    if ( v40 | (v39 > 0x3C3C3C3C3C3C3C3LL) )
      v41 = 0x3C3C3C3C3C3C3C3LL;
    else
      v41 = v39;
    if ( v41 )
    {
      if ( v41 > 0x3C3C3C3C3C3C3C3LL )
        sub_565294();
      v42 = operator new(68 * v41);
    }
    else
    {
      v42 = 0;
    }
    v43 = v42 + 4 * ((v6 - v33) >> 2);
    *(_OWORD *)v43 = *(_OWORD *)a3;
    *(_OWORD *)(v43 + 16) = *((_OWORD *)a3 + 1);
    *(_BYTE *)(v43 + 32) = *((_BYTE *)a3 + 32);
    *(_BYTE *)(v43 + 33) = *((_BYTE *)a3 + 33);
    *(_BYTE *)(v43 + 34) = *((_BYTE *)a3 + 34);
    *(_BYTE *)(v43 + 35) = *((_BYTE *)a3 + 35);
    *(_OWORD *)(v43 + 36) = *(_OWORD *)(a3 + 9);
    *(_OWORD *)(v43 + 52) = *(_OWORD *)(a3 + 13);
    v44 = (void *)*a1;
    v45 = v42;
    if ( *a1 != v6 )
    {
      v45 = v42;
      v46 = *a1;
      do
      {
        *(_OWORD *)v45 = *(_OWORD *)v46;
        *(_OWORD *)(v45 + 16) = *(_OWORD *)(v46 + 16);
        *(_BYTE *)(v45 + 32) = *(_BYTE *)(v46 + 32);
        *(_BYTE *)(v45 + 33) = *(_BYTE *)(v46 + 33);
        *(_BYTE *)(v45 + 34) = *(_BYTE *)(v46 + 34);
        *(_BYTE *)(v45 + 35) = *(_BYTE *)(v46 + 35);
        *(_OWORD *)(v45 + 36) = *(_OWORD *)(v46 + 36);
        v47 = *(_OWORD *)(v46 + 52);
        v46 += 68;
        *(_OWORD *)(v45 + 52) = v47;
        v45 += 68;
      }
      while ( v46 != v6 );
    }
    v48 = a1[1];
    for ( i = v45 + 68; v6 != v48; i += 68 )
    {
      *(_OWORD *)i = *(_OWORD *)v6;
      *(_OWORD *)(i + 16) = *(_OWORD *)(v6 + 16);
      *(_BYTE *)(i + 32) = *(_BYTE *)(v6 + 32);
      *(_BYTE *)(i + 33) = *(_BYTE *)(v6 + 33);
      *(_BYTE *)(i + 34) = *(_BYTE *)(v6 + 34);
      *(_BYTE *)(i + 35) = *(_BYTE *)(v6 + 35);
      *(_OWORD *)(i + 36) = *(_OWORD *)(v6 + 36);
      v50 = *(_OWORD *)(v6 + 52);
      v6 += 68;
      *(_OWORD *)(i + 52) = v50;
    }
    if ( v44 )
      operator delete(v44);
    *a1 = v42;
    a1[1] = i;
    a1[2] = v42 + 68 * v41;
  }
  else
  {
    v7 = v4 - 68;
    v8 = *(_OWORD *)(v4 - 52);
    v9 = *(_DWORD *)(v4 - 36);
    v10 = v4 - 68 - a2;
    *(_OWORD *)v4 = *(_OWORD *)(v4 - 68);
    *(_OWORD *)(v4 + 16) = v8;
    v12 = *(_OWORD *)(v4 - 32);
    v11 = *(_OWORD *)(v4 - 16);
    *(_DWORD *)(v4 + 32) = v9;
    *(_OWORD *)(v4 + 36) = v12;
    *(_OWORD *)(v4 + 52) = v11;
    a1[1] = v4 + 68;
    v13 = *a3;
    v14 = *(_QWORD *)(a3 + 1);
    v15 = *(_QWORD *)(a3 + 3);
    v16 = *(_QWORD *)(a3 + 5);
    v17 = a3[7];
    v18 = *((_BYTE *)a3 + 32);
    v19 = *((_BYTE *)a3 + 33);
    v20 = *((_BYTE *)a3 + 34);
    v21 = *((_BYTE *)a3 + 35);
    v22 = *(_QWORD *)(a3 + 9);
    v23 = *(_QWORD *)(a3 + 11);
    v24 = *(_QWORD *)(a3 + 13);
    v25 = *(_QWORD *)(a3 + 15);
    if ( v10 >= 1 )
    {
      v26 = v10 / 0x44uLL + 1;
      v27 = v7;
      do
      {
        v28 = *(_OWORD *)(v27 - 68);
        v27 -= 68;
        v29 = *(_OWORD *)(v7 - 52);
        v30 = *(_DWORD *)(v7 - 36);
        v31 = *(_OWORD *)(v7 - 32);
        v32 = *(_OWORD *)(v7 - 16);
        --v26;
        *(_OWORD *)v7 = v28;
        *(_OWORD *)(v7 + 16) = v29;
        *(_DWORD *)(v7 + 32) = v30;
        *(_OWORD *)(v7 + 36) = v31;
        *(_OWORD *)(v7 + 52) = v32;
        v7 = v27;
      }
      while ( v26 > 1 );
    }
    *(_DWORD *)v6 = v13;
    *(_QWORD *)(v6 + 4) = v14;
    *(_QWORD *)(v6 + 12) = v15;
    *(_QWORD *)(v6 + 20) = v16;
    *(_QWORD *)(v6 + 36) = v22;
    *(_QWORD *)(v6 + 44) = v23;
    *(_QWORD *)(v6 + 52) = v24;
    *(_DWORD *)(v6 + 28) = v17;
    *(_DWORD *)(v6 + 32) = v18 | (unsigned __int16)(v19 << 8) | (v20 << 16) & 0xFFFFFF | (v21 << 24);
    *(_QWORD *)(v6 + 60) = v25;
  }
}

