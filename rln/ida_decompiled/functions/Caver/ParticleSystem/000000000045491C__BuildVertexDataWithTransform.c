/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045491C
 * Mangled: _ZN5Caver14ParticleSystem28BuildVertexDataWithTransformERKNS_7Matrix4E
 * Demangled: Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001F36E0  Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001FBA10  Caver::Vector2::RotateWithSinCos(float,float)
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 74
 *   insn=0x000000000045493C string=0x0000000000454940 "I"
 *   insn=0x0000000000454940 string=0x0000000000454944 "("
 *   insn=0x0000000000454950 string=0x0000000000454954 "h&@"
 *   insn=0x0000000000454954 string=0x0000000000454958 "("
 *   insn=0x0000000000454958 string=0x000000000045495C "h\t"
 *   insn=0x0000000000454958 string=0x0000000000454BFC "("
 *   insn=0x0000000000454984 string=0x0000000000454988 "h\t"
 *   insn=0x0000000000454984 string=0x00000000001F71D0 "0'"
 *   insn=0x000000000045499C string=0x00000000004549A0 "|"
 *   insn=0x00000000004549A8 string=0x00000000004549AC "\t"
 *   insn=0x00000000004549AC string=0x00000000004549B0 "h&@"
 *   insn=0x00000000004549B4 string=0x00000000004549B8 ""
 *   insn=0x00000000004549C8 string=0x00000000004549CC "h"
 *   insn=0x00000000004549D8 string=0x00000000004549DC "5!\n"
 *   insn=0x00000000004549E0 string=0x00000000004549E4 "i"
 *   insn=0x0000000000454A08 string=0x0000000000454A0C "a"
 *   insn=0x0000000000454A24 string=0x0000000000454A28 ""
 *   insn=0x0000000000454A28 string=0x0000000000454A2C " "
 *   insn=0x0000000000454A44 string=0x0000000000454A48 ""
 *   insn=0x0000000000454A48 string=0x0000000000454A4C "\t"
 *   insn=0x0000000000454A80 string=0x0000000000454A84 " "
 *   insn=0x0000000000454A88 string=0x0000000000454A8C "!"
 *   insn=0x0000000000454A9C string=0x00000000001FBA10 "0'"
 *   insn=0x0000000000454AB0 string=0x0000000000454AB4 "!"
 *   insn=0x0000000000454ACC string=0x0000000000454AD0 "B"
 *   insn=0x0000000000454AD4 string=0x0000000000454AD8 "!"
 *   insn=0x0000000000454AD8 string=0x0000000000454ADC "#"
 *   insn=0x0000000000454AE4 string=0x0000000000454AE8 "h"@"
 *   insn=0x0000000000454AE8 string=0x0000000000454AEC "k2"
 *   insn=0x0000000000454AEC string=0x0000000000454AF0 "B"
 *   insn=0x0000000000454AF4 string=0x0000000000454AF8 "b""
 *   insn=0x0000000000454B00 string=0x0000000000454B04 "!"
 *   insn=0x0000000000454B04 string=0x0000000000454B08 "I"
 *   insn=0x0000000000454B0C string=0x0000000000454B10 "d$"
 *   insn=0x0000000000454B10 string=0x0000000000454B14 "h!"
 *   insn=0x0000000000454B24 string=0x0000000000454B28 ""
 *   insn=0x0000000000454B28 string=0x0000000000454B2C "B"
 *   insn=0x0000000000454B2C string=0x0000000000454B30 "b""
 *   insn=0x0000000000454B30 string=0x0000000000454B34 "?"
 *   insn=0x0000000000454B34 string=0x0000000000454B38 "K"
 *   insn=0x0000000000454B38 string=0x0000000000454B3C ")"
 *   insn=0x0000000000454B3C string=0x0000000000454B40 "_"
 *   insn=0x0000000000454B44 string=0x0000000000454B48 ""
 *   insn=0x0000000000454B48 string=0x0000000000454B4C "L"
 *   insn=0x0000000000454B50 string=0x0000000000454B54 "m"
 *   insn=0x0000000000454B54 string=0x0000000000454B58 "` "
 *   insn=0x0000000000454B58 string=0x0000000000454B5C "j"
 *   insn=0x0000000000454B5C string=0x0000000000454B60 ""
 *   insn=0x0000000000454B64 string=0x0000000000454B68 "k"
 *   insn=0x0000000000454B68 string=0x0000000000454B6C "m"
 *   insn=0x0000000000454B6C string=0x0000000000454B70 "`"
 *   insn=0x0000000000454B70 string=0x0000000000454B74 ")"
 *   insn=0x0000000000454B74 string=0x0000000000454B78 "b"
 *   insn=0x0000000000454B7C string=0x0000000000454B80 "$"
 *   insn=0x0000000000454B80 string=0x0000000000454B84 "J"
 *   insn=0x0000000000454B8C string=0x0000000000454B90 "k"
 *   insn=0x0000000000454B90 string=0x0000000000454B94 "!$"
 *   insn=0x0000000000454B94 string=0x0000000000454B98 "D"
 *   insn=0x0000000000454B98 string=0x0000000000454B9C "B$"
 *   insn=0x0000000000454B9C string=0x0000000000454BA0 "d"
 *   insn=0x0000000000454BA0 string=0x0000000000454BA4 "c$"
 *   insn=0x0000000000454BA4 string=0x0000000000454BA8 "\t"
 *   insn=0x0000000000454BA8 string=0x0000000000454BAC ","
 *   insn=0x0000000000454BAC string=0x0000000000454BB0 "J"
 *   insn=0x0000000000454BB0 string=0x0000000000454BB4 "k"
 *   insn=0x0000000000454BBC string=0x0000000000454BC0 "I"
 *   insn=0x0000000000454BC0 string=0x0000000000454BC4 "i"
 *   insn=0x0000000000454BC8 string=0x0000000000454BCC "\t"
 *   insn=0x0000000000454BD4 string=0x0000000000454BD8 "h&"
 *   insn=0x0000000000454BDC string=0x0000000000454BE0 ")"
 *   insn=0x0000000000454BE0 string=0x0000000000454BE4 "?"
 *   insn=0x0000000000454BE8 string=0x0000000000454BEC ""
 *   insn=0x0000000000454C04 string=0x0000000000454C08 "A"
 *   insn=0x0000000000454C30 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleSystem::BuildVertexDataWithTransform(__int64 this, const Caver::Matrix4 *a2)
{
  __int64 v2; // x19
  const float *v3; // x20
  __int64 v4; // x9
  int *v5; // x21
  __int64 v6; // x9
  __int64 v7; // x24
  float v8; // s8
  float v9; // s9
  __int64 v10; // x28
  float *v11; // x25
  _BYTE *v12; // x26
  _BYTE *v13; // x20
  _BYTE *v14; // x23
  _BYTE *v15; // x22
  __int64 v16; // x21
  float32x2_t *v17; // x24
  unsigned int v18; // s2
  unsigned int v19; // s4
  float v20; // s3
  float v21; // s0
  int v22; // w9
  float v23; // s2
  __int64 v24; // x8
  int v25; // w10
  float v26; // s4
  int v27; // w12
  float v28; // s0
  int v29; // w10
  int v30; // w11
  const float *v31; // [xsp+10h] [xbp-F0h]
  __int64 v32; // [xsp+18h] [xbp-E8h]
  __int64 v33; // [xsp+20h] [xbp-E0h]
  float32x2_t *v34; // [xsp+28h] [xbp-D8h]
  float *v35; // [xsp+30h] [xbp-D0h]
  int v36; // [xsp+38h] [xbp-C8h]
  float32x2_t v37; // [xsp+40h] [xbp-C0h] BYREF
  float v38; // [xsp+48h] [xbp-B8h]
  float32x2_t v39; // [xsp+50h] [xbp-B0h] BYREF
  float v40; // [xsp+58h] [xbp-A8h]
  __int128 v41; // [xsp+60h] [xbp-A0h] BYREF
  float32x2_t v42; // [xsp+78h] [xbp-88h] BYREF
  float32x2_t v43; // [xsp+88h] [xbp-78h] BYREF
  float v44; // [xsp+90h] [xbp-70h]
  __int64 v45; // [xsp+98h] [xbp-68h]

  v2 = this;
  v3 = (const float *)a2;
  v45 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)(this + 36) )
  {
    v41 = xmmword_5837E0;
    C_Matrix4Vector4Mul((const float *)a2, (const float *)&v41, (float *)&v42);
    Caver::Vector3::Vector3((Caver::Vector3 *)&v43, (const Caver::Vector4 *)&v42);
    v41 = xmmword_583490;
    C_Matrix4Vector4Mul(v3, (const float *)&v41, (float *)&v42);
    this = Caver::Vector3::Vector3((Caver::Vector3 *)&v39, (const Caver::Vector4 *)&v42);
    if ( *(int *)(v2 + 36) >= 1 )
    {
      v4 = 0;
      v36 = 0;
      v31 = v3;
      do
      {
        v33 = v4;
        v5 = (int *)(*(_QWORD *)(v2 + 40) + 68 * v4);
        v6 = *(_QWORD *)(v2 + 8);
        v7 = *v5;
        *(_QWORD *)&v41 = *(_QWORD *)(v5 + 1);
        v32 = v6;
        DWORD2(v41) = v5[3];
        HIDWORD(v41) = 1065353216;
        C_Matrix4Vector4Mul(v3, (const float *)&v41, (float *)&v42);
        Caver::Vector3::Vector3((Caver::Vector3 *)&v37, (const Caver::Vector4 *)&v42);
        v8 = sinf(*((float *)v5 + 8));
        v35 = (float *)(v5 + 10);
        v34 = (float32x2_t *)(v5 + 12);
        v9 = cosf(*((float *)v5 + 8));
        v10 = 0;
        v11 = (float *)(v5 + 14);
        v12 = v5 + 7;
        v13 = (char *)v5 + 29;
        v14 = (char *)v5 + 30;
        v15 = (char *)v5 + 31;
        v16 = v32 + 88 * v7;
        do
        {
          v17 = (float32x2_t *)(v16 + 8 * v10);
          v42.n64_u64[0] = vmul_f32(vmul_n_f32(v17[3], *v35), (float32x2_t)v34->n64_u64[0]).n64_u64[0];
          this = Caver::Vector2::RotateWithSinCos((Caver::Vector2 *)&v42, v8, v9);
          v18 = LODWORD(v38);
          *(float *)&v19 = v42.n64_f32[1] * v44;
          LOBYTE(v18) = *v12;
          v20 = *v11;
          v21 = (float)((float)(v42.n64_f32[0] * v40) + v38) + (float)(v42.n64_f32[1] * v44);
          LOBYTE(v19) = *v13;
          v23 = *v11 * (float)v18;
          v22 = (int)v23;
          LOBYTE(v23) = *v14;
          v26 = *v11 * (float)v19;
          v24 = *(_QWORD *)(v2 + 64) + *(int *)(v2 + 48) * (__int64)(v36 + (int)v10);
          v25 = (int)v26;
          LOBYTE(v26) = *v15;
          *(float32x2_t *)v24 = vadd_f32(
                                  vadd_f32(vmul_n_f32(v39, v42.n64_f32[0]), v37),
                                  vmul_n_f32(v43, v42.n64_f32[1]));
          *(float *)(v24 + 8) = v21;
          if ( v22 >= 255 )
            LOBYTE(v22) = -1;
          *(float32x2_t *)(v24 + 12) = v17[7];
          if ( v25 >= 255 )
            LOBYTE(v27) = -1;
          else
            LOBYTE(v27) = v25;
          v28 = v20 * (float)LODWORD(v26);
          if ( (int)(float)(v20 * (float)LODWORD(v23)) >= 255 )
            LOBYTE(v29) = -1;
          else
            LOBYTE(v29) = (int)(float)(v20 * (float)LODWORD(v23));
          v30 = (int)v28;
          if ( (int)v28 >= 255 )
            LOBYTE(v30) = -1;
          if ( *(_BYTE *)(v2 + 184) )
          {
            v22 = (int)(float)(*(float *)(v2 + 168) * (float)(unsigned __int8)v22);
            v27 = (int)(float)(*(float *)(v2 + 172) * (float)(unsigned __int8)v27);
            v29 = (int)(float)(*(float *)(v2 + 176) * (float)(unsigned __int8)v29);
            v30 = (int)(float)(*(float *)(v2 + 180) * (float)(unsigned __int8)v30);
          }
          ++v10;
          *(_DWORD *)(v24 + 20) = (unsigned __int8)v22
                                | (unsigned __int16)((unsigned __int8)v27 << 8)
                                | ((unsigned __int8)v29 << 16) & 0xFFFFFF
                                | ((unsigned __int8)v30 << 24);
        }
        while ( v10 != 4 );
        v3 = v31;
        v4 = v33 + 1;
        v36 += 4;
      }
      while ( v33 + 1 < *(int *)(v2 + 36) );
    }
  }
  return this;
}

