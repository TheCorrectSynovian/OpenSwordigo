/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDB20
 * Mangled: ._ZN5Caver16ProfilePanelView13CreateProfileEv
 * Demangled: Caver::ProfilePanelView::CreateProfile(void)
 *
 * Callers: 1
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *
 * Callees: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDB28 string=0x00000000001FDB2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfilePanelView::CreateProfile(Caver::ProfilePanelView *this)
{
  return _ZN5Caver16ProfilePanelView13CreateProfileEv(this);
}

