/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BA724
 * Mangled: _ZN5Caver19GroundMeshGenerator20InsertCapForRoundHatEbRKNS_7Vector2EffRKNS_7Vector3ES6_f
 * Demangled: Caver::GroundMeshGenerator::InsertCapForRoundHat(bool,Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callers: 1
 *   0x00000000001FF330  Caver::GroundMeshGenerator::InsertCapForRoundHat(bool,Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B80  Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&)
 *   0x00000000001F8200  Caver::MeshBuilder::AddFace(int,int,int)
 *   0x00000000001FDEB0  Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000001FF490  Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&)
 *
 * Referenced strings: 65
 *   insn=0x00000000002BA748 string=0x00000000002BA74C "H"
 *   insn=0x00000000002BA750 string=0x00000000002BA754 ""
 *   insn=0x00000000002BA760 string=0x00000000002BA764 "H"
 *   insn=0x00000000002BA774 string=0x00000000001FDEB0 "0'"
 *   insn=0x00000000002BA790 string=0x00000000002BA794 ")!:"
 *   insn=0x00000000002BA794 string=0x00000000002BA798 " "
 *   insn=0x00000000002BA798 string=0x00000000002BA79C "!\t@"
 *   insn=0x00000000002BA7A0 string=0x00000000002BA7A4 "j":"
 *   insn=0x00000000002BA7A4 string=0x00000000002BA7A8 "B"
 *   insn=0x00000000002BA7A8 string=0x00000000002BA7AC "C\t@"
 *   insn=0x00000000002BA7B4 string=0x00000000002BA7B8 "$"
 *   insn=0x00000000002BA7BC string=0x00000000002BA7C0 "!8#"
 *   insn=0x00000000002BA7C8 string=0x00000000002BA7CC "*"
 *   insn=0x00000000002BA7D4 string=0x00000000002BA7D8 "*"
 *   insn=0x00000000002BA7DC string=0x00000000002BA7E0 "*"
 *   insn=0x00000000002BA7E4 string=0x00000000002BA7E8 "*"
 *   insn=0x00000000002BA7EC string=0x00000000002BA7F0 "*"
 *   insn=0x00000000002BA7F4 string=0x00000000002BA7F8 "$A"
 *   insn=0x00000000002BA800 string=0x00000000002BA804 "J"
 *   insn=0x00000000002BA808 string=0x00000000002BA80C "$A"
 *   insn=0x00000000002BA80C string=0x00000000002BA810 "["
 *   insn=0x00000000002BA810 string=0x00000000002BA814 ""
 *   insn=0x00000000002BA828 string=0x00000000002BA82C "!($"
 *   insn=0x00000000002BA838 string=0x00000000001F6B80 "0'"
 *   insn=0x00000000002BA848 string=0x00000000002BA84C ")!:"
 *   insn=0x00000000002BA84C string=0x00000000002BA850 " "
 *   insn=0x00000000002BA850 string=0x00000000002BA854 "!\t@"
 *   insn=0x00000000002BA858 string=0x00000000002BA85C "j":"
 *   insn=0x00000000002BA85C string=0x00000000002BA860 "B"
 *   insn=0x00000000002BA860 string=0x00000000002BA864 "C\t@"
 *   insn=0x00000000002BA86C string=0x00000000002BA870 "$"
 *   insn=0x00000000002BA870 string=0x00000000002BA874 ""
 *   insn=0x00000000002BA878 string=0x00000000002BA87C "!8#"
 *   insn=0x00000000002BA880 string=0x00000000002BA884 "*"
 *   insn=0x00000000002BA894 string=0x00000000002BA898 "*"
 *   insn=0x00000000002BA8A0 string=0x00000000002BA8A4 "*"
 *   insn=0x00000000002BA8A8 string=0x00000000002BA8AC "*"
 *   insn=0x00000000002BA8B0 string=0x00000000002BA8B4 "*"
 *   insn=0x00000000002BA8B8 string=0x00000000002BA8BC "$A"
 *   insn=0x00000000002BA8C0 string=0x00000000002BA8C4 "$A"
 *   insn=0x00000000002BA8EC string=0x00000000002BA8F0 " "
 *   insn=0x00000000002BA8F0 string=0x00000000002BA8F4 ""
 *   insn=0x00000000002BA904 string=0x00000000002BA908 ")"
 *   insn=0x00000000002BA908 string=0x00000000002BA90C ")"
 *   insn=0x00000000002BA910 string=0x00000000002BA914 "\t"
 *   insn=0x00000000002BA914 string=0x00000000002BA918 ")"
 *   insn=0x00000000002BA920 string=0x00000000002BA930 ""
 *   insn=0x00000000002BA924 string=0x00000000002BA928 " @"
 *   insn=0x00000000002BA930 string=0x00000000002BA934 ""
 *   insn=0x00000000002BA940 string=0x00000000002BA944 ""
 *   insn=0x00000000002BA94C string=0x00000000002BA950 " 9 "
 *   insn=0x00000000002BA950 string=0x00000000002BA954 "?"
 *   insn=0x00000000002BA96C string=0x00000000002BA970 ")"
 *   insn=0x00000000002BA980 string=0x00000000002BA984 """
 *   insn=0x00000000002BA998 string=0x00000000002BA99C "H"
 *   insn=0x00000000002BA99C string=0x00000000002BA9A0 ""
 *   insn=0x00000000002BA9A0 string=0x00000000002BA9A4 ""
 *   insn=0x00000000002BA9AC string=0x00000000002BA9B0 "\t"
 *   insn=0x00000000002BA9C4 string=0x00000000002BA9C8 ""
 *   insn=0x00000000002BA9D0 string=0x00000000002BA924 "("
 *   insn=0x00000000002BA9DC string=0x00000000002BA9E0 "("
 *   insn=0x00000000002BA9FC string=0x00000000001F8200 "0'"
 *   insn=0x00000000002BAAA0 string=0x00000000002BAAA4 ""
 *   insn=0x00000000002BAAAC string=0x00000000002BAAB0 "A"
 *   insn=0x00000000002BAAD8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshGenerator::InsertCapForRoundHat(
        Caver::TextureMapping **this,
        char a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Vector3 *a6,
        const Caver::Vector3 *a7,
        float a8)
{
  __int64 v10; // x20
  Caver::TextureMapping *v11; // x8
  __int64 v12; // x9
  float v13; // s1
  __int64 v14; // x10
  float32x2_t v15; // d2
  float v16; // s3
  float32x2_t v17; // d0
  __int64 v18; // x27
  __int64 v19; // x8
  float32x2_t v20; // d2
  float v21; // s4
  Caver::TextureMapping *v22; // x8
  __int64 v23; // x9
  float v24; // s1
  __int64 v25; // x10
  float32x2_t v26; // d2
  float v27; // s3
  __int64 v28; // x8
  float32x2_t v29; // d4
  float v30; // s5
  Caver::TextureMapping *v31; // x0
  Caver::TextureMapping *v32; // x8
  __int64 v33; // x28
  float v34; // s9
  __int64 v35; // x21
  __int64 v36; // x8
  int v37; // w19
  float v38; // w20
  __int64 v39; // d2
  __int64 v40; // x27
  float v41; // s0
  __int64 v42; // x24
  __int64 v43; // x25
  int v44; // w22
  int v45; // w26
  int v46; // w23
  __int64 v47; // x9
  __int64 v48; // x8
  int v49; // w3
  int v50; // w2
  Caver::MeshBuilder *v51; // x0
  int v52; // w1
  int v53; // w3
  int v55; // [xsp+Ch] [xbp-174h]
  Caver::MeshBuilder *v56; // [xsp+10h] [xbp-170h]
  int v57; // [xsp+18h] [xbp-168h]
  int v58; // [xsp+20h] [xbp-160h]
  int v59; // [xsp+24h] [xbp-15Ch]
  int v60[2]; // [xsp+30h] [xbp-150h]
  Caver::GroundMeshGenerator *v61; // [xsp+38h] [xbp-148h]
  __int64 v63; // [xsp+50h] [xbp-130h]
  float v64[4]; // [xsp+70h] [xbp-110h] BYREF
  __int64 v65; // [xsp+80h] [xbp-100h] BYREF
  float32x2_t v66; // [xsp+88h] [xbp-F8h]
  float v67; // [xsp+90h] [xbp-F0h]
  __int128 v68; // [xsp+94h] [xbp-ECh]
  int v69; // [xsp+A4h] [xbp-DCh]
  char v70; // [xsp+A8h] [xbp-D8h]
  char v71; // [xsp+A9h] [xbp-D7h]
  char v72; // [xsp+AAh] [xbp-D6h]
  char v73; // [xsp+ABh] [xbp-D5h]
  __int128 v74; // [xsp+ACh] [xbp-D4h]
  __int128 v75; // [xsp+BCh] [xbp-C4h]
  float32x2_t v76; // [xsp+D0h] [xbp-B0h]
  float v77; // [xsp+D8h] [xbp-A8h]
  __int128 v78; // [xsp+DCh] [xbp-A4h]
  int v79; // [xsp+ECh] [xbp-94h]
  char v80; // [xsp+F0h] [xbp-90h]
  char v81; // [xsp+F1h] [xbp-8Fh]
  char v82; // [xsp+F2h] [xbp-8Eh]
  char v83; // [xsp+F3h] [xbp-8Dh]
  __int128 v84; // [xsp+F4h] [xbp-8Ch]
  __int128 v85; // [xsp+104h] [xbp-7Ch]

  _ReadStatusReg(TPIDR_EL0);
  Caver::GroundMeshGenerator::InsertRoundHatVertices((Caver::GroundMeshGenerator *)this, a3, a4, a5, a6, a7, a8);
  v10 = *((int *)this + 12);
  v11 = this[7];
  v59 = v10 - 1;
  v12 = (__int64)v11 + 68 * (int)v10 - 68;
  v13 = *(float *)(v12 + 8);
  v14 = (__int64)v11 + 68 * (int)v10 - 204;
  v15.n64_u64[0] = *(unsigned __int64 *)v14;
  v16 = *(float *)(v14 + 8);
  v76.n64_u64[0] = *(unsigned __int64 *)v12;
  v77 = v13;
  v17.n64_u64[0] = vsub_f32(v76, v15).n64_u64[0];
  v78 = *(_OWORD *)(v12 + 12);
  v79 = *(_DWORD *)(v12 + 28);
  v80 = *(_BYTE *)(v12 + 32);
  v81 = *(_BYTE *)(v12 + 33);
  v82 = *(_BYTE *)(v12 + 34);
  v83 = *(_BYTE *)(v12 + 35);
  *(_QWORD *)v60 = v10 - 4;
  v84 = *(_OWORD *)(v12 + 36);
  v18 = 68 * (v10 - 4);
  v19 = (__int64)v11 + v18;
  v85 = *(_OWORD *)(v12 + 52);
  v20.n64_u64[0] = *(unsigned __int64 *)v19;
  v21 = *(float *)(v19 + 8);
  LODWORD(v78) = 0;
  v76.n64_u64[0] = vadd_f32(v17, v20).n64_u64[0];
  v77 = (float)(v13 - v16) + v21;
  Caver::MeshBuilder::AddVertex();
  v22 = this[7];
  v55 = v10 - 2;
  v23 = (__int64)v22 + 68 * (int)v10 - 136;
  v24 = *(float *)(v23 + 8);
  v25 = (__int64)v22 + 68 * (int)v10 - 204;
  v26.n64_u64[0] = *(unsigned __int64 *)v25;
  v27 = *(float *)(v25 + 8);
  v66.n64_u64[0] = *(unsigned __int64 *)v23;
  v67 = v24;
  v28 = (__int64)v22 + v18;
  v68 = *(_OWORD *)(v23 + 12);
  v57 = v10;
  v58 = v10 - 3;
  v69 = *(_DWORD *)(v23 + 28);
  v56 = (Caver::MeshBuilder *)(this + 4);
  v70 = *(_BYTE *)(v23 + 32);
  v71 = *(_BYTE *)(v23 + 33);
  v72 = *(_BYTE *)(v23 + 34);
  v73 = *(_BYTE *)(v23 + 35);
  v74 = *(_OWORD *)(v23 + 36);
  v75 = *(_OWORD *)(v23 + 52);
  v29.n64_u64[0] = *(unsigned __int64 *)v28;
  v30 = *(float *)(v28 + 8);
  LODWORD(v68) = 0;
  v66.n64_u64[0] = vadd_f32(vsub_f32(v66, v26), v29).n64_u64[0];
  v67 = v30 - (float)(v24 - v27);
  Caver::MeshBuilder::AddVertex();
  v31 = this[3];
  if ( v31 && *(_QWORD *)v31 )
  {
    v32 = this[7];
    v33 = 0;
    v61 = (Caver::GroundMeshGenerator *)this;
    v34 = *((float *)v32 + 17 * *(_QWORD *)v60 + 1);
    v35 = 68LL * *(_QWORD *)v60;
    while ( 1 )
    {
      v36 = (__int64)v32 + v35 + v33;
      v37 = *(_DWORD *)(v36 + 136);
      v38 = *(float *)(v36 + 140);
      v39 = *(_QWORD *)(v36 + 144);
      v40 = *(_QWORD *)(v36 + 188);
      v63 = v39;
      v41 = v34 - v38;
      v43 = *(_QWORD *)(v36 + 152);
      v42 = *(_QWORD *)(v36 + 160);
      v44 = *(_DWORD *)(v36 + 196);
      v45 = *(_DWORD *)(v36 + 200);
      v46 = *(_DWORD *)(v36 + 168);
      if ( (a2 & 1) == 0 )
        v41 = -v41;
      v64[0] = v41 + a8;
      LODWORD(v64[1]) = v39;
      v64[2] = 0.0;
      Caver::TextureMapping::TexCoordForPosition(&v65, v31, (const Caver::Vector3 *)v64);
      v47 = v65;
      v48 = *((_QWORD *)v61 + 7) + v35 + v33;
      *(_DWORD *)(v48 + 136) = v37;
      *(float *)(v48 + 140) = v38;
      *(_QWORD *)(v48 + 172) = v47;
      *(_QWORD *)(v48 + 152) = v43;
      *(_QWORD *)(v48 + 160) = v42;
      *(_QWORD *)(v48 + 144) = v63;
      *(_DWORD *)(v48 + 168) = v46;
      *(_DWORD *)(v48 + 180) = 0;
      *(_DWORD *)(v48 + 184) = 0;
      *(_QWORD *)(v48 + 188) = v40;
      *(_DWORD *)(v48 + 196) = v44;
      *(_DWORD *)(v48 + 200) = v45;
      if ( v33 == 204 )
        break;
      v32 = (Caver::TextureMapping *)*((_QWORD *)v61 + 7);
      v31 = (Caver::TextureMapping *)*((_QWORD *)v61 + 3);
      v33 += 68;
    }
  }
  v49 = v57 + 1;
  if ( (a2 & 1) != 0 )
  {
    Caver::MeshBuilder::AddFace(v56, v60[0], v49, v57);
    Caver::MeshBuilder::AddFace(v56, v60[0], v57, v59);
    Caver::MeshBuilder::AddFace(v56, v60[0], v59, v58);
    v50 = v55;
    v51 = v56;
    v52 = v59;
    v53 = v58;
  }
  else
  {
    Caver::MeshBuilder::AddFace(v56, v60[0], v57, v49);
    Caver::MeshBuilder::AddFace(v56, v60[0], v59, v57);
    Caver::MeshBuilder::AddFace(v56, v60[0], v58, v59);
    v50 = v55;
    v51 = v56;
    v52 = v58;
    v53 = v59;
  }
  return Caver::MeshBuilder::AddFace(v51, v52, v50, v53);
}

