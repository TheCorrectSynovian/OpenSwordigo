/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000268EB4
 * Mangled: _ZN5Caver15EntityComponent6UpdateEf
 * Demangled: Caver::EntityComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FC070  Caver::EntityComponent::Update(float)
 *
 * Callees: 3
 *   0x00000000001F81F0  Caver::ParticleEmitterComponent::StopEmitting(void)
 *   0x00000000001FBEE0  Caver::PhysicsObjectState::Update(float)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *
 * Referenced strings: 29
 *   insn=0x0000000000268EC8 string=0x0000000000268ECC "h"
 *   insn=0x0000000000268ECC string=0x0000000000268ED0 ""
 *   insn=0x0000000000268ED4 string=0x0000000000268F04 "`"
 *   insn=0x0000000000268ED8 string=0x0000000000268EDC "`.A"
 *   insn=0x0000000000268ED8 string=0x0000000000583944 "\n"
 *   insn=0x0000000000268EE8 string=0x0000000000268EEC "`"
 *   insn=0x0000000000268EF0 string=0x0000000000268EF4 "`.A"
 *   insn=0x0000000000268EF0 string=0x00000000001F81F0 "0'"
 *   insn=0x0000000000268EFC string=0x0000000000268F00 "`."
 *   insn=0x0000000000268F0C string=0x0000000000268F10 "h"
 *   insn=0x0000000000268F0C string=0x00000000001FBEE0 "0'"
 *   insn=0x0000000000268F10 string=0x0000000000268F14 "H"
 *   insn=0x0000000000268F14 string=0x0000000000268F18 "`"
 *   insn=0x0000000000268F1C string=0x0000000000583734 "o"
 *   insn=0x0000000000268F24 string=0x0000000000268F28 "`"
 *   insn=0x0000000000268F2C string=0x0000000000268F30 "e"
 *   insn=0x0000000000268F30 string=0x0000000000268F34 "h"
 *   insn=0x0000000000268F50 string=0x0000000000268F54 ""
 *   insn=0x0000000000268F54 string=0x0000000000268F58 "Q@"
 *   insn=0x0000000000268F5C string=0x0000000000268F60 "`"
 *   insn=0x0000000000268F7C string=0x0000000000268F80 "`"
 *   insn=0x0000000000268F8C string=0x0000000000268F90 "`"
 *   insn=0x0000000000268F8C string=0x0000000000268FC8 "h"
 *   insn=0x0000000000268F90 string=0x0000000000268F94 "  "
 *   insn=0x0000000000268F98 string=0x0000000000268F9C "hBB9H"
 *   insn=0x0000000000268F9C string=0x0000000000268FA0 "H"
 *   insn=0x0000000000268FA0 string=0x0000000000268FA4 "h"
 *   insn=0x0000000000268FB4 string=0x0000000000268FB8 "!!"
 *   insn=0x0000000000268FCC string=0x0000000000268FD0 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityComponent::Update(Caver::EntityComponent *this, float a2)
{
  float v4; // s0
  __int64 result; // x0
  float v6; // s0
  __int64 v7; // x8
  _QWORD *v8; // x21
  _QWORD *i; // x22

  if ( *((_BYTE *)this + 296) )
  {
    v4 = *((float *)this + 75);
    if ( v4 > 0.01 )
    {
      Caver::ParticleEmitterComponent::StopEmitting(*((Caver::ParticleEmitterComponent **)this + 36));
      v4 = *((float *)this + 75);
      *((_BYTE *)this + 296) = 0;
    }
    *((float *)this + 75) = v4 + a2;
  }
  result = Caver::PhysicsObjectState::Update((Caver::EntityComponent *)((char *)this + 120), a2);
  if ( *((_BYTE *)this + 256) )
  {
    v6 = *((float *)this + 65) - a2;
    *((float *)this + 65) = v6;
    if ( v6 < 0.001 )
    {
      v7 = *((_QWORD *)this + 5);
      v8 = *(_QWORD **)(v7 + 192);
      for ( i = *(_QWORD **)(v7 + 200); i != v8; ++v8 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *(__fastcall *)(Caver::ModelComponent *))(Caver::ModelComponent *__hidden)))(*(_QWORD *)*v8 + 160LL))(
                   *v8,
                   Caver::ModelComponent::Interface);
        if ( (result & 1) != 0 )
          *(_BYTE *)(*v8 + 309LL) = 0;
      }
      *((_BYTE *)this + 256) = 0;
    }
  }
  if ( *((float *)this + 32) >= 0.1
    || *((float *)this + 35) <= 0.0
    || *((_BYTE *)this + 144)
    || (float)((float)(*(float *)(*((_QWORD *)this + 5) + 104LL) * *(float *)(*((_QWORD *)this + 5) + 104LL))
             + (float)(*(float *)(*((_QWORD *)this + 5) + 108LL) * *(float *)(*((_QWORD *)this + 5) + 108LL))) > 2500.0 )
  {
    *(_BYTE *)(*((_QWORD *)this + 5) + 242LL) = 1;
  }
  return result;
}

