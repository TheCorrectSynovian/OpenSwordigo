/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6230
 * Mangled: ._ZN5Caver14TextureLibrary24LoadTextureAtlasWithNameERKSs
 * Demangled: Caver::TextureLibrary::LoadTextureAtlasWithName(std::string const&)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6238 string=0x00000000001F623C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::TextureLibrary::LoadTextureAtlasWithName()
{
  JUMPOUT(0x4CCF44);
}

