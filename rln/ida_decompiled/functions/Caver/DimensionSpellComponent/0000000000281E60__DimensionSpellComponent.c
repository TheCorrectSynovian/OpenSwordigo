/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281E60
 * Mangled: _ZN5Caver23DimensionSpellComponentC2Ev
 * Demangled: Caver::DimensionSpellComponent::DimensionSpellComponent(void)
 *
 * Callers: 1
 *   0x00000000001FB9C0  Caver::DimensionSpellComponent::DimensionSpellComponent(void)
 *
 * Callees: 1
 *   0x00000000001F8740  Caver::SpellComponent::SpellComponent(void)
 *
 * Referenced strings: 10
 *   insn=0x0000000000281E6C string=0x0000000000281E70 "4"
 *   insn=0x0000000000281E70 string=0x0000000000281E74 "(#"
 *   insn=0x0000000000281E70 string=0x00000000001F8740 "0'"
 *   insn=0x0000000000281E74 string=0x0000000000281E78 ""
 *   insn=0x0000000000281E78 string=0x0000000000281E7C "\n!"
 *   insn=0x0000000000281E7C string=0x0000000000281E80 "\tA"
 *   insn=0x0000000000281E80 string=0x0000000000281E84 "@"
 *   insn=0x0000000000281E84 string=0x0000000000281E88 "!"
 *   insn=0x0000000000281E8C string=0x0000000000281E90 "i"
 *   insn=0x0000000000281E90 string=0x0000000000281E94 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::DimensionSpellComponent::DimensionSpellComponent(Caver::DimensionSpellComponent *this)
{
  __n128 result; // q0

  Caver::SpellComponent::SpellComponent(this);
  result.n128_u64[0] = (unsigned __int64)&off_6C0028;
  result.n128_u64[1] = (unsigned __int64)&off_6C0068;
  *(_QWORD *)this = off_6BFEF0;
  *((__n128 *)this + 1) = result;
  return result;
}

