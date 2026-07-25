/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FACA0
 * Mangled: ._ZN5Caver15EntityComponentC2Ev_0
 * Demangled: Caver::EntityComponent::EntityComponent(void)
 *
 * Callers: 1
 *   0x000000000024F6C4  Caver::EntityComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000267BEC  Caver::EntityComponent::EntityComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FACA8 string=0x00000000001FACAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::EntityComponent(Caver::EntityComponent *this)
{
  return _ZN5Caver15EntityComponentC2Ev(this);
}

