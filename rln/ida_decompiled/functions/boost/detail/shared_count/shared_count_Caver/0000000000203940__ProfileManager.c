/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203940
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver14ProfileManagerEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::ProfileManager>(Caver::ProfileManager *)
 *
 * Callers: 1
 *   0x00000000003A5D0C  Caver::ProfileManager::sharedManager(void)
 *
 * Callees: 1
 *   0x00000000003A7934  boost::detail::shared_count::shared_count<Caver::ProfileManager>(Caver::ProfileManager *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203948 string=0x000000000020394C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::ProfileManager>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver14ProfileManagerEEEPT_();
}

