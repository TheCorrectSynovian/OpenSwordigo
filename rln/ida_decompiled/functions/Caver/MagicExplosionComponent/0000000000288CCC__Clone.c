/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000288CCC
 * Mangled: _ZNK5Caver23MagicExplosionComponent5CloneEv
 * Demangled: Caver::MagicExplosionComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002889AC  Caver::MagicExplosionComponent::~MagicExplosionComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FE960  Caver::MagicExplosionComponent::MagicExplosionComponent(void)
 *   0x0000000000288D44  Caver::MagicExplosionComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000288CDC string=0x0000000000288CE0 "@"
 *   insn=0x0000000000288CE0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000288CE8 string=0x0000000000288CEC "h"@"
 *   insn=0x0000000000288CEC string=0x0000000000288CF0 "a"
 *   insn=0x0000000000288CF8 string=0x0000000000288CFC "k"
 *   insn=0x0000000000288CFC string=0x0000000000288D00 "hz@"
 *   insn=0x0000000000288D0C string=0x0000000000288D10 "`."
 *   insn=0x0000000000288D14 string=0x0000000000288D18 "hr@"
 *   insn=0x0000000000288D1C string=0x0000000000288D20 "h"
 *   insn=0x0000000000288D34 string=0x0000000000288D38 "^"
 *   insn=0x0000000000288D38 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MagicExplosionComponent::Clone(Caver::MagicExplosionComponent *this)
{
  __int64 v2; // x20
  long double result; // q0

  v2 = operator new(0x188u);
  Caver::MagicExplosionComponent::MagicExplosionComponent((Caver::MagicExplosionComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  result = *((long double *)this + 11);
  *(long double *)(v2 + 176) = result;
  *(_QWORD *)(v2 + 224) = *((_QWORD *)this + 28);
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  return result;
}

