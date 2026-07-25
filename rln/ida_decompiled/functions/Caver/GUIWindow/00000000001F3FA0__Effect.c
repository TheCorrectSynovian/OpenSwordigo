/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3FA0
 * Mangled: ._ZN5Caver9GUIWindow6EffectEv
 * Demangled: Caver::GUIWindow::Effect(void)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x00000000004A4F38  Caver::GUIWindow::Effect(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3FA8 string=0x00000000001F3FAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::Effect(Caver::GUIWindow *this)
{
  return _ZN5Caver9GUIWindow6EffectEv(this);
}

