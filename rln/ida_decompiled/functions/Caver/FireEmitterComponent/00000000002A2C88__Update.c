/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A2C88
 * Mangled: _ZN5Caver20FireEmitterComponent6UpdateEf
 * Demangled: Caver::FireEmitterComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FC710  Caver::FireEmitterComponent::Update(float)
 *
 * Callees: 9
 *   0x00000000001F3B00  Caver::ParticleEmitterComponent::RandomParticleType(void)
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F5990  Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8F10  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 118
 *   insn=0x00000000002A2CB0 string=0x00000000002A2CB4 "W"
 *   insn=0x00000000002A2CBC string=0x00000000002A2CC0 ""
 *   insn=0x00000000002A2CC4 string=0x00000000002A2CC8 "hN@"
 *   insn=0x00000000002A2CCC string=0x00000000002A2CD0 "`""
 *   insn=0x00000000002A2CCC string=0x00000000002A2CE0 "\t"
 *   insn=0x00000000002A2CD8 string=0x00000000002A2CDC "hN@"
 *   insn=0x00000000002A2CD8 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002A2CE0 string=0x00000000002A2CE4 "!5G"
 *   insn=0x00000000002A2CE0 string=0x0000000000583734 "o"
 *   insn=0x00000000002A2CE8 string=0x00000000002A2CEC "m"
 *   insn=0x00000000002A2CEC string=0x00000000002A2CF0 "H"
 *   insn=0x00000000002A2CEC string=0x00000000002A2DB8 "hB@"
 *   insn=0x00000000002A2CF0 string=0x00000000002A2CF4 "`"
 *   insn=0x00000000002A2CF4 string=0x00000000002A2CF8 "b"
 *   insn=0x00000000002A2CF8 string=0x00000000002A2CFC "d8 "
 *   insn=0x00000000002A2CFC string=0x00000000002A2D00 "B("
 *   insn=0x00000000002A2D04 string=0x00000000002A2D08 "A(!"
 *   insn=0x00000000002A2D10 string=0x00000000002A2D14 "c"
 *   insn=0x00000000002A2D14 string=0x00000000002A2D18 "Fh"
 *   insn=0x00000000002A2D18 string=0x00000000001FCE30 "0'"
 *   insn=0x00000000002A2D20 string=0x00000000002A2D24 ""
 *   insn=0x00000000002A2D24 string=0x00000000002A2D28 "\t"
 *   insn=0x00000000002A2D28 string=0x00000000002A2D2C ""
 *   insn=0x00000000002A2D30 string=0x00000000002A2D34 "\n"
 *   insn=0x00000000002A2D38 string=0x00000000002A2D3C "!"
 *   insn=0x00000000002A2D48 string=0x00000000002A2D4C "`"
 *   insn=0x00000000002A2D4C string=0x00000000002A2D50 "8h"
 *   insn=0x00000000002A2D58 string=0x00000000002A2D5C "hN@"
 *   insn=0x00000000002A2D60 string=0x00000000002A2D64 " "
 *   insn=0x00000000002A2D6C string=0x00000000002A2D70 "`"
 *   insn=0x00000000002A2D74 string=0x00000000002A2D78 "`""
 *   insn=0x00000000002A2D74 string=0x00000000002A2DA8 "`"
 *   insn=0x00000000002A2D7C string=0x00000000002A2D80 "XS"
 *   insn=0x00000000002A2D80 string=0x00000000002A2D84 "hN@"
 *   insn=0x00000000002A2D84 string=0x00000000002A2D88 ""
 *   insn=0x00000000002A2D94 string=0x00000000002A2D98 "aL!"
 *   insn=0x00000000002A2D98 string=0x00000000002A2D9C "A!"
 *   insn=0x00000000002A2D9C string=0x00000000002A2DA0 " ( "
 *   insn=0x00000000002A2DA0 string=0x00000000002A2DA4 "`"
 *   insn=0x00000000002A2DBC string=0x00000000002A2DC0 "`"
 *   insn=0x00000000002A2DBC string=0x00000000002A2DD4 "`"
 *   insn=0x00000000002A2DC4 string=0x00000000002A2DC8 "FS"
 *   insn=0x00000000002A2DC8 string=0x00000000002A2DCC "hB@"
 *   insn=0x00000000002A2DD4 string=0x00000000002A2DD8 "a"
 *   insn=0x00000000002A2DE0 string=0x00000000002A2DE4 "`"
 *   insn=0x00000000002A2DE4 string=0x00000000002A2DE8 ""
 *   insn=0x00000000002A2DE8 string=0x00000000002A2DEC "t"
 *   insn=0x00000000002A2DEC string=0x00000000002A2DF0 "a"
 *   insn=0x00000000002A2DF4 string=0x00000000002A2DF8 "v"
 *   insn=0x00000000002A2E08 string=0x00000000002A2E0C "h"
 *   insn=0x00000000002A2E08 string=0x00000000001F5990 "P'"
 *   insn=0x00000000002A2E0C string=0x00000000002A2E10 "h"
 *   insn=0x00000000002A2E14 string=0x00000000002A2E18 "k"
 *   insn=0x00000000002A2E18 string=0x00000000002A2E1C "\ny@"
 *   insn=0x00000000002A2E28 string=0x00000000002A2E2C "("
 *   insn=0x00000000002A2E38 string=0x00000000002A2E3C "a"
 *   insn=0x00000000002A2E40 string=0x00000000002A2E44 "e"
 *   insn=0x00000000002A2E44 string=0x00000000002A2E48 "c"
 *   insn=0x00000000002A2E50 string=0x00000000002A2E54 "`) "
 *   insn=0x00000000002A2E58 string=0x00000000001F41A0 "P'"
 *   insn=0x00000000002A2E60 string=0x00000000002A2E64 "Kx"
 *   insn=0x00000000002A2E64 string=0x00000000002A2E68 "`"
 *   insn=0x00000000002A2E68 string=0x00000000002A2E6C "a"
 *   insn=0x00000000002A2E74 string=0x00000000002A2E78 "("
 *   insn=0x00000000002A2E78 string=0x00000000002A2E7C ""
 *   insn=0x00000000002A2E7C string=0x00000000002A2E80 ""
 *   insn=0x00000000002A2E84 string=0x00000000002A2E88 ""
 *   insn=0x00000000002A2E8C string=0x00000000002A2E90 "\t"
 *   insn=0x00000000002A2E90 string=0x00000000002A2E94 "."
 *   insn=0x00000000002A2E94 string=0x00000000002A2E98 "\t"
 *   insn=0x00000000002A2E98 string=0x00000000002A2E9C ","
 *   insn=0x00000000002A2E9C string=0x00000000002A2EA0 "\t"
 *   insn=0x00000000002A2EA4 string=0x00000000002A2EA8 """
 *   insn=0x00000000002A2EA8 string=0x00000000002A2EAC "J)("
 *   insn=0x00000000002A2EAC string=0x00000000002A2EB0 "t"
 *   insn=0x00000000002A2EB0 string=0x00000000002A2EB4 ""
 *   insn=0x00000000002A2EBC string=0x00000000002A2EC0 "b"
 *   insn=0x00000000002A2EC4 string=0x00000000002A2EC8 "`"
 *   insn=0x00000000002A2ED4 string=0x00000000002A2ED8 "h"
 *   insn=0x00000000002A2F04 string=0x00000000002A2F08 "h"
 *   insn=0x00000000002A2F08 string=0x00000000002A2F0C "!"
 *   insn=0x00000000002A2F1C string=0x00000000002A2F20 " "
 *   insn=0x00000000002A2F30 string=0x00000000002A2F34 "uB@"
 *   insn=0x00000000002A2F38 string=0x00000000002A2F3C " "
 *   insn=0x00000000002A2F48 string=0x00000000002A2F4C "\t "
 *   insn=0x00000000002A2F50 string=0x00000000002A2F54 "u"
 *   insn=0x00000000002A2F60 string=0x00000000002A2F64 "uB@"
 *   insn=0x00000000002A2F78 string=0x00000000002A2F7C "`B@"
 *   insn=0x00000000002A2F80 string=0x00000000001F3B00 "P'"
 *   insn=0x00000000002A2F84 string=0x00000000002A2F88 "A)("
 *   insn=0x00000000002A2F90 string=0x00000000002A2F94 " "
 *   insn=0x00000000002A2FAC string=0x00000000002A2FB0 " "
 *   insn=0x00000000002A2FD4 string=0x00000000002A2FD8 " "
 *   insn=0x00000000002A2FE0 string=0x00000000002A2FE4 "@b"
 *   insn=0x00000000002A2FF8 string=0x00000000002A2FFC "!"
 *   insn=0x00000000002A300C string=0x00000000002A3010 "B"
 *   insn=0x00000000002A3014 string=0x00000000002A3018 "c"
 *   insn=0x00000000002A3024 string=0x00000000002A3028 "H"
 *   insn=0x00000000002A3028 string=0x00000000002A302C "!"
 *   insn=0x00000000002A3030 string=0x00000000002A3034 "i"
 *   insn=0x00000000002A3040 string=0x00000000002A3044 ""
 *   insn=0x00000000002A3044 string=0x00000000002A3048 "?"
 *   insn=0x00000000002A3048 string=0x00000000002A304C ""
 *   insn=0x00000000002A304C string=0x00000000002A3050 ")"
 *   insn=0x00000000002A3050 string=0x00000000002A3054 "_"
 *   insn=0x00000000002A3058 string=0x00000000002A305C "H"
 *   insn=0x00000000002A3064 string=0x00000000002A3068 "i"
 *   insn=0x00000000002A3070 string=0x00000000002A3074 "a"
 *   insn=0x00000000002A3090 string=0x00000000001F8F10 "0'"
 *   insn=0x00000000002A3098 string=0x00000000002A309C "eg"
 *   insn=0x00000000002A3098 string=0x00000000002A30F8 "`"
 *   insn=0x00000000002A30AC string=0x00000000002A30B0 " "
 *   insn=0x00000000002A30C0 string=0x00000000002A30C4 "@ "
 *   insn=0x00000000002A30C8 string=0x00000000002A30CC "Yg"
 *   insn=0x00000000002A30D8 string=0x00000000002A30DC " "
 *   insn=0x00000000002A30F8 string=0x00000000002A30FC "a"
 *   insn=0x00000000002A3114 string=0x00000000002A3144 "cL"
 *   insn=0x00000000002A3144 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireEmitterComponent::Update(Caver::FireEmitterComponent *this, float a2)
{
  Caver::FireEmitterComponent *v2; // x19
  __int64 v4; // x8
  float v5; // s0
  float v6; // s3
  float v7; // s2
  Caver *v8; // x0
  int v9; // w0
  float v10; // s1
  float v11; // s0
  float v12; // s1
  float v13; // s1
  float v14; // s0
  float v15; // s8
  float32x2_t v16; // d9
  float v17; // s11
  float v18; // s10
  Caver *v19; // x0
  Caver::FloatColor *v20; // x0
  Caver *v21; // x0
  float v22; // s0
  float v23; // s1
  float v24; // s10
  int v30; // s2
  Caver *v31; // x0
  unsigned int v32; // w21
  unsigned __int64 v33; // d0
  Caver *v34; // x0
  float v35; // s8
  float32x2_t v36; // d0
  int v37; // w0
  Caver::ParticleEmitterComponent *v38; // x21
  float v39; // s8
  Caver::ParticleEmitterComponent *v40; // x0
  Caver *v41; // x0
  int v42; // w22
  Caver *v43; // x0
  Caver *v44; // x0
  float v45; // s8
  int v46; // w0
  unsigned int v47; // s2
  unsigned int v48; // s3
  unsigned int v49; // s1
  unsigned int v50; // s4
  float v51; // s0
  int v52; // w8
  float v53; // s4
  int v54; // w9
  float v55; // s0
  char v56; // w8
  char v57; // w9
  Caver *v58; // x21
  Caver *v59; // x0
  float v60; // s0
  int v61; // [xsp+10h] [xbp-E0h]
  int v62; // [xsp+20h] [xbp-D0h]
  float32x2_t v63; // [xsp+20h] [xbp-D0h]
  float32x2_t v64; // [xsp+20h] [xbp-D0h]
  _BYTE v65[8]; // [xsp+38h] [xbp-B8h] BYREF
  float v66; // [xsp+40h] [xbp-B0h] BYREF
  __int64 v67; // [xsp+44h] [xbp-ACh]
  __int64 v68; // [xsp+50h] [xbp-A0h] BYREF
  float v69; // [xsp+58h] [xbp-98h]
  char v70; // [xsp+60h] [xbp-90h]
  char v71; // [xsp+61h] [xbp-8Fh]
  char v72; // [xsp+62h] [xbp-8Eh]
  char v73; // [xsp+63h] [xbp-8Dh]
  __int64 v74; // [xsp+68h] [xbp-88h]

  v2 = this;
  v74 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_QWORD *)this + 19);
  if ( !v4 )
  {
    this = (Caver::FireEmitterComponent *)Caver::ComponentOutletBase::Connect(
                                            (Caver::FireEmitterComponent *)((char *)this + 136),
                                            this);
    v4 = *((_QWORD *)v2 + 19);
  }
  if ( a2 > 0.001 && v4 )
  {
    v5 = *((float *)v2 + 57);
    v6 = *((float *)v2 + 58);
    v7 = *((float *)v2 + 59) * a2;
    if ( fabsf(v6 - v5) >= (float)(v7 + 0.001) )
    {
      v10 = 1.0;
      if ( (float)(v6 - v5) < 0.0 )
        v10 = -1.0;
      *((float *)v2 + 57) = (float)(v7 * v10) + v5;
    }
    else
    {
      *((float *)v2 + 57) = v6;
      v8 = (Caver *)Caver::fastrandom(this);
      *((float *)v2 + 58) = (float)((float)((float)(int)v8 / (float)Caver::FASTRANDOM_MAX) * 0.4) + 0.6;
      v9 = Caver::fastrandom(v8);
      v4 = *((_QWORD *)v2 + 19);
      *((float *)v2 + 59) = (float)((float)((float)v9 / (float)Caver::FASTRANDOM_MAX) * 0.6) + 0.4;
      if ( !v4 )
      {
        Caver::ComponentOutletBase::Connect((Caver::FireEmitterComponent *)((char *)v2 + 136), v2);
        v4 = *((_QWORD *)v2 + 19);
      }
    }
    v11 = *((float *)v2 + 56);
    v12 = *((float *)v2 + 57);
    *(_BYTE *)(v4 + 144) = 0;
    *(float *)(v4 + 116) = v11 * v12;
  }
  if ( *((_QWORD *)v2 + 16)
    || (Caver::ComponentOutletBase::Connect((Caver::FireEmitterComponent *)((char *)v2 + 112), v2), *((_QWORD *)v2 + 16)) )
  {
    v13 = *((float *)v2 + 40);
    v14 = *((float *)v2 + 55) + a2;
    *((float *)v2 + 55) = v14;
    if ( v14 > v13 )
    {
      Caver::Vector2::Vector2((Caver::Vector2 *)&v66, (Caver::FireEmitterComponent *)((char *)v2 + 180));
      Caver::SceneObject::WorldPointFromLocalPoint();
      v15 = *((float *)v2 + 47);
      v16.n64_u64[0] = v68;
      v17 = *((float *)v2 + 52);
      v18 = *(float *)(*((_QWORD *)v2 + 5) + 120LL);
      v20 = (Caver::FloatColor *)Caver::fastrandom(v19);
      Caver::FloatColor::FromHSLA(
        &v68,
        v20,
        v17 + (float)((float)((float)(int)v20 / (float)Caver::FASTRANDOM_MAX) * 0.05),
        *((float *)v2 + 53),
        *((float *)v2 + 54),
        *((float *)v2 + 51));
      Caver::Color::FromFloatColor();
      v22 = *((float *)v2 + 55);
      v23 = *((float *)v2 + 40);
      if ( v22 > v23 )
      {
        v24 = v18 + v15;
        __asm { FMOV            V11.2S, #-1.0 }
        do
        {
          v30 = *((_DWORD *)v2 + 42);
          *((float *)v2 + 55) = v22 - v23;
          v62 = v30;
          v31 = (Caver *)Caver::fastrandom(v21);
          v32 = (unsigned int)v31;
          v61 = Caver::FASTRANDOM_MAX;
          LODWORD(v33) = v62;
          HIDWORD(v33) = *((_DWORD *)v2 + 43);
          v63.n64_u64[0] = v33;
          v34 = (Caver *)Caver::fastrandom(v31);
          v35 = *((float *)v2 + 44);
          v36.n64_u64[0] = vdiv_f32(
                             vcvt_f32_s32((int32x2_t)__PAIR64__((unsigned int)v34, v32)),
                             vcvt_f32_s32((int32x2_t)__PAIR64__(Caver::FASTRANDOM_MAX, v61))).n64_u64[0];
          v64.n64_u64[0] = vmul_f32(v63, vadd_f32(vadd_f32(v36, v36), _D11)).n64_u64[0];
          v37 = Caver::fastrandom(v34);
          v38 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v2 + 16);
          v39 = v35
              * (float)((float)((float)((float)v37 / (float)Caver::FASTRANDOM_MAX)
                              + (float)((float)v37 / (float)Caver::FASTRANDOM_MAX))
                      + -1.0);
          v40 = v38;
          if ( !v38 )
          {
            Caver::ComponentOutletBase::Connect((Caver::FireEmitterComponent *)((char *)v2 + 112), v2);
            v38 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v2 + 16);
            v40 = v38;
            if ( !v38 )
            {
              Caver::ComponentOutletBase::Connect((Caver::FireEmitterComponent *)((char *)v2 + 112), v2);
              v40 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v2 + 16);
            }
          }
          Caver::ParticleEmitterComponent::RandomParticleType(v40);
          v42 = (int)v41;
          v69 = v24 + v39;
          v68 = vadd_f32(v16, v64).n64_i64[0];
          v43 = (Caver *)Caver::fastrandom(v41);
          v67 = 1108869120;
          v66 = vmuls_n_f32((float)((float)(int)v43 / (float)Caver::FASTRANDOM_MAX) * -2.0, v64.n64_f32[0]);
          v44 = (Caver *)Caver::fastrandom(v43);
          v45 = (float)((float)(int)v44 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
          v46 = Caver::fastrandom(v44);
          LOBYTE(v47) = v70;
          LOBYTE(v48) = v71;
          *(float *)&v49 = (float)Caver::FASTRANDOM_MAX;
          LOBYTE(v50) = v72;
          LOBYTE(v49) = v73;
          v51 = (float)((float)((float)v46 / (float)Caver::FASTRANDOM_MAX) * 0.2) + 0.6;
          v52 = (int)(float)(v51 * (float)v47);
          v53 = v51 * (float)v50;
          v54 = (int)(float)(v51 * (float)v48);
          v55 = v51 * (float)v49;
          if ( v52 >= 255 )
            LOBYTE(v52) = -1;
          if ( v54 >= 255 )
            LOBYTE(v54) = -1;
          v65[0] = v52;
          if ( (int)v53 >= 255 )
            v56 = -1;
          else
            v56 = (int)v53;
          v65[1] = v54;
          if ( (int)v55 >= 255 )
            v57 = -1;
          else
            v57 = (int)v55;
          v65[2] = v56;
          v65[3] = v57;
          v21 = (Caver *)Caver::ParticleEmitterComponent::AddParticle(
                           v38,
                           v42,
                           (const Caver::Vector3 *)&v68,
                           (const Caver::Vector3 *)&v66,
                           v45,
                           (const Caver::Color *)v65,
                           *((float *)v2 + 41));
          v58 = v21;
          if ( v21 )
          {
            v59 = (Caver *)Caver::fastrandom(v21);
            *((float *)v58 + 11) = *((float *)v58 + 11)
                                 * (float)((float)((float)((float)(int)v59 / (float)Caver::FASTRANDOM_MAX) * 0.4) + 0.8);
            v21 = (Caver *)Caver::fastrandom(v59);
            v60 = (float)((float)((float)(int)v21 / (float)Caver::FASTRANDOM_MAX) + -0.5) * 6.28318531;
            *((float *)v58 + 9) = v60;
          }
          v22 = *((float *)v2 + 55);
          v23 = *((float *)v2 + 40);
        }
        while ( v22 > v23 );
      }
    }
  }
}

