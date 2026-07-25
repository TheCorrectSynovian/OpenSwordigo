/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CD4CC
 * Mangled: _ZN5Caver5Proto31protobuf_AddDesc_Common_2eprotoEv
 * Demangled: Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Callers: 2
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *   0x00000000002CD4CC  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7D70  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x0000000000201A40  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000002CD288  Caver::Proto::protobuf_ShutdownFile_Common_2eproto(void)
 *
 * Referenced strings: 167
 *   insn=0x00000000002CD4CC string=0x00000000002CD4D0 "\t!s9I"
 *   insn=0x00000000002CD4D0 string=0x00000000002CD4D4 "I"
 *   insn=0x00000000002CD4FC string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002CD508 string=0x00000000002CD50C "B"
 *   insn=0x00000000002CD518 string=0x00000000002CD51C "I"
 *   insn=0x00000000002CD520 string=0x00000000002CD524 "/"
 *   insn=0x00000000002CD524 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CD528 string=0x00000000002CD52C "UF"
 *   insn=0x00000000002CD53C string=0x00000000002CD540 ")qB"
 *   insn=0x00000000002CD540 string=0x00000000002CD544 "A"
 *   insn=0x00000000002CD544 string=0x00000000002CD548 ""
 *   insn=0x00000000002CD548 string=0x00000000002CD54C " "
 *   insn=0x00000000002CD550 string=0x00000000002CD554 "#"
 *   insn=0x00000000002CD558 string=0x00000000002CD55C ""
 *   insn=0x00000000002CD564 string=0x00000000002CD568 ")uG"
 *   insn=0x00000000002CD568 string=0x00000000002CD56C "A"
 *   insn=0x00000000002CD56C string=0x00000000002CD570 "|"
 *   insn=0x00000000002CD570 string=0x00000000002CD574 " "
 *   insn=0x00000000002CD580 string=0x00000000002CD584 ""
 *   insn=0x00000000002CD590 string=0x00000000002CD594 ")"
 *   insn=0x00000000002CD594 string=0x00000000002CD598 "A"
 *   insn=0x00000000002CD598 string=0x00000000002CD59C "|"
 *   insn=0x00000000002CD59C string=0x00000000002CD5A0 " "
 *   insn=0x00000000002CD5AC string=0x00000000002CD5B0 ""
 *   insn=0x00000000002CD5B8 string=0x00000000002CD5BC "s"
 *   insn=0x00000000002CD5BC string=0x00000000002CD5C0 "A"
 *   insn=0x00000000002CD5C0 string=0x00000000002CD5C4 "|"
 *   insn=0x00000000002CD5C4 string=0x00000000002CD5C8 "`"
 *   insn=0x00000000002CD5D4 string=0x00000000002CD5D8 ""
 *   insn=0x00000000002CD5E4 string=0x00000000002CD5E8 "))@"
 *   insn=0x00000000002CD5E8 string=0x00000000002CD5EC "A"
 *   insn=0x00000000002CD5EC string=0x00000000002CD5F0 "|"
 *   insn=0x00000000002CD5F0 string=0x00000000002CD5F4 " "
 *   insn=0x00000000002CD600 string=0x00000000002CD604 ""
 *   insn=0x00000000002CD610 string=0x00000000002CD614 ")YC"
 *   insn=0x00000000002CD614 string=0x00000000002CD618 "A"
 *   insn=0x00000000002CD618 string=0x00000000002CD61C ""
 *   insn=0x00000000002CD61C string=0x00000000002CD620 " "
 *   insn=0x00000000002CD62C string=0x00000000002CD630 ""
 *   insn=0x00000000002CD630 string=0x00000000002CD634 "\t"
 *   insn=0x00000000002CD634 string=0x00000000002CD638 "\t"
 *   insn=0x00000000002CD63C string=0x00000000002CD640 "A"
 *   insn=0x00000000002CD640 string=0x00000000002CD644 "\t"
 *   insn=0x00000000002CD64C string=0x00000000002CD650 ""
 *   insn=0x00000000002CD654 string=0x00000000002CD658 "iF"
 *   insn=0x00000000002CD658 string=0x00000000002CD65C ""
 *   insn=0x00000000002CD660 string=0x00000000002CD664 ""
 *   insn=0x00000000002CD678 string=0x00000000002CD67C ""
 *   insn=0x00000000002CD680 string=0x00000000002CD684 ")"
 *   insn=0x00000000002CD688 string=0x00000000002CD68C "A"
 *   insn=0x00000000002CD690 string=0x00000000002CD694 "|"
 *   insn=0x00000000002CD694 string=0x00000000002CD698 " "
 *   insn=0x00000000002CD6A4 string=0x00000000002CD6A8 "\t"
 *   insn=0x00000000002CD6A8 string=0x00000000002CD6AC "mD"
 *   insn=0x00000000002CD6B0 string=0x00000000002CD6B4 ""
 *   insn=0x00000000002CD6BC string=0x00000000002CD6C0 "\t"
 *   insn=0x00000000002CD6C4 string=0x00000000002CD6C8 ")"
 *   insn=0x00000000002CD6D4 string=0x00000000002CD6D8 "\t"
 *   insn=0x00000000002CD6E0 string=0x00000000002CD6E4 "A"
 *   insn=0x00000000002CD6E4 string=0x00000000002CD6E8 ""
 *   insn=0x00000000002CD6F8 string=0x00000000002CD6FC "1D"
 *   insn=0x00000000002CD704 string=0x00000000002CD708 ")"
 *   insn=0x00000000002CD710 string=0x00000000002CD714 "9/D"
 *   insn=0x00000000002CD714 string=0x00000000002CD718 "A"
 *   insn=0x00000000002CD718 string=0x00000000002CD71C "\t|"
 *   insn=0x00000000002CD71C string=0x00000000002CD720 ""
 *   insn=0x00000000002CD720 string=0x00000000002CD724 " "
 *   insn=0x00000000002CD730 string=0x00000000002CD734 ""
 *   insn=0x00000000002CD740 string=0x00000000002CD744 "A"
 *   insn=0x00000000002CD744 string=0x00000000002CD748 "|"
 *   insn=0x00000000002CD758 string=0x00000000002CD75C "\t"
 *   insn=0x00000000002CD75C string=0x00000000002CD760 ""
 *   insn=0x00000000002CD760 string=0x00000000002CD764 ""
 *   insn=0x00000000002CD76C string=0x00000000002CD770 "\t"
 *   insn=0x00000000002CD774 string=0x00000000002CD778 ")"
 *   insn=0x00000000002CD778 string=0x00000000002CD77C "A"
 *   insn=0x00000000002CD780 string=0x00000000002CD784 "\t,"
 *   insn=0x00000000002CD788 string=0x00000000002CD78C ")AA"
 *   insn=0x00000000002CD798 string=0x00000000002CD79C ""
 *   insn=0x00000000002CD7A0 string=0x00000000002CD7A4 "\t|"
 *   insn=0x00000000002CD7B4 string=0x00000000002CD7B8 ""
 *   insn=0x00000000002CD7CC string=0x00000000002CD7D0 "Z"
 *   insn=0x00000000002CD7D0 string=0x00000000002CD7D4 "A"
 *   insn=0x00000000002CD7D4 string=0x00000000002CD7D8 "|"
 *   insn=0x00000000002CD7D8 string=0x00000000002CD7DC "@"
 *   insn=0x00000000002CD7E8 string=0x00000000002CD7EC ""
 *   insn=0x00000000002CD7F4 string=0x00000000002CD7F8 ")"
 *   insn=0x00000000002CD800 string=0x00000000002CD804 "JmB"
 *   insn=0x00000000002CD804 string=0x00000000002CD808 "k9@"
 *   insn=0x00000000002CD814 string=0x00000000002CD818 " "
 *   insn=0x00000000002CD818 string=0x00000000002CD81C "A"
 *   insn=0x00000000002CD81C string=0x00000000002CD820 "@"
 *   insn=0x00000000002CD820 string=0x00000000002CD824 ""
 *   insn=0x00000000002CD824 string=0x00000000002CD828 ""
 *   insn=0x00000000002CD834 string=0x00000000002CD838 "j"
 *   insn=0x00000000002CD83C string=0x00000000002CD840 ""
 *   insn=0x00000000002CD84C string=0x00000000002CD850 "A"
 *   insn=0x00000000002CD850 string=0x00000000002CD854 "|"
 *   insn=0x00000000002CD85C string=0x00000000002CD860 "`"
 *   insn=0x00000000002CD864 string=0x00000000002CD868 ""
 *   insn=0x00000000002CD868 string=0x00000000002CD86C ""
 *   insn=0x00000000002CD878 string=0x00000000002CD87C "JYE"
 *   insn=0x00000000002CD888 string=0x00000000002CD88C "{"
 *   insn=0x00000000002CD88C string=0x00000000002CD890 "\t"
 *   insn=0x00000000002CD890 string=0x00000000002CD894 "A"
 *   insn=0x00000000002CD894 string=0x00000000002CD898 "\n$"
 *   insn=0x00000000002CD898 string=0x00000000002CD89C ""
 *   insn=0x00000000002CD89C string=0x00000000002CD8A0 "`"
 *   insn=0x00000000002CD8A4 string=0x00000000002CD8A8 "N"
 *   insn=0x00000000002CD8AC string=0x00000000002CD8B0 ""
 *   insn=0x00000000002CD8B8 string=0x00000000002CD8BC "uC"
 *   insn=0x00000000002CD8D0 string=0x00000000002CD8D4 ""
 *   insn=0x00000000002CD8DC string=0x00000000002CD8E0 "A"
 *   insn=0x00000000002CD8E0 string=0x00000000002CD8E4 ""
 *   insn=0x00000000002CD8E8 string=0x00000000002CD8EC ""
 *   insn=0x00000000002CD8F8 string=0x00000000002CD8FC "9"
 *   insn=0x00000000002CD900 string=0x00000000002CD904 "uD"
 *   insn=0x00000000002CD904 string=0x00000000002CD908 ""
 *   insn=0x00000000002CD918 string=0x00000000002CD91C "J1G"
 *   insn=0x00000000002CD91C string=0x00000000002CD920 "\t"
 *   insn=0x00000000002CD920 string=0x00000000002CD924 "A"
 *   insn=0x00000000002CD924 string=0x00000000002CD928 "\t"
 *   insn=0x00000000002CD928 string=0x00000000002CD92C ""
 *   insn=0x00000000002CD92C string=0x00000000002CD930 "@"
 *   insn=0x00000000002CD934 string=0x00000000002CD938 "*"
 *   insn=0x00000000002CD93C string=0x00000000002CD940 "}B"
 *   insn=0x00000000002CD948 string=0x00000000002CD94C ")"
 *   insn=0x00000000002CD950 string=0x00000000002CD954 "JqE"
 *   insn=0x00000000002CD954 string=0x00000000002CD958 "A"
 *   insn=0x00000000002CD958 string=0x00000000002CD95C "\tp"
 *   insn=0x00000000002CD964 string=0x00000000002CD968 ""
 *   insn=0x00000000002CD968 string=0x00000000002CD96C "@"
 *   insn=0x00000000002CD970 string=0x00000000002CD974 ""
 *   insn=0x00000000002CD978 string=0x00000000002CD97C ")5B"
 *   insn=0x00000000002CD97C string=0x00000000002CD980 ""
 *   insn=0x00000000002CD98C string=0x00000000002CD990 "J"
 *   insn=0x00000000002CD994 string=0x00000000002CD998 "kYC"
 *   insn=0x00000000002CD998 string=0x00000000002CD99C ""
 *   insn=0x00000000002CD99C string=0x00000000002CD9A0 ")A"
 *   insn=0x00000000002CD9A0 string=0x00000000002CD9A4 "\n "
 *   insn=0x00000000002CD9A4 string=0x00000000002CD9A8 "\t"
 *   insn=0x00000000002CD9B0 string=0x00000000002CD9B4 "x"
 *   insn=0x00000000002CD9B8 string=0x00000000002CD9BC ")"
 *   insn=0x00000000002CD9BC string=0x00000000002CD9C0 " "
 *   insn=0x00000000002CD9C0 string=0x00000000002CD9C4 "h"
 *   insn=0x00000000002CD9C4 string=0x00000000002CD9D0 ""
 *   insn=0x00000000002CD9D8 string=0x00000000002CD9DC "h"
 *   insn=0x00000000002CD9DC string=0x00000000002CD9E8 "3"
 *   insn=0x00000000002CD9E8 string=0x00000000002CD9EC "h"
 *   insn=0x00000000002CD9EC string=0x00000000002CD9F0 "6"
 *   insn=0x00000000002CD9F0 string=0x00000000002CD9F4 "h"
 *   insn=0x00000000002CD9F8 string=0x00000000002CD9FC "h"
 *   insn=0x00000000002CDA08 string=0x00000000002CDA0C "\t"
 *   insn=0x00000000002CDA10 string=0x00000000002CDA14 "h"
 *   insn=0x00000000002CDA18 string=0x00000000002CDA1C "T"
 *   insn=0x00000000002CDA30 string=0x00000000002CDA34 "h"
 *   insn=0x00000000002CDA40 string=0x00000000002CDA44 "h"
 *   insn=0x00000000002CDA48 string=0x00000000002CDA4C "T"
 *   insn=0x00000000002CDA4C string=0x00000000002CDA50 "h"
 *   insn=0x00000000002CDA54 string=0x00000000002CDA58 ""
 *   insn=0x00000000002CDA5C string=0x00000000002CDA60 "h"
 *   insn=0x00000000002CDA64 string=0x00000000002CDA68 "h"
 *   insn=0x00000000002CDA6C string=0x00000000002CDA70 "h"
 *   insn=0x00000000002CDA78 string=0x00000000002CDA7C "s"
 *   insn=0x00000000002CDA7C string=0x00000000002CDA80 "h"
 *   insn=0x00000000002CDA90 string=0x00000000002CDA94 "h*"
 *   insn=0x00000000002CDAB4 string=0x00000000001F7D70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::protobuf_AddDesc_Common_2eproto(
        Caver::Proto *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // x0
  _QWORD *v5; // x0
  __int64 v6; // x0
  _QWORD *v7; // x0
  _QWORD *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  _QWORD *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  _QWORD *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int128 v18; // q0
  _QWORD *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int128 v22; // q0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (*v26)(void); // x1
  __int64 v27; // x24
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x24
  __int64 v31; // x8
  __int64 v32; // x22
  __int64 v33; // x20
  __int64 v34; // x20
  __int64 v35; // x8
  __int64 v36; // x19

  if ( (byte_6E8CC8 & 1) != 0 )
    return;
  byte_6E8CC8 = 1;
  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)&stru_1E9030.r_info,
    2003000,
    (int)"./../../../../Source/Caver/Content/Proto/Common.pb.cc",
    a4);
  v4 = operator new(0x20u);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)v4 = off_6C5990;
  Caver::Proto::DateTime::default_instance_ = v4;
  v5 = (_QWORD *)operator new(0x18u);
  v5[2] = 0;
  *v5 = off_6C5A08;
  v5[1] = 0;
  Caver::Proto::Vector2::default_instance_ = (__int64)v5;
  v6 = operator new(0x20u);
  *(_DWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)v6 = off_6C5A80;
  *(_QWORD *)(v6 + 8) = 0;
  Caver::Proto::Vector3::default_instance_ = v6;
  v7 = (_QWORD *)operator new(0x20u);
  v7[2] = 0;
  v7[3] = 0;
  *v7 = off_6C5AF8;
  v7[1] = 0;
  Caver::Proto::Rectangle::default_instance_ = (__int64)v7;
  v8 = (_QWORD *)operator new(0x28u);
  v8[3] = 0;
  v8[4] = 0;
  v8[2] = 0;
  *v8 = off_6C5B70;
  v8[1] = 0;
  Caver::Proto::Box::default_instance_ = (__int64)v8;
  v9 = operator new(0x20u);
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = off_6C5BE8;
  Caver::Proto::Circle::default_instance_ = v9;
  v10 = operator new(0x50u);
  *(_QWORD *)(v10 + 16) = v10 + 40;
  *(_WORD *)(v10 + 72) = 256;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 76) = 0;
  *(_QWORD *)v10 = off_6C5C60;
  *(_QWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 32) = 4;
  Caver::Proto::Polygon::default_instance_ = v10;
  v11 = (_QWORD *)operator new(0x20u);
  v11[2] = 0;
  v11[3] = 1065353216;
  *v11 = off_6C5CD8;
  v11[1] = 0;
  Caver::Proto::FloatColor::default_instance_ = (__int64)v11;
  v12 = operator new(0x70u);
  *(_DWORD *)(v12 + 24) = 1;
  *(_QWORD *)(v12 + 40) = 0;
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 32) = v12 + 56;
  *(_DWORD *)(v12 + 88) = 0;
  *(_QWORD *)(v12 + 96) = 0;
  *(_DWORD *)(v12 + 104) = 0;
  *(_QWORD *)(v12 + 16) = &Caver::Proto::Texture::_default_name_;
  *(_QWORD *)v12 = off_6C5E40;
  Caver::Proto::Texture::default_instance_ = v12;
  v13 = operator new(0x28u);
  *(_DWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 32) = 1065353216;
  *(_QWORD *)(v13 + 16) = &Caver::Proto::Texture_Subtexture::_default_name_;
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)v13 = off_6C5D50;
  Caver::Proto::Texture_Subtexture::default_instance_ = v13;
  v14 = (_QWORD *)operator new(0x20u);
  v14[2] = 0;
  v14[3] = 0;
  *v14 = off_6C5DC8;
  v14[1] = 0;
  Caver::Proto::Texture_ConversionInfo::default_instance_ = (__int64)v14;
  v15 = operator new(0x78u);
  *(_QWORD *)(v15 + 40) = 0;
  *(_DWORD *)(v15 + 48) = 4;
  *(_DWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 32) = v15 + 56;
  *(_QWORD *)(v15 + 88) = &Caver::Proto::Font::_default_kerning_;
  *(_DWORD *)(v15 + 96) = 0;
  *(_QWORD *)(v15 + 104) = 0;
  *(_DWORD *)(v15 + 112) = 0;
  *(_QWORD *)v15 = off_6C5F30;
  *(_QWORD *)(v15 + 16) = &Caver::Proto::Font::_default_name_;
  *(_QWORD *)(v15 + 24) = 0;
  Caver::Proto::Font::default_instance_ = v15;
  v16 = operator new(0x30u);
  *(_QWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 40) = 0;
  *(_DWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 16) = 0;
  *(_QWORD *)v16 = off_6C5EB8;
  *(_QWORD *)(v16 + 8) = 0;
  Caver::Proto::Font_Glyph::default_instance_ = v16;
  v17 = operator new(0x30u);
  *(_DWORD *)(v17 + 8) = 0;
  *(_DWORD *)(v17 + 40) = 0;
  *(_QWORD *)&v18 = &Caver::Proto::Program::_default_name_;
  *((_QWORD *)&v18 + 1) = &Caver::Proto::Program::_default_string_;
  *(_QWORD *)(v17 + 32) = &Caver::Proto::Program::_default_bytes_;
  *(_QWORD *)v17 = off_6C5FA8;
  *(_OWORD *)(v17 + 16) = v18;
  Caver::Proto::Program::default_instance_ = v17;
  v19 = (_QWORD *)operator new(0x20u);
  v19[2] = 0;
  v19[3] = 0;
  *v19 = off_6C6020;
  v19[1] = 0;
  Caver::Proto::GUIMargins::default_instance_ = (__int64)v19;
  v20 = operator new(0x60u);
  *(_QWORD *)(v20 + 32) = 0;
  *(_DWORD *)(v20 + 40) = 4;
  *(_DWORD *)(v20 + 8) = 0;
  *(_QWORD *)(v20 + 80) = 0;
  *(_DWORD *)(v20 + 88) = 0;
  *(_QWORD *)(v20 + 16) = &Caver::Proto::GUIViewLayout::_default_identifier_;
  *(_QWORD *)(v20 + 24) = v20 + 48;
  *(_QWORD *)v20 = off_6C6098;
  Caver::Proto::GUIViewLayout::default_instance_ = v20;
  v21 = operator new(0x30u);
  *(_QWORD *)&v22 = &Caver::Proto::SoundEffect::_default_name_;
  *((_QWORD *)&v22 + 1) = &Caver::Proto::SoundEffect::_default_resource_name_;
  *(_OWORD *)(v21 + 16) = v22;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 40) = 0;
  *(_QWORD *)v21 = off_6C6110;
  *(_QWORD *)(v21 + 32) = 0x3DCCCCCD3F800000LL;
  Caver::Proto::SoundEffect::default_instance_ = v21;
  v23 = operator new(0x50u);
  *(_QWORD *)(v23 + 24) = 0;
  *(_DWORD *)(v23 + 32) = 4;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 72) = 0;
  *(_QWORD *)(v23 + 16) = v23 + 40;
  *(_QWORD *)v23 = off_6C6188;
  Caver::Proto::SoundLibrary::default_instance_ = v23;
  v24 = operator new(0x20u);
  *(_DWORD *)(v24 + 8) = 0;
  *(_QWORD *)(v24 + 16) = &Caver::Proto::MusicTrack::_default_resource_name_;
  *(_QWORD *)(v24 + 24) = 1065353216;
  *(_QWORD *)v24 = off_6C6200;
  Caver::Proto::MusicTrack::default_instance_ = v24;
  v25 = operator new(0x58u);
  *(_QWORD *)(v25 + 32) = 0;
  *(_DWORD *)(v25 + 40) = 4;
  *(_DWORD *)(v25 + 8) = 0;
  *(_QWORD *)(v25 + 16) = &Caver::Proto::MusicPlaylist::_default_name_;
  *(_QWORD *)(v25 + 24) = v25 + 48;
  *(_QWORD *)v25 = off_6C6278;
  *(_DWORD *)(v25 + 80) = 0;
  v27 = Caver::Proto::Circle::default_instance_;
  v28 = Caver::Proto::Vector2::default_instance_;
  Caver::Proto::MusicPlaylist::default_instance_ = v25;
  if ( !Caver::Proto::Vector2::default_instance_ )
  {
    v25 = Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)v25);
    v28 = Caver::Proto::Vector2::default_instance_;
  }
  *(_QWORD *)(v27 + 16) = v28;
  v29 = Caver::Proto::Texture_ConversionInfo::default_instance_;
  v30 = Caver::Proto::Texture::default_instance_;
  if ( !Caver::Proto::Texture_ConversionInfo::default_instance_ )
  {
    v25 = Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)v25);
    v29 = Caver::Proto::Texture_ConversionInfo::default_instance_;
  }
  *(_QWORD *)(v30 + 96) = v29;
  v31 = Caver::Proto::Rectangle::default_instance_;
  v32 = Caver::Proto::Texture_Subtexture::default_instance_;
  if ( !Caver::Proto::Rectangle::default_instance_ )
  {
    v25 = Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)v25);
    v31 = Caver::Proto::Rectangle::default_instance_;
  }
  *(_QWORD *)(v32 + 24) = v31;
  v33 = Caver::Proto::Font::default_instance_;
  if ( !Caver::Proto::Texture::default_instance_ )
  {
    v25 = Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)v25);
    v31 = Caver::Proto::Rectangle::default_instance_;
    *(_QWORD *)(v33 + 24) = Caver::Proto::Texture::default_instance_;
    if ( v31 )
      goto LABEL_10;
