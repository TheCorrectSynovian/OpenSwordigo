/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCC80
 * Mangled: ._ZN5boost10shared_ptrIN5Caver10CaverShellEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::CaverShell>::shared_ptr<Caver::CaverShell>(Caver::CaverShell *)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x000000000047B8B8  boost::shared_ptr<Caver::CaverShell>::shared_ptr<Caver::CaverShell>(Caver::CaverShell *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCC88 string=0x00000000001FCC8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::CaverShell>::shared_ptr<Caver::CaverShell>()
{
  return _ZN5boost10shared_ptrIN5Caver10CaverShellEEC2IS2_EEPT_();
}

