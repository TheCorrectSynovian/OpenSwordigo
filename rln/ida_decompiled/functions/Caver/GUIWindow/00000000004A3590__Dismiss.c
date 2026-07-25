/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A3590
 * Mangled: _ZN5Caver9GUIWindow7DismissEv
 * Demangled: Caver::GUIWindow::Dismiss(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004A3590 string=0x00000000004A3598 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::Dismiss(__int64 this)
{
  *(_DWORD *)(this + 508) = 1050253722;
  *(_BYTE *)(this + 229) = 0;
  return this;
}

