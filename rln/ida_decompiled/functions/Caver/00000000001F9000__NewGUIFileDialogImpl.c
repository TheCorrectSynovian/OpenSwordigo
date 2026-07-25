/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9000
 * Mangled: ._ZN5Caver20NewGUIFileDialogImplEv
 * Demangled: Caver::NewGUIFileDialogImpl(void)
 *
 * Callers: 1
 *   0x00000000004971E4  Caver::GUIFileDialog::New(void)
 *
 * Callees: 1
 *   0x00000000004B92D8  Caver::NewGUIFileDialogImpl(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9008 string=0x00000000001F900C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::NewGUIFileDialogImpl(Caver *this)
{
  return _ZN5Caver20NewGUIFileDialogImplEv(this);
}

