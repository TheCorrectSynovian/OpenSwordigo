/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000233740
 * Mangled: _ZN5Caver19PropertiesComponent7PrepareEv
 * Demangled: Caver::PropertiesComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6180  Caver::PropertiesComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000233740 string=0x00000000001F6180 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PropertiesComponent::Prepare(Caver::PropertiesComponent *this)
{
  return Caver::PropertiesComponent::RegisterLibrary(this);
}

