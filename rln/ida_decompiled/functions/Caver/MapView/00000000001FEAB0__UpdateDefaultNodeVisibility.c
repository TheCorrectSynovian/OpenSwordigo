/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEAB0
 * Mangled: ._ZN5Caver7MapView27UpdateDefaultNodeVisibilityEv
 * Demangled: Caver::MapView::UpdateDefaultNodeVisibility(void)
 *
 * Callers: 2
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Callees: 1
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEAB8 string=0x00000000001FEABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MapView::UpdateDefaultNodeVisibility(Caver::MapView *this)
{
  JUMPOUT(0x424608);
}

