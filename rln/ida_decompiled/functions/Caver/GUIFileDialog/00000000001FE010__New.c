/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE010
 * Mangled: ._ZN5Caver13GUIFileDialog3NewEv
 * Demangled: Caver::GUIFileDialog::New(void)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004971E4  Caver::GUIFileDialog::New(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE018 string=0x00000000001FE01C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIFileDialog::New(Caver::GUIFileDialog *this)
{
  return _ZN5Caver13GUIFileDialog3NewEv(this);
}

