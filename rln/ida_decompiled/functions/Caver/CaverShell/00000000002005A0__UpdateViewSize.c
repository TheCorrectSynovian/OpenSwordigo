/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002005A0
 * Mangled: ._ZN5Caver10CaverShell14UpdateViewSizeEv
 * Demangled: Caver::CaverShell::UpdateViewSize(void)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000004789F0  Java_com_touchfoo_swordigo_Native_setApplicationViewSize
 *
 * Callees: 1
 *   0x000000000020E400  Caver::CaverShell::UpdateViewSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002005A8 string=0x00000000002005AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CaverShell::UpdateViewSize(Caver::CaverShell *this)
{
  return _ZN5Caver10CaverShell14UpdateViewSizeEv(this);
}

