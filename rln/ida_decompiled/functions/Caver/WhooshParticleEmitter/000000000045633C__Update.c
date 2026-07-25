/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045633C
 * Mangled: _ZN5Caver21WhooshParticleEmitter6UpdateEf
 * Demangled: Caver::WhooshParticleEmitter::Update(float)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB550  Caver::ParticleSystem::AddParticle(Caver::Particle const&)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000202350  Caver::ParticleEmitter::ConvertLocalParticleToWorld(Caver::Particle *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004568B0  Caver::WhooshParticleEmitter::type(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 136
 *   insn=0x0000000000456364 string=0x0000000000456368 "h\t"
 *   insn=0x0000000000456368 string=0x000000000045636C "\t"
 *   insn=0x000000000045636C string=0x0000000000456370 "U"
 *   insn=0x000000000045637C string=0x0000000000456380 " ! "
 *   insn=0x0000000000456388 string=0x000000000045638C "hf@"
 *   insn=0x000000000045638C string=0x0000000000456390 "h"
 *   insn=0x0000000000456390 string=0x0000000000456394 ""
 *   insn=0x0000000000456390 string=0x000000000045639C "h"
 *   insn=0x0000000000456394 string=0x0000000000456398 ""
 *   insn=0x0000000000456398 string=0x00000000004563B4 "`"
 *   insn=0x00000000004563A4 string=0x00000000004563A8 ""
 *   insn=0x00000000004563AC string=0x00000000004563B0 ""
 *   insn=0x00000000004563BC string=0x00000000004563C0 "`"
 *   insn=0x00000000004563C4 string=0x00000000004563C8 "h\t"
 *   insn=0x00000000004563D0 string=0x00000000004563D4 "x"
 *   insn=0x00000000004563DC string=0x00000000004563E0 "!"
 *   insn=0x00000000004563E4 string=0x00000000004563E8 "h\t"
 *   insn=0x00000000004563F0 string=0x00000000004563F4 "!qG"
 *   insn=0x00000000004563F4 string=0x00000000004563F8 "i\t"
 *   insn=0x00000000004563F8 string=0x00000000004563FC "h\t"
 *   insn=0x00000000004563FC string=0x0000000000456400 "iO"
 *   insn=0x0000000000456404 string=0x0000000000456408 "!"
 *   insn=0x0000000000456408 string=0x000000000045640C "h\t"
 *   insn=0x000000000045640C string=0x0000000000456410 "wt"
 *   insn=0x0000000000456430 string=0x0000000000456434 "H3"
 *   insn=0x0000000000456440 string=0x0000000000456444 "hf@"
 *   insn=0x0000000000456448 string=0x000000000045644C "`"
 *   insn=0x000000000045644C string=0x0000000000456450 "h"
 *   insn=0x0000000000456450 string=0x0000000000456454 "\t"
 *   insn=0x0000000000456450 string=0x000000000045645C "h"
 *   insn=0x0000000000456454 string=0x0000000000456458 "\t"
 *   insn=0x0000000000456458 string=0x000000000045647C "\n\t@"
 *   insn=0x0000000000456464 string=0x0000000000456468 ""
 *   insn=0x000000000045646C string=0x0000000000456470 "hf@"
 *   insn=0x0000000000456470 string=0x0000000000456474 "\t"
 *   insn=0x0000000000456478 string=0x0000000000456734 "h"
 *   insn=0x000000000045647C string=0x0000000000456480 "@"
 *   insn=0x000000000045649C string=0x00000000004564A0 "h&B"
 *   insn=0x00000000004564A8 string=0x00000000004564AC "a"
 *   insn=0x00000000004564A8 string=0x00000000004564D8 "h"
 *   insn=0x00000000004564AC string=0x00000000004564B0 "h&B"
 *   insn=0x00000000004564AC string=0x00000000001FCE30 "0'"
 *   insn=0x00000000004564B0 string=0x00000000004564B4 "\n|@"
 *   insn=0x00000000004564B4 string=0x00000000004564B8 ")"
 *   insn=0x00000000004564B8 string=0x00000000004564BC ")"
 *   insn=0x00000000004564BC string=0x00000000004564C0 "K\t"
 *   insn=0x00000000004564C0 string=0x00000000004564C4 "i"
 *   insn=0x00000000004564C4 string=0x00000000004564C8 "yi"
 *   insn=0x00000000004564CC string=0x00000000004564D0 "h"
 *   insn=0x00000000004564D0 string=0x000000000045651C "E"
 *   insn=0x00000000004564D8 string=0x00000000004564DC "\t"
 *   insn=0x00000000004564DC string=0x00000000004564E0 ""
 *   insn=0x00000000004564E0 string=0x00000000004564E4 ""
 *   insn=0x00000000004564E4 string=0x00000000004564E8 "}"
 *   insn=0x00000000004564EC string=0x00000000004564F0 ""
 *   insn=0x00000000004564F0 string=0x00000000004564F4 "O"
 *   insn=0x00000000004564F0 string=0x0000000000456770 ""
 *   insn=0x00000000004564F4 string=0x00000000004564F8 "h"
 *   insn=0x00000000004564F8 string=0x00000000004564FC "\t"
 *   insn=0x00000000004564FC string=0x0000000000456500 ""
 *   insn=0x0000000000456500 string=0x0000000000456504 ""
 *   insn=0x0000000000456504 string=0x0000000000456508 "}"
 *   insn=0x0000000000456508 string=0x000000000045650C "\t"
 *   insn=0x000000000045650C string=0x0000000000456510 "("
 *   insn=0x0000000000456514 string=0x0000000000456518 ""
 *   insn=0x0000000000456528 string=0x000000000045652C " "
 *   insn=0x0000000000456538 string=0x000000000045653C "="
 *   insn=0x000000000045654C string=0x0000000000456550 " "
 *   insn=0x0000000000456550 string=0x0000000000456554 "`\t "
 *   insn=0x000000000045655C string=0x0000000000456560 "t|"
 *   insn=0x0000000000456560 string=0x00000000001F5730 "P'"
 *   insn=0x0000000000456570 string=0x0000000000456574 "a"
 *   insn=0x0000000000456574 string=0x0000000000456578 "b""
 *   insn=0x0000000000456578 string=0x000000000045657C "d"
 *   insn=0x0000000000456584 string=0x0000000000456588 "##"
 *   insn=0x0000000000456590 string=0x0000000000456594 "!"
 *   insn=0x00000000004565A0 string=0x00000000004565A4 "`"
 *   insn=0x00000000004565A4 string=0x00000000004565A8 "b"
 *   insn=0x00000000004565AC string=0x00000000001F41A0 "P'"
 *   insn=0x00000000004565B4 string=0x00000000004565B8 "v"
 *   insn=0x00000000004565C0 string=0x00000000004565C4 ""
 *   insn=0x00000000004565D0 string=0x00000000004565D4 " "
 *   insn=0x00000000004565F8 string=0x00000000004565FC " "
 *   insn=0x0000000000456610 string=0x0000000000456614 ""
 *   insn=0x0000000000456628 string=0x000000000045662C " "
 *   insn=0x0000000000456648 string=0x000000000045664C " \t "
 *   insn=0x0000000000456650 string=0x0000000000456654 "?"
 *   insn=0x0000000000456654 string=0x0000000000456658 "i*@"
 *   insn=0x000000000045665C string=0x0000000000456660 "jZ@"
 *   insn=0x0000000000456660 string=0x0000000000456664 "!"
 *   insn=0x0000000000456664 string=0x0000000000456668 " "
 *   insn=0x0000000000456670 string=0x0000000000456674 "A\t-"
 *   insn=0x0000000000456674 string=0x0000000000456678 " ( "
 *   insn=0x0000000000456690 string=0x0000000000456694 " "
 *   insn=0x00000000004566A4 string=0x00000000004566A8 """
 *   insn=0x00000000004566A8 string=0x00000000004566AC "!"
 *   insn=0x00000000004566B4 string=0x00000000004566B8 "@\t "
 *   insn=0x00000000004566C0 string=0x00000000004566C4 "`"
 *   insn=0x00000000004566CC string=0x00000000004566D0 ""
 *   insn=0x00000000004566DC string=0x00000000004566E0 "4"
 *   insn=0x00000000004566DC string=0x00000000001FB550 "0'"
 *   insn=0x00000000004566E0 string=0x0000000000456724 "`"
 *   insn=0x00000000004566E4 string=0x00000000004566E8 ""
 *   insn=0x00000000004566F8 string=0x00000000004566FC "\t@"
 *   insn=0x0000000000456704 string=0x0000000000456708 ""
 *   insn=0x0000000000456718 string=0x000000000045671C "@"
 *   insn=0x000000000045673C string=0x0000000000456740 ""
 *   insn=0x0000000000456744 string=0x0000000000456748 "hf@"
 *   insn=0x0000000000456748 string=0x000000000045674C "\n"
 *   insn=0x0000000000456750 string=0x0000000000456754 "h"
 *   insn=0x000000000045675C string=0x0000000000456760 ""
 *   insn=0x0000000000456764 string=0x0000000000456768 ""
 *   insn=0x0000000000456768 string=0x000000000045676C "F"
 *   insn=0x00000000004567B4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004567B8 string=0x00000000004567BC "4"
 *   insn=0x00000000004567C0 string=0x00000000004567C4 ""
 *   insn=0x00000000004567D0 string=0x00000000004567D4 "\t@"
 *   insn=0x00000000004567E0 string=0x00000000004567E4 ""
 *   insn=0x00000000004567F0 string=0x00000000004567F4 "@"
 *   insn=0x0000000000456800 string=0x0000000000456804 "0"
 *   insn=0x0000000000456818 string=0x000000000045681C "h"
 *   insn=0x000000000045681C string=0x0000000000456820 "`f@"
 *   insn=0x0000000000456820 string=0x0000000000456824 ""
 *   insn=0x0000000000456824 string=0x0000000000456828 "A"
 *   insn=0x0000000000456828 string=0x000000000045682C "h"
 *   insn=0x000000000045682C string=0x0000000000456830 "@"
 *   insn=0x0000000000456830 string=0x0000000000456838 "`"
 *   insn=0x0000000000456834 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000456838 string=0x000000000045683C "@"
 *   insn=0x000000000045683C string=0x0000000000456844 "t\n@"
 *   insn=0x0000000000456840 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000456844 string=0x0000000000456848 "4"
 *   insn=0x000000000045684C string=0x0000000000456850 ""
 *   insn=0x000000000045685C string=0x0000000000456860 "\t@"
 *   insn=0x000000000045686C string=0x0000000000456870 ""
 *   insn=0x000000000045687C string=0x0000000000456880 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WhooshParticleEmitter::Update(float **this, float a2)
{
  Caver::WhooshParticleEmitter *v3; // x19
  float *v4; // x8
  float v5; // s8
  float v6; // s0
  float32x2_t v7; // d15
  __int64 v8; // x8
  float v9; // s9
  long double v10; // q0
  int v11; // s10
  float v12; // s11
  Caver *v13; // x0
  Caver *v14; // x0
  float v15; // s12
  Caver::Vector2 *v16; // x0
  Caver::FloatColor *v17; // x0
  Caver *v18; // x0
  Caver *v19; // x0
  float v20; // s0
  Caver *v21; // x0
  float v22; // s0
  int v23; // w0
  float32x2_t v24; // d9
  float v25; // s10
  Caver *v26; // x0
  float v27; // s0
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  long double v31; // q0
  float v32; // [xsp+50h] [xbp-100h]
  float32x2_t v33[2]; // [xsp+68h] [xbp-E8h] BYREF
  int v34; // [xsp+7Ch] [xbp-D4h]
  __int128 v35; // [xsp+80h] [xbp-D0h]
  float32x2_t v36; // [xsp+90h] [xbp-C0h]
  unsigned __int64 v37; // [xsp+98h] [xbp-B8h]
  __int128 v38; // [xsp+A0h] [xbp-B0h]
  __int128 v39; // [xsp+B0h] [xbp-A0h]
  int v40; // [xsp+C0h] [xbp-90h]
  __int64 v41; // [xsp+C8h] [xbp-88h]

  v3 = (Caver::WhooshParticleEmitter *)this;
  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 >= 0.0001 )
  {
    v4 = this[25];
    if ( v4 )
      v5 = *v4;
    else
      LODWORD(v5) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(float **, _QWORD))*((_QWORD *)*this + 4))(this, 0));
    v6 = *((float *)v3 + 54) + a2;
    *((float *)v3 + 54) = v6;
    if ( v6 > v5 )
    {
      v7.n64_u64[0] = vdup_n_s32(0x3E99999Au).n64_u64[0];
      while ( 1 )
      {
        v8 = *((_QWORD *)v3 + 25);
        *((float *)v3 + 54) = v6 - v5;
        if ( v8 )
          break;
        v10 = ((long double (__fastcall *)(Caver::WhooshParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
                v3,
                1);
        v8 = *((_QWORD *)v3 + 25);
        v9 = *(float *)&v10;
        if ( v8 )
          goto LABEL_10;
        v31 = ((long double (__fastcall *)(Caver::WhooshParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
                v3,
                2);
        v8 = *((_QWORD *)v3 + 25);
        v11 = LODWORD(v31);
        if ( !v8 )
        {
          LODWORD(v12) = COERCE_UNSIGNED_INT128(
                           ((long double (__fastcall *)(Caver::WhooshParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
                             v3,
                             3));
          goto LABEL_12;
        }
LABEL_11:
        v12 = *(float *)(v8 + 12);
LABEL_12:
        v35 = 0u;
        v36.n64_u64[0] = 0;
        v37 = 0xFFFFFFFF00000000LL;
        v40 = 0;
        v38 = xmmword_583800;
        v39 = xmmword_589600;
        if ( *((_QWORD *)v3 + 4) == *((_QWORD *)v3 + 5) )
        {
          if ( (int)(-1171354717
                   * ((*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) - *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL)) >> 3)) <= 0 )
            return;
          v13 = (Caver *)Caver::fastrandom((Caver *)this);
          LODWORD(v35) = (int)v13
                       % (int)(-1171354717
                             * ((*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) - *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL)) >> 3));
          if ( (v35 & 0x80000000) != 0 )
            return;
        }
        else
        {
          v13 = (Caver *)Caver::fastrandom((Caver *)this);
          LODWORD(v35) = *(_DWORD *)(*((_QWORD *)v3 + 4)
                                   + 4
                                   * ((int)v13
                                    % (unsigned __int64)((__int64)(*((_QWORD *)v3 + 5) - *((_QWORD *)v3 + 4)) >> 2)));
          if ( (v35 & 0x80000000) != 0 )
            return;
        }
        v14 = (Caver *)Caver::fastrandom(v13);
        v15 = (float)((float)(int)v14 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
        v16 = (Caver::Vector2 *)Caver::fastrandom(v14);
        v32 = v12 * (float)((float)(int)v16 / (float)Caver::FASTRANDOM_MAX);
        v17 = (Caver::FloatColor *)Caver::Vector2::FromAngle((__int64 *)v33, v16, v15);
        *((float *)&v35 + 3) = v32 * 0.0;
        v36.n64_u64[0] = vneg_f32(vmul_n_f32(v33[0], v32 / v9)).n64_u64[0];
        *(float *)&v37 = (float)(v32 / v9) * -0.0;
        *(float32x2_t *)((char *)&v35 + 4) = vmul_n_f32(v33[0], v32);
        Caver::FloatColor::FromHSLA(
          (__int64 *)v33,
          v17,
          *((float *)v3 + 42),
          *((float *)v3 + 43),
          *((float *)v3 + 44),
          *((float *)v3 + 45));
        Caver::Color::FromFloatColor();
        HIDWORD(v37) = v34;
        v19 = (Caver *)Caver::fastrandom(v18);
        v20 = (float)((float)(int)v19 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
        *(float *)&v38 = v20;
        v21 = (Caver *)Caver::fastrandom(v19);
        HIDWORD(v38) = v11;
        v22 = (float)((float)((float)(int)v21 / (float)Caver::FASTRANDOM_MAX) * 0.3) * 6.28318531;
        *((float *)&v38 + 1) = v22;
        v23 = Caver::fastrandom(v21);
        DWORD2(v38) = HIDWORD(v38);
        DWORD2(v39) = 1065353216;
        *((float *)&v39 + 3) = v9 * (float)((float)((float)((float)v23 / (float)Caver::FASTRANDOM_MAX) * 0.2) + 0.8);
        Caver::ParticleEmitter::ConvertLocalParticleToWorld();
        v24.n64_u64[0] = *(_QWORD *)((unsigned __int64)v3 + 80);
        v25 = *((float *)v3 + 22);
        v36.n64_u64[0] = vadd_f32(vmul_f32(v24, v7), v36).n64_u64[0];
        *(float *)&v37 = (float)(v25 * 0.3) + *(float *)&v37;
        v27 = (float)((float)((float)(int)Caver::fastrandom(v26) / (float)Caver::FASTRANDOM_MAX) + -0.5) * 0.033333;
        *(float32x2_t *)((char *)&v35 + 4) = vadd_f32(*(float32x2_t *)((char *)&v35 + 4), vmul_n_f32(v24, v27));
        *((float *)&v35 + 3) = (float)(v25 * v27) + *((float *)&v35 + 3);
        v28 = (_QWORD *)*((_QWORD *)v3 + 2);
        if ( v28 )
          ++v28[1];
        Caver::ParticleSystem::AddParticle();
        if ( v28 )
        {
          v29 = v28[1] - 1LL;
          v28[1] = v29;
          if ( !v29 )
          {
            this = (float **)(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
            v30 = v28[2] - 1LL;
            v28[2] = v30;
            if ( !v30 )
              this = (float **)(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
          }
        }
        v6 = *((float *)v3 + 54);
        if ( v6 <= v5 )
          return;
      }
      v9 = *(float *)(v8 + 4);
LABEL_10:
      v11 = *(_DWORD *)(v8 + 8);
      goto LABEL_11;
    }
  }
}

