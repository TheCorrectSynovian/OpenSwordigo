/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A36A4
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent6UpdateEf
 * Demangled: Caver::MagicParticleEmitterComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FA970  Caver::MagicParticleEmitterComponent::Update(float)
 *
 * Callees: 9
 *   0x00000000001F3B00  Caver::ParticleEmitterComponent::RandomParticleType(void)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FA970  Caver::MagicParticleEmitterComponent::Update(float)
 *   0x00000000001FB550  Caver::ParticleSystem::AddParticle(Caver::Particle const&)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000002A36C8 string=0x00000000002A36CC "V"
 *   insn=0x00000000002A36D8 string=0x00000000002A36DC "a"
 *   insn=0x00000000002A36DC string=0x00000000002A36E0 "("
 *   insn=0x00000000002A36E0 string=0x00000000002A36E4 ""
 *   insn=0x00000000002A36E0 string=0x00000000005895F8 "\n"
 *   insn=0x00000000002A36E4 string=0x00000000002A36E8 " ( "
 *   insn=0x00000000002A36E8 string=0x00000000002A36EC "`"
 *   insn=0x00000000002A36F0 string=0x00000000002A36F4 "k"
 *   insn=0x00000000002A36F4 string=0x00000000002A36F8 "\t"
 *   insn=0x00000000002A36F8 string=0x00000000002A36FC "!"
 *   insn=0x00000000002A36FC string=0x00000000002A3700 "("
 *   insn=0x00000000002A3700 string=0x00000000002A3704 "\t"
 *   insn=0x00000000002A3700 string=0x00000000005895FC "\n"
 *   insn=0x00000000002A3704 string=0x00000000002A3708 "("
 *   insn=0x00000000002A3710 string=0x00000000002A3714 ""
 *   insn=0x00000000002A3718 string=0x00000000002A371C "\n"
 *   insn=0x00000000002A371C string=0x00000000002A3720 "("
 *   insn=0x00000000002A3724 string=0x00000000002A3728 "\tC"
 *   insn=0x00000000002A372C string=0x00000000002A3730 "t""
 *   insn=0x00000000002A3738 string=0x00000000002A373C ""
 *   insn=0x00000000002A3748 string=0x00000000002A374C "`"
 *   insn=0x00000000002A3770 string=0x00000000001F3B00 "P'"
 *   insn=0x00000000002A3778 string=0x00000000001FCE30 "0'"
 *   insn=0x00000000002A3788 string=0x00000000002A378C " "
 *   insn=0x00000000002A379C string=0x00000000002A37A0 "h"
 *   insn=0x00000000002A379C string=0x00000000001F5730 "P'"
 *   insn=0x00000000002A37A8 string=0x00000000002A37AC "y@"
 *   insn=0x00000000002A37B4 string=0x00000000002A37B8 "!"
 *   insn=0x00000000002A37B8 string=0x00000000002A37BC "!"
 *   insn=0x00000000002A37E4 string=0x00000000002A37E8 " "
 *   insn=0x00000000002A37FC string=0x00000000002A3800 "h"
 *   insn=0x00000000002A37FC string=0x00000000002A3894 "`"
 *   insn=0x00000000002A3804 string=0x00000000002A3808 "h"
 *   insn=0x00000000002A3808 string=0x00000000002A3834 "`"
 *   insn=0x00000000002A380C string=0x00000000002A3810 " "
 *   insn=0x00000000002A3814 string=0x00000000002A3818 "5"
 *   insn=0x00000000002A3818 string=0x00000000002A381C ""
 *   insn=0x00000000002A3828 string=0x00000000002A382C "h"
 *   insn=0x00000000002A3828 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002A383C string=0x00000000002A3840 ""
 *   insn=0x00000000002A3848 string=0x00000000002A384C "A_"
 *   insn=0x00000000002A384C string=0x00000000002A3850 "5"
 *   insn=0x00000000002A384C string=0x00000000001FB550 "0'"
 *   insn=0x00000000002A3854 string=0x00000000002A3858 ""
 *   insn=0x00000000002A3868 string=0x00000000002A386C "\t@"
 *   insn=0x00000000002A3874 string=0x00000000002A3878 ""
 *   insn=0x00000000002A3888 string=0x00000000002A388C "@"
 *   insn=0x00000000002A3898 string=0x00000000002A389C "j"
 *   insn=0x00000000002A38A8 string=0x00000000002A38AC "a"
 *   insn=0x00000000002A38AC string=0x00000000002A38D8 "~J"
 *   insn=0x00000000002A38D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A38DC string=0x00000000002A38E0 "5"
 *   insn=0x00000000002A38E4 string=0x00000000002A38E8 ""
 *   insn=0x00000000002A38F4 string=0x00000000002A38F8 "\t@"
 *   insn=0x00000000002A3904 string=0x00000000002A3908 ""
 *   insn=0x00000000002A3914 string=0x00000000002A3918 "@"
 *   insn=0x00000000002A3934 string=0x00000000001FA970 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicParticleEmitterComponent::Update(Caver::MagicParticleEmitterComponent *this, float a2)
{
  float v3; // s0
  float32x2_t v9; // d13
  Caver *v10; // x0
  Caver::Vector2 *v11; // x0
  float v12; // s0
  Caver *v13; // x0
  float32x2_t *v14; // x8
  float32x2_t v15; // d1
  int v16; // w0
  float v17; // s0
  Caver::MagicParticleEmitterComponent *v18; // x8
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  float32x2_t v22; // [xsp+28h] [xbp-C8h] BYREF
  __int128 v23; // [xsp+30h] [xbp-C0h]
  unsigned __int64 v24; // [xsp+40h] [xbp-B0h]
  unsigned __int64 v25; // [xsp+48h] [xbp-A8h]
  __int128 v26; // [xsp+50h] [xbp-A0h]
  __int128 v27; // [xsp+60h] [xbp-90h]
  int v28; // [xsp+70h] [xbp-80h]
  __int64 v29; // [xsp+78h] [xbp-78h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *((float *)this + 118) + a2;
  *((float *)this + 118) = v3;
  if ( v3 >= 0.005 )
  {
    __asm { FMOV            V12.2S, #7.5 }
    v9.n64_u64[0] = vdup_n_s32(0x420C0000u).n64_u64[0];
    while ( 1 )
    {
      *((float *)this + 118) = v3 + -0.005;
      v23 = 0u;
      v24 = 0;
      v25 = 0xFFFFFFFF00000000LL;
      v26 = xmmword_583800;
      v28 = 0;
      v27 = xmmword_589600;
      Caver::ParticleEmitterComponent::RandomParticleType(this);
      LODWORD(v23) = (_DWORD)v10;
      v11 = (Caver::Vector2 *)Caver::fastrandom(v10);
      v12 = (float)((float)(int)v11 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
      v13 = (Caver *)Caver::Vector2::FromAngle((__int64 *)&v22, v11, v12);
      v14 = (float32x2_t *)*((_QWORD *)this + 5);
      v15.n64_u64[0] = v14[14].n64_u64[0];
      LODWORD(v14) = v14[15].n64_u32[0];
      *(float32x2_t *)((char *)&v23 + 4) = vsub_f32(
                                             vadd_f32(v15, (float32x2_t)0x4200000041D00000LL),
                                             vmul_f32(v22, _D12));
      HIDWORD(v23) = (_DWORD)v14;
      v24 = vmul_f32(v22, v9).n64_u64[0];
      LODWORD(v25) = 0;
      v16 = Caver::fastrandom(v13);
      HIDWORD(v27) = 1056964608;
      v17 = (float)((float)v16 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
      *(float *)&v26 = v17;
      if ( (v23 & 0x80000000) == 0 )
        break;
LABEL_15:
      v3 = *((float *)this + 118);
      if ( v3 < 0.005 )
        return;
    }
    v18 = (Caver::MagicParticleEmitterComponent *)*((_QWORD *)this + 35);
    if ( (v18
       || (Caver::ComponentOutletBase::Connect((Caver::MagicParticleEmitterComponent *)((char *)this + 264), this),
           (v18 = (Caver::MagicParticleEmitterComponent *)*((_QWORD *)this + 35)) != 0))
      && v18 != this )
    {
      v19 = (_QWORD *)*((_QWORD *)v18 + 42);
      if ( !v19 )
        goto LABEL_11;
    }
    else
    {
      v19 = (_QWORD *)*((_QWORD *)this + 42);
      if ( !v19 )
      {
LABEL_11:
        Caver::ParticleSystem::AddParticle();
        if ( v19 )
        {
          v20 = v19[1] - 1LL;
          v19[1] = v20;
          if ( !v20 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
            v21 = v19[2] - 1LL;
            v19[2] = v21;
            if ( !v21 )
              (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
          }
        }
        goto LABEL_15;
      }
    }
    ++v19[1];
    goto LABEL_11;
  }
}

