/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3664
 * Mangled: _ZN5Caver5Proto10Font_GlyphC2ERKS1_
 * Demangled: Caver::Proto::Font_Glyph::Font_Glyph(Caver::Proto::Font_Glyph const&)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F5560  Caver::Proto::Font_Glyph::MergeFrom(Caver::Proto::Font_Glyph const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002021D0  Caver::Proto::Rectangle::MergeFrom(Caver::Proto::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 74
 *   insn=0x00000000002D3670 string=0x00000000002D3674 ""
 *   insn=0x00000000002D3680 string=0x00000000002D3684 "A"
 *   insn=0x00000000002D3688 string=0x00000000002D368C "h"
 *   insn=0x00000000002D3694 string=0x00000000001F5560 "P'"
 *   insn=0x00000000002D36AC string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D36B4 string=0x00000000002D36B8 "%"
 *   insn=0x00000000002D36CC string=0x00000000002D36D0 "U"
 *   insn=0x00000000002D36E8 string=0x00000000002D3728 "h"
 *   insn=0x00000000002D36EC string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002D36F8 string=0x00000000002D36FC "ct"
 *   insn=0x00000000002D36FC string=0x00000000002D3700 "<"
 *   insn=0x00000000002D3700 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002D3704 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002D3710 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002D3718 string=0x00000000002D371C "y"
 *   insn=0x00000000002D371C string=0x00000000001FA500 "0'"
 *   insn=0x00000000002D3724 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002D3728 string=0x00000000002D372C ""
 *   insn=0x00000000002D3730 string=0x00000000002D3734 "h"
 *   insn=0x00000000002D3734 string=0x00000000002D3738 "("
 *   insn=0x00000000002D373C string=0x00000000002D3740 ";"
 *   insn=0x00000000002D3744 string=0x00000000002D3748 "i"
 *   insn=0x00000000002D3748 string=0x00000000002D374C ""
 *   insn=0x00000000002D3754 string=0x00000000002D3758 "h*@"
 *   insn=0x00000000002D3764 string=0x00000000002D3768 ""
 *   insn=0x00000000002D376C string=0x00000000002D3770 " "
 *   insn=0x00000000002D3778 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D377C string=0x00000000002D3780 ""
 *   insn=0x00000000002D3784 string=0x00000000002D3788 "A"
 *   insn=0x00000000002D3788 string=0x00000000002D378C "|"
 *   insn=0x00000000002D3794 string=0x00000000002D3798 "h\n@"
 *   insn=0x00000000002D3798 string=0x00000000002D379C ")"
 *   insn=0x00000000002D37A0 string=0x00000000002D37A4 ")"
 *   insn=0x00000000002D37A4 string=0x00000000002D37A8 "("
 *   insn=0x00000000002D37B0 string=0x00000000002D37B4 "h*@"
 *   insn=0x00000000002D37B4 string=0x00000000002D37B8 "("
 *   insn=0x00000000002D37BC string=0x00000000002D37C0 "i"
 *   insn=0x00000000002D37C0 string=0x00000000002D37C4 ""
 *   insn=0x00000000002D37CC string=0x00000000002D37D0 "h*@"
 *   insn=0x00000000002D37DC string=0x00000000002D37E0 ""
 *   insn=0x00000000002D37E4 string=0x00000000002D37E8 " "
 *   insn=0x00000000002D37EC string=0x00000000002D37F0 "|"
 *   insn=0x00000000002D37F4 string=0x00000000002D37F8 ""
 *   insn=0x00000000002D37FC string=0x00000000002D3800 "A"
 *   insn=0x00000000002D3800 string=0x00000000002D3804 "|"
 *   insn=0x00000000002D380C string=0x00000000002D3810 "h"
 *   insn=0x00000000002D3810 string=0x00000000002D3814 ")"
 *   insn=0x00000000002D3818 string=0x00000000002D381C ")"
 *   insn=0x00000000002D381C string=0x00000000002D3820 "("
 *   insn=0x00000000002D3824 string=0x00000000002D3828 "j"
 *   insn=0x00000000002D3850 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D3858 string=0x00000000002D385C "e"
 *   insn=0x00000000002D3878 string=0x00000000002D387C ""
 *   insn=0x00000000002D3880 string=0x00000000002D3884 "A"
 *   insn=0x00000000002D3884 string=0x00000000002D3888 "h"
 *   insn=0x00000000002D388C string=0x00000000002D3890 ""
 *   insn=0x00000000002D3890 string=0x00000000002D3894 ""
 *   insn=0x00000000002D3898 string=0x00000000002D389C "`"
 *   insn=0x00000000002D389C string=0x00000000002D38A0 "`\n@"
 *   insn=0x00000000002D38A4 string=0x00000000002D38A8 ""
 *   insn=0x00000000002D38A4 string=0x00000000002D38B4 "`"
 *   insn=0x00000000002D38A8 string=0x00000000002D38AC ""
 *   insn=0x00000000002D38B8 string=0x00000000002D38BC ""
 *   insn=0x00000000002D38BC string=0x00000000002D38C0 ""
 *   insn=0x00000000002D38D0 string=0x00000000002D38D4 "K"
 *   insn=0x00000000002D38DC string=0x00000000002D38E0 "H"
 *   insn=0x00000000002D38FC string=0x00000000002D3900 ""
 *   insn=0x00000000002D3904 string=0x00000000002D3908 ""
 *   insn=0x00000000002D3910 string=0x00000000002D3914 "`\n@"
 *   insn=0x00000000002D3918 string=0x00000000002D391C ""
 *   insn=0x00000000002D3918 string=0x00000000002D3928 "`"
 *   insn=0x00000000002D391C string=0x00000000002D3920 ""
 *   insn=0x00000000002D392C string=0x00000000002D3930 ""
 *   insn=0x00000000002D393C string=0x00000000002D3940 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Font_Glyph::Font_Glyph(
        Caver::Proto::Font_Glyph *this,
        const Caver::Proto::Font_Glyph *a2)
{
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C5EB8;
  *((_DWORD *)this + 6) = 0;
  Caver::Proto::Font_Glyph::MergeFrom(this, a2);
}

