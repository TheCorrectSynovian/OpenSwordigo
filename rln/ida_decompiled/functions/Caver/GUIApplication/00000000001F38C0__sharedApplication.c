/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F38C0
 * Mangled: ._ZN5Caver14GUIApplication17sharedApplicationEv
 * Demangled: Caver::GUIApplication::sharedApplication(void)
 *
 * Callers: 5
 *   0x0000000000210EFC  Caver::CaverShell::Update(float)
 *   0x0000000000496510  Caver::GUIControl::~GUIControl()
 *   0x00000000004965BC  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x00000000004A46B0  Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000049258C  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F38C8 string=0x00000000001F38CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIApplication::sharedApplication(Caver::GUIApplication *this)
{
  JUMPOUT(0x492D44);
}

