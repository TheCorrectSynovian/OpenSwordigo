/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282B80
 * Mangled: _ZN5Caver19FireBreathComponent6UpdateEf
 * Demangled: Caver::FireBreathComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001F5D90  Caver::FireBreathComponent::Update(float)
 *
 * Callees: 8
 *   0x00000000001F3B00  Caver::ParticleEmitterComponent::RandomParticleType(void)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8F10  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000201A20  Caver::SoundEffectComponent::IsPlaying(void)
 *
 * Referenced strings: 55
 *   insn=0x0000000000282BA4 string=0x0000000000282BA8 "X"
 *   insn=0x0000000000282BA8 string=0x0000000000282BAC ""
 *   insn=0x0000000000282BB0 string=0x0000000000282BB4 ""
 *   insn=0x0000000000282BB8 string=0x0000000000282BBC "hj@"
 *   insn=0x0000000000282BC0 string=0x0000000000282BC4 "`"
 *   insn=0x0000000000282BC0 string=0x0000000000282BD8 "`"
 *   insn=0x0000000000282BCC string=0x0000000000282BD0 "hj@"
 *   insn=0x0000000000282BCC string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000282BD4 string=0x0000000000282CEC "`v@"
 *   insn=0x0000000000282BD8 string=0x0000000000282BDC "("
 *   insn=0x0000000000282BDC string=0x0000000000282BE0 "\t"
 *   insn=0x0000000000282BE4 string=0x0000000000282BE8 "`"
 *   insn=0x0000000000282BF0 string=0x0000000000282BF4 "("
 *   insn=0x0000000000282BF4 string=0x0000000000282BF8 "*"
 *   insn=0x0000000000282BF8 string=0x0000000000282BFC ""
 *   insn=0x0000000000282C00 string=0x0000000000282C04 "\n"
 *   insn=0x0000000000282C04 string=0x0000000000282C08 "K}I"
 *   insn=0x0000000000282C08 string=0x0000000000282C0C "l"
 *   insn=0x0000000000282C0C string=0x0000000000282C10 "9"
 *   insn=0x0000000000282C14 string=0x0000000000282C18 "t"
 *   insn=0x0000000000282C18 string=0x0000000000282C1C "u"
 *   insn=0x0000000000282C1C string=0x0000000000282C20 "-"
 *   insn=0x0000000000282C20 string=0x0000000000282C24 ""
 *   insn=0x0000000000282C30 string=0x0000000000282C34 "`"
 *   insn=0x0000000000282C38 string=0x0000000000282C3C "vj@"
 *   insn=0x0000000000282C40 string=0x0000000000282C44 "v"
 *   insn=0x0000000000282C50 string=0x0000000000282C54 "vj@"
 *   insn=0x0000000000282C68 string=0x0000000000282C6C "`j@"
 *   insn=0x0000000000282C70 string=0x0000000000282C74 "h"
 *   insn=0x0000000000282C70 string=0x00000000001F3B00 "P'"
 *   insn=0x0000000000282C78 string=0x0000000000282C7C "\t9@"
 *   insn=0x0000000000282C7C string=0x0000000000282C80 "y@"
 *   insn=0x0000000000282C88 string=0x0000000000282C8C "`BH"
 *   insn=0x0000000000282C8C string=0x0000000000282C90 "a"
 *   insn=0x0000000000282C94 string=0x0000000000282C98 "!+"
 *   insn=0x0000000000282CA0 string=0x0000000000282CA4 "c"
 *   insn=0x0000000000282CA4 string=0x0000000000282CA8 " "
 *   insn=0x0000000000282CA4 string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000282CB8 string=0x0000000000282CBC " "
 *   insn=0x0000000000282CDC string=0x0000000000282CE0 "`"
 *   insn=0x0000000000282CDC string=0x00000000001F8F10 "0'"
 *   insn=0x0000000000282CF0 string=0x0000000000282CF4 "`b"
 *   insn=0x0000000000282CF0 string=0x0000000000282D08 "F"
 *   insn=0x0000000000282CF8 string=0x0000000000282CFC "y"
 *   insn=0x0000000000282CFC string=0x0000000000282D00 "`v@"
 *   insn=0x0000000000282D00 string=0x0000000000282D04 "@"
 *   insn=0x0000000000282D04 string=0x0000000000282D2C ""
 *   insn=0x0000000000282D0C string=0x0000000000282D10 "`v@"
 *   insn=0x0000000000282D14 string=0x0000000000282D18 "`b"
 *   insn=0x0000000000282D1C string=0x0000000000282D20 "p"
 *   insn=0x0000000000282D20 string=0x0000000000282D24 "`v@"
 *   insn=0x0000000000282D28 string=0x00000000001F4FA0 "P'"
 *   insn=0x0000000000282D34 string=0x0000000000282D38 "a"
 *   insn=0x0000000000282D38 string=0x0000000000282D64 "["
 *   insn=0x0000000000282D64 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireBreathComponent::Update(Caver::FireBreathComponent *this, float a2)
{
  float v4; // s0
  float32x2_t v5; // d13
  Caver::ParticleEmitterComponent *v6; // x22
  Caver::ParticleEmitterComponent *v7; // x0
  __int64 v8; // x8
  Caver *v9; // x0
  int v10; // w23
  __int64 v11; // x9
  float v12; // s1
  float v13; // s0
  Caver::SoundEffectComponent *v14; // x0
  char v15; // w0
  Caver::SoundEffectComponent *v16; // x0
  unsigned __int64 v17; // [xsp+0h] [xbp-A0h] BYREF
  float v18; // [xsp+8h] [xbp-98h]
  __int64 v19; // [xsp+10h] [xbp-90h] BYREF
  int v20; // [xsp+18h] [xbp-88h]
  _BYTE v21[8]; // [xsp+20h] [xbp-80h] BYREF
  __int64 v22; // [xsp+28h] [xbp-78h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_QWORD *)this + 26)
    || (Caver::ComponentOutletBase::Connect((Caver::FireBreathComponent *)((char *)this + 192), this),
        *((_QWORD *)this + 26)) )
  {
    v4 = *((float *)this + 64) + a2;
    *((float *)this + 64) = v4;
    if ( v4 > 0.05 )
    {
      v5.n64_u64[0] = vdup_n_s32(0x43960000u).n64_u64[0];
      do
      {
        *((float *)this + 64) = v4 + -0.05;
        Caver::Color::FromFloatColor();
        v6 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 26);
        v7 = v6;
        if ( !v6 )
        {
          Caver::ComponentOutletBase::Connect((Caver::FireBreathComponent *)((char *)this + 192), this);
          v6 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 26);
          v7 = v6;
          if ( !v6 )
          {
            Caver::ComponentOutletBase::Connect((Caver::FireBreathComponent *)((char *)this + 192), this);
            v7 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 26);
          }
        }
        Caver::ParticleEmitterComponent::RandomParticleType(v7);
        v8 = *((_QWORD *)this + 5);
        v10 = (int)v9;
        v11 = *(_QWORD *)(v8 + 112);
        LODWORD(v8) = *(_DWORD *)(v8 + 120);
        v19 = v11;
        v20 = v8;
        v12 = *((float *)this + 35) * 300.0;
        v17 = vmul_f32(*(float32x2_t *)((char *)this + 132), v5).n64_u64[0];
        v18 = v12;
        v13 = (float)((float)(int)Caver::fastrandom(v9) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
        Caver::ParticleEmitterComponent::AddParticle(
          v6,
          v10,
          (const Caver::Vector3 *)&v19,
          (const Caver::Vector3 *)&v17,
          v13,
          (const Caver::Color *)v21,
          0.5);
        v4 = *((float *)this + 64);
      }
      while ( v4 > 0.05 );
    }
  }
  v14 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 29);
  if ( v14
    || (Caver::ComponentOutletBase::Connect((Caver::FireBreathComponent *)((char *)this + 216), this),
        (v14 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 29)) != 0) )
  {
    Caver::SoundEffectComponent::IsPlaying(v14);
    if ( (v15 & 1) == 0 )
    {
      v16 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 29);
      if ( !v16 )
      {
        Caver::ComponentOutletBase::Connect((Caver::FireBreathComponent *)((char *)this + 216), this);
        v16 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 29);
      }
      Caver::SoundEffectComponent::Play(v16);
    }
  }
}

