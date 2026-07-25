/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7A60
 * Mangled: ._ZN5Caver24OnlineController_AndroidC2Ev
 * Demangled: Caver::OnlineController_Android::OnlineController_Android(void)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004BA760  Caver::OnlineController_Android::OnlineController_Android(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7A64 string=0x00000000004BA760 "h"
 *   insn=0x00000000001F7A68 string=0x00000000001F7A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::OnlineController_Android(Caver::OnlineController_Android *this)
{
  return _ZN5Caver24OnlineController_AndroidC2Ev(this);
}

