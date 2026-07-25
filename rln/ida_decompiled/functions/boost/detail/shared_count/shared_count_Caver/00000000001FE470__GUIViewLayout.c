/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE470
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver13GUIViewLayoutEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GUIViewLayout>(Caver::GUIViewLayout *)
 *
 * Callers: 4
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *   0x00000000004A7C04  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *   0x00000000004A82FC  Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Callees: 1
 *   0x00000000003B4FC0  std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MusicPlaylist>*,std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>>,boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE478 string=0x00000000001FE47C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::GUIViewLayout>()
{
  JUMPOUT(0x3B539C);
}

