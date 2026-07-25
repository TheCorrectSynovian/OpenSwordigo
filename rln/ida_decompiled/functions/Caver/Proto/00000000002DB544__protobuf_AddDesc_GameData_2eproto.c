/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DB544
 * Mangled: _ZN5Caver5Proto33protobuf_AddDesc_GameData_2eprotoEv
 * Demangled: Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Callers: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7D70  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *   0x00000000001FC930  Caver::Proto::GUIViewLayout::default_instance(void)
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *   0x0000000000201A40  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000002DB3E0  Caver::Proto::protobuf_ShutdownFile_GameData_2eproto(void)
 *
 * Referenced strings: 207
 *   insn=0x00000000002DB544 string=0x00000000002DB548 "\t"
 *   insn=0x00000000002DB548 string=0x00000000002DB54C "I"
 *   insn=0x00000000002DB564 string=0x00000000002DB568 "b"
 *   insn=0x00000000002DB568 string=0x000000000058AB7C "./../../../../Source/Caver/Content/Proto/GameData.pb.cc"
 *   insn=0x00000000002DB574 string=0x00000000002DB578 "B"
 *   insn=0x00000000002DB580 string=0x00000000002DB584 "\t"
 *   insn=0x00000000002DB584 string=0x00000000002DB588 "."
 *   insn=0x00000000002DB588 string=0x00000000002DB58C "M"
 *   insn=0x00000000002DB594 string=0x00000000002DB598 "H "
 *   insn=0x00000000002DB594 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DB598 string=0x00000000002DB59C "\t"
 *   insn=0x00000000002DB59C string=0x00000000002DB5A0 "QD"
 *   insn=0x00000000002DB5A0 string=0x00000000002DB5A4 "\t"
 *   insn=0x00000000002DB5A4 string=0x00000000002DB5A8 "I "
 *   insn=0x00000000002DB5A8 string=0x00000000002DB5AC ")=D"
 *   insn=0x00000000002DB5AC string=0x00000000002DB5B0 "A"
 *   insn=0x00000000002DB5B0 string=0x00000000002DB5B4 "S "
 *   insn=0x00000000002DB5B4 string=0x00000000002DB5B8 ""
 *   insn=0x00000000002DB5B8 string=0x00000000002DB5BC " "
 *   insn=0x00000000002DB5BC string=0x00000000002DB5C0 "i "
 *   insn=0x00000000002DB5C0 string=0x00000000002DB5C4 ")"
 *   insn=0x00000000002DB5CC string=0x00000000002DB5D0 ""
 *   insn=0x00000000002DB5D0 string=0x00000000002DB5D4 "\t8"
 *   insn=0x00000000002DB5D4 string=0x00000000002DB5D8 "H "
 *   insn=0x00000000002DB5D8 string=0x00000000002DB5DC ""
 *   insn=0x00000000002DB5F8 string=0x00000000002DB5FC "s"
 *   insn=0x00000000002DB604 string=0x00000000002DB608 ""
 *   insn=0x00000000002DB610 string=0x00000000002DB614 "`"
 *   insn=0x00000000002DB61C string=0x00000000002DB620 "h "
 *   insn=0x00000000002DB620 string=0x00000000002DB624 "aD"
 *   insn=0x00000000002DB628 string=0x00000000002DB62C "I "
 *   insn=0x00000000002DB62C string=0x00000000002DB630 ")"
 *   insn=0x00000000002DB630 string=0x00000000002DB634 "j"
 *   insn=0x00000000002DB63C string=0x00000000002DB640 "k "
 *   insn=0x00000000002DB640 string=0x00000000002DB644 "kC"
 *   insn=0x00000000002DB644 string=0x00000000002DB648 "@"
 *   insn=0x00000000002DB648 string=0x00000000002DB64C "A"
 *   insn=0x00000000002DB64C string=0x00000000002DB650 "\t"
 *   insn=0x00000000002DB650 string=0x00000000002DB654 ""
 *   insn=0x00000000002DB658 string=0x00000000002DB65C "`"
 *   insn=0x00000000002DB664 string=0x00000000002DB668 ""
 *   insn=0x00000000002DB668 string=0x00000000002DB66C "I "
 *   insn=0x00000000002DB66C string=0x00000000002DB670 ")"
 *   insn=0x00000000002DB670 string=0x00000000002DB674 ""
 *   insn=0x00000000002DB674 string=0x00000000002DB678 "H "
 *   insn=0x00000000002DB678 string=0x00000000002DB67C ""
 *   insn=0x00000000002DB67C string=0x00000000002DB680 " "
 *   insn=0x00000000002DB680 string=0x00000000002DB684 "0"
 *   insn=0x00000000002DB684 string=0x00000000002DB688 "h "
 *   insn=0x00000000002DB688 string=0x00000000002DB68C "5A"
 *   insn=0x00000000002DB68C string=0x00000000002DB690 ""
 *   insn=0x00000000002DB698 string=0x00000000002DB69C "A"
 *   insn=0x00000000002DB69C string=0x00000000002DB6A0 ""
 *   insn=0x00000000002DB6A0 string=0x00000000002DB6A4 "h "
 *   insn=0x00000000002DB6A4 string=0x00000000002DB6A8 ""
 *   insn=0x00000000002DB6B4 string=0x00000000002DB6B8 "H "
 *   insn=0x00000000002DB6B8 string=0x00000000002DB6BC "EC"
 *   insn=0x00000000002DB6CC string=0x00000000002DB6D0 "H "
 *   insn=0x00000000002DB6D0 string=0x00000000002DB6D4 ""
 *   insn=0x00000000002DB6D4 string=0x00000000002DB6D8 ""
 *   insn=0x00000000002DB6E4 string=0x00000000002DB6E8 "J "
 *   insn=0x00000000002DB6E8 string=0x00000000002DB6EC "J"
 *   insn=0x00000000002DB6EC string=0x00000000002DB6F0 "\t"
 *   insn=0x00000000002DB6F0 string=0x00000000002DB6F4 "A"
 *   insn=0x00000000002DB6F4 string=0x00000000002DB6F8 "\t"
 *   insn=0x00000000002DB6F8 string=0x00000000002DB6FC ""
 *   insn=0x00000000002DB6FC string=0x00000000002DB700 "@"
 *   insn=0x00000000002DB708 string=0x00000000002DB70C "H "
 *   insn=0x00000000002DB70C string=0x00000000002DB710 "ED"
 *   insn=0x00000000002DB710 string=0x00000000002DB714 "I "
 *   insn=0x00000000002DB714 string=0x00000000002DB718 ")"
 *   insn=0x00000000002DB71C string=0x00000000002DB720 "H "
 *   insn=0x00000000002DB720 string=0x00000000002DB724 ""
 *   insn=0x00000000002DB724 string=0x00000000002DB728 "!"
 *   insn=0x00000000002DB72C string=0x00000000002DB730 "h "
 *   insn=0x00000000002DB730 string=0x00000000002DB734 "\tG"
 *   insn=0x00000000002DB738 string=0x00000000002DB73C "h"
 *   insn=0x00000000002DB744 string=0x00000000002DB748 "h "
 *   insn=0x00000000002DB748 string=0x00000000002DB74C "}A"
 *   insn=0x00000000002DB758 string=0x00000000002DB75C "A"
 *   insn=0x00000000002DB75C string=0x00000000002DB760 ""
 *   insn=0x00000000002DB760 string=0x00000000002DB764 "H "
 *   insn=0x00000000002DB764 string=0x00000000002DB768 ""
 *   insn=0x00000000002DB778 string=0x00000000002DB77C "H "
 *   insn=0x00000000002DB77C string=0x00000000002DB780 "I "
 *   insn=0x00000000002DB780 string=0x00000000002DB784 ""
 *   insn=0x00000000002DB784 string=0x00000000002DB788 ")"
 *   insn=0x00000000002DB78C string=0x00000000002DB790 "A"
 *   insn=0x00000000002DB790 string=0x00000000002DB794 " "
 *   insn=0x00000000002DB794 string=0x00000000002DB798 "i "
 *   insn=0x00000000002DB798 string=0x00000000002DB79C ")"
 *   insn=0x00000000002DB79C string=0x00000000002DB7A0 ""
 *   insn=0x00000000002DB7A0 string=0x00000000002DB7A4 "h "
 *   insn=0x00000000002DB7A4 string=0x00000000002DB7A8 ""
 *   insn=0x00000000002DB7AC string=0x00000000002DB7B0 " "
 *   insn=0x00000000002DB7B0 string=0x00000000002DB7B4 "I "
 *   insn=0x00000000002DB7B4 string=0x00000000002DB7B8 ")AB"
 *   insn=0x00000000002DB7B8 string=0x00000000002DB7BC "|"
 *   insn=0x00000000002DB7C0 string=0x00000000002DB7C4 " "
 *   insn=0x00000000002DB7CC string=0x00000000002DB7D0 "H "
 *   insn=0x00000000002DB7D0 string=0x00000000002DB7D4 ""
 *   insn=0x00000000002DB7D4 string=0x00000000002DB7D8 "I "
 *   insn=0x00000000002DB7D8 string=0x00000000002DB7DC ")"
 *   insn=0x00000000002DB7E0 string=0x00000000002DB7E4 "H "
 *   insn=0x00000000002DB7E4 string=0x00000000002DB7E8 ""
 *   insn=0x00000000002DB7EC string=0x00000000002DB7F0 "!"
 *   insn=0x00000000002DB7F0 string=0x00000000002DB7F4 "A"
 *   insn=0x00000000002DB7F4 string=0x00000000002DB7F8 ""
 *   insn=0x00000000002DB7F8 string=0x00000000002DB7FC "H "
 *   insn=0x00000000002DB7FC string=0x00000000002DB800 ""
 *   insn=0x00000000002DB804 string=0x00000000002DB808 "H "
 *   insn=0x00000000002DB808 string=0x00000000002DB80C "AF"
 *   insn=0x00000000002DB814 string=0x00000000002DB818 "H "
 *   insn=0x00000000002DB818 string=0x00000000002DB81C ""
 *   insn=0x00000000002DB828 string=0x00000000002DB82C "mg"
 *   insn=0x00000000002DB82C string=0x00000000002DB830 "H "
 *   insn=0x00000000002DB830 string=0x00000000002DB834 "I "
 *   insn=0x00000000002DB834 string=0x00000000002DB838 ""
 *   insn=0x00000000002DB838 string=0x00000000002DB83C ")F"
 *   insn=0x00000000002DB840 string=0x00000000002DB844 "A"
 *   insn=0x00000000002DB844 string=0x00000000002DB848 " "
 *   insn=0x00000000002DB848 string=0x00000000002DB84C "I "
 *   insn=0x00000000002DB84C string=0x00000000002DB850 ")}C"
 *   insn=0x00000000002DB850 string=0x00000000002DB854 ""
 *   insn=0x00000000002DB858 string=0x00000000002DB85C " "
 *   insn=0x00000000002DB85C string=0x00000000002DB860 " "
 *   insn=0x00000000002DB860 string=0x00000000002DB864 "i "
 *   insn=0x00000000002DB864 string=0x00000000002DB868 ")"
 *   insn=0x00000000002DB868 string=0x00000000002DB86C "( "
 *   insn=0x00000000002DB86C string=0x00000000002DB870 "|"
 *   insn=0x00000000002DB874 string=0x00000000002DB878 " "
 *   insn=0x00000000002DB87C string=0x00000000002DB880 "Xg"
 *   insn=0x00000000002DB880 string=0x00000000002DB884 "@"
 *   insn=0x00000000002DB884 string=0x00000000002DB888 "I "
 *   insn=0x00000000002DB888 string=0x00000000002DB88C "j "
 *   insn=0x00000000002DB88C string=0x00000000002DB890 ")"
 *   insn=0x00000000002DB890 string=0x00000000002DB894 "J"
 *   insn=0x00000000002DB894 string=0x00000000002DB898 ""
 *   insn=0x00000000002DB898 string=0x00000000002DB89C "H "
 *   insn=0x00000000002DB89C string=0x00000000002DB8A0 "EF"
 *   insn=0x00000000002DB8A0 string=0x00000000002DB8A4 " "
 *   insn=0x00000000002DB8A8 string=0x00000000002DB8AC ""
 *   insn=0x00000000002DB8AC string=0x00000000002DB8B0 "A"
 *   insn=0x00000000002DB8B0 string=0x00000000002DB8B4 ""
 *   insn=0x00000000002DB8B4 string=0x00000000002DB8B8 "H "
 *   insn=0x00000000002DB8B8 string=0x00000000002DB8BC ""
 *   insn=0x00000000002DB8BC string=0x00000000002DB8C0 " "
 *   insn=0x00000000002DB8C0 string=0x00000000002DB8C4 "A"
 *   insn=0x00000000002DB8C8 string=0x00000000002DB8CC "H "
 *   insn=0x00000000002DB8CC string=0x00000000002DB8D0 ""
 *   insn=0x00000000002DB8DC string=0x00000000002DB8E0 "h "
 *   insn=0x00000000002DB8E0 string=0x00000000002DB8E4 ""
 *   insn=0x00000000002DB8F0 string=0x00000000002DB8F4 ";g"
 *   insn=0x00000000002DB8F4 string=0x00000000002DB8F8 "H "
 *   insn=0x00000000002DB8F8 string=0x00000000002DB8FC ""
 *   insn=0x00000000002DB900 string=0x00000000002DB904 "I "
 *   insn=0x00000000002DB904 string=0x00000000002DB908 ")"
 *   insn=0x00000000002DB908 string=0x00000000002DB90C "j "
 *   insn=0x00000000002DB90C string=0x00000000002DB910 "J"
 *   insn=0x00000000002DB914 string=0x00000000002DB918 "K "
 *   insn=0x00000000002DB918 string=0x00000000002DB91C "k"
 *   insn=0x00000000002DB91C string=0x00000000002DB920 " "
 *   insn=0x00000000002DB920 string=0x00000000002DB924 "A"
 *   insn=0x00000000002DB924 string=0x00000000002DB928 "@"
 *   insn=0x00000000002DB928 string=0x00000000002DB92C ""
 *   insn=0x00000000002DB930 string=0x00000000002DB934 "`"
 *   insn=0x00000000002DB938 string=0x00000000002DB93C ")g"
 *   insn=0x00000000002DB93C string=0x00000000002DB940 ""
 *   insn=0x00000000002DB940 string=0x00000000002DB944 ""
 *   insn=0x00000000002DB944 string=0x00000000002DB948 "( "
 *   insn=0x00000000002DB948 string=0x00000000002DB94C ""
 *   insn=0x00000000002DB94C string=0x00000000002DB950 "H "
 *   insn=0x00000000002DB950 string=0x00000000002DB954 ""
 *   insn=0x00000000002DB954 string=0x00000000002DB958 ""
 *   insn=0x00000000002DB960 string=0x00000000002DB964 "A"
 *   insn=0x00000000002DB974 string=0x00000000002DB978 ""
 *   insn=0x00000000002DB978 string=0x00000000002DB97C "U "
 *   insn=0x00000000002DB994 string=0x00000000002DB998 "H "
 *   insn=0x00000000002DB998 string=0x00000000002DB99C "YG"
 *   insn=0x00000000002DB99C string=0x00000000002DB9A0 "\t"
 *   insn=0x00000000002DB9A0 string=0x00000000002DB9A4 "\t"
 *   insn=0x00000000002DB9A4 string=0x00000000002DB9A8 "\t"
 *   insn=0x00000000002DB9A8 string=0x00000000002DB9AC "\t$"
 *   insn=0x00000000002DB9AC string=0x00000000002DB9B0 "\t`"
 *   insn=0x00000000002DB9B0 string=0x00000000002DB9B4 "\t@"
 *   insn=0x00000000002DB9B4 string=0x00000000002DB9B8 "\t@"
 *   insn=0x00000000002DB9B8 string=0x00000000002DB9BC "\t\"
 *   insn=0x00000000002DB9BC string=0x00000000002DB9C0 "\t "
 *   insn=0x00000000002DB9C0 string=0x00000000002DB9C4 "A"
 *   insn=0x00000000002DB9D8 string=0x00000000002DB9DC ""
 *   insn=0x00000000002DB9DC string=0x00000000002DB9E0 "("
 *   insn=0x00000000002DB9E0 string=0x00000000002DB9E4 "D"
 *   insn=0x00000000002DB9E4 string=0x00000000002DB9E8 "`"
 *   insn=0x00000000002DB9E8 string=0x00000000002DB9EC "|"
 *   insn=0x00000000002DB9F4 string=0x00000000002DB9F8 "\tx"
 *   insn=0x00000000002DB9F8 string=0x00000000002DB9FC ""
 *   insn=0x00000000002DB9FC string=0x00000000002DBA00 "H "
 *   insn=0x00000000002DBA00 string=0x00000000002DBA04 "s"
 *   insn=0x00000000002DBA04 string=0x00000000002DBA08 "1G"
 *   insn=0x00000000002DBA10 string=0x00000000002DBA14 "`\n"
 *   insn=0x00000000002DBA10 string=0x00000000001FB0B0 "0'"
 *   insn=0x00000000002DBA1C string=0x00000000002DBA20 "`."
 *   insn=0x00000000002DBA1C string=0x00000000001FC930 "0'"
 *   insn=0x00000000002DBA24 string=0x00000000002DBA28 "H "
 *   insn=0x00000000002DBA28 string=0x00000000002DBA2C "-B"
 *   insn=0x00000000002DBA2C string=0x00000000002DBA30 "`2"
 *   insn=0x00000000002DBA48 string=0x00000000001F7D70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::protobuf_AddDesc_GameData_2eproto(
        Caver::Proto *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Caver::Proto *v4; // x0
  __int64 v5; // x0
  __int128 v6; // q0
  __int64 v7; // x0
  __int64 v8; // x0
  __int128 v9; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  __int128 v12; // q0
  __int128 v13; // q1
  __int64 v14; // x0
  __int128 v15; // q0
  __int64 v16; // x0
  __int128 v17; // q0
  __int128 v18; // q1
  __int64 v19; // x0
  __int128 v20; // q0
  __int64 v21; // x0
  __int128 v22; // q0
  __int128 v23; // q1
  __int64 v24; // x0
  __int128 v25; // q0
  __int64 v26; // x0
  __int64 v32; // x0
  __int64 v33; // x19
  Caver::Proto::GUIViewLayout *v34; // x0
  __int64 v35; // x19
  Caver::Proto::GUIViewLayout *v36; // x0
  void (*v37)(void); // x1

  if ( (byte_6E8DB8 & 1) == 0 )
  {
    byte_6E8DB8 = 1;
    v4 = (Caver::Proto *)google::protobuf::internal::VerifyVersion(
                           (google::protobuf::internal *)&stru_1E9030.r_info,
                           2003000,
                           (int)"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",
                           a4);
    Caver::Proto::protobuf_AddDesc_Common_2eproto(v4);
    v5 = operator new(0x88u);
    *(_QWORD *)(v5 + 40) = v5 + 64;
    *(_QWORD *)&v6 = &Caver::Proto::MapNode::_default_level_name_;
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = 0;
    *(_QWORD *)v5 = off_6C6688;
    *(_QWORD *)(v5 + 112) = &Caver::Proto::MapNode::_default_music_;
    *(_DWORD *)(v5 + 96) = 0;
    *(_BYTE *)(v5 + 100) = 0;
    *(_DWORD *)(v5 + 104) = 0;
    *(_BYTE *)(v5 + 120) = 0;
    *(_DWORD *)(v5 + 124) = 0;
    *(_BYTE *)(v5 + 128) = 0;
    *(_DWORD *)(v5 + 132) = 0;
    *((_QWORD *)&v6 + 1) = &Caver::Proto::MapNode::_default_title_;
    *(_QWORD *)(v5 + 48) = 0;
    *(_DWORD *)(v5 + 56) = 4;
    *(_OWORD *)(v5 + 24) = v6;
    Caver::Proto::MapNode::default_instance_ = v5;
    v7 = operator new(0x28u);
    *(_DWORD *)(v7 + 8) = 0;
    *(_BYTE *)(v7 + 32) = 0;
    *(_DWORD *)(v7 + 36) = 0;
    *(_QWORD *)(v7 + 16) = &Caver::Proto::MapNode_Portal::_default_destination_name_;
    *(_QWORD *)v7 = off_6C6610;
    *(_QWORD *)(v7 + 24) = 1;
    Caver::Proto::MapNode_Portal::default_instance_ = v7;
    v8 = operator new(0x70u);
    *(_QWORD *)(v8 + 32) = v8 + 56;
    *(_QWORD *)&v9 = &Caver::Proto::MapZone::_default_name_;
    *(_QWORD *)(v8 + 96) = &Caver::Proto::MapZone::_default_music_;
    *(_QWORD *)(v8 + 40) = 0;
    *(_DWORD *)(v8 + 48) = 4;
    *(_DWORD *)(v8 + 8) = 0;
    *(_QWORD *)v8 = off_6C6700;
    *(_DWORD *)(v8 + 88) = 0;
    *(_DWORD *)(v8 + 104) = 0;
    *((_QWORD *)&v9 + 1) = &Caver::Proto::MapZone::_default_title_;
    *(_OWORD *)(v8 + 16) = v9;
    Caver::Proto::MapZone::default_instance_ = v8;
    v10 = operator new(0x50u);
    *(_QWORD *)(v10 + 24) = 0;
    *(_DWORD *)(v10 + 32) = 4;
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 72) = 0;
    *(_QWORD *)(v10 + 16) = v10 + 40;
    *(_QWORD *)v10 = off_6C6778;
    Caver::Proto::Map::default_instance_ = v10;
    v11 = operator new(0x48u);
    *(_QWORD *)&v12 = &Caver::Proto::Item::_default_name_;
    *(_QWORD *)&v13 = &Caver::Proto::Item::_default_short_description_;
    *((_QWORD *)&v12 + 1) = &Caver::Proto::Item::_default_title_;
    *((_QWORD *)&v13 + 1) = &Caver::Proto::Item::_default_description_;
    *(_OWORD *)(v11 + 16) = v12;
    *(_OWORD *)(v11 + 32) = v13;
    *(_BYTE *)(v11 + 48) = 0;
    *(_QWORD *)(v11 + 60) = 0;
    *(_QWORD *)(v11 + 52) = 0;
    *(_QWORD *)v11 = off_6C67F0;
    *(_QWORD *)(v11 + 8) = 0x100000000LL;
    Caver::Proto::Item::default_instance_ = v11;
    v14 = operator new(0x38u);
    *(_DWORD *)(v14 + 8) = 0;
    *(_QWORD *)&v15 = &Caver::Proto::Skill::_default_name_;
    *(_QWORD *)v14 = off_6C6868;
    *(_QWORD *)(v14 + 48) = 0;
    *((_QWORD *)&v15 + 1) = &Caver::Proto::Skill::_default_title_;
    *(_QWORD *)(v14 + 32) = &Caver::Proto::Skill::_default_description_;
    *(_QWORD *)(v14 + 40) = 0;
    *(_OWORD *)(v14 + 16) = v15;
    Caver::Proto::Skill::default_instance_ = v14;
    v16 = operator new(0x38u);
    *(_QWORD *)&v17 = &Caver::Proto::Quest::_default_name_;
    *(_DWORD *)(v16 + 8) = 0;
    *(_QWORD *)&v18 = &Caver::Proto::Quest::_default_follow_up_quest_;
    *(_QWORD *)v16 = off_6C68E0;
    *((_QWORD *)&v17 + 1) = &Caver::Proto::Quest::_default_title_;
    *(_DWORD *)(v16 + 48) = 0;
    *((_QWORD *)&v18 + 1) = &Caver::Proto::Quest::_default_map_location_;
    *(_OWORD *)(v16 + 16) = v17;
    *(_OWORD *)(v16 + 32) = v18;
    Caver::Proto::Quest::default_instance_ = v16;
    v19 = operator new(0x30u);
    *(_DWORD *)(v19 + 8) = 0;
    *(_QWORD *)&v20 = &Caver::Proto::EntityClass::_default_name_;
    *(_QWORD *)v19 = off_6C6958;
    *(_QWORD *)(v19 + 40) = 0;
    *((_QWORD *)&v20 + 1) = &Caver::Proto::EntityClass::_default_title_;
    *(_QWORD *)(v19 + 32) = 16843008;
    *(_OWORD *)(v19 + 16) = v20;
    Caver::Proto::EntityClass::default_instance_ = v19;
    v21 = operator new(0x78u);
    *(_QWORD *)(v21 + 56) = v21 + 80;
    *(_QWORD *)(v21 + 64) = 0;
    *(_DWORD *)(v21 + 72) = 4;
    *(_QWORD *)(v21 + 8) = 0;
    *(_QWORD *)v21 = off_6C6A48;
    *(_QWORD *)&v22 = &Caver::Proto::GuideTarget::_default_name_;
    *(_QWORD *)&v23 = &Caver::Proto::GuideTarget::_default_object_identifier_;
    *((_QWORD *)&v22 + 1) = &Caver::Proto::GuideTarget::_default_level_name_;
    *(_BYTE *)(v21 + 48) = 0;
    *(_DWORD *)(v21 + 112) = 0;
    *((_QWORD *)&v23 + 1) = &Caver::Proto::GuideTarget::_default_carry_object_identifier_;
    *(_OWORD *)(v21 + 16) = v22;
    *(_OWORD *)(v21 + 32) = v23;
    Caver::Proto::GuideTarget::default_instance_ = v21;
    v24 = operator new(0x28u);
    *(_DWORD *)(v24 + 8) = 0;
    *(_DWORD *)(v24 + 32) = 0;
    *(_QWORD *)&v25 = &Caver::Proto::GuideTarget_LevelObject::_default_level_name_;
    *((_QWORD *)&v25 + 1) = &Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_;
    *(_QWORD *)v24 = off_6C69D0;
    *(_OWORD *)(v24 + 16) = v25;
    Caver::Proto::GuideTarget_LevelObject::default_instance_ = v24;
    v26 = operator new(0x70u);
    *(_QWORD *)(v26 + 16) = v26 + 40;
    *(_WORD *)(v26 + 72) = 257;
    *(_QWORD *)(v26 + 24) = 0;
    *(_DWORD *)(v26 + 32) = 4;
    *(_DWORD *)(v26 + 8) = 0;
    *(_DWORD *)(v26 + 108) = 0;
    *(_BYTE *)(v26 + 106) = 0;
    *(_WORD *)(v26 + 104) = 0;
    *(_QWORD *)(v26 + 88) = 0;
    *(_QWORD *)(v26 + 96) = 0;
    *(_QWORD *)v26 = off_6C6AC0;
    __asm { FMOV            V0.2S, #1.0 }
    *(_QWORD *)(v26 + 76) = _D0;
    Caver::Proto::GameOptions::default_instance_ = v26;
    v32 = operator new(0x130u);
    *(_QWORD *)(v32 + 16) = v32 + 40;
    *(_QWORD *)(v32 + 72) = v32 + 96;
    *(_QWORD *)(v32 + 128) = v32 + 152;
    *(_QWORD *)(v32 + 184) = v32 + 208;
    *(_DWORD *)(v32 + 32) = 4;
    *(_DWORD *)(v32 + 88) = 4;
    *(_DWORD *)(v32 + 144) = 4;
    *(_DWORD *)(v32 + 200) = 4;
    *(_DWORD *)(v32 + 256) = 4;
    *(_QWORD *)(v32 + 24) = 0;
    *(_QWORD *)(v32 + 80) = 0;
    *(_QWORD *)(v32 + 136) = 0;
    *(_QWORD *)(v32 + 192) = 0;
    *(_QWORD *)(v32 + 248) = 0;
    *(_DWORD *)(v32 + 8) = 0;
    *(_DWORD *)(v32 + 296) = 0;
    *(_QWORD *)(v32 + 240) = v32 + 264;
    *(_QWORD *)v32 = off_6C6B38;
    v33 = Caver::Proto::MapNode::default_instance_;
    Caver::Proto::GameData::default_instance_ = v32;
    v34 = (Caver::Proto::GUIViewLayout *)Caver::Proto::Vector2::default_instance((Caver::Proto::Vector2 *)v32);
    *(_QWORD *)(v33 + 16) = v34;
    v35 = Caver::Proto::GameOptions::default_instance_;
    v36 = (Caver::Proto::GUIViewLayout *)Caver::Proto::GUIViewLayout::default_instance(v34);
    *(_QWORD *)(v35 + 88) = v36;
    *(_QWORD *)(v35 + 96) = Caver::Proto::GUIViewLayout::default_instance(v36);
    google::protobuf::internal::OnShutdown(
      (google::protobuf::internal *)Caver::Proto::protobuf_ShutdownFile_GameData_2eproto,
      v37);
  }
}

