/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B9B68
 * Mangled: _ZN5Caver16GUITextFieldImpl11StopEditingEv
 * Demangled: Caver::GUITextFieldImpl::StopEditing(void)
 *
 * Callers: 1
 *   0x00000000004B9748  Caver::GUITextFieldImpl::~GUITextFieldImpl()
 *
 * Callees: 1
 *   0x00000000001F8050  Caver::StopTextInputWithDelegate(Caver::ITextInputDelegate *)
 *
 * Referenced strings: 3
 *   insn=0x00000000004B9B74 string=0x00000000004B9B78 "`"
 *   insn=0x00000000004B9B78 string=0x00000000004B9B7C "5"
 *   insn=0x00000000004B9B7C string=0x00000000001F8050 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::StopEditing(Caver::GUITextFieldImpl *this)
{
  __int64 result; // x0

  result = Caver::StopTextInputWithDelegate();
  *((_WORD *)this + 204) = 0;
  return result;
}

