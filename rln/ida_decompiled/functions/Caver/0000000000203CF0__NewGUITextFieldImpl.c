/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203CF0
 * Mangled: ._ZN5Caver19NewGUITextFieldImplEv
 * Demangled: Caver::NewGUITextFieldImpl(void)
 *
 * Callers: 1
 *   0x000000000049E29C  Caver::GUITextField::New(void)
 *
 * Callees: 1
 *   0x00000000004B92E0  Caver::NewGUITextFieldImpl(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203CF8 string=0x0000000000203CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::NewGUITextFieldImpl(Caver *this)
{
  return _ZN5Caver19NewGUITextFieldImplEv(this);
}

