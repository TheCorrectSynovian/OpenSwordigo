/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052A9C8
 * Mangled: sub_52A9C8
 * Demangled: sub_52A9C8
 *
 * Callers: 15
 *   0x00000000004653C4  Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *   0x00000000004837BC  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x000000000049E55C  Caver::GUIView::Update(float)
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *   0x000000000049FC54  Caver::GUIView::BringSubviewToFront(Caver::GUIView*)
 *   0x00000000004A22B8  Caver::GUIWindow::SetRootViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x00000000004A9208  Caver::GUIAnimatedSprite::Update(float)
 *   0x00000000004AB5E0  Caver::FWKeyboard::RemoveListener(Caver::IFWKeyboardListener *)
 *   0x00000000004AB964  Caver::FWMouse::RemoveListener(Caver::IFWMouseListener *)
 *   0x00000000004BB450  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *   0x00000000004C14BC  std::list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>::remove(boost::shared_ptr<Caver::ProgramState> const&)
 *   0x00000000004C15FC  Caver::ProgramState::Update(float)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000052A9CC string=0x000000000052A9D0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52A9C8(__int64 *a1)
{
  _QWORD *v1; // x1
  __int64 result; // x0

  v1 = (_QWORD *)a1[1];
  result = *a1;
  *v1 = result;
  *(_QWORD *)(result + 8) = v1;
  return result;
}

