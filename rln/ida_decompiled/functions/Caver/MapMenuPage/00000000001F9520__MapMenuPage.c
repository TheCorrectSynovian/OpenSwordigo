/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9520
 * Mangled: ._ZN5Caver11MapMenuPageC2Ev
 * Demangled: Caver::MapMenuPage::MapMenuPage(void)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9528 string=0x00000000001F952C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapMenuPage::MapMenuPage(Caver::MapMenuPage *this)
{
  return _ZN5Caver11MapMenuPageC2Ev(this);
}

