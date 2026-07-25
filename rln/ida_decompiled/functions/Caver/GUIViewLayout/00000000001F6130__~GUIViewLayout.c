/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6130
 * Mangled: ._ZN5Caver13GUIViewLayoutD2Ev
 * Demangled: Caver::GUIViewLayout::~GUIViewLayout()
 *
 * Callers: 3
 *   0x00000000003B4FC0  std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MusicPlaylist>*,std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>>,boost::shared_ptr<Caver::MusicPlaylist> const&)
 *   0x00000000003B5430  boost::detail::sp_counted_impl_p<Caver::GUIViewLayout>::dispose(void)
 *   0x00000000003D72E4  Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 1
 *   0x00000000003B5484  Caver::GUIViewLayout::~GUIViewLayout()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6138 string=0x00000000001F613C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIViewLayout::~GUIViewLayout(Caver::GUIViewLayout *this)
{
  _ZN5Caver13GUIViewLayoutD2Ev(this);
}

