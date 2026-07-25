/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8710
 * Mangled: ._ZN5Caver19PropertiesComponent14PropertyForKeyERKSs
 * Demangled: Caver::PropertiesComponent::PropertyForKey(std::string const&)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x0000000000233E70  Caver::PropertiesComponent::PropertyForKey(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8718 string=0x00000000001F871C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PropertiesComponent::PropertyForKey(Caver::PropertiesComponent *this)
{
  return _ZN5Caver19PropertiesComponent14PropertyForKeyERKSs(this);
}

