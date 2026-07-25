/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052A9AC
 * Mangled: sub_52A9AC
 * Demangled: sub_52A9AC
 *
 * Callers: 19
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000465380  Caver::Scene::RegisterObjectWaitingForActivation(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000465578  Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000004657C0  Caver::Scene::RegisterNewComponent(boost::intrusive_ptr<Caver::Component> const&)
 *   0x0000000000483D48  Caver::SoundEffectSource::EnqueueSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *   0x000000000049F6EC  Caver::GUIView::AddSubview(boost::shared_ptr<Caver::GUIView> const&)
 *   0x000000000049F7B0  Caver::GUIView::InsertSubview(std::_List_iterator<boost::shared_ptr<Caver::GUIView>>,boost::shared_ptr<Caver::GUIView> const&)
 *   0x000000000049F874  Caver::GUIView::InsertSubviewBelowSubview(boost::shared_ptr<Caver::GUIView> const&,Caver::GUIView*)
 *   0x000000000049F95C  Caver::GUIView::InsertSubviewAtIndex(int,boost::shared_ptr<Caver::GUIView> const&)
 *   0x000000000049FC54  Caver::GUIView::BringSubviewToFront(Caver::GUIView*)
 *   0x000000000049FE44  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x000000000049FF3C  Caver::GUIView::AddPopupAnimation(void)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *   0x00000000004A9208  Caver::GUIAnimatedSprite::Update(float)
 *   0x00000000004AB5B0  Caver::FWKeyboard::AddListener(Caver::IFWKeyboardListener *)
 *   0x00000000004AB934  Caver::FWMouse::AddListener(Caver::IFWMouseListener *)
 *   0x00000000004BADE8  Caver::OnlineController_Android::AddGoogleServicesSignInHandler(Caver::TargetAction<void ()(bool,std::string const&)>)
 *   0x00000000004C133C  Caver::ProgramState::CreateChildState(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000052A9B4 string=0x000000000052A9B8 """
 *   insn=0x000000000052A9B8 string=0x000000000052A9BC "@"
 *   insn=0x000000000052A9BC string=0x000000000052A9C0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_52A9AC(_QWORD *result, __int64 a2)
{
  result[1] = *(_QWORD *)(a2 + 8);
  *result = a2;
  **(_QWORD **)(a2 + 8) = result;
  *(_QWORD *)(a2 + 8) = result;
  return result;
}

