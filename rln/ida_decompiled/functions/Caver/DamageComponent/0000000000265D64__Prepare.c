/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000265D64
 * Mangled: _ZN5Caver15DamageComponent7PrepareEv
 * Demangled: Caver::DamageComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F50E0  Caver::DamageComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000265D64 string=0x00000000001F50E0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DamageComponent::Prepare(Caver::DamageComponent *this)
{
  return Caver::DamageComponent::RegisterLibrary(this);
}