LABEL_12:
    v25 = Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)v25);
    v31 = Caver::Proto::Rectangle::default_instance_;
    *(_QWORD *)(v33 + 104) = Caver::Proto::Rectangle::default_instance_;
    v34 = Caver::Proto::Font_Glyph::default_instance_;
    if ( v31 )
    {
      *(_QWORD *)(Caver::Proto::Font_Glyph::default_instance_ + 16) = v31;
    }
    else
    {
      v25 = Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)v25);
      v31 = Caver::Proto::Rectangle::default_instance_;
      *(_QWORD *)(v34 + 16) = Caver::Proto::Rectangle::default_instance_;
      if ( !v31 )
      {
        v25 = Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)v25);
        v31 = Caver::Proto::Rectangle::default_instance_;
      }
    }
    goto LABEL_16;
  }
  *(_QWORD *)(Caver::Proto::Font::default_instance_ + 24) = Caver::Proto::Texture::default_instance_;
  if ( !v31 )
    goto LABEL_12;
LABEL_10:
  *(_QWORD *)(v33 + 104) = v31;
  v34 = Caver::Proto::Font_Glyph::default_instance_;
  *(_QWORD *)(Caver::Proto::Font_Glyph::default_instance_ + 16) = v31;
LABEL_16:
  *(_QWORD *)(v34 + 32) = v31;
  v35 = Caver::Proto::GUIMargins::default_instance_;
  v36 = Caver::Proto::GUIViewLayout::default_instance_;
  if ( !Caver::Proto::GUIMargins::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)v25);
    v35 = Caver::Proto::GUIMargins::default_instance_;
  }
  *(_QWORD *)(v36 + 80) = v35;
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)Caver::Proto::protobuf_ShutdownFile_Common_2eproto,
    v26);
}

