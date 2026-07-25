/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4930
 * Mangled: ._ZN5Caver18MagicBoltComponentC2Ev
 * Demangled: Caver::MagicBoltComponent::MagicBoltComponent(void)
 *
 * Callers: 1
 *   0x0000000000250838  Caver::MagicBoltComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002839E0  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4938 string=0x00000000001F493C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicBoltComponent::MagicBoltComponent(Caver::MagicBoltComponent *this)
{
  return _ZN5Caver18MagicBoltComponentC2Ev(this);
}

