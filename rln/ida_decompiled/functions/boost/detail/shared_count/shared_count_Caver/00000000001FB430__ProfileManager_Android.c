/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB430
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver22ProfileManager_AndroidEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::ProfileManager_Android>(Caver::ProfileManager_Android *)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x000000000047B720  boost::detail::shared_count::shared_count<Caver::ProfileManager_Android>(Caver::ProfileManager_Android *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB438 string=0x00000000001FB43C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::ProfileManager_Android>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver22ProfileManager_AndroidEEEPT_();
}

