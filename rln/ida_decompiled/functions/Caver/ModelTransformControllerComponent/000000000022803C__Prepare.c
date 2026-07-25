/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022803C
 * Mangled: _ZN5Caver33ModelTransformControllerComponent7PrepareEv
 * Demangled: Caver::ModelTransformControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCEB0  Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000022803C string=0x00000000001FCEB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelTransformControllerComponent::Prepare(Caver::ModelTransformControllerComponent *this)
{
  return Caver::ModelTransformControllerComponent::RegisterLibrary(this);
}

