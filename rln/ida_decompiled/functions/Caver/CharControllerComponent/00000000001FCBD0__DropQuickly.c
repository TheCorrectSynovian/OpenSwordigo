/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCBD0
 * Mangled: ._ZN5Caver23CharControllerComponent11DropQuicklyEv
 * Demangled: Caver::CharControllerComponent::DropQuickly(void)
 *
 * Callers: 3
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000025E040  Caver::CharControllerComponent::Hurt(void)
 *   0x000000000025E468  Caver::CharControllerComponent::Die(void)
 *
 * Callees: 1
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCBD8 string=0x00000000001FCBDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharControllerComponent::DropQuickly(Caver::CharControllerComponent *this)
{
  JUMPOUT(0x25DA0C);
}

