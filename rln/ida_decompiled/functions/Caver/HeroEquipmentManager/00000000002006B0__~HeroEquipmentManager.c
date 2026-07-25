/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002006B0
 * Mangled: ._ZN5Caver20HeroEquipmentManagerD2Ev
 * Demangled: Caver::HeroEquipmentManager::~HeroEquipmentManager()
 *
 * Callers: 3
 *   0x0000000000364534  Caver::GameSceneController::~GameSceneController()
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003A0838  Caver::ProfilePanelView::~ProfilePanelView()
 *
 * Callees: 1
 *   0x0000000000364534  Caver::GameSceneController::~GameSceneController()
 *
 * Referenced strings: 1
 *   insn=0x00000000002006B8 string=0x00000000002006BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::HeroEquipmentManager::~HeroEquipmentManager(Caver::HeroEquipmentManager *this)
{
  JUMPOUT(0x3647F8);
}

