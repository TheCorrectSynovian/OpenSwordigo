/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7480
 * Mangled: ._ZN5Caver12BindingValueD2Ev
 * Demangled: Caver::BindingValue::~BindingValue()
 *
 * Callers: 2
 *   0x0000000000215F14  std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>(Caver::Binding *,Caver::Binding *,Caver::Binding *)
 *   0x0000000000219C18  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *
 * Callees: 1
 *   0x00000000002147CC  Caver::BindingValue::~BindingValue()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7488 string=0x00000000001F748C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::BindingValue::~BindingValue(Caver::BindingValue *this)
{
  _ZN5Caver12BindingValueD2Ev(this);
}

