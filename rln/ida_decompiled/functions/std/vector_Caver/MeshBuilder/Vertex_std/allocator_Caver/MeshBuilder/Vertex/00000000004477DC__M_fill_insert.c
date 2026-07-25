/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004477DC
 * Mangled: _ZNSt6vectorIN5Caver11MeshBuilder6VertexESaIS2_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS2_S4_EEmRKS2_
 * Demangled: std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,ulong,Caver::MeshBuilder::Vertex const&)
 *
 * Callers: 1
 *   0x00000000001FC5E0  std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,ulong,Caver::MeshBuilder::Vertex const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000565294  sub_565294
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 129
 *   insn=0x0000000000447810 string=0x0000000000447818 ""
 *   insn=0x0000000000447818 string=0x000000000044781C ""
 *   insn=0x000000000044781C string=0x0000000000447820 "}"
 *   insn=0x0000000000447824 string=0x0000000000447828 "b"
 *   insn=0x0000000000447838 string=0x000000000044783C ")"
 *   insn=0x000000000044783C string=0x0000000000447840 ")}"
 *   insn=0x0000000000447840 string=0x0000000000447844 "\n"
 *   insn=0x0000000000447844 string=0x0000000000447848 "_"
 *   insn=0x0000000000447848 string=0x000000000044784C "C""
 *   insn=0x000000000044784C string=0x0000000000447850 "?"
 *   insn=0x000000000044784C string=0x0000000000447C94 "@\n"
 *   insn=0x0000000000447854 string=0x0000000000447858 "I"
 *   insn=0x000000000044785C string=0x0000000000447860 "?"
 *   insn=0x0000000000447864 string=0x0000000000447868 "J"
 *   insn=0x0000000000447868 string=0x000000000044786C "_"
 *   insn=0x0000000000447878 string=0x000000000044787C "(!"
 *   insn=0x000000000044787C string=0x0000000000447880 ""
 *   insn=0x000000000044787C string=0x0000000000447CA0 "}u"
 *   insn=0x0000000000447884 string=0x0000000000447888 "V"
 *   insn=0x0000000000447888 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000447890 string=0x0000000000447B18 "h"
 *   insn=0x00000000004478CC string=0x00000000004478D0 "7"
 *   insn=0x00000000004478D0 string=0x00000000004478D4 ")\n"
 *   insn=0x00000000004478E8 string=0x00000000004478EC "Z"
 *   insn=0x00000000004478F0 string=0x00000000004478F4 "`"
 *   insn=0x00000000004478F8 string=0x00000000004478FC "9"
 *   insn=0x00000000004478FC string=0x0000000000447900 "_"
 *   insn=0x0000000000447904 string=0x0000000000447908 "`"
 *   insn=0x000000000044790C string=0x0000000000447910 "~"
 *   insn=0x0000000000447914 string=0x0000000000447918 "~"
 *   insn=0x000000000044791C string=0x0000000000447920 "~"
 *   insn=0x0000000000447924 string=0x0000000000447928 "~"
 *   insn=0x000000000044792C string=0x0000000000447930 "`C"
 *   insn=0x0000000000447934 string=0x0000000000447938 "`C"
 *   insn=0x0000000000447964 string=0x0000000000447968 "y"
 *   insn=0x000000000044797C string=0x0000000000447980 " "
 *   insn=0x000000000044798C string=0x0000000000447990 " "
 *   insn=0x0000000000447994 string=0x0000000000447998 ":"
 *   insn=0x000000000044799C string=0x00000000004479A0 " "
 *   insn=0x00000000004479A4 string=0x00000000004479A8 ":"
 *   insn=0x00000000004479AC string=0x00000000004479B0 ":"
 *   insn=0x00000000004479B4 string=0x00000000004479B8 ":@"
 *   insn=0x00000000004479BC string=0x00000000004479C0 "9"
 *   insn=0x00000000004479E0 string=0x00000000004479E4 "h&"
 *   insn=0x00000000004479E4 string=0x00000000004479E8 "j."
 *   insn=0x00000000004479E8 string=0x00000000004479EC "l6"
 *   insn=0x00000000004479EC string=0x00000000004479F0 "n>"
 *   insn=0x00000000004479F0 string=0x00000000004479F4 "pF"
 *   insn=0x00000000004479F4 string=0x00000000004479F8 "r"
 *   insn=0x00000000004479F8 string=0x00000000004479FC "a\n"
 *   insn=0x00000000004479FC string=0x0000000000447A00 "c"
 *   insn=0x0000000000447A00 string=0x0000000000447A04 "eB"
 *   insn=0x0000000000447A04 string=0x0000000000447A08 "s"
 *   insn=0x0000000000447A18 string=0x0000000000447A1C " "
 *   insn=0x0000000000447A20 string=0x0000000000447A24 "H'"
 *   insn=0x0000000000447A24 string=0x0000000000447A28 "J/"
 *   insn=0x0000000000447A28 string=0x0000000000447A2C "L7"
 *   insn=0x0000000000447A2C string=0x0000000000447A30 "N?"
 *   insn=0x0000000000447A30 string=0x0000000000447A34 "P"
 *   insn=0x0000000000447A34 string=0x0000000000447A38 "X"
 *   insn=0x0000000000447A38 string=0x0000000000447A3C "V"
 *   insn=0x0000000000447A3C string=0x0000000000447A40 "G"
 *   insn=0x0000000000447A40 string=0x0000000000447A44 "Q"
 *   insn=0x0000000000447A44 string=0x0000000000447A48 "@"
 *   insn=0x0000000000447A48 string=0x0000000000447A4C "B"
 *   insn=0x0000000000447A4C string=0x0000000000447A50 "D"
 *   insn=0x0000000000447A54 string=0x0000000000447A58 "Z"
 *   insn=0x0000000000447A58 string=0x0000000000447A5C "A"
 *   insn=0x0000000000447A60 string=0x0000000000447A64 "7"
 *   insn=0x0000000000447A74 string=0x0000000000447A78 " "
 *   insn=0x0000000000447A7C string=0x0000000000447A80 " "
 *   insn=0x0000000000447A84 string=0x0000000000447A88 ":"
 *   insn=0x0000000000447A8C string=0x0000000000447A90 ":"
 *   insn=0x0000000000447A94 string=0x0000000000447A98 ":"
 *   insn=0x0000000000447A9C string=0x0000000000447AA0 ":"
 *   insn=0x0000000000447AA4 string=0x0000000000447AA8 " C"
 *   insn=0x0000000000447AAC string=0x0000000000447AB0 " C"
 *   insn=0x0000000000447AB0 string=0x0000000000447AB4 "9"
 *   insn=0x0000000000447AB4 string=0x0000000000447AB8 "?"
 *   insn=0x0000000000447ADC string=0x0000000000447AE0 "h&"
 *   insn=0x0000000000447AE0 string=0x0000000000447AE4 "j."
 *   insn=0x0000000000447AE4 string=0x0000000000447AE8 "l6"
 *   insn=0x0000000000447AE8 string=0x0000000000447AEC "n>"
 *   insn=0x0000000000447AEC string=0x0000000000447AF0 "pF"
 *   insn=0x0000000000447AF0 string=0x0000000000447AF4 "r"
 *   insn=0x0000000000447AF4 string=0x0000000000447AF8 "a\n"
 *   insn=0x0000000000447AF8 string=0x0000000000447AFC "c"
 *   insn=0x0000000000447AFC string=0x0000000000447B00 "eB"
 *   insn=0x0000000000447B00 string=0x0000000000447B04 "s"
 *   insn=0x0000000000447B0C string=0x0000000000447B10 "V"
 *   insn=0x0000000000447B1C string=0x0000000000447B24 ""
 *   insn=0x0000000000447B24 string=0x0000000000447B28 "}\t"
 *   insn=0x0000000000447B2C string=0x0000000000447B30 "Y\t"
 *   insn=0x0000000000447B38 string=0x0000000000447B3C ")"
 *   insn=0x0000000000447B4C string=0x0000000000447B50 "\n"
 *   insn=0x0000000000447B54 string=0x0000000000447B58 "\n"
 *   insn=0x0000000000447B5C string=0x0000000000447B60 "\n"
 *   insn=0x0000000000447B64 string=0x0000000000447B68 "\n"
 *   insn=0x0000000000447B78 string=0x0000000000447B7C ""
 *   insn=0x0000000000447B98 string=0x0000000000447B9C " "
 *   insn=0x0000000000447BA0 string=0x0000000000447BA4 " "
 *   insn=0x0000000000447BA8 string=0x0000000000447BAC "*"
 *   insn=0x0000000000447BAC string=0x0000000000447BB0 "\n"
 *   insn=0x0000000000447BB0 string=0x0000000000447BB4 "*"
 *   insn=0x0000000000447BB4 string=0x0000000000447BB8 "\n"
 *   insn=0x0000000000447BB8 string=0x0000000000447BBC "*"
 *   insn=0x0000000000447BBC string=0x0000000000447BC0 "\n"
 *   insn=0x0000000000447BC0 string=0x0000000000447BC4 "*"
 *   insn=0x0000000000447BC4 string=0x0000000000447BC8 "\n"
 *   insn=0x0000000000447BC8 string=0x0000000000447BCC " A"
 *   insn=0x0000000000447BD0 string=0x0000000000447BD4 " A"
 *   insn=0x0000000000447BD4 string=0x0000000000447BD8 ")"
 *   insn=0x0000000000447BD8 string=0x0000000000447BDC "?"
 *   insn=0x0000000000447BE0 string=0x0000000000447BE4 ""
 *   insn=0x0000000000447BF4 string=0x0000000000447BF8 "?"
 *   insn=0x0000000000447BFC string=0x0000000000447C00 "`"
 *   insn=0x0000000000447BFC string=0x0000000000447C50 "@"
 *   insn=0x0000000000447C04 string=0x0000000000447C08 "`"
 *   insn=0x0000000000447C0C string=0x0000000000447C10 "h"
 *   insn=0x0000000000447C14 string=0x0000000000447C18 "h"
 *   insn=0x0000000000447C1C string=0x0000000000447C20 "h"
 *   insn=0x0000000000447C24 string=0x0000000000447C28 "h"
 *   insn=0x0000000000447C2C string=0x0000000000447C30 "`B"
 *   insn=0x0000000000447C34 string=0x0000000000447C38 "`B"
 *   insn=0x0000000000447C38 string=0x0000000000447C3C "s"
 *   insn=0x0000000000447C54 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000447C58 string=0x0000000000447C5C "["
 *   insn=0x0000000000447C94 string=0x0000000000447C9C ",v"
 *   insn=0x0000000000447C94 string=0x000000000059299C "vector::_M_fill_insert"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::MeshBuilder::Vertex>::_M_fill_insert(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        int *a4)
{
  __int64 v6; // x19
  __int64 v8; // x6
  __int64 v9; // x25
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x10
  bool v12; // cf
  unsigned __int64 v13; // x9
  int v14; // w10
  unsigned __int64 v15; // x24
  __int64 v16; // x22
  int v17; // w8
  int v18; // w9
  int v19; // w10
  int v20; // w11
  int v21; // w12
  int v22; // w13
  int v23; // w14
  int v24; // w15
  unsigned __int8 v25; // w16
  unsigned __int8 v26; // w24
  unsigned __int8 v27; // w22
  unsigned __int8 v28; // w7
  int v29; // w17
  int v30; // w18
  int v31; // w0
  int v32; // w1
  int v33; // w2
  int v34; // w3
  int v35; // w4
  int v36; // w5
  unsigned __int64 v37; // x25
  unsigned __int64 v38; // x23
  __int64 v39; // x25
  unsigned __int64 v40; // x23
  __int64 v41; // x27
  __int128 v42; // q0
  __int64 v43; // x28
  __int64 v44; // x23
  __int64 v45; // x6
  signed __int64 v46; // x20
  __int64 v47; // x6
  int v48; // w16
  unsigned __int64 v49; // x25
  __int64 v50; // x26
  __int64 v51; // x23
  __int64 v52; // x25
  __int128 v53; // q0
  int v54; // w16
  __int64 v55; // x8
  unsigned __int64 v56; // x9
  void *v57; // x0
  __int64 v58; // x8
  __int64 v59; // x9
  __int128 v60; // q0
  __int64 v61; // x9
  unsigned __int64 i; // x21
  __int128 v63; // q0

  v6 = a2;
  if ( a3 )
  {
    v8 = a1[1];
    if ( 0xF0F0F0F0F0F0F0F1LL * ((a1[2] - v8) >> 2) >= a3 )
    {
      v17 = *a4;
      v18 = a4[1];
      v19 = a4[2];
      v20 = a4[3];
      v21 = a4[4];
      v22 = a4[5];
      v23 = a4[6];
      v24 = a4[7];
      v25 = *((_BYTE *)a4 + 32);
      v26 = *((_BYTE *)a4 + 33);
      v27 = *((_BYTE *)a4 + 34);
      v28 = *((_BYTE *)a4 + 35);
      v29 = a4[9];
      v30 = a4[10];
      v31 = a4[11];
      v32 = a4[12];
      v33 = a4[13];
      v34 = a4[14];
      v35 = a4[15];
      v36 = a4[16];
      v37 = 0xF0F0F0F0F0F0F0F1LL * ((v8 - v6) >> 2);
      v38 = v37 - a3;
      if ( v37 <= a3 )
      {
        v49 = a3 - v37;
        if ( v49 )
        {
          v50 = a1[1];
          do
          {
            *(_DWORD *)v50 = v17;
            *(_DWORD *)(v50 + 4) = v18;
            *(_DWORD *)(v50 + 8) = v19;
            *(_DWORD *)(v50 + 12) = v20;
            *(_DWORD *)(v50 + 16) = v21;
            *(_DWORD *)(v50 + 20) = v22;
            *(_DWORD *)(v50 + 24) = v23;
            *(_DWORD *)(v50 + 28) = v24;
            *(_BYTE *)(v50 + 32) = v25;
            *(_BYTE *)(v50 + 33) = v26;
            *(_BYTE *)(v50 + 34) = v27;
            *(_BYTE *)(v50 + 35) = v28;
            *(_DWORD *)(v50 + 36) = v29;
            *(_DWORD *)(v50 + 40) = v30;
            *(_DWORD *)(v50 + 44) = v31;
            *(_DWORD *)(v50 + 48) = v32;
            *(_DWORD *)(v50 + 52) = v33;
            *(_DWORD *)(v50 + 56) = v34;
            *(_DWORD *)(v50 + 60) = v35;
            *(_DWORD *)(v50 + 64) = v36;
            ++v38;
            v50 += 68;
          }
          while ( v38 );
        }
        v51 = v8 + 68 * v49;
        a1[1] = v51;
        if ( v8 == v6 )
        {
          a1[1] = v6 + 68 * a3;
        }
        else
        {
          v52 = v6;
          do
          {
            *(_OWORD *)v51 = *(_OWORD *)v52;
            *(_OWORD *)(v51 + 16) = *(_OWORD *)(v52 + 16);
            *(_BYTE *)(v51 + 32) = *(_BYTE *)(v52 + 32);
            *(_BYTE *)(v51 + 33) = *(_BYTE *)(v52 + 33);
            *(_BYTE *)(v51 + 34) = *(_BYTE *)(v52 + 34);
            *(_BYTE *)(v51 + 35) = *(_BYTE *)(v52 + 35);
            *(_OWORD *)(v51 + 36) = *(_OWORD *)(v52 + 36);
            v53 = *(_OWORD *)(v52 + 52);
            v52 += 68;
            *(_OWORD *)(v51 + 52) = v53;
            v51 += 68;
          }
          while ( v52 != v8 );
          v54 = v25 | (unsigned __int16)(v26 << 8) | (v27 << 16) & 0xFFFFFF | (v28 << 24);
          a1[1] = v8 + 68 * a3;
          do
          {
            *(_DWORD *)v6 = v17;
            *(_DWORD *)(v6 + 4) = v18;
            *(_DWORD *)(v6 + 8) = v19;
            *(_DWORD *)(v6 + 12) = v20;
            *(_DWORD *)(v6 + 16) = v21;
            *(_DWORD *)(v6 + 20) = v22;
            *(_DWORD *)(v6 + 24) = v23;
            *(_DWORD *)(v6 + 28) = v24;
            *(_DWORD *)(v6 + 32) = v54;
            *(_DWORD *)(v6 + 36) = v29;
            *(_DWORD *)(v6 + 40) = v30;
            *(_DWORD *)(v6 + 44) = v31;
            *(_DWORD *)(v6 + 48) = v32;
            *(_DWORD *)(v6 + 52) = v33;
            *(_DWORD *)(v6 + 56) = v34;
            *(_DWORD *)(v6 + 60) = v35;
            *(_DWORD *)(v6 + 64) = v36;
            v6 += 68;
          }
          while ( v6 != v8 );
        }
      }
      else
      {
        v39 = 0;
        v40 = v8 - 68 * a3;
        do
        {
          v41 = v40 + v39;
          v42 = *(_OWORD *)(v40 + v39);
          v43 = v8 + v39;
          v39 += 68;
          *(_OWORD *)v43 = v42;
          *(_OWORD *)(v43 + 16) = *(_OWORD *)(v41 + 16);
          *(_BYTE *)(v43 + 32) = *(_BYTE *)(v41 + 32);
          *(_BYTE *)(v43 + 33) = *(_BYTE *)(v41 + 33);
          *(_BYTE *)(v43 + 34) = *(_BYTE *)(v41 + 34);
          *(_BYTE *)(v43 + 35) = *(_BYTE *)(v41 + 35);
          *(_OWORD *)(v43 + 36) = *(_OWORD *)(v41 + 36);
          *(_OWORD *)(v43 + 52) = *(_OWORD *)(v41 + 52);
        }
        while ( 68 * a3 != v39 );
        v44 = v40 - v6;
        a1[1] = v8 + 68 * a3;
        if ( v44 >= 1 )
        {
          v45 = v8 - 32;
          v46 = v44 / 0x44uLL + 1;
          do
          {
            --v46;
            *(_OWORD *)(v45 - 36) = *(_OWORD *)(v45 - 68 * a3 - 36);
            *(_OWORD *)(v45 - 20) = *(_OWORD *)(v45 - 68 * a3 - 20);
            *(_DWORD *)(v45 - 4) = *(_DWORD *)(v45 - 68 * a3 - 4);
            *(_OWORD *)v45 = *(_OWORD *)(v45 - 68 * a3);
            *(_DWORD *)(v45 + 16) = *(_DWORD *)(v45 - 68 * a3 + 16);
            *(_DWORD *)(v45 + 20) = *(_DWORD *)(v45 - 68 * a3 + 20);
            *(_DWORD *)(v45 + 24) = *(_DWORD *)(v45 - 68 * a3 + 24);
            *(_DWORD *)(v45 + 28) = *(_DWORD *)(v45 - 68 * a3 + 28);
            v45 -= 68;
          }
          while ( v46 > 1 );
        }
        v47 = v6 + 68 * a3;
        v48 = v25 | (unsigned __int16)(v26 << 8) | (v27 << 16) & 0xFFFFFF | (v28 << 24);
        do
        {
          *(_DWORD *)v6 = v17;
          *(_DWORD *)(v6 + 4) = v18;
          *(_DWORD *)(v6 + 8) = v19;
          *(_DWORD *)(v6 + 12) = v20;
          *(_DWORD *)(v6 + 16) = v21;
          *(_DWORD *)(v6 + 20) = v22;
          *(_DWORD *)(v6 + 24) = v23;
          *(_DWORD *)(v6 + 28) = v24;
          *(_DWORD *)(v6 + 32) = v48;
          *(_DWORD *)(v6 + 36) = v29;
          *(_DWORD *)(v6 + 40) = v30;
          *(_DWORD *)(v6 + 44) = v31;
          *(_DWORD *)(v6 + 48) = v32;
          *(_DWORD *)(v6 + 52) = v33;
          *(_DWORD *)(v6 + 56) = v34;
          *(_DWORD *)(v6 + 60) = v35;
          *(_DWORD *)(v6 + 64) = v36;
          v6 += 68;
        }
        while ( v6 != v47 );
      }
    }
    else
    {
      v9 = *a1;
      v10 = 0xF0F0F0F0F0F0F0F1LL * ((v8 - *a1) >> 2);
      if ( 0x3C3C3C3C3C3C3C3LL - v10 < a3 )
        sub_56554C("vector::_M_fill_insert");
      if ( v10 >= a3 )
        v11 = 0xF0F0F0F0F0F0F0F1LL * ((v8 - *a1) >> 2);
      else
        v11 = a3;
      v12 = __CFADD__(v11, v10);
      v13 = v11 - 0xF0F0F0F0F0F0F0FLL * ((v8 - *a1) >> 2);
      v14 = v12;
      if ( v14 | (v13 > 0x3C3C3C3C3C3C3C3LL) )
        v15 = 0x3C3C3C3C3C3C3C3LL;
      else
        v15 = v13;
      if ( v15 )
      {
        if ( v15 > 0x3C3C3C3C3C3C3C3LL )
          sub_565294(a1, a2, a3);
        v16 = operator new(68 * v15);
      }
      else
      {
        v16 = 0;
      }
      v55 = v16 + 4 * ((v6 - v9) >> 2);
      v56 = a3;
      do
      {
        --v56;
        *(_OWORD *)v55 = *(_OWORD *)a4;
        *(_OWORD *)(v55 + 16) = *((_OWORD *)a4 + 1);
        *(_BYTE *)(v55 + 32) = *((_BYTE *)a4 + 32);
        *(_BYTE *)(v55 + 33) = *((_BYTE *)a4 + 33);
        *(_BYTE *)(v55 + 34) = *((_BYTE *)a4 + 34);
        *(_BYTE *)(v55 + 35) = *((_BYTE *)a4 + 35);
        *(_OWORD *)(v55 + 36) = *(_OWORD *)(a4 + 9);
        *(_OWORD *)(v55 + 52) = *(_OWORD *)(a4 + 13);
        v55 += 68;
      }
      while ( v56 );
      v57 = (void *)*a1;
      v58 = v16;
      if ( *a1 != v6 )
      {
        v58 = v16;
        v59 = *a1;
        do
        {
          *(_OWORD *)v58 = *(_OWORD *)v59;
          *(_OWORD *)(v58 + 16) = *(_OWORD *)(v59 + 16);
          *(_BYTE *)(v58 + 32) = *(_BYTE *)(v59 + 32);
          *(_BYTE *)(v58 + 33) = *(_BYTE *)(v59 + 33);
          *(_BYTE *)(v58 + 34) = *(_BYTE *)(v59 + 34);
          *(_BYTE *)(v58 + 35) = *(_BYTE *)(v59 + 35);
          *(_OWORD *)(v58 + 36) = *(_OWORD *)(v59 + 36);
          v60 = *(_OWORD *)(v59 + 52);
          v59 += 68;
          *(_OWORD *)(v58 + 52) = v60;
          v58 += 68;
        }
        while ( v59 != v6 );
      }
      v61 = a1[1];
      for ( i = v58 + 68 * a3; v6 != v61; i += 68LL )
      {
        *(_OWORD *)i = *(_OWORD *)v6;
        *(_OWORD *)(i + 16) = *(_OWORD *)(v6 + 16);
        *(_BYTE *)(i + 32) = *(_BYTE *)(v6 + 32);
        *(_BYTE *)(i + 33) = *(_BYTE *)(v6 + 33);
        *(_BYTE *)(i + 34) = *(_BYTE *)(v6 + 34);
        *(_BYTE *)(i + 35) = *(_BYTE *)(v6 + 35);
        *(_OWORD *)(i + 36) = *(_OWORD *)(v6 + 36);
        v63 = *(_OWORD *)(v6 + 52);
        v6 += 68;
        *(_OWORD *)(i + 52) = v63;
      }
      if ( v57 )
        operator delete(v57);
      *a1 = v16;
      a1[1] = i;
      a1[2] = v16 + 68 * v15;
    }
  }
}

