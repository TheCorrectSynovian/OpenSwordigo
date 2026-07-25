/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA4E0
 * Mangled: ._ZN5Caver34SnappingMonsterControllerComponent15RegisterLibraryEv
 * Demangled: Caver::SnappingMonsterControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000029F4E4  Caver::SnappingMonsterControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000029F524  Caver::SnappingMonsterControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA4E8 string=0x00000000001FA4EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SnappingMonsterControllerComponent::RegisterLibrary(
        Caver::SnappingMonsterControllerComponent *this)
{
  return _ZN5Caver34SnappingMonsterControllerComponent15RegisterLibraryEv(this);
}

