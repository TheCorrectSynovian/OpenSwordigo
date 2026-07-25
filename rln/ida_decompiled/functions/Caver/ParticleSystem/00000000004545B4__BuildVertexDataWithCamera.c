/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004545B4
 * Mangled: _ZN5Caver14ParticleSystem25BuildVertexDataWithCameraERKNS_7Vector3ES3_RKNS_7Matrix4E
 * Demangled: Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001FBA10  Caver::Vector2::RotateWithSinCos(float,float)
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 78
 *   insn=0x00000000004545DC string=0x00000000004545E0 "H"
 *   insn=0x00000000004545E4 string=0x00000000004545E8 ""
 *   insn=0x0000000000454620 string=0x0000000000454624 "8!\n"
 *   insn=0x0000000000454624 string=0x0000000000454628 "C@"
 *   insn=0x0000000000454628 string=0x000000000045462C ""
 *   insn=0x0000000000454638 string=0x000000000045463C ""
 *   insn=0x000000000045464C string=0x0000000000454650 "P"
 *   insn=0x000000000045465C string=0x00000000001F71D0 "0'"
 *   insn=0x0000000000454678 string=0x000000000045467C "A8#"
 *   insn=0x0000000000454684 string=0x0000000000454688 "*"
 *   insn=0x00000000004546A4 string=0x00000000004546A8 "!""
 *   insn=0x00000000004546C0 string=0x00000000004546C4 "@8 "
 *   insn=0x00000000004546E4 string=0x00000000004546E8 "F"
 *   insn=0x00000000004546E8 string=0x00000000004546EC "g$"
 *   insn=0x00000000004546F0 string=0x00000000004546F4 "#"
 *   insn=0x0000000000454700 string=0x0000000000454704 "A"
 *   insn=0x0000000000454704 string=0x0000000000454708 "*"
 *   insn=0x000000000045470C string=0x0000000000454710 "X"
 *   insn=0x0000000000454714 string=0x0000000000454718 ""
 *   insn=0x0000000000454718 string=0x000000000045471C " "
 *   insn=0x0000000000454720 string=0x0000000000454724 ""
 *   insn=0x0000000000454728 string=0x000000000045472C ""
 *   insn=0x0000000000454730 string=0x0000000000454734 ""
 *   insn=0x0000000000454734 string=0x0000000000454738 "\t"
 *   insn=0x0000000000454750 string=0x0000000000454754 "{s"
 *   insn=0x0000000000454758 string=0x000000000045475C "|"
 *   insn=0x000000000045476C string=0x0000000000454770 " "
 *   insn=0x0000000000454774 string=0x0000000000454778 "!"
 *   insn=0x0000000000454788 string=0x00000000001FBA10 "0'"
 *   insn=0x000000000045479C string=0x00000000004547A0 "!"
 *   insn=0x00000000004547A8 string=0x00000000004547AC "!"
 *   insn=0x00000000004547B0 string=0x00000000004547B4 "c"
 *   insn=0x00000000004547B4 string=0x00000000004547B8 "D"
 *   insn=0x00000000004547B8 string=0x00000000004547BC "!"
 *   insn=0x00000000004547C0 string=0x00000000004547C4 "b\t""
 *   insn=0x00000000004547D0 string=0x00000000004547D4 "d$"
 *   insn=0x00000000004547DC string=0x00000000004547E0 "$"
 *   insn=0x00000000004547E8 string=0x00000000004547EC "B"
 *   insn=0x00000000004547EC string=0x00000000004547F0 "b""
 *   insn=0x00000000004547F4 string=0x00000000004547F8 "J"
 *   insn=0x0000000000454800 string=0x0000000000454804 "b""
 *   insn=0x0000000000454804 string=0x0000000000454808 "h!"
 *   insn=0x0000000000454808 string=0x000000000045480C "M"
 *   insn=0x000000000045481C string=0x0000000000454820 "?"
 *   insn=0x0000000000454820 string=0x0000000000454824 ")"
 *   insn=0x0000000000454824 string=0x0000000000454828 "_"
 *   insn=0x0000000000454828 string=0x000000000045482C "L"
 *   insn=0x0000000000454830 string=0x0000000000454834 "@"
 *   insn=0x0000000000454834 string=0x0000000000454838 ""
 *   insn=0x0000000000454840 string=0x0000000000454844 "` "
 *   insn=0x0000000000454844 string=0x0000000000454848 ""
 *   insn=0x000000000045484C string=0x0000000000454850 "k"
 *   insn=0x0000000000454850 string=0x0000000000454854 "m"
 *   insn=0x0000000000454858 string=0x000000000045485C ")"
 *   insn=0x0000000000454864 string=0x0000000000454868 "$"
 *   insn=0x0000000000454868 string=0x000000000045486C "J"
 *   insn=0x0000000000454874 string=0x0000000000454878 "k"
 *   insn=0x0000000000454878 string=0x000000000045487C "!$"
 *   insn=0x000000000045487C string=0x0000000000454880 "D"
 *   insn=0x0000000000454880 string=0x0000000000454884 "B$"
 *   insn=0x0000000000454884 string=0x0000000000454888 "d"
 *   insn=0x0000000000454888 string=0x000000000045488C "c$"
 *   insn=0x000000000045488C string=0x0000000000454890 "\t"
 *   insn=0x0000000000454890 string=0x0000000000454894 ","
 *   insn=0x0000000000454894 string=0x0000000000454898 "J"
 *   insn=0x0000000000454898 string=0x000000000045489C "k"
 *   insn=0x00000000004548A0 string=0x00000000004548A4 "Z"
 *   insn=0x00000000004548A4 string=0x00000000004548A8 "I"
 *   insn=0x00000000004548A8 string=0x00000000004548AC "i"
 *   insn=0x00000000004548AC string=0x00000000004548B0 "_"
 *   insn=0x00000000004548B0 string=0x00000000004548B4 "\t"
 *   insn=0x00000000004548C0 string=0x00000000004548C4 ")"
 *   insn=0x00000000004548C4 string=0x00000000004548C8 "?"
 *   insn=0x00000000004548CC string=0x00000000004548D0 ""
 *   insn=0x00000000004548DC string=0x00000000004548E0 ""
 *   insn=0x00000000004548E8 string=0x00000000004548EC "a"
 *   insn=0x00000000004548EC string=0x0000000000454918 "n"
 *   insn=0x0000000000454918 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleSystem::BuildVertexDataWithCamera(
        __int64 this,
        float32x2_t *a2,
        const Caver::Vector3 *a3,
        const Caver::Matrix4 *a4)
{
  __int64 v4; // x21
  __int64 v5; // x9
  __int64 v6; // x28
  int *v7; // x24
  __int64 v8; // x27
  float v9; // s3
  float v10; // s1
  float v11; // s4
  float v12; // s6
  unsigned int v13; // s1
  unsigned int v14; // s0
  float32x2_t v15; // d6
  float32x2_t v16; // d10
  float v17; // s11
  float v18; // s8
  float v19; // s9
  __int64 v20; // x26
  float *v21; // x19
  unsigned __int8 *v22; // x22
  _BYTE *v23; // x20
  unsigned __int8 *v24; // x25
  _BYTE *v25; // x24
  __int64 v26; // x27
  float32x2_t *v27; // x28
  float v28; // s3
  float32x2_t v29; // d4
  unsigned __int64 v30; // d1
  unsigned int v31; // s2
  float v32; // s0
  int v33; // w9
  int v34; // w10
  __int64 v35; // x8
  int v36; // w13
  float v37; // s2
  int v38; // w12
  int v39; // w10
  int v40; // w11
  __int64 v44; // [xsp+30h] [xbp-D0h]
  float32x2_t *v45; // [xsp+38h] [xbp-C8h]
  float *v46; // [xsp+40h] [xbp-C0h]
  int v47; // [xsp+48h] [xbp-B8h]
  unsigned __int64 v48; // [xsp+50h] [xbp-B0h] BYREF
  _BYTE v49[12]; // [xsp+58h] [xbp-A8h] BYREF
  int v50; // [xsp+64h] [xbp-9Ch]
  _QWORD v51[2]; // [xsp+68h] [xbp-98h] BYREF
  float32x2_t v52; // [xsp+78h] [xbp-88h] BYREF
  float v53; // [xsp+80h] [xbp-80h]
  __int64 v54; // [xsp+88h] [xbp-78h]

  v4 = this;
  v54 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(int *)(this + 36) >= 1 )
  {
    v5 = 0;
    v47 = 0;
    do
    {
      v6 = *(_QWORD *)(v4 + 8);
      v7 = (int *)(*(_QWORD *)(v4 + 40) + 68 * v5);
      v8 = *v7;
      *(_QWORD *)v49 = *(_QWORD *)(v7 + 1);
      v44 = v5;
      *(_DWORD *)&v49[8] = v7[3];
      v50 = 1065353216;
      C_Matrix4Vector4Mul((const float *)a4, (const float *)v49, (float *)v51);
      Caver::Vector3::Vector3((Caver::Vector3 *)&v52, (const Caver::Vector4 *)v51);
      v9 = a2[1].n64_f32[0];
      v51[0] = vsub_f32(v52, (float32x2_t)a2->n64_u64[0]).n64_u64[0];
      *(float *)&v51[1] = v53 - v9;
      Caver::Vector3::Normalize((Caver::Vector3 *)v51);
      v11 = *((float *)a3 + 1);
      v10 = *((float *)a3 + 2);
      v12 = *((float *)v51 + 1) * v10;
      *(float *)&v13 = (float)(*(float *)&v51[1] * *(float *)a3) - (float)(v10 * *(float *)v51);
      *(float *)&v14 = (float)(v11 * *(float *)v51) - (float)(*((float *)v51 + 1) * *(float *)a3);
      *(float *)v49 = v12 - (float)(*(float *)&v51[1] * v11);
      *(_QWORD *)&v49[4] = __PAIR64__(v14, v13);
      Caver::Vector3::Normalize((Caver::Vector3 *)v49);
      v15.n64_u32[0] = vdupq_lane_s32(*(int32x2_t *)&v49[4], 1).n128_u32[0];
      v15.n64_u32[1] = *(_DWORD *)v49;
      v16.n64_u64[0] = vsub_f32(
                         vmul_f32(*(float32x2_t *)&v49[4], (float32x2_t)__PAIR64__(v51[0], v51[1])),
                         vmul_f32(v15, *(float32x2_t *)((char *)v51 + 4))).n64_u64[0];
      v17 = (float)(*((float *)v51 + 1) * *(float *)v49) - vmuls_n_f32(*(float *)v51, *(float *)&v49[4]);
      v18 = sinf(*((float *)v7 + 8));
      v46 = (float *)(v7 + 10);
      v45 = (float32x2_t *)(v7 + 12);
      v19 = cosf(*((float *)v7 + 8));
      v20 = 0;
      v21 = (float *)(v7 + 14);
      v22 = (unsigned __int8 *)(v7 + 7);
      v23 = (char *)v7 + 29;
      v24 = (unsigned __int8 *)v7 + 30;
      v25 = (char *)v7 + 31;
      v26 = v6 + 88 * v8;
      do
      {
        v27 = (float32x2_t *)(v26 + 8 * v20);
        v48 = vmul_f32(vmul_n_f32(v27[3], *v46), (float32x2_t)v45->n64_u64[0]).n64_u64[0];
        this = Caver::Vector2::RotateWithSinCos((Caver::Vector2 *)&v48, v18, v19);
        v28 = *v21;
        v29.n64_u64[0] = vmul_n_f32(v16, *((float *)&v48 + 1)).n64_u64[0];
        v30 = vadd_f32(vadd_f32(vmul_n_f32(*(float32x2_t *)v49, *(float *)&v48), v52), v29).n64_u64[0];
        v29.n64_u8[0] = *v22;
        *(float *)&v31 = v17 * *((float *)&v48 + 1);
        v32 = (float)((float)(*(float *)&v48 * *(float *)&v49[8]) + v53) + (float)(v17 * *((float *)&v48 + 1));
        LOBYTE(v31) = *v23;
        v29.n64_f32[0] = *v21 * (float)v29.n64_u32[0];
        v33 = (int)v29.n64_f32[0];
        v29.n64_u8[0] = *v24;
        v34 = (int)(float)(*v21 * (float)v31);
        v37 = *v21 * (float)v29.n64_u32[0];
        v35 = *(_QWORD *)(v4 + 64) + *(int *)(v4 + 48) * (__int64)(v47 + (int)v20);
        v36 = (int)v37;
        LOBYTE(v37) = *v25;
        *(_QWORD *)v35 = v30;
        *(float *)(v35 + 8) = v32;
        if ( v33 >= 255 )
          LOBYTE(v33) = -1;
        if ( v34 >= 255 )
          LOBYTE(v38) = -1;
        else
          LOBYTE(v38) = v34;
        *(float32x2_t *)(v35 + 12) = v27[7];
        if ( v36 >= 255 )
          LOBYTE(v39) = -1;
        else
          LOBYTE(v39) = v36;
        v40 = (int)(float)(v28 * (float)LODWORD(v37));
        if ( v40 >= 255 )
          LOBYTE(v40) = -1;
        if ( *(_BYTE *)(v4 + 184) )
        {
          v33 = (int)(float)(*(float *)(v4 + 168) * (float)(unsigned __int8)v33);
          v38 = (int)(float)(*(float *)(v4 + 172) * (float)(unsigned __int8)v38);
          v39 = (int)(float)(*(float *)(v4 + 176) * (float)(unsigned __int8)v39);
          v40 = (int)(float)(*(float *)(v4 + 180) * (float)(unsigned __int8)v40);
        }
        ++v20;
        *(_DWORD *)(v35 + 20) = (unsigned __int8)v33
                              | (unsigned __int16)((unsigned __int8)v38 << 8)
                              | ((unsigned __int8)v39 << 16) & 0xFFFFFF
                              | ((unsigned __int8)v40 << 24);
      }
      while ( v20 != 4 );
      v5 = v44 + 1;
      v47 += 4;
    }
    while ( v44 + 1 < *(int *)(v4 + 36) );
  }
  return this;
}

