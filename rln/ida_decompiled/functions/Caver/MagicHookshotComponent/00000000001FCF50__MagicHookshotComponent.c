/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCF50
 * Mangled: ._ZN5Caver22MagicHookshotComponentC2Ev_0
 * Demangled: Caver::MagicHookshotComponent::MagicHookshotComponent(void)
 *
 * Callers: 1
 *   0x0000000000250878  Caver::MagicHookshotComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000288D9C  Caver::MagicExplosionComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCF58 string=0x00000000001FCF5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MagicHookshotComponent::MagicHookshotComponent(Caver::MagicHookshotComponent *this)
{
  JUMPOUT(0x288DF4);
}

