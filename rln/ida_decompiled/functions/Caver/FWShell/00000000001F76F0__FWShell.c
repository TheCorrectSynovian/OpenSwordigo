/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F76F0
 * Mangled: ._ZN5Caver7FWShellC2Ev
 * Demangled: Caver::FWShell::FWShell(void)
 *
 * Callers: 2
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x000000000047D754  Caver::FWShell::FWShell(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F76F8 string=0x00000000001F76FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWShell::FWShell(Caver::FWShell *this)
{
  return _ZN5Caver7FWShellC2Ev(this);
}

