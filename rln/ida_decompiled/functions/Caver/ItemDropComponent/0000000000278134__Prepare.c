/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000278134
 * Mangled: _ZN5Caver17ItemDropComponent7PrepareEv
 * Demangled: Caver::ItemDropComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE570  Caver::ItemDropComponent::RegisterLibrary(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemDropComponent::Prepare(Caver::ItemDropComponent *this)
{
  return Caver::ItemDropComponent::RegisterLibrary(this);
}

