/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AE534
 * Mangled: _ZThn16_N5Caver21PortalEffectComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::PortalEffectComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7700  Caver::GlowComponent::PerformBindedAction(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002AE534 string=0x00000000002AE538 "r$"
 *   insn=0x00000000002AE538 string=0x00000000001F7700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PortalEffectComponent::PerformBindedAction(
        Caver::PortalEffectComponent *this,
        int a2)
{
  return Caver::GlowComponent::PerformBindedAction((Caver::PortalEffectComponent *)((char *)this - 16), a2);
}

