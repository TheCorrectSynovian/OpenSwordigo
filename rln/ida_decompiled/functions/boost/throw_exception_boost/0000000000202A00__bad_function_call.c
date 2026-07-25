/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202A00
 * Mangled: ._ZN5boost15throw_exceptionINS_17bad_function_callEEEvRKT_
 * Demangled: boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
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
 *   0x0000000000245834  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202A08 string=0x0000000000202A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn boost::throw_exception<boost::bad_function_call>()
{
  _ZN5boost15throw_exceptionINS_17bad_function_callEEEvRKT_();
}

