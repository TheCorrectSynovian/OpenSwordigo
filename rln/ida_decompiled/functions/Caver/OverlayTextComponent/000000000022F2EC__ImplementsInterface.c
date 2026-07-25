/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022F2EC
 * Mangled: _ZN5Caver20OverlayTextComponent19ImplementsInterfaceEl
 * Demangled: Caver::OverlayTextComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000022B9F4  Caver::OverlayComponent::className(void)
 *   0x000000000022F364  Caver::OverlayTextComponent::className(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000022F2EC string=0x000000000022F2F0 ""
 *   insn=0x000000000022F2F4 string=0x000000000022F2F8 ")"
 *   insn=0x000000000022F2F8 string=0x000000000022F2FC "?"
 *   insn=0x000000000022F300 string=0x000000000022F304 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::ImplementsInterface(
        Caver::OverlayTextComponent *this,
        _QWORD (*a2)(Caver::OverlayTextComponent *__hidden this))
{
  return (a2 == Caver::OverlayTextComponent::Interface) | (unsigned int)(a2 == Caver::OverlayComponent::Interface);
}

