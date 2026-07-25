/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002016A0
 * Mangled: ._ZN5Caver7FWMouse11sharedMouseEv
 * Demangled: Caver::FWMouse::sharedMouse(void)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004AB680  Caver::FWMouse::sharedMouse(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002016A8 string=0x00000000002016AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWMouse::sharedMouse(Caver::FWMouse *this)
{
  return _ZN5Caver7FWMouse11sharedMouseEv(this);
}

