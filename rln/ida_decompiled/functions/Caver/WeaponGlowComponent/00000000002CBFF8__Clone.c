/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CBFF8
 * Mangled: _ZNK5Caver19WeaponGlowComponent5CloneEv
 * Demangled: Caver::WeaponGlowComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002CBE44  Caver::WeaponGlowComponent::~WeaponGlowComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202280  Caver::WeaponGlowComponent::WeaponGlowComponent(void)
 *   0x00000000002032E0  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *   0x00000000002CC068  Caver::WeaponGlowComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002CC008 string=0x00000000002CC00C "u"
 *   insn=0x00000000002CC00C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CC020 string=0x00000000002CC024 "h"
 *   insn=0x00000000002CC030 string=0x00000000002CC034 "`B"
 *   insn=0x00000000002CC038 string=0x00000000002CC03C "h"
 *   insn=0x00000000002CC040 string=0x00000000002CC044 "h"
 *   insn=0x00000000002CC05C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::WeaponGlowComponent::Clone(Caver::WeaponGlowComponent *this)
{
  __int64 v2; // x20
  long double result; // q0

  v2 = operator new(0xF8u);
  Caver::WeaponGlowComponent::WeaponGlowComponent((Caver::WeaponGlowComponent *)v2);
  Caver::GlowComponent::InitWithComponent((Caver::GlowComponent *)v2, this);
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  result = *(long double *)((char *)this + 164);
  *(long double *)(v2 + 164) = result;
  *(_DWORD *)(v2 + 180) = *((_DWORD *)this + 45);
  *(_DWORD *)(v2 + 244) = *((_DWORD *)this + 61);
  return result;
}

