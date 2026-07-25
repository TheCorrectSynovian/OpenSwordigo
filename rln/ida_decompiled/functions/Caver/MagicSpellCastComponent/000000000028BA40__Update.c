/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BA40
 * Mangled: _ZN5Caver23MagicSpellCastComponent6UpdateEf
 * Demangled: Caver::MagicSpellCastComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FF8F0  Caver::MagicSpellCastComponent::Update(float)
 *
 * Callees: 8
 *   0x00000000001F3B00  Caver::ParticleEmitterComponent::RandomParticleType(void)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8F10  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x0000000000201A20  Caver::SoundEffectComponent::IsPlaying(void)
 *
 * Referenced strings: 60
 *   insn=0x000000000028BA68 string=0x000000000028BA6C "W"
 *   insn=0x000000000028BA74 string=0x000000000028BA78 ""
 *   insn=0x000000000028BA7C string=0x000000000028BA80 "`N@"
 *   insn=0x000000000028BA84 string=0x000000000028BA88 "`""
 *   insn=0x000000000028BA90 string=0x000000000028BA94 "`N@"
 *   insn=0x000000000028BA90 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000028BA94 string=0x000000000028BA98 "@"
 *   insn=0x000000000028BA98 string=0x000000000028BAC0 "hB@"
 *   insn=0x000000000028BAA0 string=0x000000000028BAA4 "`N@"
 *   insn=0x000000000028BAA8 string=0x000000000028BAAC "`""
 *   insn=0x000000000028BAA8 string=0x000000000028BABC "9"
 *   insn=0x000000000028BAB0 string=0x000000000028BAB4 ""
 *   insn=0x000000000028BAB4 string=0x000000000028BAB8 "`N@"
 *   insn=0x000000000028BABC string=0x00000000001F4FA0 "P'"
 *   insn=0x000000000028BAC4 string=0x000000000028BAC8 "`"
 *   insn=0x000000000028BAC4 string=0x000000000028BADC "`"
 *   insn=0x000000000028BAD0 string=0x000000000028BAD4 "hB@"
 *   insn=0x000000000028BAD4 string=0x000000000028BAD8 ""
 *   insn=0x000000000028BAE8 string=0x000000000028BAEC "`"
 *   insn=0x000000000028BAF4 string=0x000000000028BAF8 ""
 *   insn=0x000000000028BAFC string=0x000000000028BB00 "#IK"
 *   insn=0x000000000028BAFC string=0x0000000000588B48 "ff"
 *   insn=0x000000000028BB04 string=0x000000000028BB08 "%MK"
 *   insn=0x000000000028BB08 string=0x000000000028BB0C "h"
 *   insn=0x000000000028BB24 string=0x000000000028BB28 "H"
 *   insn=0x000000000028BB30 string=0x000000000028BB34 "+"
 *   insn=0x000000000028BB48 string=0x000000000028BB4C "9+"
 *   insn=0x000000000028BB4C string=0x000000000028BB50 "t"
 *   insn=0x000000000028BB58 string=0x000000000028BB5C ")"
 *   insn=0x000000000028BB5C string=0x000000000028BB60 "9"
 *   insn=0x000000000028BB68 string=0x000000000028BB6C "`"
 *   insn=0x000000000028BB70 string=0x00000000001FCE30 "0'"
 *   insn=0x000000000028BB80 string=0x000000000028BB84 " "
 *   insn=0x000000000028BB94 string=0x00000000001F5730 "P'"
 *   insn=0x000000000028BBAC string=0x000000000028BBB0 " "
 *   insn=0x000000000028BBBC string=0x000000000028BBC0 "\n(!"
 *   insn=0x000000000028BBC4 string=0x000000000028BBC8 "@"
 *   insn=0x000000000028BBD0 string=0x000000000028BBD4 "u"
 *   insn=0x000000000028BBE4 string=0x000000000028BBE8 "#\t*"
 *   insn=0x000000000028BBF0 string=0x000000000028BBF4 "!"
 *   insn=0x000000000028BBF4 string=0x000000000028BBF8 "a"
 *   insn=0x000000000028BBF8 string=0x000000000028BBFC "A"
 *   insn=0x000000000028BBFC string=0x000000000028BC00 " "
 *   insn=0x000000000028BC0C string=0x000000000028BC10 "uB@"
 *   insn=0x000000000028BC14 string=0x000000000028BC18 "u"
 *   insn=0x000000000028BC24 string=0x000000000028BC28 "uB@"
 *   insn=0x000000000028BC3C string=0x000000000028BC40 "`B@"
 *   insn=0x000000000028BC44 string=0x00000000001F3B00 "P'"
 *   insn=0x000000000028BC48 string=0x000000000028BC4C "y"
 *   insn=0x000000000028BC60 string=0x000000000028BC64 " "
 *   insn=0x000000000028BC84 string=0x00000000001F8F10 "0'"
 *   insn=0x000000000028BC88 string=0x000000000028BC8C "i"
 *   insn=0x000000000028BC98 string=0x000000000028BC9C " "
 *   insn=0x000000000028BCAC string=0x000000000028BCB0 "aB@"
 *   insn=0x000000000028BCC0 string=0x000000000028BCC4 "aB@"
 *   insn=0x000000000028BCC8 string=0x000000000028BCCC ""
 *   insn=0x000000000028BCCC string=0x000000000028BCD0 "@"
 *   insn=0x000000000028BCE8 string=0x000000000028BCEC "`"
 *   insn=0x000000000028BD04 string=0x000000000028BD34 "g"
 *   insn=0x000000000028BD34 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicSpellCastComponent::Update(Caver::MagicSpellCastComponent *this, float a2)
{
  __int64 v4; // x0
  Caver::SoundEffectComponent *v5; // x0
  float v6; // s0
  float32x2_t *v7; // x8
  float v8; // s6
  float32x2_t v9; // d14
  float v10; // s15
  float v11; // s13
  float v12; // s12
  float v13; // s9
  Caver::Vector2 *v14; // x0
  float v15; // s0
  Caver *v16; // x0
  Caver *v17; // x0
  float v18; // s10
  float32x2_t *v19; // x21
  int v20; // w0
  Caver::ParticleEmitterComponent *v21; // x21
  Caver::ParticleEmitterComponent *v22; // x0
  Caver *v23; // x0
  int v24; // w22
  float v25; // s0
  __int64 v26; // x21
  float v27; // s0
  __int64 v28; // x1
  float v29; // s0
  int v30; // [xsp+8h] [xbp-B8h] BYREF
  unsigned __int64 v31; // [xsp+10h] [xbp-B0h] BYREF
  int v32; // [xsp+18h] [xbp-A8h]
  unsigned __int64 v33; // [xsp+20h] [xbp-A0h] BYREF
  float v34; // [xsp+28h] [xbp-98h]
  float32x2_t v35[2]; // [xsp+30h] [xbp-90h] BYREF

  v35[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_QWORD *)this + 19);
  if ( v4
    || (Caver::ComponentOutletBase::Connect((Caver::MagicSpellCastComponent *)((char *)this + 136), this),
        (v4 = *((_QWORD *)this + 19)) != 0) )
  {
    Caver::SoundEffectComponent::IsPlaying((Caver::SoundEffectComponent *)v4);
    if ( (v4 & 1) == 0 )
    {
      v5 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 19);
      if ( !v5 )
      {
        Caver::ComponentOutletBase::Connect((Caver::MagicSpellCastComponent *)((char *)this + 136), this);
        v5 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 19);
      }
      v4 = Caver::SoundEffectComponent::Play(v5);
    }
  }
  if ( *((_QWORD *)this + 16)
    || (v4 = Caver::ComponentOutletBase::Connect((Caver::MagicSpellCastComponent *)((char *)this + 112), this),
        *((_QWORD *)this + 16)) )
  {
    v6 = *((float *)this + 40) + a2;
    *((float *)this + 40) = v6;
    if ( v6 > 0.015 )
    {
      v7 = (float32x2_t *)*((_QWORD *)this + 5);
      v8 = v7[17].n64_f32[1];
      v9.n64_u64[0] = v7[14].n64_u64[0];
      v10 = v8 * 10.0;
      v11 = v7[15].n64_f32[0] + 0.0;
      v12 = v8 * 30.0;
      v13 = (float)((float)(v8 * 10.0) * 1.3) / 0.2;
      do
      {
        *((float *)this + 40) = v6 + -0.015;
        v14 = (Caver::Vector2 *)Caver::fastrandom((Caver *)v4);
        v15 = (float)((float)(int)v14 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
        v16 = (Caver *)Caver::Vector2::FromAngle((__int64 *)v35, v14, v15);
        v17 = (Caver *)Caver::fastrandom(v16);
        v34 = v11;
        v18 = (float)((float)((float)(int)v17 / (float)Caver::FASTRANDOM_MAX) * 0.5) + 1.0;
        v33 = vadd_f32(v9, vmul_n_f32(v35[0], v10 * v18)).n64_u64[0];
        v19 = (float32x2_t *)*((_QWORD *)this + 5);
        v20 = Caver::fastrandom(v17);
        v31 = vsub_f32(vmul_n_f32(v19[13], (float)v20 / (float)Caver::FASTRANDOM_MAX), vmul_n_f32(v35[0], v13 * v18)).n64_u64[0];
        v32 = 0;
        v30 = 5855577;
        v21 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 16);
        v22 = v21;
        if ( !v21 )
        {
          Caver::ComponentOutletBase::Connect((Caver::MagicSpellCastComponent *)((char *)this + 112), this);
          v21 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 16);
          v22 = v21;
          if ( !v21 )
          {
            Caver::ComponentOutletBase::Connect((Caver::MagicSpellCastComponent *)((char *)this + 112), this);
            v22 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 16);
          }
        }
        Caver::ParticleEmitterComponent::RandomParticleType(v22);
        v24 = (int)v23;
        v25 = (float)((float)(int)Caver::fastrandom(v23) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
        v26 = Caver::ParticleEmitterComponent::AddParticle(
                v21,
                v24,
                (const Caver::Vector3 *)&v33,
                (const Caver::Vector3 *)&v31,
                v25,
                (const Caver::Color *)&v30,
                0.2);
        v27 = (float)((float)(int)Caver::fastrandom((Caver *)v26) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
        *(float *)(v26 + 36) = v27;
        v28 = *((_QWORD *)this + 16);
        if ( !v28 )
        {
          Caver::ComponentOutletBase::Connect((Caver::MagicSpellCastComponent *)((char *)this + 112), this);
          v28 = *((_QWORD *)this + 16);
        }
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v28 + 120) + 24LL))(v28 + 120);
        v29 = *(float *)(v4 + 128);
        *(_DWORD *)(v26 + 40) = 0;
        *(float *)(v26 + 44) = v12 / v29;
        v6 = *((float *)this + 40);
      }
      while ( v6 > 0.015 );
    }
  }
}

