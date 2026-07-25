/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE570
 * Mangled: ._ZN5Caver17ItemDropComponent15RegisterLibraryEv
 * Demangled: Caver::ItemDropComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000278134  Caver::ItemDropComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000278138  Caver::ItemDropComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE578 string=0x00000000001FE57C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemDropComponent::RegisterLibrary(Caver::ItemDropComponent *this)
{
  return _ZN5Caver17ItemDropComponent15RegisterLibraryEv(this);
}

