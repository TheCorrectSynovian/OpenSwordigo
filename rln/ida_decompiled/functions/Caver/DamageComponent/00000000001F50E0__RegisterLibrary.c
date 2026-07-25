/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F50E0
 * Mangled: ._ZN5Caver15DamageComponent15RegisterLibraryEv
 * Demangled: Caver::DamageComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000265D64  Caver::DamageComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000265D68  Caver::DamageComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F50E8 string=0x00000000001F50EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DamageComponent::RegisterLibrary(Caver::DamageComponent *this)
{
  return _ZN5Caver15DamageComponent15RegisterLibraryEv(this);
}

