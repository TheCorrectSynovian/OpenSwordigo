/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF6C0
 * Mangled: ._ZN5Caver5Proto31protobuf_AddDesc_Common_2eprotoEv
 * Demangled: Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Callers: 31
 *   0x0000000000206B28  sub_206B28
 *   0x00000000002CDACC  Caver::Proto::Circle::InitAsDefaultInstance(void)
 *   0x00000000002CDB0C  Caver::Proto::Texture::InitAsDefaultInstance(void)
 *   0x00000000002CDB44  Caver::Proto::Texture_Subtexture::InitAsDefaultInstance(void)
 *   0x00000000002CDB80  Caver::Proto::Font::InitAsDefaultInstance(void)
 *   0x00000000002CDBD4  Caver::Proto::Font_Glyph::InitAsDefaultInstance(void)
 *   0x00000000002CDC2C  Caver::Proto::GUIViewLayout::InitAsDefaultInstance(void)
 *   0x00000000002CDE4C  Caver::Proto::DateTime::default_instance(void)
 *   0x00000000002CE2A8  Caver::Proto::Vector2::default_instance(void)
 *   0x00000000002CE7E8  Caver::Proto::Vector3::default_instance(void)
 *   0x00000000002CEDE0  Caver::Proto::Rectangle::default_instance(void)
 *   0x00000000002CF4B4  Caver::Proto::Box::default_instance(void)
 *   0x00000000002CFD20  Caver::Proto::Circle::default_instance(void)
 *   0x00000000002D0484  Caver::Proto::Polygon::default_instance(void)
 *   0x00000000002D0DD8  Caver::Proto::FloatColor::default_instance(void)
 *   0x00000000002D16DC  Caver::Proto::Texture_Subtexture::default_instance(void)
 *   0x00000000002D1EF8  Caver::Proto::Texture_ConversionInfo::default_instance(void)
 *   0x00000000002D2B2C  Caver::Proto::Texture::default_instance(void)
 *   0x00000000002D39F4  Caver::Proto::Font_Glyph::default_instance(void)
 *   0x00000000002D4890  Caver::Proto::Font::default_instance(void)
 *   0x00000000002D5AA8  Caver::Proto::Program::default_instance(void)
 *   0x00000000002D6298  Caver::Proto::GUIMargins::default_instance(void)
 *   0x00000000002D6D98  Caver::Proto::GUIViewLayout::default_instance(void)
 *   0x00000000002D7A28  Caver::Proto::SoundEffect::default_instance(void)
 *   0x00000000002D82D0  Caver::Proto::SoundLibrary::default_instance(void)
 *   0x00000000002D8D54  Caver::Proto::MusicTrack::default_instance(void)
 *   0x00000000002D9600  Caver::Proto::MusicPlaylist::default_instance(void)
 *   0x00000000002D9E48  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)
 *   0x00000000002DB544  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *   0x00000000002E85A0  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Callees: 1
 *   0x00000000002CD4CC  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF6C8 string=0x00000000001FF6CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::protobuf_AddDesc_Common_2eproto(Caver::Proto *this)
{
  return _ZN5Caver5Proto31protobuf_AddDesc_Common_2eprotoEv(this);
}

