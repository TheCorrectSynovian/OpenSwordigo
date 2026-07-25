/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8CD0
 * Mangled: ._ZN5Caver16SetResourcesPathERKSs
 * Demangled: Caver::SetResourcesPath(std::string const&)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x000000000047D590  Caver::SetResourcesPath(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8CD8 string=0x00000000001F8CDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SetResourcesPath()
{
  return _ZN5Caver16SetResourcesPathERKSs();
}

