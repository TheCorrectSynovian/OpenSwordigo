/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201140
 * Mangled: ._ZN5Caver10FWKeyboard18RemoveAllListenersEv
 * Demangled: Caver::FWKeyboard::RemoveAllListeners(void)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004AB640  Caver::FWKeyboard::RemoveAllListeners(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201148 string=0x000000000020114C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWKeyboard::RemoveAllListeners(Caver::FWKeyboard *this)
{
  return _ZN5Caver10FWKeyboard18RemoveAllListenersEv(this);
}

