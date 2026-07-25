/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029B1B4
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent7ExplodeEv
 * Demangled: Caver::MonsterDeathControllerComponent::Explode(void)
 *
 * Callers: 1
 *   0x00000000001F3A20  Caver::MonsterDeathControllerComponent::Explode(void)
 *
 * Callees: 6
 *   0x00000000001F3B00  Caver::ParticleEmitterComponent::RandomParticleType(void)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8F10  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *
 * Referenced strings: 45
 *   insn=0x000000000029B1E0 string=0x000000000029B1E4 "W"
 *   insn=0x000000000029B1E8 string=0x000000000029B1EC "Y""
 *   insn=0x000000000029B1F0 string=0x000000000029B1F4 "9"
 *   insn=0x000000000029B1F8 string=0x000000000029B1FC "H"
 *   insn=0x000000000029B1FC string=0x000000000029B200 "`"
 *   insn=0x000000000029B200 string=0x000000000029B204 "I"
 *   insn=0x000000000029B204 string=0x000000000029B208 ""
 *   insn=0x000000000029B208 string=0x000000000029B20C "h"
 *   insn=0x000000000029B20C string=0x000000000029B210 ","
 *   insn=0x000000000029B210 string=0x000000000029B214 ""
 *   insn=0x000000000029B214 string=0x000000000029B218 ":+"
 *   insn=0x000000000029B220 string=0x000000000029B224 "t"
 *   insn=0x000000000029B224 string=0x000000000029B228 "\t"
 *   insn=0x000000000029B228 string=0x000000000029B22C "\n"
 *   insn=0x000000000029B22C string=0x000000000029B230 ""
 *   insn=0x000000000029B230 string=0x000000000029B234 ":"
 *   insn=0x000000000029B250 string=0x000000000029B254 " "
 *   insn=0x000000000029B250 string=0x00000000001FCE30 "0'"
 *   insn=0x000000000029B260 string=0x000000000029B264 " "
 *   insn=0x000000000029B278 string=0x000000000029B27C "-i"
 *   insn=0x000000000029B27C string=0x00000000001F5730 "P'"
 *   insn=0x000000000029B280 string=0x000000000029B284 " "
 *   insn=0x000000000029B284 string=0x000000000029B288 "h"
 *   insn=0x000000000029B298 string=0x000000000029B29C " "
 *   insn=0x000000000029B29C string=0x000000000029B2A0 "h"
 *   insn=0x000000000029B2A8 string=0x000000000029B2AC "@"
 *   insn=0x000000000029B2BC string=0x000000000029B2C0 "uB@"
 *   insn=0x000000000029B2C4 string=0x000000000029B2C8 "u"
 *   insn=0x000000000029B2D4 string=0x000000000029B2D8 "uB@"
 *   insn=0x000000000029B2D4 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029B2EC string=0x000000000029B2F0 "`B@"
 *   insn=0x000000000029B2F4 string=0x00000000001F3B00 "P'"
 *   insn=0x000000000029B2FC string=0x000000000029B300 " "
 *   insn=0x000000000029B310 string=0x000000000029B314 " "
 *   insn=0x000000000029B334 string=0x00000000001F8F10 "0'"
 *   insn=0x000000000029B340 string=0x000000000029B344 " "
 *   insn=0x000000000029B34C string=0x000000000029B350 " "
 *   insn=0x000000000029B360 string=0x000000000029B364 "`"
 *   insn=0x000000000029B364 string=0x000000000029B368 "aB@"
 *   insn=0x000000000029B36C string=0x000000000029B370 "/ "
 *   insn=0x000000000029B380 string=0x000000000029B384 "aB@"
 *   insn=0x000000000029B390 string=0x000000000029B394 ""
 *   insn=0x000000000029B394 string=0x000000000029B398 "@"
 *   insn=0x000000000029B3B0 string=0x000000000029B3B4 "a"
 *   insn=0x000000000029B3F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::MonsterDeathControllerComponent::Explode(float *this)
{
  float *v1; // x19
  int v2; // w24
  Caver::ComponentOutletBase *v3; // x20
  float v4; // s14
  Caver::Vector2 *v5; // x0
  float v6; // s0
  Caver *v7; // x0
  int v8; // w0
  float v9; // s15
  Caver::ParticleEmitterComponent *v10; // x21
  Caver::ParticleEmitterComponent *v11; // x0
  Caver *v12; // x0
  int v13; // w22
  float v14; // s0
  float *v15; // x21
  float v16; // s0
  __int64 v17; // x1
  float v18; // s15
  float v19; // s0
  int v20; // [xsp+8h] [xbp-C8h] BYREF
  unsigned __int64 v21; // [xsp+10h] [xbp-C0h] BYREF
  int v22; // [xsp+18h] [xbp-B8h]
  __int64 v23; // [xsp+20h] [xbp-B0h] BYREF
  int v24; // [xsp+28h] [xbp-A8h]
  float32x2_t v25[2]; // [xsp+30h] [xbp-A0h] BYREF

  v1 = this;
  v25[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = 0;
  v3 = (Caver::ComponentOutletBase *)(this + 28);
  v4 = (float)(this[42] + this[42]) / 0.6;
  do
  {
    v5 = (Caver::Vector2 *)Caver::fastrandom((Caver *)this);
    v6 = (float)((float)v2 / 10.0) * 6.28318531
       + (float)((float)((float)(int)v5 / (float)Caver::FASTRANDOM_MAX) * 0.25) * 1.57079633;
    v7 = (Caver *)Caver::Vector2::FromAngle((__int64 *)v25, v5, v6);
    v8 = Caver::fastrandom(v7);
    v23 = *(_QWORD *)(v1 + 39);
    v9 = (float)((float)v8 / (float)Caver::FASTRANDOM_MAX) + 0.5;
    v24 = *((_DWORD *)v1 + 41);
    v21 = vmul_n_f32(v25[0], v4 * v9).n64_u64[0];
    v22 = 0;
    v20 = 5855577;
    v10 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v1 + 16);
    v11 = v10;
    if ( !v10 )
    {
      Caver::ComponentOutletBase::Connect(v3, (const Caver::Component *)v1);
      v10 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v1 + 16);
      v11 = v10;
      if ( !v10 )
      {
        Caver::ComponentOutletBase::Connect(v3, (const Caver::Component *)v1);
        v11 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v1 + 16);
      }
    }
    Caver::ParticleEmitterComponent::RandomParticleType(v11);
    v13 = (int)v12;
    v14 = (float)((float)(int)Caver::fastrandom(v12) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
    this = (float *)Caver::ParticleEmitterComponent::AddParticle(
                      v10,
                      v13,
                      (const Caver::Vector3 *)&v23,
                      (const Caver::Vector3 *)&v21,
                      v14,
                      (const Caver::Color *)&v20,
                      0.6);
    v15 = this;
    if ( this )
    {
      v16 = (float)((float)(int)Caver::fastrandom((Caver *)this) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
      v15[9] = v16;
      v17 = *((_QWORD *)v1 + 16);
      v18 = (float)(v9 + v9) * v1[42];
      if ( !v17 )
      {
        Caver::ComponentOutletBase::Connect(v3, (const Caver::Component *)v1);
        v17 = *((_QWORD *)v1 + 16);
      }
      this = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v17 + 24LL * *(int *)v15 + 120) + 24LL))(v17 + 24LL * *(int *)v15 + 120);
      v19 = v18 / this[32];
      v15[10] = v19;
      v15[11] = v19;
    }
    ++v2;
  }
  while ( v2 != 10 );
  return this;
}

