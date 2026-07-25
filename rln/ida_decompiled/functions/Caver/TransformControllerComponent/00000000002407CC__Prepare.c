/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002407CC
 * Mangled: _ZN5Caver28TransformControllerComponent7PrepareEv
 * Demangled: Caver::TransformControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202480  Caver::TransformControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TransformControllerComponent::Prepare(Caver::TransformControllerComponent *this)
{
  return Caver::TransformControllerComponent::RegisterLibrary(this);
}

