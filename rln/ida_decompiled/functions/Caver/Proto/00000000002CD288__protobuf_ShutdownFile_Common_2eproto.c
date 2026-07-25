/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CD288
 * Mangled: _ZN5Caver5Proto36protobuf_ShutdownFile_Common_2eprotoEv
 * Demangled: Caver::Proto::protobuf_ShutdownFile_Common_2eproto(void)
 *
 * Callers: 1
 *   0x00000000002CD4CC  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Callees: 0
 *
 * Referenced strings: 60
 *   insn=0x00000000002CD290 string=0x00000000002CD294 "qB"
 *   insn=0x00000000002CD29C string=0x00000000002CD2A0 ""
 *   insn=0x00000000002CD2A0 string=0x00000000002CD2A4 ""
 *   insn=0x00000000002CD2AC string=0x00000000002CD2B0 "uG"
 *   insn=0x00000000002CD2B8 string=0x00000000002CD2BC ""
 *   insn=0x00000000002CD2BC string=0x00000000002CD2C0 ""
 *   insn=0x00000000002CD2C8 string=0x00000000002CD2CC ""
 *   insn=0x00000000002CD2D4 string=0x00000000002CD2D8 ""
 *   insn=0x00000000002CD2D8 string=0x00000000002CD2DC ""
 *   insn=0x00000000002CD2E4 string=0x00000000002CD2E8 ""
 *   insn=0x00000000002CD2F0 string=0x00000000002CD2F4 ""
 *   insn=0x00000000002CD2F4 string=0x00000000002CD2F8 ""
 *   insn=0x00000000002CD300 string=0x00000000002CD304 ")@"
 *   insn=0x00000000002CD30C string=0x00000000002CD310 ""
 *   insn=0x00000000002CD310 string=0x00000000002CD314 ""
 *   insn=0x00000000002CD31C string=0x00000000002CD320 "YC"
 *   insn=0x00000000002CD328 string=0x00000000002CD32C ""
 *   insn=0x00000000002CD32C string=0x00000000002CD330 ""
 *   insn=0x00000000002CD338 string=0x00000000002CD33C "iF"
 *   insn=0x00000000002CD344 string=0x00000000002CD348 ""
 *   insn=0x00000000002CD348 string=0x00000000002CD34C ""
 *   insn=0x00000000002CD354 string=0x00000000002CD358 ""
 *   insn=0x00000000002CD360 string=0x00000000002CD364 ""
 *   insn=0x00000000002CD364 string=0x00000000002CD368 ""
 *   insn=0x00000000002CD370 string=0x00000000002CD374 ""
 *   insn=0x00000000002CD37C string=0x00000000002CD380 ""
 *   insn=0x00000000002CD380 string=0x00000000002CD384 ""
 *   insn=0x00000000002CD38C string=0x00000000002CD390 "-D"
 *   insn=0x00000000002CD398 string=0x00000000002CD39C ""
 *   insn=0x00000000002CD39C string=0x00000000002CD3A0 ""
 *   insn=0x00000000002CD3A8 string=0x00000000002CD3AC "yE"
 *   insn=0x00000000002CD3B4 string=0x00000000002CD3B8 ""
 *   insn=0x00000000002CD3B8 string=0x00000000002CD3BC ""
 *   insn=0x00000000002CD3C4 string=0x00000000002CD3C8 "!D"
 *   insn=0x00000000002CD3D0 string=0x00000000002CD3D4 ""
 *   insn=0x00000000002CD3D4 string=0x00000000002CD3D8 ""
 *   insn=0x00000000002CD3E0 string=0x00000000002CD3E4 ""
 *   insn=0x00000000002CD3EC string=0x00000000002CD3F0 ""
 *   insn=0x00000000002CD3F0 string=0x00000000002CD3F4 ""
 *   insn=0x00000000002CD3FC string=0x00000000002CD400 ""
 *   insn=0x00000000002CD408 string=0x00000000002CD40C ""
 *   insn=0x00000000002CD40C string=0x00000000002CD410 ""
 *   insn=0x00000000002CD418 string=0x00000000002CD41C ""
 *   insn=0x00000000002CD424 string=0x00000000002CD428 ""
 *   insn=0x00000000002CD428 string=0x00000000002CD42C ""
 *   insn=0x00000000002CD434 string=0x00000000002CD438 ""
 *   insn=0x00000000002CD440 string=0x00000000002CD444 ""
 *   insn=0x00000000002CD444 string=0x00000000002CD448 ""
 *   insn=0x00000000002CD450 string=0x00000000002CD454 ""
 *   insn=0x00000000002CD45C string=0x00000000002CD460 ""
 *   insn=0x00000000002CD460 string=0x00000000002CD464 ""
 *   insn=0x00000000002CD46C string=0x00000000002CD470 "1G"
 *   insn=0x00000000002CD478 string=0x00000000002CD47C ""
 *   insn=0x00000000002CD47C string=0x00000000002CD480 ""
 *   insn=0x00000000002CD488 string=0x00000000002CD48C "qE"
 *   insn=0x00000000002CD494 string=0x00000000002CD498 ""
 *   insn=0x00000000002CD498 string=0x00000000002CD49C ""
 *   insn=0x00000000002CD4A4 string=0x00000000002CD4A8 ""
 *   insn=0x00000000002CD4B0 string=0x00000000002CD4B4 ""
 *   insn=0x00000000002CD4BC string=0x00000000002CD4C0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::protobuf_ShutdownFile_Common_2eproto(Caver::Proto *this)
{
  __int64 result; // x0

  if ( Caver::Proto::DateTime::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::DateTime::default_instance_ + 8LL))(Caver::Proto::DateTime::default_instance_);
  if ( Caver::Proto::Vector2::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Vector2::default_instance_ + 8LL))(Caver::Proto::Vector2::default_instance_);
  if ( Caver::Proto::Vector3::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Vector3::default_instance_ + 8LL))(Caver::Proto::Vector3::default_instance_);
  if ( Caver::Proto::Rectangle::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Rectangle::default_instance_ + 8LL))(Caver::Proto::Rectangle::default_instance_);
  if ( Caver::Proto::Box::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Box::default_instance_ + 8LL))(Caver::Proto::Box::default_instance_);
  if ( Caver::Proto::Circle::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Circle::default_instance_ + 8LL))(Caver::Proto::Circle::default_instance_);
  if ( Caver::Proto::Polygon::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Polygon::default_instance_ + 8LL))(Caver::Proto::Polygon::default_instance_);
  if ( Caver::Proto::FloatColor::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::FloatColor::default_instance_ + 8LL))(Caver::Proto::FloatColor::default_instance_);
  if ( Caver::Proto::Texture::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Texture::default_instance_ + 8LL))(Caver::Proto::Texture::default_instance_);
  if ( Caver::Proto::Texture_Subtexture::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Texture_Subtexture::default_instance_ + 8LL))(Caver::Proto::Texture_Subtexture::default_instance_);
  if ( Caver::Proto::Texture_ConversionInfo::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Texture_ConversionInfo::default_instance_ + 8LL))(Caver::Proto::Texture_ConversionInfo::default_instance_);
  if ( Caver::Proto::Font::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Font::default_instance_ + 8LL))(Caver::Proto::Font::default_instance_);
  if ( Caver::Proto::Font_Glyph::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Font_Glyph::default_instance_ + 8LL))(Caver::Proto::Font_Glyph::default_instance_);
  if ( Caver::Proto::Program::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Program::default_instance_ + 8LL))(Caver::Proto::Program::default_instance_);
  if ( Caver::Proto::GUIMargins::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GUIMargins::default_instance_ + 8LL))(Caver::Proto::GUIMargins::default_instance_);
  if ( Caver::Proto::GUIViewLayout::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GUIViewLayout::default_instance_ + 8LL))(Caver::Proto::GUIViewLayout::default_instance_);
  if ( Caver::Proto::SoundEffect::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SoundEffect::default_instance_ + 8LL))(Caver::Proto::SoundEffect::default_instance_);
  if ( Caver::Proto::SoundLibrary::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::SoundLibrary::default_instance_ + 8LL))(Caver::Proto::SoundLibrary::default_instance_);
  if ( Caver::Proto::MusicTrack::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MusicTrack::default_instance_ + 8LL))(Caver::Proto::MusicTrack::default_instance_);
  result = Caver::Proto::MusicPlaylist::default_instance_;
  if ( Caver::Proto::MusicPlaylist::default_instance_ )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MusicPlaylist::default_instance_ + 8LL))(Caver::Proto::MusicPlaylist::default_instance_);
  return result;
}

