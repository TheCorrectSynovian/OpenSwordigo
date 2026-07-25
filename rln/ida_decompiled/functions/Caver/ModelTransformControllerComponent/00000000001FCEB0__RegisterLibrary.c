/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCEB0
 * Mangled: ._ZN5Caver33ModelTransformControllerComponent15RegisterLibraryEv
 * Demangled: Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000022803C  Caver::ModelTransformControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000228040  Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCEB8 string=0x00000000001FCEBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelTransformControllerComponent::RegisterLibrary(
        Caver::ModelTransformControllerComponent *this)
{
  return _ZN5Caver33ModelTransformControllerComponent15RegisterLibraryEv(this);
}

