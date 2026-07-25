/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203B20
 * Mangled: ._ZN5Caver14ProfileManager27DeleteProfileWithIdentifierERKSs
 * Demangled: Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *
 * Callers: 1
 *   0x00000000004BB7B8  Caver::ProfileManager_Android::DeleteProfileWithIdentifier(std::string const&)
 *
 * Callees: 1
 *   0x00000000003A7124  Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203B28 string=0x0000000000203B2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProfileManager::DeleteProfileWithIdentifier()
{
  return _ZN5Caver14ProfileManager27DeleteProfileWithIdentifierERKSs();
}

