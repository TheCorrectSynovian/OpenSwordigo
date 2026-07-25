/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAEC0
 * Mangled: ._ZN5Caver16GUITextFieldImpl22TextInputTextDidChangeERKSs
 * Demangled: Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *
 * Callers: 1
 *   0x00000000004BA094  `non-virtual thunk to'Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *
 * Callees: 1
 *   0x00000000004B9DBC  Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAEC8 string=0x00000000001FAECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUITextFieldImpl::TextInputTextDidChange()
{
  return _ZN5Caver16GUITextFieldImpl22TextInputTextDidChangeERKSs();
}

