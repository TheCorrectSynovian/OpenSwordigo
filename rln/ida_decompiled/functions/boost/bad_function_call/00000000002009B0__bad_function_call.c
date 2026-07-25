/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002009B0
 * Mangled: ._ZN5boost17bad_function_callC2Ev
 * Demangled: boost::bad_function_call::bad_function_call(void)
 *
 * Callers: 7
 *   0x0000000000244834  boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *   0x0000000000496990  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x00000000004BAE14  Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *   0x00000000004BE34C  Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x00000000004BE6D8  Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *
 * Callees: 1
 *   0x000000000024592C  boost::bad_function_call::bad_function_call(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002009B8 string=0x00000000002009BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::bad_function_call::bad_function_call(boost::bad_function_call *this)
{
  return _ZN5boost17bad_function_callC2Ev(this);
}

