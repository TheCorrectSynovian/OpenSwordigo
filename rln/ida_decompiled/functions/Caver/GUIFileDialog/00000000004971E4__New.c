/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004971E4
 * Mangled: _ZN5Caver13GUIFileDialog3NewEv
 * Demangled: Caver::GUIFileDialog::New(void)
 *
 * Callers: 2
 *   0x00000000001FE010  Caver::GUIFileDialog::New(void)
 *   0x00000000004970AC  Caver::GUIDraggableItem::~GUIDraggableItem()
 *
 * Callees: 1
 *   0x00000000001F9000  Caver::NewGUIFileDialogImpl(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004971E4 string=0x00000000001F9000 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIFileDialog::New(Caver::GUIFileDialog *this)
{
  return Caver::NewGUIFileDialogImpl(this);
}

