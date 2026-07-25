/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003437C4
 * Mangled: _ZN5Caver22GameMenuViewController17ViewWillDisappearEv
 * Demangled: Caver::GameMenuViewController::ViewWillDisappear(void)
 *
 * Callers: 1
 *   0x0000000000342F7C  Caver::GameMenuViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000002023F0  Caver::TabbedMenuView::Dismiss(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000003437D0 string=0x00000000003437D4 "`B@"
 *   insn=0x00000000003437D8 string=0x00000000003437DC ""
 *   insn=0x00000000003437D8 string=0x00000000003437EC "`N@"
 *   insn=0x00000000003437E0 string=0x00000000003437E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameMenuViewController::ViewWillDisappear(Caver::GameMenuViewController *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    (*(void (__fastcall **)(__int64, Caver::GameMenuViewController *))(*(_QWORD *)v2 + 8LL))(v2, this);
  return Caver::TabbedMenuView::Dismiss(*((Caver::TabbedMenuView **)this + 19));
}

