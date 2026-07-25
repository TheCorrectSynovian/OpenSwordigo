/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF110
 * Mangled: _ZN5Caver16ShatterComponent12ShatterModelEPNS_14ModelComponentEb
 * Demangled: Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *
 * Callers: 1
 *   0x00000000001F8630  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *
 * Callees: 11
 *   0x00000000001F3B00  Caver::ParticleEmitterComponent::RandomParticleType(void)
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8F10  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000269C04  Caver::EntityComponent::className(void)
 *
 * Referenced strings: 48
 *   insn=0x00000000002AF138 string=0x00000000002AF13C "W"
 *   insn=0x00000000002AF150 string=0x00000000002AF154 "`"
 *   insn=0x00000000002AF154 string=0x00000000002AF158 "!"
 *   insn=0x00000000002AF15C string=0x00000000002AF160 " E"
 *   insn=0x00000000002AF174 string=0x00000000002AF178 "("
 *   insn=0x00000000002AF198 string=0x00000000002AF19C "\t@"
 *   insn=0x00000000002AF1A4 string=0x00000000002AF1A8 ""
 *   insn=0x00000000002AF1B8 string=0x00000000002AF1BC "@"
 *   insn=0x00000000002AF1C0 string=0x00000000002AF1C4 ""
 *   insn=0x00000000002AF1CC string=0x00000000002AF1D0 "D""
 *   insn=0x00000000002AF1D0 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002AF1D4 string=0x00000000002AF1D8 "("
 *   insn=0x00000000002AF1DC string=0x00000000002AF1E0 "v"
 *   insn=0x00000000002AF1F0 string=0x00000000002AF1F4 "G"
 *   insn=0x00000000002AF214 string=0x00000000002AF218 "B"
 *   insn=0x00000000002AF218 string=0x00000000002AF21C "c"
 *   insn=0x00000000002AF224 string=0x00000000002AF228 "B"
 *   insn=0x00000000002AF228 string=0x00000000002AF22C "c"
 *   insn=0x00000000002AF240 string=0x00000000002AF244 "_"
 *   insn=0x00000000002AF244 string=0x00000000001F3BC0 "P'"
 *   insn=0x00000000002AF264 string=0x00000000002AF268 "V"
 *   insn=0x00000000002AF268 string=0x00000000002AF26C "\t"
 *   insn=0x00000000002AF2B4 string=0x00000000001FCE30 "0'"
 *   insn=0x00000000002AF2C0 string=0x00000000002AF2C4 " "
 *   insn=0x00000000002AF300 string=0x00000000002AF304 "!"
 *   insn=0x00000000002AF30C string=0x00000000002AF310 "\n"
 *   insn=0x00000000002AF328 string=0x00000000002AF32C " "
 *   insn=0x00000000002AF358 string=0x00000000002AF35C " "
 *   insn=0x00000000002AF374 string=0x00000000002AF378 "` "
 *   insn=0x00000000002AF380 string=0x00000000002AF384 "h"
 *   insn=0x00000000002AF388 string=0x00000000002AF38C "y@"
 *   insn=0x00000000002AF390 string=0x00000000002AF394 "O"
 *   insn=0x00000000002AF398 string=0x00000000002AF39C "h "
 *   insn=0x00000000002AF3B0 string=0x00000000002AF3B4 "!"
 *   insn=0x00000000002AF3E8 string=0x00000000002AF3EC " "
 *   insn=0x00000000002AF3FC string=0x00000000002AF400 "@"
 *   insn=0x00000000002AF400 string=0x00000000002AF404 "a"
 *   insn=0x00000000002AF404 string=0x00000000002AF408 "f"
 *   insn=0x00000000002AF408 string=0x00000000001F41A0 "P'"
 *   insn=0x00000000002AF410 string=0x00000000001F3B00 "P'"
 *   insn=0x00000000002AF42C string=0x00000000002AF430 " "
 *   insn=0x00000000002AF43C string=0x00000000002AF440 "\n@b"
 *   insn=0x00000000002AF45C string=0x00000000002AF460 "@"
 *   insn=0x00000000002AF464 string=0x00000000001F8F10 "0'"
 *   insn=0x00000000002AF468 string=0x00000000002AF46C "q6"
 *   insn=0x00000000002AF480 string=0x00000000002AF484 " "
 *   insn=0x00000000002AF4B4 string=0x00000000002AF4E4 "{"
 *   insn=0x00000000002AF4E4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver *__fastcall Caver::ShatterComponent::ShatterModel(Caver::SceneObject **this, Caver::ModelComponent *a2, char a3)
{
  __int64 v6; // x0
  unsigned int v7; // s2
  unsigned int v8; // s3
  unsigned int v9; // s4
  Caver::ParticleEmitterComponent *v10; // x20
  Caver::ParticleEmitterComponent *v11; // x8
  _QWORD *v12; // x22
  __int64 v13; // x24
  __int64 v14; // x8
  Caver *result; // x0
  int v16; // w22
  Caver *v22; // x0
  Caver *v23; // x0
  unsigned int v24; // w21
  Caver *v25; // x0
  unsigned __int64 v26; // d10
  int v27; // w0
  Caver *v28; // x0
  Caver *v29; // x0
  float v30; // s0
  float32x2_t *v31; // x8
  float v32; // s13
  float32x2_t v33; // d12
  float32x2_t v34; // d15
  float v35; // s8
  Caver *v36; // x0
  float v37; // s11
  float v38; // s14
  float v39; // s0
  Caver::FloatColor *v40; // x0
  Caver *v41; // x0
  int v42; // w21
  Caver *v43; // x21
  double v44; // d0
  float32x2_t v45; // [xsp+8h] [xbp-148h]
  int v46; // [xsp+40h] [xbp-110h]
  float v47; // [xsp+5Ch] [xbp-F4h]
  char v48[8]; // [xsp+60h] [xbp-F0h] BYREF
  __int64 v49; // [xsp+68h] [xbp-E8h] BYREF
  unsigned __int64 v50; // [xsp+78h] [xbp-D8h] BYREF
  float v51; // [xsp+80h] [xbp-D0h]
  _DWORD v52[4]; // [xsp+88h] [xbp-C8h] BYREF
  float32x2_t v53; // [xsp+98h] [xbp-B8h] BYREF
  float v54; // [xsp+A0h] [xbp-B0h]
  float v55[5]; // [xsp+A8h] [xbp-A8h] BYREF
  float v56[3]; // [xsp+BCh] [xbp-94h] BYREF
  __int64 v57; // [xsp+C8h] [xbp-88h]

  v57 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::ParticleEmitterComponent::Interface);
  v10 = (Caver::ParticleEmitterComponent *)v6;
  v11 = *(Caver::ParticleEmitterComponent **)(v6 + 280);
  *(_BYTE *)(v6 + 361) = a3 & 1;
  if ( (v11
     || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v6 + 264), (const Caver::Component *)v6),
         (v11 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v10 + 35)) != 0))
    && v11 != v10 )
  {
    v13 = *((_QWORD *)v11 + 41);
    v12 = (_QWORD *)*((_QWORD *)v11 + 42);
    if ( !v12 )
      goto LABEL_9;
  }
  else
  {
    v13 = *((_QWORD *)v10 + 41);
    v12 = (_QWORD *)*((_QWORD *)v10 + 42);
    if ( !v12 )
      goto LABEL_9;
  }
  if ( !v12[1] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    v14 = v12[2] - 1LL;
    v12[2] = v14;
    if ( !v14 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
  }
LABEL_9:
  *(_DWORD *)(v13 + 156) = 0;
  *(_BYTE *)(v13 + 145) = 1;
  *(_QWORD *)(v13 + 148) = 0xC4BB800000000000LL;
  LOBYTE(v7) = *((_BYTE *)a2 + 315);
  LOBYTE(v8) = *((_BYTE *)a2 + 316);
  LOBYTE(v9) = *((_BYTE *)a2 + 317);
  v55[0] = (float)*((unsigned __int8 *)a2 + 314) / 255.0;
  v55[1] = (float)v7 / 255.0;
  v55[2] = (float)v8 / 255.0;
  v55[3] = (float)v9 / 255.0;
  result = (Caver *)Caver::FloatColor::GetHSLComponents((Caver::FloatColor *)v55, v56);
  v16 = 10;
  __asm { FMOV            V0.2S, #20.0 }
  v45.n64_u64[0] = _D0;
  do
  {
    v22 = (Caver *)Caver::fastrandom(result);
    v47 = (float)((float)((float)(int)v22 / (float)Caver::FASTRANDOM_MAX) * 0.1) + 0.5;
    v23 = (Caver *)Caver::fastrandom(v22);
    v24 = (unsigned int)v23;
    v46 = Caver::FASTRANDOM_MAX;
    v25 = (Caver *)Caver::fastrandom(v23);
    v26 = vadd_f32(
            vdiv_f32(
              vcvt_f32_s32((int32x2_t)__PAIR64__((unsigned int)v25, v24)),
              vcvt_f32_s32((int32x2_t)__PAIR64__(Caver::FASTRANDOM_MAX, v46))),
            (float32x2_t)0x3F800000BF000000LL).n64_u64[0];
    v27 = Caver::fastrandom(v25);
    v53.n64_u64[0] = v26;
    v54 = (float)((float)((float)v27 / (float)Caver::FASTRANDOM_MAX) + -0.5) * 3.0;
    v28 = (Caver *)Caver::Vector3::Normalize((Caver::Vector3 *)&v53);
    v29 = (Caver *)Caver::fastrandom(v28);
    v30 = (float)((float)((float)(int)v29 / (float)Caver::FASTRANDOM_MAX) * 200.0) + 300.0;
    v52[0] = vmuls_n_f32(v30, v53.n64_f32[0]);
    v52[1] = vmuls_lane_f32(v30, v53, 1);
    *(float *)&v52[2] = v54 * v30;
    v31 = (float32x2_t *)this[5];
    v32 = v31[15].n64_f32[0];
    v33.n64_u64[0] = v31[14].n64_u64[0];
    v34.n64_u64[0] = vmul_f32(v53, v45).n64_u64[0];
    v35 = v54 * 20.0;
    v36 = (Caver *)Caver::fastrandom(v29);
    *(float *)&v26 = v56[0];
    v37 = v56[1];
    v38 = v56[2];
    v39 = (float)(int)v36 / (float)Caver::FASTRANDOM_MAX;
    v50 = vadd_f32(v33, vmul_n_f32(v34, v39)).n64_u64[0];
    v51 = v32 + (float)(v35 * v39);
    v40 = (Caver::FloatColor *)Caver::fastrandom(v36);
    Caver::FloatColor::FromHSLA(
      &v49,
      v40,
      *(float *)&v26,
      v37,
      v38 + (float)((float)((float)((float)(int)v40 / (float)Caver::FASTRANDOM_MAX) + -0.5) * 0.2),
      1.0);
    Caver::ParticleEmitterComponent::RandomParticleType(v10);
    v42 = (int)v41;
    *(float *)&v26 = (float)((float)(int)Caver::fastrandom(v41) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
    Caver::Color::FromFloatColor();
    v43 = (Caver *)Caver::ParticleEmitterComponent::AddParticle(
                     v10,
                     v42,
                     (const Caver::Vector3 *)&v50,
                     (const Caver::Vector3 *)v52,
                     *(float *)&v26,
                     (const Caver::Color *)v48,
                     v47);
    result = (Caver *)Caver::fastrandom(v43);
    --v16;
    v44 = (float)((float)((float)(int)result / (float)Caver::FASTRANDOM_MAX) + -0.5);
    *((_DWORD *)v43 + 10) = *((_DWORD *)v43 + 11);
    *(float *)&v44 = v44 * 12.5663706;
    *((_DWORD *)v43 + 9) = LODWORD(v44);
  }
  while ( v16 );
  return result;
}

