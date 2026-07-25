/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5BE0
 * Mangled: ._ZN5Caver16ProgramComponent15RegisterLibraryEv
 * Demangled: Caver::ProgramComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000232710  Caver::ProgramComponent::Execute(void)
 *
 * Callees: 1
 *   0x0000000000232984  Caver::ProgramComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5BE8 string=0x00000000001F5BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramComponent::RegisterLibrary(Caver::ProgramComponent *this)
{
  return _ZN5Caver16ProgramComponent15RegisterLibraryEv(this);
}

