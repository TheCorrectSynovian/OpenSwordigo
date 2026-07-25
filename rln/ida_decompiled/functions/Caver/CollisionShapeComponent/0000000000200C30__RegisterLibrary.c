/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200C30
 * Mangled: ._ZN5Caver23CollisionShapeComponent15RegisterLibraryEv
 * Demangled: Caver::CollisionShapeComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000021A864  Caver::CollisionShapeComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000021A8A8  Caver::CollisionShapeComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200C38 string=0x0000000000200C3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::RegisterLibrary(Caver::CollisionShapeComponent *this)
{
  return _ZN5Caver23CollisionShapeComponent15RegisterLibraryEv(this);
}

