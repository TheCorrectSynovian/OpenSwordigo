/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002031C0
 * Mangled: ._ZN5Caver16GUITextFieldImplC2Ev
 * Demangled: Caver::GUITextFieldImpl::GUITextFieldImpl(void)
 *
 * Callers: 1
 *   0x00000000004B92E0  Caver::NewGUITextFieldImpl(void)
 *
 * Callees: 1
 *   0x00000000004B9320  Caver::GUITextFieldImpl::GUITextFieldImpl(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002031C8 string=0x00000000002031CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextFieldImpl::GUITextFieldImpl(Caver::GUITextFieldImpl *this)
{
  return _ZN5Caver16GUITextFieldImplC2Ev(this);
}

