/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B92E0
 * Mangled: _ZN5Caver19NewGUITextFieldImplEv
 * Demangled: Caver::NewGUITextFieldImpl(void)
 *
 * Callers: 1
 *   0x0000000000203CF0  Caver::NewGUITextFieldImpl(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002031C0  Caver::GUITextFieldImpl::GUITextFieldImpl(void)
 *   0x00000000004B9320  Caver::GUITextFieldImpl::GUITextFieldImpl(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000004B92F0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B9314 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B9318 string=0x00000000004B931C "j!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUITextFieldImpl *__fastcall Caver::NewGUITextFieldImpl(Caver *this)
{
  Caver::GUITextFieldImpl *v1; // x19

  v1 = (Caver::GUITextFieldImpl *)operator new(0x1A0u);
  Caver::GUITextFieldImpl::GUITextFieldImpl(v1);
  return v1;
}

