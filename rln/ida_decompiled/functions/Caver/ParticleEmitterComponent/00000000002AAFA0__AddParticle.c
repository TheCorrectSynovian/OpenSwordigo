/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AAFA0
 * Mangled: _ZN5Caver24ParticleEmitterComponent11AddParticleEiRKNS_7Vector3ES3_fRKNS_5ColorEf
 * Demangled: Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *
 * Callers: 1
 *   0x00000000001F8F10  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB550  Caver::ParticleSystem::AddParticle(Caver::Particle const&)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 78
 *   insn=0x00000000002AAFB0 string=0x00000000002AAFB4 "U"
 *   insn=0x00000000002AAFBC string=0x00000000002AAFC0 """
 *   insn=0x00000000002AAFDC string=0x00000000002AAFE0 "H"
 *   insn=0x00000000002AAFE4 string=0x00000000002AAFE8 "H@"
 *   insn=0x00000000002AAFEC string=0x00000000002AAFF0 "h"
 *   insn=0x00000000002AAFF4 string=0x00000000002AAFF8 "h@"
 *   insn=0x00000000002AB014 string=0x00000000002AB018 "h"
 *   insn=0x00000000002AB01C string=0x00000000002AB020 " "
 *   insn=0x00000000002AB024 string=0x00000000002AB028 "3"
 *   insn=0x00000000002AB028 string=0x00000000002AB02C ""
 *   insn=0x00000000002AB028 string=0x00000000002AB04C "h"
 *   insn=0x00000000002AB038 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002AB04C string=0x00000000002AB050 ""
 *   insn=0x00000000002AB050 string=0x00000000002AB054 "h"
 *   insn=0x00000000002AB058 string=0x00000000002AB05C "=A"
 *   insn=0x00000000002AB05C string=0x00000000001FB550 "0'"
 *   insn=0x00000000002AB060 string=0x00000000002AB064 "3"
 *   insn=0x00000000002AB064 string=0x00000000002AB068 "h"
 *   insn=0x00000000002AB068 string=0x00000000002AB06C ""
 *   insn=0x00000000002AB06C string=0x00000000002AB070 "h"
 *   insn=0x00000000002AB074 string=0x00000000002AB078 "h"
 *   insn=0x00000000002AB07C string=0x00000000002AB080 "\t@"
 *   insn=0x00000000002AB084 string=0x00000000002AB088 "h\n@"
 *   insn=0x00000000002AB088 string=0x00000000002AB08C ""
 *   insn=0x00000000002AB08C string=0x00000000002AB090 "h\n"
 *   insn=0x00000000002AB094 string=0x00000000002AB098 "h"
 *   insn=0x00000000002AB09C string=0x00000000002AB0A0 "@"
 *   insn=0x00000000002AB0D0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002AB0D4 string=0x00000000002AB0D8 "3"
 *   insn=0x00000000002AB0D8 string=0x00000000002AB0DC "h"
 *   insn=0x00000000002AB0DC string=0x00000000002AB0E0 ""
 *   insn=0x00000000002AB0E0 string=0x00000000002AB0E4 "h"
 *   insn=0x00000000002AB0E8 string=0x00000000002AB0EC "h"
 *   insn=0x00000000002AB0EC string=0x00000000002AB0F0 "\t@"
 *   insn=0x00000000002AB0F8 string=0x00000000002AB0FC "h\n@"
 *   insn=0x00000000002AB0FC string=0x00000000002AB100 ""
 *   insn=0x00000000002AB100 string=0x00000000002AB104 "h\n"
 *   insn=0x00000000002AB108 string=0x00000000002AB10C "h"
 *   insn=0x00000000002AB10C string=0x00000000002AB110 "@"
 *   insn=0x00000000002AB144 string=0x00000000002AB148 "h"
 *   insn=0x00000000002AB14C string=0x00000000002AB150 " "
 *   insn=0x00000000002AB154 string=0x00000000002AB158 "3"
 *   insn=0x00000000002AB158 string=0x00000000002AB15C ""
 *   insn=0x00000000002AB158 string=0x00000000002AB17C "h"
 *   insn=0x00000000002AB164 string=0x00000000002AB168 "^2"
 *   insn=0x00000000002AB17C string=0x00000000002AB180 ""
 *   insn=0x00000000002AB180 string=0x00000000002AB184 "h"
 *   insn=0x00000000002AB190 string=0x00000000002AB194 "3"
 *   insn=0x00000000002AB194 string=0x00000000002AB198 "h"
 *   insn=0x00000000002AB198 string=0x00000000002AB19C ""
 *   insn=0x00000000002AB19C string=0x00000000002AB1A0 "h"
 *   insn=0x00000000002AB1A4 string=0x00000000002AB1A8 "h"
 *   insn=0x00000000002AB1AC string=0x00000000002AB1B0 "\t@"
 *   insn=0x00000000002AB1B4 string=0x00000000002AB1B8 "h\n@"
 *   insn=0x00000000002AB1B8 string=0x00000000002AB1BC ""
 *   insn=0x00000000002AB1BC string=0x00000000002AB1C0 "h\n"
 *   insn=0x00000000002AB1C4 string=0x00000000002AB1C8 "h"
 *   insn=0x00000000002AB1CC string=0x00000000002AB1D0 "@"
 *   insn=0x00000000002AB1EC string=0x00000000002AB1F0 "3"
 *   insn=0x00000000002AB1F0 string=0x00000000002AB1F4 "h"
 *   insn=0x00000000002AB1F4 string=0x00000000002AB1F8 ""
 *   insn=0x00000000002AB1F8 string=0x00000000002AB1FC "h"
 *   insn=0x00000000002AB200 string=0x00000000002AB204 "h"
 *   insn=0x00000000002AB204 string=0x00000000002AB208 "\t@"
 *   insn=0x00000000002AB210 string=0x00000000002AB214 "h\n@"
 *   insn=0x00000000002AB214 string=0x00000000002AB218 ""
 *   insn=0x00000000002AB218 string=0x00000000002AB21C "h\n"
 *   insn=0x00000000002AB220 string=0x00000000002AB224 "h"
 *   insn=0x00000000002AB224 string=0x00000000002AB228 "@"
 *   insn=0x00000000002AB238 string=0x00000000002AB23C "D"
 *   insn=0x00000000002AB25C string=0x00000000002AB260 "hr@"
 *   insn=0x00000000002AB25C string=0x00000000001FCE30 "0'"
 *   insn=0x00000000002AB264 string=0x00000000002AB268 "\t"
 *   insn=0x00000000002AB268 string=0x00000000002AB26C "("
 *   insn=0x00000000002AB274 string=0x00000000002AB278 "@"
 *   insn=0x00000000002AB28C string=0x00000000002AB290 "i"
 *   insn=0x00000000002AB294 string=0x00000000002AB298 ""
 *   insn=0x00000000002AB2A4 string=0x00000000002AB2A8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleEmitterComponent::AddParticle(
        Caver::ParticleEmitterComponent *this,
        int a2,
        const Caver::Vector3 *a3,
        const Caver::Vector3 *a4,
        float a5,
        const Caver::Color *a6,
        float a7)
{
  Caver::ParticleEmitterComponent *v8; // x8
  _QWORD *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8

  _ReadStatusReg(TPIDR_EL0);
  v8 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 35);
  if ( v8
    || (Caver::ComponentOutletBase::Connect((Caver::ParticleEmitterComponent *)((char *)this + 264), this),
        (v8 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 35)) != 0) )
  {
    if ( v8 != this )
    {
      v9 = (_QWORD *)*((_QWORD *)v8 + 42);
      if ( !v9 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  v9 = (_QWORD *)*((_QWORD *)this + 42);
  if ( v9 )
LABEL_7:
    ++v9[1];
LABEL_8:
  Caver::ParticleSystem::AddParticle();
  v11 = v10;
  if ( v9 )
  {
    v12 = v9[1] - 1LL;
    v9[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v13 = v9[2] - 1LL;
      v9[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  return v11;
}

