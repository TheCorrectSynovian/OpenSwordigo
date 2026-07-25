/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8610
 * Mangled: ._ZN5Caver22PhysicsObjectComponent15RegisterLibraryEv
 * Demangled: Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000027F440  Caver::PhysicsObjectComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000027F4C8  Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8618 string=0x00000000001F861C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsObjectComponent::RegisterLibrary(Caver::PhysicsObjectComponent *this)
{
  return _ZN5Caver22PhysicsObjectComponent15RegisterLibraryEv(this);
}

