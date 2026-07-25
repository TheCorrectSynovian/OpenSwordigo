/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA1A0
 * Mangled: _ZN5Caver16GUITextFieldImpl20ResignFirstResponderEv
 * Demangled: Caver::GUITextFieldImpl::ResignFirstResponder(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8050  Caver::StopTextInputWithDelegate(Caver::ITextInputDelegate *)
 *   0x0000000000201060  Caver::GUIView::ResignFirstResponder(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000004BA1AC string=0x00000000004BA1B0 "hbF9H"
 *   insn=0x00000000004BA1B0 string=0x00000000004BA1B4 "H"
 *   insn=0x00000000004BA1B4 string=0x00000000004BA1B8 "`"
 *   insn=0x00000000004BA1BC string=0x00000000004BA1C0 "`"
 *   insn=0x00000000004BA1BC string=0x00000000001F8050 "0'"
 *   insn=0x00000000004BA1C8 string=0x00000000004BA1CC ""
 *   insn=0x00000000004BA1D0 string=0x00000000004BA1D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::ResignFirstResponder(Caver::GUITextFieldImpl *this)
{
  void (__fastcall ***v2)(_QWORD, Caver::GUITextFieldImpl *); // x0

  if ( *((_BYTE *)this + 408) )
  {
    Caver::StopTextInputWithDelegate();
    v2 = (void (__fastcall ***)(_QWORD, Caver::GUITextFieldImpl *))*((_QWORD *)this + 39);
    *((_WORD *)this + 204) = 0;
    if ( v2 )
      (**v2)(v2, this);
  }
  Caver::GUIView::ResignFirstResponder(this);
  return 1;
}

