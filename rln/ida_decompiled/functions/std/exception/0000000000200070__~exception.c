/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200070
 * Mangled: ._ZNSt9exceptionD2Ev_0
 * Demangled: std::exception::~exception()
 *
 * Callers: 103
 *   0x0000000000245834  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x0000000000245B00  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_function_call> const&)
 *   0x0000000000245DD8  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone(void)
 *   0x00000000002470AC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> const&)
 *   0x00000000003656F4  Caver::GuidePurchaseViewController::LoadView(void)
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *   0x0000000000368140  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>(boost::shared_ptr<Caver::GuidePurchaseView> const*,Caver::GuidePurchaseView *)
 *   0x0000000000368320  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *   0x0000000000368368  boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector()
 *   0x00000000003683B0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_weak_ptr> const&)
 *   0x00000000003684E0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *   0x000000000036853C  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone(void)
 *   0x0000000000368644  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *   0x000000000036868C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *   0x00000000003686E0  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone(void)
 *   0x00000000003687E8  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *   0x0000000000368830  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *   0x0000000000368884  boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector()
 *   0x00000000003688D4  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector()
 *   0x000000000036891C  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector()
 *   0x0000000000368970  boost::bad_weak_ptr::~bad_weak_ptr()
 *   0x0000000000368994  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> const&)
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x000000000036BE98  Caver::MainMenuViewController::GoogleSignInCompletion(bool,std::string const&)
 *   0x0000000000374B20  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *   0x00000000003C8890  Caver::ConfigureOverlayView::HitTest(Caver::Vector2 const&)
 *   0x00000000003D7C60  Caver::GameOverlayView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000003E1704  Caver::OverlayMenuButton::FadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E1EC0  Caver::OverlayMenuButton::FadeInAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E4378  Caver::TargetFrame::Update(float)
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003EA4EC  Caver::PurchaseViewController::FetchProduct(std::string const&)
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x00000000003F2524  Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000040BD50  Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *   0x000000000040C508  Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x000000000048F638  Caver::GUIAlertView::AddAnimations(bool)
 *   0x00000000004918F0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004997FC  Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *   0x000000000049C584  Caver::GUIScrollView::HitTest(Caver::Vector2 const&)
 *   0x00000000004A05C8  Caver::GUIView::BecomeFirstResponder(void)
 *   0x00000000004A0964  Caver::GUIView::HitTest(Caver::Vector2 const&)
 *   0x00000000004B5548  Caver::SHA1HashForBytes(uchar const*,ulong)
 *   0x00000000004B586C  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_month> const&)
 *   0x00000000004B5B44  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone(void)
 *   0x00000000004B5E18  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> const&)
 *   0x00000000004B5EE0  boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *   0x00000000004B61AC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_year> const&)
 *   0x00000000004B6484  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone(void)
 *   0x00000000004B6758  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> const&)
 *   0x00000000004B6820  boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *   0x00000000004B6AEC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> const&)
 *   0x00000000004B6DC4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone(void)
 *   0x00000000004B7098  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> const&)
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *   0x00000000004B8534  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *   0x00000000004B87FC  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(void)
 *   0x00000000004B8A9C  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *   0x000000000051C984  std::bad_cast::~bad_cast()
 *   0x000000000051CDD0  sub_51CDD0
 *   0x000000000051CDE0  sub_51CDE0
 *   0x000000000051CDF0  sub_51CDF0
 *   0x000000000051CE20  sub_51CE20
 *   0x000000000051D3A4  std::bad_exception::~bad_exception()
 *   0x000000000051E4E8  __gnu_cxx::recursive_init_error::~recursive_init_error()
 *   0x0000000000549F98  sub_549F98
 *   0x000000000054A024  sub_54A024
 *   0x000000000054A0B0  sub_54A0B0
 *   0x000000000054A13C  sub_54A13C
 *   0x000000000054A1C8  sub_54A1C8
 *   0x000000000054A254  sub_54A254
 *   0x000000000054A2E0  sub_54A2E0
 *   0x000000000054A36C  sub_54A36C
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000054A484  sub_54A484
 *   0x000000000054A518  sub_54A518
 *   0x000000000054A5AC  sub_54A5AC
 *   0x000000000054A640  sub_54A640
 *   0x000000000054A6D4  sub_54A6D4
 *   0x000000000054A768  sub_54A768
 *   0x000000000054A7FC  sub_54A7FC
 *   0x000000000054A890  sub_54A890
 *   0x000000000054A924  sub_54A924
 *   0x000000000054A9B8  sub_54A9B8
 *   0x000000000054A9F8  sub_54A9F8
 *   0x000000000054AA44  sub_54AA44
 *   0x000000000054AA90  sub_54AA90
 *   0x000000000054AADC  sub_54AADC
 *   0x000000000054AB28  sub_54AB28
 *   0x000000000054AB68  sub_54AB68
 *   0x000000000054ABB4  sub_54ABB4
 *   0x000000000054AC00  sub_54AC00
 *   0x0000000000565DB0  sub_565DB0
 *   0x0000000000565DC0  sub_565DC0
 *   0x000000000056FBB0  std::bad_alloc::~bad_alloc()
 *   0x000000000056FBF4  std::bad_typeid::~bad_typeid()
 *   0x0000000000571544  sub_571544
 *   0x00000000005715D0  sub_5715D0
 *   0x0000000000571664  sub_571664
 *
 * Callees: 1
 *   0x000000000051D3A0  std::exception::~exception()
 *
 * Referenced strings: 1
 *   insn=0x0000000000200078 string=0x000000000020007C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::exception::~exception(std::exception *this)
{
  _ZNSt9exceptionD2Ev(this);
}

