/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201630
 * Mangled: ._ZN5Caver7FWMouse18RemoveAllListenersEv
 * Demangled: Caver::FWMouse::RemoveAllListeners(void)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004AB9C4  Caver::FWMouse::RemoveAllListeners(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201638 string=0x000000000020163C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWMouse::RemoveAllListeners(Caver::FWMouse *this)
{
  return _ZN5Caver7FWMouse18RemoveAllListenersEv(this);
}

