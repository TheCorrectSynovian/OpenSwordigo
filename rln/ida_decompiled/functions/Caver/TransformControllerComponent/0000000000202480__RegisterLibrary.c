/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202480
 * Mangled: ._ZN5Caver28TransformControllerComponent15RegisterLibraryEv
 * Demangled: Caver::TransformControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000002407CC  Caver::TransformControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002407D0  Caver::TransformControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202488 string=0x000000000020248C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TransformControllerComponent::RegisterLibrary(Caver::TransformControllerComponent *this)
{
  return _ZN5Caver28TransformControllerComponent15RegisterLibraryEv(this);
}

