/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC320
 * Mangled: ._ZN5Caver15HealthComponent15RegisterLibraryEv
 * Demangled: Caver::HealthComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000270800  Caver::HealthComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000270874  Caver::HealthComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC328 string=0x00000000001FC32C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HealthComponent::RegisterLibrary(Caver::HealthComponent *this)
{
  return _ZN5Caver15HealthComponent15RegisterLibraryEv(this);
}

