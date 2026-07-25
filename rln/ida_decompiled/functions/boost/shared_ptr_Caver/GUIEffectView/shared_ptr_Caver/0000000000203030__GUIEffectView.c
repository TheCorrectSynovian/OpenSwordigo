/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203030
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13GUIEffectViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>(Caver::GUIEffectView *)
 *
 * Callers: 2
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000041CA50  Caver::LoadingView::LoadingView(void)
 *
 * Callees: 1
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203038 string=0x000000000020303C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>()
{
  JUMPOUT(0x38CE20);
}

