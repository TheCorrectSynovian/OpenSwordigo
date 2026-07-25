/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000451590
 * Mangled: _ZNK5Caver16SkeletonInstance4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 23
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F69F0  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FB550  Caver::ParticleSystem::AddParticle(Caver::Particle const&)
 *   0x00000000001FC9F0  Caver::RenderingContext::SetLightingEnabled(bool)
 *   0x00000000001FCAE0  Caver::Vector4::Normalize(void)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FDE90  .glMaterialfv
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000201CF0  Caver::MeshPrimitives::Cube(bool)
 *   0x0000000000202350  Caver::ParticleEmitter::ConvertLocalParticleToWorld(Caver::Particle *)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000451E3C  Caver::BlastParticleEmitter::type(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 165
 *   insn=0x00000000004515B0 string=0x00000000004515B4 "V"
 *   insn=0x00000000004515D0 string=0x00000000004515D4 ""
 *   insn=0x00000000004515D4 string=0x00000000001FC9F0 "0'"
 *   insn=0x00000000004515DC string=0x0000000000000001 "ELF"
 *   insn=0x00000000004515E4 string=0x00000000004515E8 ""
 *   insn=0x00000000004515F4 string=0x00000000004515F8 " %"
 *   insn=0x0000000000451608 string=0x000000000045160C "@"
 *   insn=0x000000000045160C string=0x0000000000451610 "*\n"
 *   insn=0x0000000000451614 string=0x0000000000451618 ""
 *   insn=0x000000000045161C string=0x0000000000451620 " "
 *   insn=0x0000000000451620 string=0x0000000000451624 ")\n"
 *   insn=0x000000000045162C string=0x0000000000451630 "@"
 *   insn=0x0000000000451638 string=0x000000000045163C " !"
 *   insn=0x0000000000451640 string=0x0000000000451644 "@"
 *   insn=0x0000000000451648 string=0x000000000045164C ""
 *   insn=0x000000000045166C string=0x00000000001FCAE0 "0'"
 *   insn=0x0000000000451674 string=0x0000000000451678 "("
 *   insn=0x0000000000451688 string=0x00000000001FDE90 "0'"
 *   insn=0x000000000045168C string=0x0000000000451690 "!@"
 *   insn=0x0000000000451714 string=0x0000000000451718 """
 *   insn=0x0000000000451724 string=0x00000000001F69F0 "0'"
 *   insn=0x0000000000451730 string=0x0000000000451734 ""
 *   insn=0x000000000045174C string=0x0000000000451750 "eB"
 *   insn=0x0000000000451768 string=0x000000000045176C ""
 *   insn=0x000000000045176C string=0x0000000000451770 ""
 *   insn=0x0000000000451780 string=0x00000000001FB1A0 "0'"
 *   insn=0x0000000000451784 string=0x0000000000451788 "\t"
 *   insn=0x0000000000451788 string=0x000000000045178C "?"
 *   insn=0x000000000045178C string=0x0000000000451790 "K"
 *   insn=0x0000000000451794 string=0x0000000000451798 " "
 *   insn=0x00000000004517AC string=0x00000000004517B0 "\t"
 *   insn=0x00000000004517B0 string=0x00000000004517B4 ";i"
 *   insn=0x00000000004517B4 string=0x00000000004517B8 "["
 *   insn=0x00000000004517B8 string=0x0000000000451860 "\t"
 *   insn=0x00000000004517F4 string=0x00000000004517F8 "h#"
 *   insn=0x0000000000451840 string=0x0000000000451844 "7"
 *   insn=0x0000000000451858 string=0x00000000001F3B30 "P'"
 *   insn=0x0000000000451868 string=0x000000000045186C "9s"
 *   insn=0x0000000000451878 string=0x000000000045187C "3"
 *   insn=0x000000000045187C string=0x0000000000451880 "h"
 *   insn=0x0000000000451880 string=0x0000000000451884 ""
 *   insn=0x0000000000451884 string=0x0000000000451888 "h"
 *   insn=0x000000000045188C string=0x0000000000451890 "h"
 *   insn=0x0000000000451894 string=0x0000000000451898 "\t@"
 *   insn=0x000000000045189C string=0x00000000004518A0 "h\n@"
 *   insn=0x00000000004518A0 string=0x00000000004518A4 ""
 *   insn=0x00000000004518A4 string=0x00000000004518A8 "h\n"
 *   insn=0x00000000004518AC string=0x00000000004518B0 "h"
 *   insn=0x00000000004518B4 string=0x00000000004518B8 "@"
 *   insn=0x00000000004518C8 string=0x00000000004518CC "A"
 *   insn=0x00000000004518CC string=0x00000000004518F4 "w"
 *   insn=0x00000000004518F4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000451928 string=0x000000000045192C "4"
 *   insn=0x0000000000451930 string=0x0000000000451934 ""
 *   insn=0x0000000000451940 string=0x0000000000451944 "\t@"
 *   insn=0x0000000000451950 string=0x0000000000451954 ""
 *   insn=0x0000000000451960 string=0x0000000000451964 "@"
 *   insn=0x0000000000451974 string=0x0000000000451978 "u"
 *   insn=0x00000000004519AC string=0x00000000004519B0 "I"
 *   insn=0x00000000004519B4 string=0x00000000004519B8 "("
 *   insn=0x00000000004519C8 string=0x00000000004519CC "hf@"
 *   insn=0x00000000004519C8 string=0x0000000000451D00 "("
 *   insn=0x00000000004519D4 string=0x00000000004519E4 "h"
 *   insn=0x00000000004519DC string=0x00000000004519E0 "\t"
 *   insn=0x00000000004519EC string=0x00000000004519F0 ""
 *   insn=0x00000000004519F4 string=0x00000000004519F8 "hf@"
 *   insn=0x0000000000451A00 string=0x0000000000451CB0 "h"
 *   insn=0x0000000000451A08 string=0x0000000000451A0C "\n@"
 *   insn=0x0000000000451A10 string=0x0000000000451A14 " "
 *   insn=0x0000000000451A24 string=0x0000000000451A28 "@"
 *   insn=0x0000000000451A3C string=0x0000000000451A40 "zt"
 *   insn=0x0000000000451A50 string=0x0000000000451A54 ""
 *   insn=0x0000000000451A5C string=0x0000000000451A60 ""
 *   insn=0x0000000000451A5C string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000451A80 string=0x0000000000451A84 ""
 *   insn=0x0000000000451A8C string=0x0000000000451A90 "h&B"
 *   insn=0x0000000000451A98 string=0x0000000000451AC8 "h"
 *   insn=0x0000000000451A9C string=0x0000000000451AA0 "h&B"
 *   insn=0x0000000000451AA0 string=0x0000000000451AA4 "\n|@"
 *   insn=0x0000000000451AA4 string=0x0000000000451AA8 ")"
 *   insn=0x0000000000451AA8 string=0x0000000000451AAC ")"
 *   insn=0x0000000000451AAC string=0x0000000000451AB0 "K\t"
 *   insn=0x0000000000451AB0 string=0x0000000000451AB4 "i"
 *   insn=0x0000000000451AB4 string=0x0000000000451AB8 "yi"
 *   insn=0x0000000000451ABC string=0x0000000000451AC0 "h"
 *   insn=0x0000000000451AC8 string=0x0000000000451ACC "\t"
 *   insn=0x0000000000451ACC string=0x0000000000451AD0 ""
 *   insn=0x0000000000451AD0 string=0x0000000000451AD4 ""
 *   insn=0x0000000000451AD4 string=0x0000000000451AD8 "}"
 *   insn=0x0000000000451ADC string=0x0000000000451AE0 "m"
 *   insn=0x0000000000451AE0 string=0x0000000000451CEC ""
 *   insn=0x0000000000451AE4 string=0x0000000000451AE8 "h"
 *   insn=0x0000000000451AE8 string=0x0000000000451AEC "\t"
 *   insn=0x0000000000451AEC string=0x0000000000451AF0 ""
 *   insn=0x0000000000451AF0 string=0x0000000000451AF4 ""
 *   insn=0x0000000000451AF4 string=0x0000000000451AF8 "}"
 *   insn=0x0000000000451AF8 string=0x0000000000451AFC "\t"
 *   insn=0x0000000000451AFC string=0x0000000000451B00 "("
 *   insn=0x0000000000451B04 string=0x0000000000451B08 "h"
 *   insn=0x0000000000451B10 string=0x0000000000451B14 "a"
 *   insn=0x0000000000451B24 string=0x0000000000451B28 "B"
 *   insn=0x0000000000451B28 string=0x0000000000451B2C ","
 *   insn=0x0000000000451B2C string=0x0000000000451B30 "@(!"
 *   insn=0x0000000000451B40 string=0x0000000000451B44 "@b"
 *   insn=0x0000000000451B48 string=0x0000000000451B4C "`"
 *   insn=0x0000000000451B50 string=0x0000000000451B54 "h"
 *   insn=0x0000000000451B50 string=0x00000000001F5730 "P'"
 *   insn=0x0000000000451B60 string=0x0000000000451B64 ")"
 *   insn=0x0000000000451B6C string=0x0000000000451B70 ""
 *   insn=0x0000000000451B74 string=0x0000000000451B78 "(!"
 *   insn=0x0000000000451B7C string=0x0000000000451B80 "4"
 *   insn=0x0000000000451B84 string=0x0000000000451B88 ""
 *   insn=0x0000000000451B98 string=0x0000000000451B9C "\t@"
 *   insn=0x0000000000451BA4 string=0x0000000000451BA8 ""
 *   insn=0x0000000000451BB8 string=0x0000000000451BBC "@"
 *   insn=0x0000000000451BCC string=0x0000000000451BD0 " "
 *   insn=0x0000000000451BE0 string=0x0000000000451BE4 "`"
 *   insn=0x0000000000451BE4 string=0x0000000000451BE8 "b"
 *   insn=0x0000000000451BEC string=0x0000000000451BF0 "l"
 *   insn=0x0000000000451BF0 string=0x00000000001F41A0 "P'"
 *   insn=0x0000000000451BFC string=0x0000000000451C00 "@"
 *   insn=0x0000000000451C10 string=0x0000000000451C14 "!"
 *   insn=0x0000000000451C3C string=0x0000000000451C40 "`"
 *   insn=0x0000000000451C48 string=0x0000000000451C4C ""
 *   insn=0x0000000000451C54 string=0x0000000000451C58 ">"
 *   insn=0x0000000000451C58 string=0x0000000000451C5C "4"
 *   insn=0x0000000000451C58 string=0x00000000001FB550 "0'"
 *   insn=0x0000000000451C60 string=0x0000000000451C64 ""
 *   insn=0x0000000000451C74 string=0x0000000000451C78 "\t@"
 *   insn=0x0000000000451C80 string=0x0000000000451C84 ""
 *   insn=0x0000000000451C94 string=0x0000000000451C98 "@"
 *   insn=0x0000000000451CB8 string=0x0000000000451CBC ""
 *   insn=0x0000000000451CC0 string=0x0000000000451CC4 "hf@"
 *   insn=0x0000000000451CC8 string=0x0000000000451CCC ""
 *   insn=0x0000000000451CCC string=0x0000000000451CD0 "h"
 *   insn=0x0000000000451CD8 string=0x0000000000451CDC ""
 *   insn=0x0000000000451CE0 string=0x0000000000451CE4 "\n"
 *   insn=0x0000000000451CE4 string=0x0000000000451CE8 "J"
 *   insn=0x0000000000451CF8 string=0x0000000000451CFC "hb"
 *   insn=0x0000000000451D0C string=0x0000000000451D40 "d"
 *   insn=0x0000000000451D44 string=0x0000000000451D48 "4"
 *   insn=0x0000000000451D4C string=0x0000000000451D50 ""
 *   insn=0x0000000000451D5C string=0x0000000000451D60 "\t@"
 *   insn=0x0000000000451D6C string=0x0000000000451D70 ""
 *   insn=0x0000000000451D7C string=0x0000000000451D80 "@"
 *   insn=0x0000000000451D90 string=0x0000000000451D94 "n"
 *   insn=0x0000000000451DA8 string=0x0000000000451DAC "`f@"
 *   insn=0x0000000000451DAC string=0x0000000000451DB0 ""
 *   insn=0x0000000000451DB0 string=0x0000000000451DB4 "A"
 *   insn=0x0000000000451DB4 string=0x0000000000451DB8 "h"
 *   insn=0x0000000000451DB8 string=0x0000000000451DBC "@"
 *   insn=0x0000000000451DBC string=0x0000000000451DC0 "h"
 *   insn=0x0000000000451DBC string=0x0000000000451DC4 "`"
 *   insn=0x0000000000451DC0 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000451DC4 string=0x0000000000451DC8 "@"
 *   insn=0x0000000000451DC8 string=0x0000000000451DCC "9"
 *   insn=0x0000000000451DC8 string=0x0000000000451DD0 "t\n@"
 *   insn=0x0000000000451DCC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000451DD0 string=0x0000000000451DD4 "4"
 *   insn=0x0000000000451DD8 string=0x0000000000451DDC ""
 *   insn=0x0000000000451DE8 string=0x0000000000451DEC "\t@"
 *   insn=0x0000000000451DF8 string=0x0000000000451DFC ""
 *   insn=0x0000000000451E08 string=0x0000000000451E0C "@"
 *   insn=0x0000000000451E20 string=0x0000000000451E24 "#"
 *   insn=0x0000000000451E2C string=0x0000000000451E30 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkeletonInstance::Draw(
        Caver::SkeletonInstance *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  bool v6; // w1
  __int64 v7; // x8
  __int64 v8; // x23
  __int64 v9; // x24
  __int64 result; // x0
  int *v11; // x8
  __int64 v12; // x23
  __int64 v13; // x24
  __int64 v14; // x25
  __int64 v15; // x27
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x8
  __int128 v19; // [xsp+1E0h] [xbp-190h] BYREF
  Caver::MeshInstance *v20; // [xsp+1F0h] [xbp-180h] BYREF
  _QWORD *v21; // [xsp+1F8h] [xbp-178h]
  float v22[16]; // [xsp+200h] [xbp-170h] BYREF
  float v23[16]; // [xsp+240h] [xbp-130h] BYREF
  __int128 v24; // [xsp+280h] [xbp-F0h] BYREF
  __int128 v25; // [xsp+290h] [xbp-E0h]
  __int128 v26; // [xsp+2A0h] [xbp-D0h]
  __int128 v27; // [xsp+2B0h] [xbp-C0h]
  __int128 v28; // [xsp+2C0h] [xbp-B0h] BYREF
  __int128 v29; // [xsp+2D0h] [xbp-A0h]
  __int128 v30; // [xsp+2E0h] [xbp-90h]
  __int128 v31; // [xsp+2F0h] [xbp-80h]
  __int64 v32; // [xsp+308h] [xbp-68h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::RenderingContext::SetLightingEnabled(a2, 1);
  Caver::MeshPrimitives::Cube((__int64 *)&v20, (Caver::MeshPrimitives *)((char *)&dword_0 + 1), v6);
  LODWORD(v7) = **(_DWORD **)this;
  if ( (int)v7 >= 1 )
  {
    v8 = 0;
    v9 = 92;
    do
    {
      *(float *)&v19 = (float)(int)v8 / (float)(v7 - 1);
      *((float *)&v19 + 1) = 1.0 - *(float *)&v19;
      *((_QWORD *)&v19 + 1) = 0;
      Caver::Vector4::Normalize((Caver::Vector4 *)&v19);
      HIDWORD(v19) = 1065353216;
      if ( !*(_DWORD *)a2 )
      {
        glMaterialfv();
        glMaterialfv();
      }
      C_Matrix4Mul((const float *)a3, (const float *)(*((_QWORD *)this + 2) + v9), (float *)&v28);
      v24 = xmmword_583490;
      v25 = xmmword_5837E0;
      v26 = xmmword_5837F0;
      v27 = xmmword_595470;
      C_Matrix4Mul((const float *)&v28, (const float *)&v24, (float *)&v28);
      v24 = xmmword_595480;
      v25 = xmmword_5837E0;
      v26 = xmmword_5837F0;
      v27 = xmmword_583800;
      C_Matrix4Mul((const float *)&v28, (const float *)&v24, (float *)&v28);
      Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)&v28);
      Caver::MeshInstance::Draw(v20, a2);
      ++v8;
      v9 += 220;
      v7 = **(int **)this;
    }
    while ( v8 < v7 );
  }
  Caver::RenderingContext::SetLightingEnabled(a2, 0);
  v30 = xmmword_6E9F10;
  v31 = xmmword_6E9F20;
  v28 = Caver::Matrix4::identityMatrix;
  v29 = xmmword_6E9F00;
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)&v28);
  LODWORD(v28) = -1;
  result = Caver::RenderingContext::SetColor(a2, (const Caver::Color *)&v28);
  v11 = *(int **)this;
  if ( **(int **)this >= 1 )
  {
    v12 = 0;
    v13 = 8;
    v14 = 92;
    do
    {
      v15 = *(int *)(*((_QWORD *)v11 + 1) + v13);
      if ( (v15 & 0x80000000) == 0 )
      {
        C_Matrix4Mul((const float *)a3, (const float *)(*((_QWORD *)this + 2) + v14), v23);
        v19 = xmmword_583800;
        C_Matrix4Vector4Mul(v23, (const float *)&v19, (float *)&v24);
        v28 = v24;
        C_Matrix4Mul((const float *)a3, (const float *)(*((_QWORD *)this + 2) + 220 * v15 + 92), v22);
        v19 = xmmword_583800;
        C_Matrix4Vector4Mul(v22, (const float *)&v19, (float *)&v24);
        v29 = v24;
        Caver::RenderingContext::SetVertexAttribPointer();
        result = Caver::RenderingContext::DrawArrays(a2, 1, 0, 2);
        v11 = *(int **)this;
      }
      ++v12;
      v13 += 144;
      v14 += 220;
    }
    while ( v12 < *v11 );
  }
  v16 = v21;
  if ( v21 )
  {
    v17 = v21[1] - 1LL;
    v21[1] = v17;
    if ( !v17 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
      v18 = v16[2] - 1LL;
      v16[2] = v18;
      if ( !v18 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
    }
  }
  return result;
}

