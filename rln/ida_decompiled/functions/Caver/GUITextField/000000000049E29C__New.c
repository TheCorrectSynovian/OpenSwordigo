/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049E29C
 * Mangled: _ZN5Caver12GUITextField3NewEv
 * Demangled: Caver::GUITextField::New(void)
 *
 * Callers: 2
 *   0x0000000000203E30  Caver::GUITextField::New(void)
 *   0x000000000049E090  Caver::GUISwitch::~GUISwitch()
 *
 * Callees: 1
 *   0x0000000000203CF0  Caver::NewGUITextFieldImpl(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextField::New(Caver::GUITextField *this)
{
  return Caver::NewGUITextFieldImpl(this);
}

