/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA15C
 * Mangled: _ZN5Caver16GUITextFieldImpl20BecomeFirstResponderEv
 * Demangled: Caver::GUITextFieldImpl::BecomeFirstResponder(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F9140  Caver::GUIView::BecomeFirstResponder(void)
 *   0x00000000001FFC90  Caver::StartTextInputWithDelegate(Caver::ITextInputDelegate *,std::string const&)
 *
 * Referenced strings: 6
 *   insn=0x00000000004BA16C string=0x00000000004BA170 "hbF9"
 *   insn=0x00000000004BA16C string=0x00000000001F9140 "0'"
 *   insn=0x00000000004BA174 string=0x00000000004BA178 "( "
 *   insn=0x00000000004BA178 string=0x00000000004BA17C "`"
 *   insn=0x00000000004BA17C string=0x00000000004BA180 "a""
 *   insn=0x00000000004BA184 string=0x00000000004BA188 "h2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::BecomeFirstResponder(Caver::GUITextFieldImpl *this)
{
  Caver::GUIView::BecomeFirstResponder(this);
  if ( !*((_BYTE *)this + 408) )
  {
    *((_DWORD *)this + 103) = 0;
    *((_WORD *)this + 204) = 257;
    Caver::StartTextInputWithDelegate();
  }
  return 1;
}

