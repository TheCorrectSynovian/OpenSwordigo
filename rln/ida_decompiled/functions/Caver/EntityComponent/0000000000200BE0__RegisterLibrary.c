/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200BE0
 * Mangled: ._ZN5Caver15EntityComponent15RegisterLibraryEv
 * Demangled: Caver::EntityComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000268C2C  Caver::EntityComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000268CD8  Caver::EntityComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200BE8 string=0x0000000000200BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::RegisterLibrary(Caver::EntityComponent *this)
{
  return _ZN5Caver15EntityComponent15RegisterLibraryEv(this);
}

