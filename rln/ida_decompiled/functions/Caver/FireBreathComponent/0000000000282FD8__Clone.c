/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282FD8
 * Mangled: _ZNK5Caver19FireBreathComponent5CloneEv
 * Demangled: Caver::FireBreathComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000282D70  Caver::FireBreathComponent::~FireBreathComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *   0x00000000001FFBF0  Caver::FireBreathComponent::FireBreathComponent(void)
 *   0x0000000000283040  Caver::FireBreathComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000282FE8 string=0x0000000000282FEC "}"
 *   insn=0x0000000000282FEC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000282FFC string=0x0000000000283000 "|"
 *   insn=0x0000000000283000 string=0x0000000000283004 "h"
 *   insn=0x0000000000283000 string=0x00000000001F9DF0 "0'"
 *   insn=0x0000000000283010 string=0x0000000000283014 "h"
 *   insn=0x0000000000283018 string=0x000000000028301C "`>"
 *   insn=0x0000000000283034 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000283038 string=0x000000000028303C """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::FireBreathComponent::Clone(Caver::FireBreathComponent *this)
{
  __int64 v2; // x20
  long double result; // q0

  v2 = operator new(0x108u);
  Caver::FireBreathComponent::FireBreathComponent((Caver::FireBreathComponent *)v2);
  Caver::SpellComponent::InitWithComponent((Caver::SpellComponent *)v2, this);
  *(_DWORD *)(v2 + 200) = *((_DWORD *)this + 50);
  *(_DWORD *)(v2 + 224) = *((_DWORD *)this + 56);
  result = *((long double *)this + 15);
  *(long double *)(v2 + 240) = result;
  return result;
}

