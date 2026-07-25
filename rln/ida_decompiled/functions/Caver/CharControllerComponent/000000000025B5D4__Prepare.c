/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025B5D4
 * Mangled: _ZN5Caver23CharControllerComponent7PrepareEv
 * Demangled: Caver::CharControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEC60  Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::Prepare(Caver::CharControllerComponent *this)
{
  return Caver::CharControllerComponent::RegisterLibrary(this);
}

