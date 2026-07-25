/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BA45C
 * Mangled: _ZN5Caver19GroundMeshGenerator22InsertRoundHatVerticesERKNS_7Vector2EffRKNS_7Vector3ES6_f
 * Demangled: Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callers: 1
 *   0x00000000001FDEB0  Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B80  Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&)
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FF490  Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&)
 *
 * Referenced strings: 55
 *   insn=0x00000000002BA480 string=0x00000000002BA484 "U"
 *   insn=0x00000000002BA48C string=0x00000000002BA490 "h"
 *   insn=0x00000000002BA498 string=0x00000000002BA49C "&"
 *   insn=0x00000000002BA4A0 string=0x00000000002BA4A4 "H"
 *   insn=0x00000000002BA4A8 string=0x00000000002BA4AC "gBO-q"
 *   insn=0x00000000002BA4AC string=0x00000000002BA4B0 "q"
 *   insn=0x00000000002BA4D0 string=0x00000000002BA4D4 "*!"
 *   insn=0x00000000002BA4E4 string=0x00000000002BA4E8 "l)1"
 *   insn=0x00000000002BA4E8 string=0x00000000002BA4EC "m)%"
 *   insn=0x00000000002BA4EC string=0x00000000002BA4F0 ".)!"
 *   insn=0x00000000002BA4F0 string=0x00000000002BA4F4 "/9'"
 *   insn=0x00000000002BA524 string=0x00000000002BA528 "$"
 *   insn=0x00000000002BA538 string=0x00000000002BA53C "A"
 *   insn=0x00000000002BA53C string=0x00000000002BA540 "H@"
 *   insn=0x00000000002BA540 string=0x00000000002BA544 "H"
 *   insn=0x00000000002BA554 string=0x00000000002BA558 "i"
 *   insn=0x00000000002BA558 string=0x00000000002BA55C "j@"
 *   insn=0x00000000002BA55C string=0x00000000002BA560 "!"
 *   insn=0x00000000002BA560 string=0x00000000002BA564 ""
 *   insn=0x00000000002BA574 string=0x00000000002BA578 "`"
 *   insn=0x00000000002BA57C string=0x00000000002BA580 ""
 *   insn=0x00000000002BA57C string=0x00000000002BA6B4 "s"
 *   insn=0x00000000002BA5A0 string=0x00000000002BA5A4 "\n"
 *   insn=0x00000000002BA5B0 string=0x00000000002BA5B4 "`"
 *   insn=0x00000000002BA5E0 string=0x00000000002BA5E4 " !"
 *   insn=0x00000000002BA5E8 string=0x00000000002BA5EC "A""
 *   insn=0x00000000002BA5EC string=0x00000000002BA5F0 "`( "
 *   insn=0x00000000002BA5F0 string=0x00000000002BA5F4 "t"
 *   insn=0x00000000002BA5F4 string=0x00000000002BA5F8 "\n(!"
 *   insn=0x00000000002BA5F8 string=0x00000000002BA5FC "I"
 *   insn=0x00000000002BA5FC string=0x00000000002BA600 " !)"
 *   insn=0x00000000002BA600 string=0x00000000002BA604 " "
 *   insn=0x00000000002BA608 string=0x00000000002BA60C "g"
 *   insn=0x00000000002BA60C string=0x00000000002BA610 "@"
 *   insn=0x00000000002BA60C string=0x00000000002BA618 "`) "
 *   insn=0x00000000002BA614 string=0x00000000001FD530 "0'"
 *   insn=0x00000000002BA634 string=0x00000000002BA638 " !)"
 *   insn=0x00000000002BA640 string=0x00000000002BA644 "t"
 *   insn=0x00000000002BA648 string=0x00000000002BA64C "@"
 *   insn=0x00000000002BA650 string=0x00000000002BA654 "\t"
 *   insn=0x00000000002BA664 string=0x00000000002BA668 "@( "
 *   insn=0x00000000002BA668 string=0x00000000002BA66C "!!"
 *   insn=0x00000000002BA670 string=0x00000000002BA674 " "
 *   insn=0x00000000002BA678 string=0x00000000002BA67C "i))"
 *   insn=0x00000000002BA67C string=0x00000000002BA680 "g"
 *   insn=0x00000000002BA680 string=0x00000000002BA684 " "
 *   insn=0x00000000002BA680 string=0x00000000002BA68C " ) "
 *   insn=0x00000000002BA6A0 string=0x00000000002BA6A4 "{"
 *   insn=0x00000000002BA6BC string=0x00000000002BA6C0 "0"
 *   insn=0x00000000002BA6C0 string=0x00000000001F6B80 "0'"
 *   insn=0x00000000002BA6C8 string=0x00000000002BA6CC "-"
 *   insn=0x00000000002BA6D4 string=0x00000000002BA6D8 "*"
 *   insn=0x00000000002BA6E0 string=0x00000000002BA6E4 "'"
 *   insn=0x00000000002BA6F0 string=0x00000000002BA6F4 "a"
 *   insn=0x00000000002BA720 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshGenerator::InsertRoundHatVertices(
        Caver::GroundMeshGenerator *this,
        const Caver::Vector2 *a2,
        float a3,
        float a4,
        const Caver::Vector3 *a5,
        const Caver::Vector3 *a6,
        float a7)
{
  float32x2_t v8; // d6
  float v9; // s7
  float v10; // s16
  float v11; // s17
  unsigned __int64 v12; // d4
  float v13; // s11
  float v14; // s9
  float v15; // s0
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  int v20; // w8
  __int64 v22; // x9
  int v23; // w10
  Caver::TextureMapping *v24; // x0
  Caver::TextureMapping *v25; // x0
  Caver::TextureMapping *v26; // x20
  float v27; // s9
  Caver::TextureMapping *v28; // x20
  float v30; // [xsp+0h] [xbp-1D0h]
  float v31; // [xsp+20h] [xbp-1B0h] BYREF
  float v32; // [xsp+24h] [xbp-1ACh]
  int v33; // [xsp+28h] [xbp-1A8h]
  __int64 v34; // [xsp+30h] [xbp-1A0h] BYREF
  int v35; // [xsp+38h] [xbp-198h]
  float v36; // [xsp+3Ch] [xbp-194h]
  float v37; // [xsp+40h] [xbp-190h]
  int v38; // [xsp+44h] [xbp-18Ch]
  unsigned __int64 v39; // [xsp+48h] [xbp-188h]
  _OWORD v40[2]; // [xsp+50h] [xbp-180h] BYREF
  __int64 v41; // [xsp+70h] [xbp-160h]
  int v42; // [xsp+78h] [xbp-158h]
  int v43; // [xsp+80h] [xbp-150h]
  float v44; // [xsp+84h] [xbp-14Ch]
  float v45; // [xsp+88h] [xbp-148h]
  int v46; // [xsp+8Ch] [xbp-144h]
  __int64 v47; // [xsp+90h] [xbp-140h]
  int v48; // [xsp+98h] [xbp-138h]
  int v49; // [xsp+9Ch] [xbp-134h]
  __int128 v50; // [xsp+A0h] [xbp-130h]
  __int128 v51; // [xsp+B0h] [xbp-120h]
  int v52; // [xsp+C0h] [xbp-110h]
  unsigned __int64 v53; // [xsp+C8h] [xbp-108h]
  float v54; // [xsp+D0h] [xbp-100h]
  int v55; // [xsp+D4h] [xbp-FCh]
  unsigned __int64 v56; // [xsp+D8h] [xbp-F8h]
  int v57; // [xsp+E0h] [xbp-F0h]
  int v58; // [xsp+E4h] [xbp-ECh]
  _DWORD v59[9]; // [xsp+E8h] [xbp-E8h] BYREF
  unsigned __int64 v60; // [xsp+110h] [xbp-C0h]
  float v61; // [xsp+118h] [xbp-B8h]
  int v62; // [xsp+11Ch] [xbp-B4h]
  float32x2_t v63; // [xsp+120h] [xbp-B0h]
  int v64; // [xsp+128h] [xbp-A8h]
  int v65; // [xsp+12Ch] [xbp-A4h]
  _OWORD v66[2]; // [xsp+130h] [xbp-A0h] BYREF
  int v67; // [xsp+150h] [xbp-80h]

  _ReadStatusReg(TPIDR_EL0);
  v8.n64_u64[0] = *(unsigned __int64 *)a2;
  v9 = *((float *)this + 30);
  v10 = *((float *)this + 31);
  v11 = *((float *)this + 32);
  memset(v66, 0, sizeof(v66));
  memset(v59, 0, sizeof(v59));
  v50 = 0u;
  v51 = 0u;
  memset(v40, 0, sizeof(v40));
  v12 = vadd_f32(v8, 0).n64_u64[0];
  v13 = v10 + a4;
  v14 = *((float *)&v12 + 1);
  v15 = a3 - v10;
  v16 = (float)(v10 + a4) + v11;
  v17 = (float)(v10 + a4) + 0.1;
  v18 = *((float *)&v12 + 1) + (float)(v9 * -0.4);
  v19 = *((float *)&v12 + 1) - v9;
  v67 = 0;
  v52 = 0;
  v42 = 0;
  v41 = 0;
  v60 = v12;
  v61 = v15;
  v62 = 0;
  v53 = v12;
  v54 = v10 + a4;
  v55 = 0;
  v43 = v12;
  v35 = v12;
  v44 = v18;
  v45 = v16;
  v46 = 0;
  v36 = *((float *)&v12 + 1) - v9;
  v37 = v17;
  v38 = 0;
  v20 = *((_DWORD *)a5 + 2);
  v63.n64_u64[0] = *(unsigned __int64 *)a5;
  v64 = v20;
  v65 = 0;
  v56 = v63.n64_u64[0];
  v57 = v20;
  v58 = 0;
  v22 = *(_QWORD *)a6;
  v23 = *((_DWORD *)a6 + 2);
  v39 = vneg_f32(v63).n64_u64[0];
  *(_QWORD *)&v40[0] = v20 ^ 0x80000000;
  v47 = v22;
  v48 = v23;
  v49 = 0;
  v24 = (Caver::TextureMapping *)*((_QWORD *)this + 3);
  if ( v24 && *(_QWORD *)v24 )
  {
    v31 = a7;
    v32 = v15;
    v33 = 0;
    v30 = *(float *)&v12;
    Caver::TextureMapping::TexCoordForPosition(&v34, v24, (const Caver::Vector3 *)&v31);
    *(_QWORD *)((char *)v66 + 12) = 0;
    *(_QWORD *)((char *)v66 + 4) = v34;
    v25 = (Caver::TextureMapping *)*((_QWORD *)this + 3);
    v31 = a7;
    v32 = v13;
    v33 = 0;
    Caver::TextureMapping::TexCoordForPosition(&v34, v25, (const Caver::Vector3 *)&v31);
    *(_QWORD *)&v59[3] = 0;
    *(_QWORD *)&v59[1] = v34;
    v26 = (Caver::TextureMapping *)*((_QWORD *)this + 3);
    v27 = sqrtf(
            (float)((float)((float)(v30 - v30) * (float)(v30 - v30)) + (float)((float)(v18 - v14) * (float)(v18 - v14)))
          + (float)((float)(v16 - v13) * (float)(v16 - v13)));
    v31 = a7;
    v32 = v13 + v27;
    v33 = 0;
    Caver::TextureMapping::TexCoordForPosition(&v34, v26, (const Caver::Vector3 *)&v31);
    *(_QWORD *)((char *)&v50 + 4) = v34;
    HIDWORD(v50) = 0;
    LODWORD(v51) = 0;
    v28 = (Caver::TextureMapping *)*((_QWORD *)this + 3);
    v31 = a7;
    v32 = (float)(v13 + v27)
        + sqrtf(
            (float)((float)((float)(v30 - v30) * (float)(v30 - v30)) + (float)((float)(v19 - v18) * (float)(v19 - v18)))
          + (float)((float)(v17 - v16) * (float)(v17 - v16)));
    v33 = 0;
    Caver::TextureMapping::TexCoordForPosition(&v34, v28, (const Caver::Vector3 *)&v31);
    *(_QWORD *)((char *)&v40[1] + 4) = 0;
    *(_QWORD *)((char *)v40 + 12) = v34;
  }
  Caver::MeshBuilder::AddVertex();
  Caver::MeshBuilder::AddVertex();
  Caver::MeshBuilder::AddVertex();
  return Caver::MeshBuilder::AddVertex();
}

