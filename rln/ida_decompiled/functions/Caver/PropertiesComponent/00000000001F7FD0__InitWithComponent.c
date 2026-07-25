/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7FD0
 * Mangled: ._ZN5Caver19PropertiesComponent17InitWithComponentEPKS0_
 * Demangled: Caver::PropertiesComponent::InitWithComponent(Caver::PropertiesComponent const*)
 *
 * Callers: 1
 *   0x0000000000234428  Caver::PropertiesComponent::~PropertiesComponent()
 *
 * Callees: 1
 *   0x000000000023311C  Caver::PropertiesComponent::InitWithComponent(Caver::PropertiesComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7FD8 string=0x00000000001F7FDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PropertiesComponent::InitWithComponent(
        Caver::PropertiesComponent *this,
        const Caver::PropertiesComponent *a2)
{
  return _ZN5Caver19PropertiesComponent17InitWithComponentEPKS0_(this, a2);
}

