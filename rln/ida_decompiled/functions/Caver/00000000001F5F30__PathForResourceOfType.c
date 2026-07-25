/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5F30
 * Mangled: ._ZN5Caver21PathForResourceOfTypeERKSsS1_
 * Demangled: Caver::PathForResourceOfType(std::string const&,std::string const&)
 *
 * Callers: 14
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x00000000004815F0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x00000000004C3480  Caver::FontLibrary::FontWithName(std::string const&)
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5F38 string=0x00000000001F5F3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PathForResourceOfType()
{
  return _ZN5Caver21PathForResourceOfTypeERKSsS1_();
}

