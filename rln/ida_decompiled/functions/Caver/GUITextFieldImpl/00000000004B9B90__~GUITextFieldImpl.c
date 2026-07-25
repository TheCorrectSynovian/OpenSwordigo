/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B9B90
 * Mangled: _ZN5Caver16GUITextFieldImplD0Ev
 * Demangled: Caver::GUITextFieldImpl::~GUITextFieldImpl()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8780  Caver::GUITextFieldImpl::~GUITextFieldImpl()
 *   0x00000000004B9BC8  Caver::GUITextFieldImpl::LayoutSubviews(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000004B9BA0 string=0x00000000001F8780 "0'"
 *   insn=0x00000000004B9BB0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B9BC0 string=0x00000000004B9BC4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUITextFieldImpl::~GUITextFieldImpl(Caver::GUITextFieldImpl *this)
{
  Caver::GUITextFieldImpl::~GUITextFieldImpl(this);
  operator delete(this);
}

