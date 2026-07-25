/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000287E40
 * Mangled: _ZN5Caver23MagicExplosionComponent18ExplodeToDirectionERKNS_7Vector2Ef
 * Demangled: Caver::MagicExplosionComponent::ExplodeToDirection(Caver::Vector2 const&,float)
 *
 * Callers: 2
 *   0x00000000001F36C0  Caver::MagicExplosionComponent::ExplodeToDirection(Caver::Vector2 const&,float)
 *   0x0000000000287B34  Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x0000000000287E44 string=0x0000000000287E48 """"
 *   insn=0x0000000000287E4C string=0x0000000000287E50 "("
 *   insn=0x0000000000287E50 string=0x0000000000287E54 "!"
 *   insn=0x0000000000287E5C string=0x0000000000287E60 "h"
 *   insn=0x0000000000287E68 string=0x0000000000287E6C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicExplosionComponent::ExplodeToDirection(__int64 result, __int64 *a2, float a3)
{
  float v3; // s1
  float v4; // s3
  __int64 v5; // x8

  v3 = *(float *)(result + 224);
  v4 = *(float *)(result + 228);
  *(float *)(result + 232) = v3 * 1.5;
  v5 = *a2;
  *(float *)(result + 216) = v3 / v4;
  *(float *)(result + 220) = a3;
  *(_WORD *)(result + 240) = 0;
  *(_QWORD *)(result + 208) = v5;
  *(_DWORD *)(result + 236) = 0;
  *(_BYTE *)(result + 242) = 1;
  return result;
}

