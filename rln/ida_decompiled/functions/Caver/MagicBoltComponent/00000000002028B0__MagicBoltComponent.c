/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002028B0
 * Mangled: ._ZN5Caver18MagicBoltComponentC2Ev_0
 * Demangled: Caver::MagicBoltComponent::MagicBoltComponent(void)
 *
 * Callers: 1
 *   0x000000000028570C  Caver::MagicBoltComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002839E0  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002028B8 string=0x00000000002028BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicBoltComponent::MagicBoltComponent(Caver::MagicBoltComponent *this)
{
  return _ZN5Caver18MagicBoltComponentC2Ev(this);
}

