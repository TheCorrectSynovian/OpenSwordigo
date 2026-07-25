/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D77C
 * Mangled: _ZN5Caver19BackgroundComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000001F36D0  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6BE0  Caver::Proto::BackgroundComponent::default_instance(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x000000000021D78C string=0x000000000021D790 "U"
 *   insn=0x000000000021D7A0 string=0x000000000021D7A4 "'t"
 *   insn=0x000000000021D7A4 string=0x000000000021D7A8 "H&"
 *   insn=0x000000000021D7A4 string=0x00000000001FA840 "0'"
 *   insn=0x000000000021D7A8 string=0x000000000021D7AC "-F"
 *   insn=0x000000000021D7B8 string=0x000000000021D7BC "u"
 *   insn=0x000000000021D7C8 string=0x000000000021D7CC "sB@"
 *   insn=0x000000000021D7D0 string=0x00000000001FA350 "0'"
 *   insn=0x000000000021D7DC string=0x000000000021D7E0 "t"
 *   insn=0x000000000021D7F0 string=0x000000000021D7F4 "o"
 *   insn=0x000000000021D7F4 string=0x00000000001FD5B0 "0'"
 *   insn=0x000000000021D7FC string=0x000000000021D800 "@"
 *   insn=0x000000000021D800 string=0x000000000021D804 ""
 *   insn=0x000000000021D804 string=0x000000000021D808 ""
 *   insn=0x000000000021D80C string=0x000000000021D810 ""
 *   insn=0x000000000021D810 string=0x000000000021D814 ""
 *   insn=0x000000000021D840 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021D848 string=0x000000000021D84C "("
 *   insn=0x000000000021D84C string=0x000000000021D850 "\t\t@"
 *   insn=0x000000000021D850 string=0x000000000021D854 ")"
 *   insn=0x000000000021D854 string=0x000000000021D858 "\t\t"
 *   insn=0x000000000021D85C string=0x000000000021D860 "\t"
 *   insn=0x000000000021D860 string=0x000000000021D864 ")"
 *   insn=0x000000000021D868 string=0x000000000021D86C " "
 *   insn=0x000000000021D894 string=0x000000000021D898 "H&"
 *   insn=0x000000000021D898 string=0x000000000021D89C "-F"
 *   insn=0x000000000021D89C string=0x000000000021D8A0 "s""
 *   insn=0x000000000021D8A8 string=0x00000000001F6BE0 "0'"
 *   insn=0x000000000021D8AC string=0x000000000021D8B0 "b"
 *   insn=0x000000000021D8BC string=0x000000000021D8C0 ",g"
 *   insn=0x000000000021D8C0 string=0x00000000001F7570 "0'"
 *   insn=0x000000000021D8C8 string=0x000000000021D8CC ""
 *   insn=0x000000000021D8CC string=0x000000000021D8D0 "h"
 *   insn=0x000000000021D8D4 string=0x000000000021D8D8 "H&"
 *   insn=0x000000000021D8D8 string=0x000000000021D8DC "i"
 *   insn=0x000000000021D8DC string=0x000000000021D8E0 "`\n@"
 *   insn=0x000000000021D8E0 string=0x000000000021D8E4 "UC"
 *   insn=0x000000000021D8E4 string=0x000000000021D8E8 ")"
 *   insn=0x000000000021D8E8 string=0x000000000021D8EC "i"
 *   insn=0x000000000021D8F8 string=0x000000000021D8FC "9_"
 *   insn=0x000000000021D8FC string=0x000000000021D900 "H&"
 *   insn=0x000000000021D8FC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021D900 string=0x000000000021D904 ""
 *   insn=0x000000000021D904 string=0x000000000021D908 "a"
 *   insn=0x000000000021D908 string=0x000000000021D90C ""
 *   insn=0x000000000021D90C string=0x000000000021D910 "`\n"
 *   insn=0x000000000021D914 string=0x000000000021D918 "d3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::TextureLibrary *__fastcall Caver::BackgroundComponent::LoadFromProtobufMessage(
        Caver::Sprite **this,
        const Caver::Proto::Component *a2)
{
  Caver::TextureLibrary *result; // x0
  Caver::Sprite *v5; // x19
  int v6; // w8
  Caver::TextureLibrary *v7; // [xsp+40h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::Component::LoadFromProtobufMessage((Caver::Component *)this, a2);
  result = (Caver::TextureLibrary *)google::protobuf::internal::ExtensionSet::GetMessage(
                                      (const Caver::Proto::Component *)((char *)a2 + 8),
                                      Caver::Proto::BackgroundComponent::extension,
                                      (const google::protobuf::MessageLite *)qword_6E9588);
  if ( (*((_BYTE *)result + 24) & 1) != 0 )
  {
    v5 = this[16];
    Caver::TextureLibrary::sharedLibrary(result);
    Caver::TextureLibrary::TextureForName();
    Caver::Sprite::InitWithTexture(v5);
    result = v7;
    if ( v7 )
    {
      v6 = *((_DWORD *)v7 + 2) - 1;
      *((_DWORD *)v7 + 2) = v6;
      if ( !v6 )
        return (Caver::TextureLibrary *)(*(__int64 (__fastcall **)())(*(_QWORD *)v7 + 8LL))();
    }
  }
  return result;
}

