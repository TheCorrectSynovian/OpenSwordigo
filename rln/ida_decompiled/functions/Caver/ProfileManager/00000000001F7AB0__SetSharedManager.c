/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7AB0
 * Mangled: ._ZN5Caver14ProfileManager16SetSharedManagerERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::ProfileManager::SetSharedManager(boost::shared_ptr<Caver::ProfileManager> const&)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000003A5E3C  Caver::ProfileManager::SetSharedManager(boost::shared_ptr<Caver::ProfileManager> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7AB8 string=0x00000000001F7ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProfileManager::SetSharedManager()
{
  return _ZN5Caver14ProfileManager16SetSharedManagerERKN5boost10shared_ptrIS0_EE();
}

