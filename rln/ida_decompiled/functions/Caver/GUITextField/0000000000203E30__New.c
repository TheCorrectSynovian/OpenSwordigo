/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E30
 * Mangled: ._ZN5Caver12GUITextField3NewEv
 * Demangled: Caver::GUITextField::New(void)
 *
 * Callers: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Callees: 1
 *   0x000000000049E29C  Caver::GUITextField::New(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203E38 string=0x0000000000203E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextField::New(Caver::GUITextField *this)
{
  return _ZN5Caver12GUITextField3NewEv(this);
}

