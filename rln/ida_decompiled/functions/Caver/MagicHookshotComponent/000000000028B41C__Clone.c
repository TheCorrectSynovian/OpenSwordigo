/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028B41C
 * Mangled: _ZNK5Caver22MagicHookshotComponent5CloneEv
 * Demangled: Caver::MagicHookshotComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000028AFD4  Caver::MagicHookshotComponent::~MagicHookshotComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7290  Caver::MagicHookshotComponent::MagicHookshotComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *   0x000000000028B49C  Caver::MagicHookshotComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000028B42C string=0x000000000028B430 "l"
 *   insn=0x000000000028B430 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028B438 string=0x00000000001F7290 "0'"
 *   insn=0x000000000028B440 string=0x000000000028B444 "k"
 *   insn=0x000000000028B444 string=0x00000000001F9DF0 "0'"
 *   insn=0x000000000028B450 string=0x000000000028B454 "h"
 *   insn=0x000000000028B458 string=0x000000000028B45C "h"
 *   insn=0x000000000028B460 string=0x000000000028B464 "h"
 *   insn=0x000000000028B468 string=0x000000000028B46C "h"
 *   insn=0x000000000028B474 string=0x000000000028B478 "h"
 *   insn=0x000000000028B490 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028B494 string=0x000000000028B498 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MagicHookshotComponent::Clone(Caver::MagicHookshotComponent *this)
{
  __int64 v2; // x19
  long double result; // q0

  v2 = operator new(0x170u);
  Caver::MagicHookshotComponent::MagicHookshotComponent((Caver::MagicHookshotComponent *)v2);
  Caver::SpellComponent::InitWithComponent((Caver::SpellComponent *)v2, this);
  *(_DWORD *)(v2 + 200) = *((_DWORD *)this + 50);
  *(_DWORD *)(v2 + 224) = *((_DWORD *)this + 56);
  *(_DWORD *)(v2 + 248) = *((_DWORD *)this + 62);
  *(_DWORD *)(v2 + 272) = *((_DWORD *)this + 68);
  result = *(long double *)((char *)this + 296);
  *(long double *)(v2 + 296) = result;
  return result;
}

