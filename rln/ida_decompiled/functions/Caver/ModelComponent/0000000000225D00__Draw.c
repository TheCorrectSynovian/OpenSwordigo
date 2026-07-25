/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000225D00
 * Mangled: _ZNK5Caver14ModelComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4Eb
 * Demangled: Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callers: 1
 *   0x00000000001F8B30  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callees: 19
 *   0x00000000001F38B0  .glTexEnvfv
 *   0x00000000001F3C70  .glEnable
 *   0x00000000001F5110  Caver::Matrix4::PostTranslate(Caver::Vector3 const&)
 *   0x00000000001F54A0  Caver::Matrix4::RotationY(float)
 *   0x00000000001F5860  .glDisable
 *   0x00000000001F5AA0  .glTexEnvi
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6930  Caver::ModelComponent::WorldMatrix(void)
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001F96B0  .glActiveTexture
 *   0x00000000001FB000  .glBindTexture
 *   0x00000000001FD050  Caver::TransformComponent::WorldMatrix(void)
 *   0x00000000001FD870  Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002026C0  Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *   0x00000000002039A0  Caver::Matrix4::RotationX(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 113
 *   insn=0x0000000000225D1C string=0x0000000000225D20 "X"
 *   insn=0x0000000000225D20 string=0x0000000000225D24 ""
 *   insn=0x0000000000225D40 string=0x00000000002260D0 ""
 *   insn=0x0000000000225D44 string=0x0000000000225D48 "I"
 *   insn=0x0000000000225D54 string=0x0000000000225D58 "i"
 *   insn=0x0000000000225D5C string=0x0000000000225D60 " "
 *   insn=0x0000000000225D64 string=0x0000000000225F7C "i"
 *   insn=0x0000000000225D6C string=0x0000000000225D70 " "
 *   insn=0x0000000000225D74 string=0x0000000000225D78 "NN"
 *   insn=0x0000000000225D78 string=0x0000000000225D7C " "
 *   insn=0x0000000000225D78 string=0x00000000001F96B0 "0'"
 *   insn=0x0000000000225D80 string=0x00000000001F3C70 "P'"
 *   insn=0x0000000000225D84 string=0x0000000000225D88 "]@"
 *   insn=0x0000000000225D8C string=0x0000000000225D9C ""
 *   insn=0x0000000000225D90 string=0x0000000000225D94 ")"
 *   insn=0x0000000000225D9C string=0x0000000000225DA0 ""
 *   insn=0x0000000000225DA4 string=0x0000000000225DA8 "7"
 *   insn=0x0000000000225DAC string=0x0000000000225DB0 ""
 *   insn=0x0000000000225DC0 string=0x0000000000225DC4 "\t@"
 *   insn=0x0000000000225DCC string=0x0000000000225DD0 ""
 *   insn=0x0000000000225DE0 string=0x0000000000225DE4 "@"
 *   insn=0x0000000000225DF0 string=0x0000000000225DF4 "]@"
 *   insn=0x0000000000225DF8 string=0x0000000000225E08 ""
 *   insn=0x0000000000225DFC string=0x0000000000225E00 ")"
 *   insn=0x0000000000225E08 string=0x0000000000225E0C ""
 *   insn=0x0000000000225E0C string=0x0000000000225E10 "m@"
 *   insn=0x0000000000225E14 string=0x0000000000225E18 " "
 *   insn=0x0000000000225E18 string=0x0000000000225E1C "yT"
 *   insn=0x0000000000225E1C string=0x0000000000225E20 "7"
 *   insn=0x0000000000225E1C string=0x00000000001FB000 "0'"
 *   insn=0x0000000000225E24 string=0x0000000000225E28 ""
 *   insn=0x0000000000225E38 string=0x0000000000225E3C "\t@"
 *   insn=0x0000000000225E44 string=0x0000000000225E48 ""
 *   insn=0x0000000000225E58 string=0x0000000000225E5C "@"
 *   insn=0x0000000000225E70 string=0x00000000001F5AA0 "P'"
 *   insn=0x0000000000225E74 string=0x0000000000225E78 "!"
 *   insn=0x0000000000225E7C string=0x0000000000225E80 "?"
 *   insn=0x0000000000225EA4 string=0x0000000000225EA8 "!"
 *   insn=0x0000000000225EA8 string=0x0000000000225EAC "®"
 *   insn=0x0000000000225EB4 string=0x0000000000225EB8 "!"
 *   insn=0x0000000000225EDC string=0x0000000000225EE0 "!"
 *   insn=0x0000000000225EE0 string=0x0000000000225EE4 "B"
 *   insn=0x0000000000225EE4 string=0x0000000000225EE8 "c"
 *   insn=0x0000000000225EEC string=0x0000000000225EF0 "!"
 *   insn=0x0000000000225EF0 string=0x0000000000225EF4 "B"
 *   insn=0x0000000000225EF4 string=0x0000000000225EF8 "c"
 *   insn=0x0000000000225F00 string=0x0000000000225F04 "!@"
 *   insn=0x0000000000225F0C string=0x0000000000225F10 "!"
 *   insn=0x0000000000225F18 string=0x0000000000225F1C "B"
 *   insn=0x0000000000225F1C string=0x0000000000225F20 "c"
 *   insn=0x0000000000225F24 string=0x0000000000225F28 "b6"
 *   insn=0x0000000000225F28 string=0x00000000001F38B0 "P'"
 *   insn=0x0000000000225F44 string=0x0000000000225F48 "B8 "
 *   insn=0x0000000000225F50 string=0x0000000000225F54 "C"
 *   insn=0x0000000000225F64 string=0x0000000000225F68 "@"
 *   insn=0x0000000000225F74 string=0x0000000000225F78 ""
 *   insn=0x0000000000225F98 string=0x0000000000225F9C "V"
 *   insn=0x0000000000225FD4 string=0x0000000000225FD8 ""
 *   insn=0x0000000000225FD4 string=0x00000000001FD050 "0'"
 *   insn=0x0000000000225FE0 string=0x0000000000225FE4 "3E"
 *   insn=0x0000000000225FE4 string=0x00000000001F74B0 "0'"
 *   insn=0x0000000000225FFC string=0x0000000000226000 "LB"
 *   insn=0x0000000000226000 string=0x00000000001F6930 "0'"
 *   insn=0x0000000000226014 string=0x0000000000226018 ""
 *   insn=0x0000000000226018 string=0x000000000022601C "("
 *   insn=0x000000000022601C string=0x0000000000226020 "&"
 *   insn=0x0000000000226020 string=0x0000000000226024 "eB"
 *   insn=0x0000000000226054 string=0x0000000000226058 "h"
 *   insn=0x000000000022605C string=0x0000000000226060 ""
 *   insn=0x0000000000226068 string=0x0000000000583734 "o"
 *   insn=0x0000000000226070 string=0x0000000000226074 "m"
 *   insn=0x0000000000226074 string=0x0000000000226078 "@"
 *   insn=0x0000000000226088 string=0x00000000001FD870 "0'"
 *   insn=0x0000000000226098 string=0x000000000022609C "h"
 *   insn=0x0000000000226098 string=0x00000000002260AC "7"
 *   insn=0x000000000022609C string=0x00000000002260A0 "h"
 *   insn=0x00000000002260A0 string=0x00000000002260A4 "@"
 *   insn=0x00000000002260A8 string=0x00000000001F5860 "P'"
 *   insn=0x00000000002260AC string=0x00000000002260B0 "h"
 *   insn=0x00000000002260B4 string=0x00000000002260B8 " "
 *   insn=0x00000000002260B8 string=0x00000000002260BC "}M"
 *   insn=0x00000000002260BC string=0x00000000002260C0 " "
 *   insn=0x00000000002260C8 string=0x00000000002260CC "yM"
 *   insn=0x00000000002260D8 string=0x00000000002260DC "!"
 *   insn=0x00000000002260DC string=0x0000000000226100 "t@"
 *   insn=0x0000000000226100 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000226104 string=0x0000000000226108 "7"
 *   insn=0x000000000022610C string=0x0000000000226110 ""
 *   insn=0x000000000022611C string=0x0000000000226120 "\t@"
 *   insn=0x000000000022612C string=0x0000000000226130 ""
 *   insn=0x000000000022613C string=0x0000000000226140 "@"
 *   insn=0x0000000000226150 string=0x0000000000226154 "~"
 *   insn=0x000000000022616C string=0x0000000000226170 "U"
 *   insn=0x0000000000226178 string=0x000000000022617C "\t&"
 *   insn=0x000000000022617C string=0x0000000000226180 ")eB"
 *   insn=0x0000000000226188 string=0x000000000022618C " "
 *   insn=0x000000000022618C string=0x0000000000226190 ""@"
 *   insn=0x0000000000226190 string=0x0000000000226194 "`"
 *   insn=0x0000000000226194 string=0x0000000000226198 "b"
 *   insn=0x00000000002261AC string=0x00000000002261B0 "8g"
 *   insn=0x00000000002261B4 string=0x00000000002261B8 "H"
 *   insn=0x00000000002261CC string=0x00000000002261D0 "!@!"
 *   insn=0x00000000002261DC string=0x00000000001F5110 "P'"
 *   insn=0x00000000002261E4 string=0x00000000002261E8 "5G"
 *   insn=0x00000000002261EC string=0x00000000002261F0 "  ("
 *   insn=0x0000000000226208 string=0x000000000022620C "!g"
 *   insn=0x0000000000226218 string=0x000000000022621C "!"
 *   insn=0x000000000022621C string=0x0000000000226220 "AB9"
 *   insn=0x000000000022622C string=0x0000000000226230 "A"
 *   insn=0x0000000000226230 string=0x0000000000226234 " (`"
 *   insn=0x000000000022623C string=0x0000000000226240 "  ("
 *   insn=0x000000000022624C string=0x00000000001F54A0 "P'"
 *   insn=0x0000000000226258 string=0x000000000022625C "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t *__fastcall Caver::ModelComponent::Draw(
        float32x2_t *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        char a4)
{
  __int64 v4; // x20
  unsigned __int64 v7; // x8
  int v9; // w9
  unsigned __int64 v10; // d2
  unsigned __int64 v11; // d0
  __int64 v12; // x8
  _QWORD *v13; // x23
  __int64 v14; // x25
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x23
  __int64 v18; // x8
  __int64 v19; // x8
  unsigned int v20; // s0
  unsigned int v21; // s1
  unsigned int v22; // s2
  unsigned int v23; // s3
  float32x2_t v24; // d3
  __int64 v25; // x8
  float32x2_t v26; // d2
  int v27; // w23
  int v28; // s0
  Caver::TransformComponent *v29; // x0
  Caver::ModelInstance *v30; // x0
  float v31; // s8
  float32x2_t v32; // [xsp+78h] [xbp-100h]
  float32x2_t v33; // [xsp+88h] [xbp-F0h]
  _OWORD v34[4]; // [xsp+98h] [xbp-E0h] BYREF
  _OWORD v35[4]; // [xsp+D8h] [xbp-A0h] BYREF
  __int64 v36; // [xsp+120h] [xbp-58h]

  v4 = (__int64)this;
  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = this[17].n64_u64[0];
  if ( !v7 || this[38].n64_u8[4] )
    return this;
  v9 = *(_DWORD *)a2;
  v10 = vmul_f32(this[22], this[20]).n64_u64[0];
  v11 = vmul_f32(this[23], this[21]).n64_u64[0];
  if ( this[38].n64_u8[5] && (a4 & 1) != 0 )
  {
    if ( !v9 )
    {
      v32.n64_u64[0] = v10;
      v33.n64_u64[0] = v11;
      glActiveTexture();
      glEnable();
      v12 = **(_QWORD **)(v4 + 136);
      v13 = *(_QWORD **)(*(_QWORD *)(v4 + 136) + 8LL);
      if ( v13 )
        ++v13[1];
      v14 = *(_QWORD *)(**(_QWORD **)(v12 + 8) + 216LL);
      if ( v13 )
      {
        v15 = v13[1] - 1LL;
        v13[1] = v15;
        if ( !v15 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v16 = v13[2] - 1LL;
          v13[2] = v16;
          if ( !v16 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
      if ( v14 )
      {
        v17 = *(_QWORD **)(*(_QWORD *)(v4 + 136) + 8LL);
        if ( v17 )
          ++v17[1];
        glBindTexture();
        if ( v17 )
        {
          v18 = v17[1] - 1LL;
          v17[1] = v18;
          if ( !v18 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
            v19 = v17[2] - 1LL;
            v17[2] = v19;
            if ( !v19 )
              (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
          }
        }
      }
      glTexEnvi();
      glTexEnvi();
      glTexEnvi();
      glTexEnvi();
      glTexEnvi();
      glTexEnvi();
      LOBYTE(v20) = *(_BYTE *)(v4 + 310);
      LOBYTE(v21) = *(_BYTE *)(v4 + 311);
      LOBYTE(v22) = *(_BYTE *)(v4 + 312);
      LOBYTE(v23) = *(_BYTE *)(v4 + 313);
      *(_QWORD *)&v35[0] = __PAIR64__(
                             COERCE_UNSIGNED_INT(vmuls_lane_f32((float)v21 / 255.0, v32, 1)),
                             COERCE_UNSIGNED_INT(vmuls_n_f32((float)v20 / 255.0, v32.n64_f32[0])));
      *((_QWORD *)&v35[0] + 1) = __PAIR64__(
                                   COERCE_UNSIGNED_INT(vmuls_lane_f32((float)v23 / 255.0, v33, 1)),
                                   COERCE_UNSIGNED_INT(vmuls_n_f32((float)v22 / 255.0, v33.n64_f32[0])));
      glTexEnvfv();
      glActiveTexture();
      v24.n64_u32[0] = DWORD2(v35[0]);
      v25 = *(_QWORD *)(v4 + 136);
      v26.n64_f32[0] = 1.0 - *((float *)v35 + 3);
      v24.n64_f32[1] = 1.0 - *((float *)v35 + 3);
      v26.n64_u32[1] = HIDWORD(v35[0]);
      *(float32x2_t *)(v25 + 52) = vadd_f32(
                                     vmul_n_f32(v32, 1.0 - *((float *)v35 + 3)),
                                     vmul_f32(v32, *(float32x2_t *)&v35[0]));
      *(float32x2_t *)(v25 + 60) = vadd_f32(vmul_f32(v33, v26), vmul_f32(v33, v24));
      v27 = 1;
      goto LABEL_23;
    }
  }
  else if ( !v9 )
  {
    v27 = 0;
    *(_QWORD *)(v7 + 52) = v10;
    *(_QWORD *)(v7 + 60) = v11;
    goto LABEL_23;
  }
  v27 = 0;
LABEL_23:
  v28 = 0;
  if ( (a4 & 1) != 0 )
    v28 = *(_DWORD *)(v4 + 152);
  *(_DWORD *)(*(_QWORD *)(v4 + 136) + 48LL) = v28;
  v35[3] = *((_OWORD *)a3 + 3);
  v35[2] = *((_OWORD *)a3 + 2);
  v35[1] = *((_OWORD *)a3 + 1);
  v35[0] = *(_OWORD *)a3;
  v29 = *(Caver::TransformComponent **)(v4 + 144);
  if ( v29 )
  {
    Caver::TransformComponent::WorldMatrix(v29);
  }
  else
  {
    Caver::SceneObject::WorldMatrix((__int64 *)v34, *(Caver::SceneObject **)(v4 + 40));
    C_Matrix4Mul((const float *)v35, (const float *)v34, (float *)v35);
    Caver::ModelComponent::WorldMatrix((Caver::ModelComponent *)v4);
  }
  C_Matrix4Mul((const float *)v35, (const float *)v34, (float *)v35);
  v30 = *(Caver::ModelInstance **)(v4 + 136);
  if ( *((_QWORD *)v30 + 3) )
  {
    v34[2] = xmmword_6E9F10;
    v34[3] = xmmword_6E9F20;
    v34[0] = Caver::Matrix4::identityMatrix;
    v34[1] = xmmword_6E9F00;
    Caver::ModelInstance::SkinMeshes(v30, (const Caver::Matrix4 *)v34);
  }
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v35);
  v31 = fabsf(*(float *)(*(_QWORD *)(v4 + 40) + 140LL) + -1.0);
  if ( !*(_DWORD *)a2 && v31 > 0.001 )
    glEnable();
  this = (float32x2_t *)Caver::ModelInstance::Draw(*(Caver::ModelInstance **)(v4 + 136), a2);
  if ( v31 > 0.001 && !*(_DWORD *)a2 )
    this = (float32x2_t *)glDisable();
  if ( v27 )
  {
    if ( !*(_DWORD *)a2 )
    {
      glActiveTexture();
      glDisable();
      return (float32x2_t *)glActiveTexture();
    }
  }
  return this;
}

