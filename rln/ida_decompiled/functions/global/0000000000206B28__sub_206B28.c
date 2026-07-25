/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000206B28
 * Mangled: sub_206B28
 * Demangled: sub_206B28
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *   0x0000000000566F50  sub_566F50
 *
 * Referenced strings: 32
 *   insn=0x0000000000206B3C string=0x0000000000206B40 ""
 *   insn=0x0000000000206B44 string=0x0000000000206B48 "!"
 *   insn=0x0000000000206B54 string=0x0000000000206B58 "5"
 *   insn=0x0000000000206B5C string=0x0000000000206B60 "s"
 *   insn=0x0000000000206B68 string=0x0000000000206B6C "5"
 *   insn=0x0000000000206B6C string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000206B70 string=0x0000000000206B74 "!"
 *   insn=0x0000000000206B7C string=0x0000000000206B80 "5"
 *   insn=0x0000000000206B80 string=0x0000000000206B84 "/"
 *   insn=0x0000000000206B88 string=0x0000000000206B8C "!@A"
 *   insn=0x0000000000206B94 string=0x0000000000206B98 "5"
 *   insn=0x0000000000206B98 string=0x0000000000206B9C ")"
 *   insn=0x0000000000206BA0 string=0x0000000000206BA4 "!"
 *   insn=0x0000000000206BAC string=0x0000000000206BB0 "5"
 *   insn=0x0000000000206BB0 string=0x0000000000206BB4 "#"
 *   insn=0x0000000000206BB8 string=0x0000000000206BBC "!"
 *   insn=0x0000000000206BC4 string=0x0000000000206BC8 "5"
 *   insn=0x0000000000206BD0 string=0x0000000000206BD4 "!lB"
 *   insn=0x0000000000206BDC string=0x0000000000206BE0 "5"
 *   insn=0x0000000000206BE8 string=0x0000000000206BEC "!8@"
 *   insn=0x0000000000206BF4 string=0x0000000000206BF8 "5"
 *   insn=0x0000000000206C00 string=0x0000000000206C04 "!XE"
 *   insn=0x0000000000206C0C string=0x0000000000206C10 "5"
 *   insn=0x0000000000206C10 string=0x0000000000206C14 ""
 *   insn=0x0000000000206C18 string=0x0000000000206C1C "!"
 *   insn=0x0000000000206C24 string=0x0000000000206C28 "5"
 *   insn=0x0000000000206C30 string=0x0000000000206C34 "!tC"
 *   insn=0x0000000000206C3C string=0x0000000000206C40 "5"
 *   insn=0x0000000000206C48 string=0x0000000000206C4C "!"
 *   insn=0x0000000000206C54 string=0x0000000000206C58 "5"
 *   insn=0x0000000000206C60 string=0x0000000000206C64 "!"
 *   insn=0x0000000000206C6C string=0x0000000000206C70 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_206B28(Caver::Proto *a1)
{
  Caver::Proto::protobuf_AddDesc_Common_2eproto(a1);
  Caver::Proto::Texture_Subtexture::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Texture_Subtexture::_default_name_, &off_6E8000);
  Caver::Proto::Texture::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Texture::_default_name_, &off_6E8000);
  Caver::Proto::Font::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Font::_default_name_, &off_6E8000);
  Caver::Proto::Font::_default_kerning_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Font::_default_kerning_, &off_6E8000);
  Caver::Proto::Program::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Program::_default_name_, &off_6E8000);
  Caver::Proto::Program::_default_string_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Program::_default_string_, &off_6E8000);
  Caver::Proto::Program::_default_bytes_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Program::_default_bytes_, &off_6E8000);
  Caver::Proto::GUIViewLayout::_default_identifier_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GUIViewLayout::_default_identifier_, &off_6E8000);
  Caver::Proto::SoundEffect::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::SoundEffect::_default_name_, &off_6E8000);
  Caver::Proto::SoundEffect::_default_resource_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::SoundEffect::_default_resource_name_, &off_6E8000);
  Caver::Proto::MusicTrack::_default_resource_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::MusicTrack::_default_resource_name_, &off_6E8000);
  Caver::Proto::MusicPlaylist::_default_name_ = (__int64)&byte_6FD2F8;
  return __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::MusicPlaylist::_default_name_, &off_6E8000);
}

