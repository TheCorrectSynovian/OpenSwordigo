/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FED00
 * Mangled: ._ZN5Caver20HeroEquipmentManagerC2Ev
 * Demangled: Caver::HeroEquipmentManager::HeroEquipmentManager(void)
 *
 * Callers: 2
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *
 * Callees: 1
 *   0x0000000000368C58  Caver::HeroEquipmentManager::HeroEquipmentManager(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FED08 string=0x00000000001FED0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HeroEquipmentManager::HeroEquipmentManager(Caver::HeroEquipmentManager *this)
{
  return _ZN5Caver20HeroEquipmentManagerC2Ev(this);
}

