/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202060
 * Mangled: ._ZN5Caver18MagicBombComponentC2Ev
 * Demangled: Caver::MagicBombComponent::MagicBombComponent(void)
 *
 * Callers: 1
 *   0x00000000002507F8  Caver::MagicBombComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000028580C  Caver::MagicBoltComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202068 string=0x000000000020206C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MagicBombComponent::MagicBombComponent(Caver::MagicBombComponent *this)
{
  JUMPOUT(0x285864);
}

