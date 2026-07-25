/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4760
 * Mangled: ._ZN5Caver19TimerCurrentSecondsEv
 * Demangled: Caver::TimerCurrentSeconds(void)
 *
 * Callers: 3
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *   0x00000000004BB54C  Caver::OnlineController_Android::ShowInterstitialAd(std::string const&,int,float)
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000004B4B84  Caver::TimerCurrentSeconds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4768 string=0x00000000001F476C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TimerCurrentSeconds(Caver *this)
{
  return _ZN5Caver19TimerCurrentSecondsEv(this);
}

