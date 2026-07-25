/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE250
 * Mangled: ._ZN5Caver18MagicBombComponent7ExplodeEv
 * Demangled: Caver::MagicBombComponent::Explode(void)
 *
 * Callers: 1
 *   0x00000000002863DC  Caver::MagicBombComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE258 string=0x00000000001FE25C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MagicBombComponent::Explode(Caver::MagicBombComponent *this)
{
  JUMPOUT(0x285FE0);
}

