/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BB010
 * Mangled: _ZN5Caver19GroundMeshGenerator31GenerateSurfaceMeshWithRoundHatEffff
 * Demangled: Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *
 * Callers: 1
 *   0x00000000001F8340  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *
 * Callees: 10
 *   0x00000000001F44E0  Caver::MeshBuilder::GenerateMesh(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8200  Caver::MeshBuilder::AddFace(int,int,int)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F9E50  Caver::Polygon::VertexAtIndexIsConvexCCW(int)
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FDEB0  Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000001FF330  Caver::GroundMeshGenerator::InsertCapForRoundHat(bool,Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000202FF0  Caver::GroundMeshGenerator::InitializeMeshBuilder(bool)
 *
 * Referenced strings: 100
 *   insn=0x00000000002BB03C string=0x00000000002BB040 "S"
 *   insn=0x00000000002BB044 string=0x00000000002BB048 "h"
 *   insn=0x00000000002BB050 string=0x00000000002BB054 ""
 *   insn=0x00000000002BB068 string=0x00000000002BB06C "*"
 *   insn=0x00000000002BB06C string=0x00000000002BB070 "_"
 *   insn=0x00000000002BB070 string=0x00000000002BB074 "$"
 *   insn=0x00000000002BB090 string=0x00000000002BB094 "\n"
 *   insn=0x00000000002BB098 string=0x00000000002BB09C "m"
 *   insn=0x00000000002BB09C string=0x00000000002BB0A8 "+"
 *   insn=0x00000000002BB0A8 string=0x00000000002BB0AC "L"
 *   insn=0x00000000002BB0C0 string=0x00000000002BB0C4 "k"
 *   insn=0x00000000002BB0C4 string=0x00000000002BB0C8 "*"
 *   insn=0x00000000002BB0C4 string=0x00000000002BB0D0 ")"
 *   insn=0x00000000002BB0C8 string=0x00000000002BB0CC "S"
 *   insn=0x00000000002BB0D0 string=0x00000000002BB0D4 "%"
 *   insn=0x00000000002BB0D4 string=0x00000000002BB0D8 "$"
 *   insn=0x00000000002BB0D8 string=0x00000000002BB0DC ")"
 *   insn=0x00000000002BB0E4 string=0x00000000002BB0E8 "!\t@-"
 *   insn=0x00000000002BB0F0 string=0x00000000002BB0F4 "`9,"
 *   insn=0x00000000002BB0F4 string=0x00000000002BB0F8 "#8$"
 *   insn=0x00000000002BB0FC string=0x00000000002BB100 "A8+"
 *   insn=0x00000000002BB100 string=0x00000000002BB104 "o@!"
 *   insn=0x00000000002BB114 string=0x00000000002BB118 "h"
 *   insn=0x00000000002BB118 string=0x00000000002BB164 "Z"
 *   insn=0x00000000002BB130 string=0x00000000002BB134 "E"
 *   insn=0x00000000002BB148 string=0x00000000002BB14C "y"
 *   insn=0x00000000002BB18C string=0x00000000002BB190 "h"
 *   insn=0x00000000002BB19C string=0x00000000002BB1A0 "e"
 *   insn=0x00000000002BB1C0 string=0x00000000002BB1C4 "b(""
 *   insn=0x00000000002BB1D0 string=0x00000000002BB1D4 "s~@"
 *   insn=0x00000000002BB1DC string=0x00000000002BB1E0 "T"
 *   insn=0x00000000002BB1E4 string=0x00000000002BB1E8 "R"
 *   insn=0x00000000002BB1EC string=0x00000000002BB1F0 "P"
 *   insn=0x00000000002BB214 string=0x00000000002BB218 "!8""
 *   insn=0x00000000002BB21C string=0x00000000002BB220 ""@!"
 *   insn=0x00000000002BB240 string=0x00000000002BB244 ";"
 *   insn=0x00000000002BB258 string=0x00000000002BB25C "5"
 *   insn=0x00000000002BB260 string=0x00000000002BB264 "3"
 *   insn=0x00000000002BB274 string=0x00000000001F9E50 "0'"
 *   insn=0x00000000002BB280 string=0x00000000002BB284 " "
 *   insn=0x00000000002BB28C string=0x00000000001F8E10 "0'"
 *   insn=0x00000000002BB29C string=0x00000000002BB2A0 ","
 *   insn=0x00000000002BB2BC string=0x00000000002BB2C0 "!is"
 *   insn=0x00000000002BB2CC string=0x00000000002BB2D0 """
 *   insn=0x00000000002BB2E8 string=0x00000000002BB2EC "!is"
 *   insn=0x00000000002BB2F0 string=0x00000000002BB2F4 """
 *   insn=0x00000000002BB2F8 string=0x00000000001FDEB0 "0'"
 *   insn=0x00000000002BB300 string=0x00000000002BB304 ""
 *   insn=0x00000000002BB304 string=0x00000000002BB308 "H"
 *   insn=0x00000000002BB30C string=0x00000000002BB310 ""
 *   insn=0x00000000002BB310 string=0x00000000002BB314 "\t"
 *   insn=0x00000000002BB314 string=0x00000000002BB318 ""
 *   insn=0x00000000002BB318 string=0x00000000002BB31C " "
 *   insn=0x00000000002BB324 string=0x00000000002BB328 "!8#"
 *   insn=0x00000000002BB32C string=0x00000000002BB330 "!!"
 *   insn=0x00000000002BB334 string=0x00000000002BB338 " "
 *   insn=0x00000000002BB33C string=0x00000000002BB340 "g"
 *   insn=0x00000000002BB340 string=0x00000000002BB344 " "
 *   insn=0x00000000002BB340 string=0x00000000002BB34C ")) "
 *   insn=0x00000000002BB344 string=0x00000000002BB348 "z"
 *   insn=0x00000000002BB348 string=0x00000000001FD530 "0'"
 *   insn=0x00000000002BB388 string=0x00000000002BB38C " 8 "
 *   insn=0x00000000002BB38C string=0x00000000002BB390 "a9,"
 *   insn=0x00000000002BB3B0 string=0x00000000002BB3B4 "*"
 *   insn=0x00000000002BB3C0 string=0x00000000002BB3C4 "!ij"
 *   insn=0x00000000002BB3CC string=0x00000000002BB3D0 """
 *   insn=0x00000000002BB3E0 string=0x00000000002BB3E4 "*"
 *   insn=0x00000000002BB3F0 string=0x00000000002BB3F4 "!ij"
 *   insn=0x00000000002BB3FC string=0x00000000002BB400 """
 *   insn=0x00000000002BB410 string=0x00000000002BB414 "v""
 *   insn=0x00000000002BB414 string=0x00000000002BB418 "w"
 *   insn=0x00000000002BB418 string=0x00000000002BB41C "b"
 *   insn=0x00000000002BB424 string=0x00000000002BB428 "v"
 *   insn=0x00000000002BB428 string=0x00000000002BB42C "x"
 *   insn=0x00000000002BB428 string=0x00000000001F8200 "0'"
 *   insn=0x00000000002BB43C string=0x00000000002BB440 "p"
 *   insn=0x00000000002BB440 string=0x00000000002BB444 "v\n"
 *   insn=0x00000000002BB454 string=0x00000000002BB458 "j"
 *   insn=0x00000000002BB458 string=0x00000000002BB45C "w"
 *   insn=0x00000000002BB46C string=0x00000000002BB470 "d"
 *   insn=0x00000000002BB470 string=0x00000000002BB474 "x"
 *   insn=0x00000000002BB484 string=0x00000000002BB488 "^"
 *   insn=0x00000000002BB488 string=0x00000000002BB48C "a"
 *   insn=0x00000000002BB498 string=0x00000000002BB49C "Y"
 *   insn=0x00000000002BB4A4 string=0x00000000002BB4A8 "*"
 *   insn=0x00000000002BB4B4 string=0x00000000002BB4B8 "!ij"
 *   insn=0x00000000002BB4C4 string=0x00000000002BB4C8 """
 *   insn=0x00000000002BB4D4 string=0x00000000002BB4D8 "*"
 *   insn=0x00000000002BB4D8 string=0x00000000002BB4DC "k"
 *   insn=0x00000000002BB4DC string=0x00000000002BB4E0 "_"
 *   insn=0x00000000002BB4E0 string=0x00000000002BB4E4 "v"
 *   insn=0x00000000002BB4FC string=0x00000000002BB500 ""
 *   insn=0x00000000002BB4FC string=0x00000000001F44E0 "P'"
 *   insn=0x00000000002BB504 string=0x00000000002BB508 ""
 *   insn=0x00000000002BB510 string=0x00000000002BB514 "\t"
 *   insn=0x00000000002BB510 string=0x00000000002BB520 "h"
 *   insn=0x00000000002BB514 string=0x00000000002BB518 ")"
 *   insn=0x00000000002BB518 string=0x00000000002BB51C "\t"
 *   insn=0x00000000002BB52C string=0x00000000002BB560 "\"
 *   insn=0x00000000002BB560 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat@<X0>(
        Caver::GroundMeshGenerator *this@<X0>,
        float a2@<S0>,
        float a3@<S1>,
        float a4@<S2>,
        float a5@<S3>,
        _QWORD *a6@<X8>)
{
  __int64 v9; // x9
  int v10; // w10
  int v11; // w26
  char v12; // w28
  int v13; // w22
  Caver::MeshBuilder *v14; // x21
  float v15; // s9
  char v16; // w8
  int v22; // w23
  int v23; // w19
  __int64 v24; // x9
  unsigned __int64 v25; // d5
  unsigned __int64 v26; // d4
  float *v27; // x9
  float v28; // s12
  float v29; // s14
  float v30; // s11
  float v31; // s0
  float v32; // s13
  float v33; // s1
  float v34; // s15
  float v35; // s2
  float v36; // s3
  float v37; // s4
  float v38; // s5
  __int64 v39; // x8
  float v40; // s0
  float v41; // s1
  float v42; // s2
  float v43; // s0
  float v44; // s1
  unsigned __int64 v45; // d1
  _QWORD *v46; // x8
  __int64 v47; // x8
  float *v48; // x9
  float *v49; // x8
  int v50; // w19
  _QWORD *result; // x0
  __int64 v52; // x8
  _QWORD *v53; // [xsp+10h] [xbp-1A0h]
  float32x2_t v54; // [xsp+20h] [xbp-190h]
  float32x2_t v55; // [xsp+30h] [xbp-180h]
  float32x2_t v56; // [xsp+48h] [xbp-168h] BYREF
  __int64 v57; // [xsp+50h] [xbp-160h] BYREF
  float v58; // [xsp+58h] [xbp-158h]
  float32x2_t v59; // [xsp+60h] [xbp-150h] BYREF
  __int64 v60; // [xsp+68h] [xbp-148h] BYREF
  float v61; // [xsp+70h] [xbp-140h]
  __int64 v62; // [xsp+78h] [xbp-138h] BYREF
  float v63; // [xsp+80h] [xbp-130h]
  float v64[4]; // [xsp+88h] [xbp-128h] BYREF
  float v65[4]; // [xsp+98h] [xbp-118h] BYREF
  float v66[4]; // [xsp+A8h] [xbp-108h] BYREF
  float v67; // [xsp+B8h] [xbp-F8h] BYREF
  float v68; // [xsp+BCh] [xbp-F4h]
  int v69; // [xsp+C0h] [xbp-F0h]
  __int64 v70; // [xsp+C8h] [xbp-E8h] BYREF
  float v71; // [xsp+D0h] [xbp-E0h]
  float v72; // [xsp+D8h] [xbp-D8h] BYREF
  float v73; // [xsp+DCh] [xbp-D4h]
  int v74; // [xsp+E0h] [xbp-D0h]
  __int64 v75; // [xsp+E8h] [xbp-C8h] BYREF
  float v76; // [xsp+F0h] [xbp-C0h]
  float v77; // [xsp+F8h] [xbp-B8h] BYREF
  float v78; // [xsp+FCh] [xbp-B4h]
  float v79; // [xsp+100h] [xbp-B0h]
  unsigned __int64 v80; // [xsp+108h] [xbp-A8h] BYREF
  _QWORD v81[2]; // [xsp+110h] [xbp-A0h] BYREF

  v81[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((float *)this + 30) = a3;
  *((float *)this + 31) = a4;
  *((float *)this + 32) = a5;
  Caver::GroundMeshGenerator::InitializeMeshBuilder(this);
  v9 = *(_QWORD *)this;
  v10 = **(_DWORD **)this;
  if ( v10 > 0 )
  {
    v53 = a6;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = (Caver::GroundMeshGenerator *)((char *)this + 32);
    v15 = 0.0;
    v16 = 1;
    __asm { FMOV            V10.2S, #3.0 }
    while ( 1 )
    {
      if ( v13 <= 0 )
      {
        if ( *(_BYTE *)(v9 + 33) )
          v22 = v10 - 1;
        else
          v22 = -1;
      }
      else
      {
        v22 = v13 - 1;
      }
      v23 = v13 + 1;
      if ( v13 + 1 >= v10 )
        v23 = *(unsigned __int8 *)(v9 + 33) - 1;
      v24 = *(_QWORD *)(v9 + 8);
      v25 = *(_QWORD *)(v24 + 8LL * v22);
      v26 = *(_QWORD *)(v24 + 8LL * v13);
      v27 = (float *)(v24 + 8LL * v23);
      v28 = *((float *)&v25 + 1);
      v80 = v26;
      v81[0] = v25;
      v29 = *(float *)&v26 - *(float *)&v25;
      v30 = *((float *)&v26 + 1);
      v31 = *((float *)&v26 + 1) - *((float *)&v25 + 1);
      v32 = -(float)(*(float *)&v26 - *(float *)&v25);
      v33 = v27[1] - *((float *)&v26 + 1);
      v34 = -(float)(*v27 - *(float *)&v26);
      v77 = *((float *)&v26 + 1) - *((float *)&v25 + 1);
      v78 = v32;
      v79 = 0.0;
      *(float *)&v75 = v33;
      *((float *)&v75 + 1) = v34;
      v76 = 0.0;
      if ( (v16 & 1) != 0 )
      {
        v72 = *((float *)&v26 + 1) - *((float *)&v25 + 1);
        v73 = -(float)(*(float *)&v26 - *(float *)&v25);
        v74 = 0;
        Caver::Vector3::Normalize((Caver::Vector3 *)&v72);
        if ( v73 < a2 )
        {
          v70 = v75;
          v71 = v76;
          Caver::Vector3::Normalize((Caver::Vector3 *)&v70);
          if ( *((float *)&v70 + 1) >= a2 )
            goto LABEL_33;
        }
        v16 = 1;
      }
      else
      {
        ++v11;
        v35 = 0.0;
        v54.n64_u64[0] = v26;
        v55.n64_u64[0] = v25;
        if ( (v12 & 1) != 0 )
        {
          v36 = 0.0;
          v37 = v34;
          v38 = v32;
LABEL_19:
          v66[0] = v31 + v33;
          v66[1] = v38 + v37;
          v66[2] = v36 + v35;
          Caver::Vector3::Normalize((Caver::Vector3 *)v66);
          Caver::Vector3::Normalize((Caver::Vector3 *)&v77);
          Caver::Vector3::Normalize((Caver::Vector3 *)&v75);
          v39 = *((_QWORD *)this + 1);
          v40 = *(float *)(v39 + 4LL * v22);
          v41 = *(float *)(v39 + 4LL * v13);
          v42 = *(float *)(v39 + 4LL * v23);
          v65[1] = 0.0;
          v65[2] = v32;
          v43 = v40 - v41;
          v44 = v41 - v42;
          v65[0] = -v43;
          v64[0] = -v44;
          v64[1] = 0.0;
          v64[2] = v34;
          v60 = COERCE_UNSIGNED_INT((float)-v43 - v44);
          v61 = v34 - v29;
          Caver::Vector3::Normalize((Caver::Vector3 *)&v60);
          v62 = v60;
          v63 = v61;
          Caver::Vector3::Normalize((Caver::Vector3 *)v65);
          Caver::Vector3::Normalize((Caver::Vector3 *)v64);
          if ( (v12 & 1) == 0 )
          {
            if ( (Caver::Polygon::VertexAtIndexIsConvexCCW(*(Caver::Polygon **)this, v22) & 1) != 0 )
            {
              v59.n64_u64[0] = vsub_f32(v55, v54).n64_u64[0];
              Caver::Vector2::Normalize((Caver::Vector2 *)&v59);
              v45 = vadd_f32(vmul_f32(v59, _D10), v55).n64_u64[0];
              v28 = *((float *)&v45 + 1);
              v81[0] = v45;
              v55.n64_u32[0] = v45;
            }
            Caver::GroundMeshGenerator::InsertCapForRoundHat(
              this,
              0,
              (const Caver::Vector2 *)v81,
              *(float *)(*((_QWORD *)this + 2) + 4LL * v22),
              *(float *)(*((_QWORD *)this + 1) + 4LL * v22),
              (const Caver::Vector3 *)&v77,
              (const Caver::Vector3 *)v65,
              v15);
            Caver::GroundMeshGenerator::InsertRoundHatVertices(
              this,
              (const Caver::Vector2 *)v81,
              *(float *)(*((_QWORD *)this + 2) + 4LL * v22),
              *(float *)(*((_QWORD *)this + 1) + 4LL * v22),
              (const Caver::Vector3 *)&v77,
              (const Caver::Vector3 *)v65,
              v15);
          }
          v46 = (_QWORD *)*((_QWORD *)this + 3);
          if ( v46 && *v46 )
          {
            v47 = *(_QWORD *)(*(_QWORD *)this + 8LL);
            v48 = (float *)(v47 + 8LL * v13);
            v49 = (float *)(v47 + 8LL * v22);
            v15 = v15
                + sqrtf(
                    (float)((float)(*v48 - *v49) * (float)(*v48 - *v49))
                  + (float)((float)(v48[1] - v49[1]) * (float)(v48[1] - v49[1])));
          }
          v57 = v75;
          v58 = v76;
          Caver::Vector3::Normalize((Caver::Vector3 *)&v57);
          if ( *((float *)&v57 + 1) >= a2 )
          {
            Caver::GroundMeshGenerator::InsertRoundHatVertices(
              this,
              (const Caver::Vector2 *)&v80,
              *(float *)(*((_QWORD *)this + 2) + 4LL * v13),
              *(float *)(*((_QWORD *)this + 1) + 4LL * v13),
              (const Caver::Vector3 *)v66,
              (const Caver::Vector3 *)&v62,
              v15);
            v12 = 1;
          }
          else
          {
            if ( (Caver::Polygon::VertexAtIndexIsConvexCCW(*(Caver::Polygon **)this, v13) & 1) != 0 )
            {
              v56.n64_f32[0] = v54.n64_f32[0] - v55.n64_f32[0];
              v56.n64_f32[1] = v30 - v28;
              Caver::Vector2::Normalize((Caver::Vector2 *)&v56);
              v80 = vadd_f32(vmul_f32(v56, _D10), v54).n64_u64[0];
            }
            Caver::GroundMeshGenerator::InsertRoundHatVertices(
              this,
              (const Caver::Vector2 *)&v80,
              *(float *)(*((_QWORD *)this + 2) + 4LL * v13),
              *(float *)(*((_QWORD *)this + 1) + 4LL * v13),
              (const Caver::Vector3 *)&v77,
              (const Caver::Vector3 *)v65,
              v15);
            v12 = 0;
          }
          v50 = *((_DWORD *)this + 12);
          Caver::MeshBuilder::AddFace((Caver::GroundMeshGenerator *)((char *)this + 32), v50 - 8, v50 - 4, v50 - 3);
          Caver::MeshBuilder::AddFace((Caver::GroundMeshGenerator *)((char *)this + 32), v50 - 7, v50 - 8, v50 - 3);
          Caver::MeshBuilder::AddFace((Caver::GroundMeshGenerator *)((char *)this + 32), v50 - 7, v50 - 3, v50 - 2);
          Caver::MeshBuilder::AddFace((Caver::GroundMeshGenerator *)((char *)this + 32), v50 - 6, v50 - 7, v50 - 2);
          Caver::MeshBuilder::AddFace((Caver::GroundMeshGenerator *)((char *)this + 32), v50 - 6, v50 - 2, v50 - 1);
          Caver::MeshBuilder::AddFace((Caver::GroundMeshGenerator *)((char *)this + 32), v50 - 5, v50 - 6, v50 - 1);
          if ( (v12 & 1) == 0 )
            Caver::GroundMeshGenerator::InsertCapForRoundHat(
              this,
              1,
              (const Caver::Vector2 *)&v80,
              *(float *)(*((_QWORD *)this + 2) + 4LL * v13),
              *(float *)(*((_QWORD *)this + 1) + 4LL * v13),
              (const Caver::Vector3 *)&v77,
              (const Caver::Vector3 *)v65,
              v15);
LABEL_33:
          v16 = 0;
          goto LABEL_34;
        }
        v67 = *((float *)&v26 + 1) - *((float *)&v25 + 1);
        v68 = -(float)(*(float *)&v26 - *(float *)&v25);
        v69 = 0;
        Caver::Vector3::Normalize((Caver::Vector3 *)&v67);
        v16 = 0;
        if ( v68 >= a2 )
        {
          v31 = v77;
          v38 = v78;
          v37 = *((float *)&v75 + 1);
          v33 = *(float *)&v75;
          v36 = v79;
          v35 = v76;
          goto LABEL_19;
        }
        v12 = 0;
      }
LABEL_34:
      v9 = *(_QWORD *)this;
      v10 = **(_DWORD **)this;
      v13 = (v13 + 1) % v10;
      if ( v11 >= v10 )
      {
        a6 = v53;
        goto LABEL_37;
      }
    }
  }
  v14 = (Caver::GroundMeshGenerator *)((char *)this + 32);
LABEL_37:
  result = (_QWORD *)Caver::MeshBuilder::GenerateMesh(v14);
  *a6 = *result;
  v52 = result[1];
  a6[1] = v52;
  if ( v52 )
    ++*(_QWORD *)(v52 + 8);
  return result;
}

