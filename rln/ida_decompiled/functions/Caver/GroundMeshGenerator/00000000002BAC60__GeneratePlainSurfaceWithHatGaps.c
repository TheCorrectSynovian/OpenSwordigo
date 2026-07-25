/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BAC60
 * Mangled: _ZN5Caver19GroundMeshGenerator31GeneratePlainSurfaceWithHatGapsEf
 * Demangled: Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *
 * Callers: 1
 *   0x00000000001FE290  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *
 * Callees: 8
 *   0x00000000001F44E0  Caver::MeshBuilder::GenerateMesh(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8200  Caver::MeshBuilder::AddFace(int,int,int)
 *   0x00000000001FD530  .sqrtf
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000202930  Caver::GroundMeshGenerator::InsertPlainSurfaceVertices(Caver::Vector2 const&,float,float,Caver::Vector2,float)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x0000000000202FF0  Caver::GroundMeshGenerator::InitializeMeshBuilder(bool)
 *
 * Referenced strings: 82
 *   insn=0x00000000002BAC84 string=0x00000000002BAC88 "X"
 *   insn=0x00000000002BAC8C string=0x00000000002BAC90 ""
 *   insn=0x00000000002BAC94 string=0x00000000002BAC98 ""
 *   insn=0x00000000002BACA8 string=0x00000000002BACAC "*"
 *   insn=0x00000000002BACAC string=0x00000000002BACB0 "_"
 *   insn=0x00000000002BACDC string=0x00000000002BACE0 "m"
 *   insn=0x00000000002BACE0 string=0x00000000002BACEC "+"
 *   insn=0x00000000002BACEC string=0x00000000002BACF0 "L"
 *   insn=0x00000000002BACFC string=0x00000000002BAD00 "_"
 *   insn=0x00000000002BAD04 string=0x00000000002BAD08 "k"
 *   insn=0x00000000002BAD08 string=0x00000000002BAD0C "*"
 *   insn=0x00000000002BAD08 string=0x00000000002BAD14 ")"
 *   insn=0x00000000002BAD0C string=0x00000000002BAD10 "J"
 *   insn=0x00000000002BAD14 string=0x00000000002BAD18 "+"
 *   insn=0x00000000002BAD18 string=0x00000000002BAD1C "l-@)-"
 *   insn=0x00000000002BAD1C string=0x00000000002BAD20 "-"
 *   insn=0x00000000002BAD20 string=0x00000000002BAD24 ")"
 *   insn=0x00000000002BAD30 string=0x00000000002BAD34 "a"
 *   insn=0x00000000002BAD38 string=0x00000000002BAD3C "$"
 *   insn=0x00000000002BAD40 string=0x00000000002BAD44 "@8 "
 *   insn=0x00000000002BAD50 string=0x00000000002BAD54 "a8!"
 *   insn=0x00000000002BAD6C string=0x00000000002BAD70 "h"
 *   insn=0x00000000002BAD70 string=0x00000000002BADBC "9"
 *   insn=0x00000000002BAD7C string=0x00000000002BAD80 "l"
 *   insn=0x00000000002BAD88 string=0x00000000002BAD8C "K"
 *   insn=0x00000000002BADA0 string=0x00000000002BADA4 "c"
 *   insn=0x00000000002BADB4 string=0x00000000002BADB8 "u"
 *   insn=0x00000000002BADC0 string=0x00000000002BADC4 "{"
 *   insn=0x00000000002BADC8 string=0x00000000002BADCC ""
 *   insn=0x00000000002BADCC string=0x00000000002BAE00 "!(""
 *   insn=0x00000000002BADD8 string=0x00000000002BADDC "U"
 *   insn=0x00000000002BADE8 string=0x00000000002BADEC "J"
 *   insn=0x00000000002BAE18 string=0x00000000002BAE1C "E"
 *   insn=0x00000000002BAE20 string=0x00000000002BAE24 "C"
 *   insn=0x00000000002BAE28 string=0x00000000002BAE2C "A"
 *   insn=0x00000000002BAE40 string=0x00000000002BAE44 "\nij"
 *   insn=0x00000000002BAE44 string=0x00000000002BAE48 "+ij"
 *   insn=0x00000000002BAE48 string=0x00000000002BAE4C "a "
 *   insn=0x00000000002BAE58 string=0x00000000002BAE5C "@"
 *   insn=0x00000000002BAE5C string=0x00000000002BAE60 "a"
 *   insn=0x00000000002BAE60 string=0x00000000002BAE64 """
 *   insn=0x00000000002BAE74 string=0x00000000002BAE78 ""
 *   insn=0x00000000002BAE78 string=0x00000000002BAE7C "H"
 *   insn=0x00000000002BAE80 string=0x00000000002BAE84 ""
 *   insn=0x00000000002BAE84 string=0x00000000002BAE88 "\t"
 *   insn=0x00000000002BAE88 string=0x00000000002BAE8C ""
 *   insn=0x00000000002BAE8C string=0x00000000002BAE90 " "
 *   insn=0x00000000002BAE98 string=0x00000000002BAE9C "!8#"
 *   insn=0x00000000002BAEA0 string=0x00000000002BAEA4 "!!"
 *   insn=0x00000000002BAEA8 string=0x00000000002BAEAC " "
 *   insn=0x00000000002BAEB0 string=0x00000000002BAEB4 "g"
 *   insn=0x00000000002BAEB4 string=0x00000000002BAEB8 " "
 *   insn=0x00000000002BAEB4 string=0x00000000002BAEC0 ")) "
 *   insn=0x00000000002BAEBC string=0x00000000001FD530 "0'"
 *   insn=0x00000000002BAEE4 string=0x00000000002BAEE8 "ij"
 *   insn=0x00000000002BAEE8 string=0x00000000002BAEEC "*ij"
 *   insn=0x00000000002BAEFC string=0x00000000002BAF00 "4 "
 *   insn=0x00000000002BAF0C string=0x00000000002BAF10 "`"
 *   insn=0x00000000002BAF10 string=0x00000000002BAF14 "A"
 *   insn=0x00000000002BAF14 string=0x00000000002BAF18 """
 *   insn=0x00000000002BAF2C string=0x00000000002BAF30 "( "
 *   insn=0x00000000002BAF3C string=0x00000000002BAF40 "`"
 *   insn=0x00000000002BAF40 string=0x00000000002BAF44 "A"
 *   insn=0x00000000002BAF44 string=0x00000000002BAF48 """
 *   insn=0x00000000002BAF48 string=0x00000000002BAF4C "y"
 *   insn=0x00000000002BAF70 string=0x00000000001F8200 "0'"
 *   insn=0x00000000002BAF8C string=0x00000000002BAF90 "*"
 *   insn=0x00000000002BAF90 string=0x00000000002BAF94 "K"
 *   insn=0x00000000002BAF94 string=0x00000000002BAF98 "?"
 *   insn=0x00000000002BAF98 string=0x00000000002BAF9C "v"
 *   insn=0x00000000002BAFAC string=0x00000000002BAFB0 "L"
 *   insn=0x00000000002BAFB0 string=0x00000000002BAFB4 ""
 *   insn=0x00000000002BAFB0 string=0x00000000001F44E0 "P'"
 *   insn=0x00000000002BAFB4 string=0x00000000002BAFB8 "h"
 *   insn=0x00000000002BAFB8 string=0x00000000002BAFBC ""
 *   insn=0x00000000002BAFBC string=0x00000000002BAFC0 "h"
 *   insn=0x00000000002BAFC4 string=0x00000000002BAFC8 "\t"
 *   insn=0x00000000002BAFC4 string=0x00000000002BAFD4 ""
 *   insn=0x00000000002BAFC8 string=0x00000000002BAFCC ")"
 *   insn=0x00000000002BAFCC string=0x00000000002BAFD0 "\t"
 *   insn=0x00000000002BAFDC string=0x00000000002BAFE0 "a"
 *   insn=0x00000000002BB00C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps@<X0>(
        Caver::GroundMeshGenerator *this@<X0>,
        float a2@<S0>,
        _QWORD *a3@<X8>)
{
  __int64 v6; // x9
  int v7; // w10
  int v8; // w25
  char v9; // w27
  int v10; // w22
  Caver::MeshBuilder *v11; // x21
  float v12; // s9
  char v13; // w8
  int v14; // w23
  bool v15; // cc
  int v16; // w10
  __int64 v17; // x9
  float *v18; // x11
  float v19; // w11
  float v20; // w12
  float *v21; // x13
  float *v22; // x9
  float v23; // w13
  float v24; // w14
  float v25; // s0
  float v26; // s1
  unsigned int v27; // s2
  unsigned int v28; // s3
  unsigned __int64 v29; // kr00_8
  float v30; // s4
  float v31; // s5
  _QWORD *v32; // x8
  __int64 v33; // x8
  float *v34; // x9
  float *v35; // x8
  int v36; // w28
  _QWORD *result; // x0
  __int64 v38; // x8
  char v39[8]; // [xsp+10h] [xbp-110h] BYREF
  char v40[8]; // [xsp+18h] [xbp-108h] BYREF
  unsigned __int64 v41; // [xsp+20h] [xbp-100h] BYREF
  float v42; // [xsp+28h] [xbp-F8h]
  char v43[8]; // [xsp+30h] [xbp-F0h] BYREF
  float v44[4]; // [xsp+38h] [xbp-E8h] BYREF
  float v45; // [xsp+48h] [xbp-D8h] BYREF
  float v46; // [xsp+4Ch] [xbp-D4h]
  int v47; // [xsp+50h] [xbp-D0h]
  unsigned __int64 v48; // [xsp+58h] [xbp-C8h] BYREF
  float v49; // [xsp+60h] [xbp-C0h]
  float v50; // [xsp+68h] [xbp-B8h] BYREF
  float v51; // [xsp+6Ch] [xbp-B4h]
  int v52; // [xsp+70h] [xbp-B0h]
  unsigned __int64 v53; // [xsp+78h] [xbp-A8h] BYREF
  float v54; // [xsp+80h] [xbp-A0h]
  float v55; // [xsp+88h] [xbp-98h] BYREF
  float v56; // [xsp+8Ch] [xbp-94h]
  float v57; // [xsp+90h] [xbp-90h]
  float v58; // [xsp+98h] [xbp-88h]
  float v59; // [xsp+9Ch] [xbp-84h]
  float v60; // [xsp+A0h] [xbp-80h]
  float v61; // [xsp+A4h] [xbp-7Ch]
  __int64 v62; // [xsp+A8h] [xbp-78h]

  v62 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GroundMeshGenerator::InitializeMeshBuilder(this);
  v6 = *(_QWORD *)this;
  v7 = **(_DWORD **)this;
  if ( v7 > 0 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = (Caver::GroundMeshGenerator *)((char *)this + 32);
    v12 = 0.0;
    v13 = 1;
    while ( 1 )
    {
      if ( v10 <= 0 )
      {
        if ( *(_BYTE *)(v6 + 33) )
          v14 = v7 - 1;
        else
          v14 = -1;
      }
      else
      {
        v14 = v10 - 1;
      }
      v15 = v10 + 1 < v7;
      v16 = v10 + 1;
      if ( !v15 )
        v16 = *(unsigned __int8 *)(v6 + 33) - 1;
      v17 = *(_QWORD *)(v6 + 8);
      v18 = (float *)(v17 + 8LL * v14);
      v20 = *v18;
      v19 = v18[1];
      v21 = (float *)(v17 + 8LL * v10);
      v22 = (float *)(v17 + 8LL * v16);
      v60 = v20;
      v61 = v19;
      v24 = *v21;
      v23 = v21[1];
      v58 = v24;
      v59 = v23;
      v25 = -(float)(v24 - v20);
      v26 = v23 - v19;
      *(float *)&v27 = v22[1] - v23;
      *(float *)&v28 = -(float)(*v22 - v24);
      v55 = v23 - v19;
      v56 = v25;
      v57 = 0.0;
      *(float *)&v53 = *(float *)&v27;
      *((float *)&v53 + 1) = *(float *)&v28;
      v54 = 0.0;
      v29 = __PAIR64__(v28, v27);
      if ( (v13 & 1) != 0 )
      {
        v50 = v23 - v19;
        v51 = -(float)(v24 - v20);
        v52 = 0;
        Caver::Vector3::Normalize((Caver::Vector3 *)&v50);
        if ( v51 >= a2 )
        {
          v48 = v53;
          v49 = v54;
          Caver::Vector3::Normalize((Caver::Vector3 *)&v48);
          if ( *((float *)&v48 + 1) < a2 )
            goto LABEL_28;
        }
        v13 = 1;
      }
      else
      {
        ++v8;
        v30 = 0.0;
        if ( (v9 & 1) != 0 )
        {
          v31 = 0.0;
LABEL_19:
          v44[0] = v26 + *(float *)&v29;
          v44[1] = v25 + *((float *)&v29 + 1);
          v44[2] = v31 + v30;
          Caver::Vector3::Normalize((Caver::Vector3 *)v44);
          Caver::Vector3::Normalize((Caver::Vector3 *)&v55);
          Caver::Vector3::Normalize((Caver::Vector3 *)&v53);
          if ( (v9 & 1) == 0 )
          {
            Caver::Vector2::Vector2((Caver::Vector2 *)v43, (const Caver::Vector3 *)&v55);
            Caver::GroundMeshGenerator::InsertPlainSurfaceVertices();
          }
          v32 = (_QWORD *)*((_QWORD *)this + 3);
          if ( v32 && *v32 )
          {
            v33 = *(_QWORD *)(*(_QWORD *)this + 8LL);
            v34 = (float *)(v33 + 8LL * v10);
            v35 = (float *)(v33 + 8LL * v14);
            v12 = v12
                + sqrtf(
                    (float)((float)(*v34 - *v35) * (float)(*v34 - *v35))
                  + (float)((float)(v34[1] - v35[1]) * (float)(v34[1] - v35[1])));
          }
          v41 = v53;
          v42 = v54;
          Caver::Vector3::Normalize((Caver::Vector3 *)&v41);
          if ( *((float *)&v41 + 1) >= a2 )
          {
            Caver::Vector2::Vector2((Caver::Vector2 *)v40, (const Caver::Vector3 *)&v55);
            Caver::GroundMeshGenerator::InsertPlainSurfaceVertices();
            v9 = 0;
          }
          else
          {
            Caver::Vector2::Vector2((Caver::Vector2 *)v39, (const Caver::Vector3 *)v44);
            Caver::GroundMeshGenerator::InsertPlainSurfaceVertices();
            v9 = 1;
          }
          v36 = *((_DWORD *)this + 12);
          Caver::MeshBuilder::AddFace((Caver::GroundMeshGenerator *)((char *)this + 32), v36 - 4, v36 - 2, v36 - 1);
          Caver::MeshBuilder::AddFace((Caver::GroundMeshGenerator *)((char *)this + 32), v36 - 3, v36 - 4, v36 - 1);
LABEL_28:
          v13 = 0;
          goto LABEL_29;
        }
        v45 = v23 - v19;
        v46 = -(float)(v24 - v20);
        v47 = 0;
        Caver::Vector3::Normalize((Caver::Vector3 *)&v45);
        v13 = 0;
        if ( v46 < a2 )
        {
          v26 = v55;
          v25 = v56;
          v29 = v53;
          v31 = v57;
          v30 = v54;
          goto LABEL_19;
        }
        v9 = 0;
      }
LABEL_29:
      v6 = *(_QWORD *)this;
      v7 = **(_DWORD **)this;
      v10 = (v10 + 1) % v7;
      if ( v8 >= v7 )
        goto LABEL_32;
    }
  }
  v11 = (Caver::GroundMeshGenerator *)((char *)this + 32);
LABEL_32:
  result = (_QWORD *)Caver::MeshBuilder::GenerateMesh(v11);
  *a3 = *result;
  v38 = result[1];
  a3[1] = v38;
  if ( v38 )
    ++*(_QWORD *)(v38 + 8);
  return result;
}

