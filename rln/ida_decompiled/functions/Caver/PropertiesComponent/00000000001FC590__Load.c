/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC590
 * Mangled: ._ZN5Caver19PropertiesComponent4LoadEv
 * Demangled: Caver::PropertiesComponent::Load(void)
 *
 * Callers: 4
 *   0x0000000000233744  Caver::PropertiesComponent::RegisterLibrary(void)
 *   0x0000000000233E70  Caver::PropertiesComponent::PropertyForKey(std::string const&)
 *   0x0000000000233EC0  sub_233EC0
 *   0x0000000000234110  sub_234110
 *
 * Callees: 1
 *   0x0000000000233744  Caver::PropertiesComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC598 string=0x00000000001FC59C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PropertiesComponent::Load(Caver::PropertiesComponent *this)
{
  JUMPOUT(0x233884);
}

