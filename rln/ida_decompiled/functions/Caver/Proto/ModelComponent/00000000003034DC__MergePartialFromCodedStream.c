/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003034DC
 * Mangled: _ZN5Caver5Proto14ModelComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ModelComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000303A98  Caver::Proto::ModelComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 180
 *   insn=0x00000000003034F4 string=0x00000000003034F8 "W"
 *   insn=0x00000000003034F8 string=0x00000000003034FC "9"
 *   insn=0x00000000003034FC string=0x0000000000303500 "\t"
 *   insn=0x0000000000303504 string=0x0000000000303508 "9"
 *   insn=0x0000000000303508 string=0x000000000030350C ")"
 *   insn=0x000000000030350C string=0x0000000000303510 "X"
 *   insn=0x0000000000303510 string=0x000000000058B518 "l"
 *   insn=0x000000000030351C string=0x0000000000303520 ":a"
 *   insn=0x0000000000303524 string=0x0000000000303528 "h"
 *   insn=0x000000000030352C string=0x0000000000303530 """
 *   insn=0x0000000000303530 string=0x0000000000303534 "\t"
 *   insn=0x0000000000303538 string=0x000000000030353C "!"
 *   insn=0x000000000030353C string=0x0000000000303540 ""
 *   insn=0x0000000000303540 string=0x0000000000303544 "a""
 *   insn=0x0000000000303544 string=0x0000000000303548 "h"
 *   insn=0x000000000030354C string=0x0000000000303550 ">"
 *   insn=0x000000000030354C string=0x0000000000303568 "(|"
 *   insn=0x0000000000303554 string=0x0000000000303558 ":"
 *   insn=0x0000000000303558 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000030355C string=0x0000000000303560 "a""
 *   insn=0x0000000000303560 string=0x0000000000303564 "!'"
 *   insn=0x0000000000303568 string=0x000000000030356C ""
 *   insn=0x0000000000303570 string=0x0000000000303574 "("
 *   insn=0x0000000000303574 string=0x0000000000303578 "{"
 *   insn=0x0000000000303574 string=0x0000000000303798 "("
 *   insn=0x0000000000303578 string=0x000000000030357C ""
 *   insn=0x0000000000303580 string=0x0000000000303584 "("
 *   insn=0x0000000000303580 string=0x00000000003035EC "("
 *   insn=0x0000000000303580 string=0x0000000000303600 "("
 *   insn=0x0000000000303580 string=0x0000000000303610 "("
 *   insn=0x0000000000303580 string=0x0000000000303620 "("
 *   insn=0x0000000000303580 string=0x0000000000303634 "("
 *   insn=0x0000000000303580 string=0x0000000000303758 "("
 *   insn=0x0000000000303580 string=0x0000000000303768 "("
 *   insn=0x0000000000303594 string=0x0000000000303598 ""
 *   insn=0x0000000000303598 string=0x000000000030359C "?"
 *   insn=0x00000000003035A8 string=0x00000000003035AC ""
 *   insn=0x00000000003035AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003035B0 string=0x00000000003035B4 ":"
 *   insn=0x00000000003035C0 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000003035C4 string=0x00000000003035C8 "h"
 *   insn=0x00000000003035D0 string=0x00000000003035D4 "\t"
 *   insn=0x00000000003035D4 string=0x00000000003035D8 "?U"
 *   insn=0x00000000003035D8 string=0x00000000003035DC "a"
 *   insn=0x00000000003035DC string=0x00000000003035E0 ""
 *   insn=0x00000000003035E0 string=0x00000000003035E4 "h"
 *   insn=0x00000000003035F0 string=0x00000000003035F4 "A"
 *   insn=0x00000000003035F8 string=0x00000000003035FC "D"
 *   insn=0x0000000000303608 string=0x000000000030360C "d"
 *   insn=0x0000000000303618 string=0x000000000030361C "`"
 *   insn=0x0000000000303644 string=0x0000000000303648 "B"
 *   insn=0x0000000000303648 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000303658 string=0x000000000030365C "("
 *   insn=0x0000000000303660 string=0x0000000000303664 "h"
 *   insn=0x000000000030366C string=0x0000000000303670 "\t"
 *   insn=0x0000000000303670 string=0x0000000000303674 "?u"
 *   insn=0x0000000000303678 string=0x000000000030367C ""
 *   insn=0x000000000030367C string=0x0000000000303680 "h"
 *   insn=0x0000000000303688 string=0x000000000030368C "1"
 *   insn=0x000000000030369C string=0x00000000003036A0 "("
 *   insn=0x00000000003036A4 string=0x00000000003036A8 "h"
 *   insn=0x00000000003036B0 string=0x00000000003036B4 "\t"
 *   insn=0x00000000003036B4 string=0x00000000003036B8 "?"
 *   insn=0x00000000003036B8 string=0x00000000003036BC "a"
 *   insn=0x00000000003036BC string=0x00000000003036C0 ""
 *   insn=0x00000000003036C0 string=0x00000000003036C4 "h"
 *   insn=0x00000000003036CC string=0x00000000003036D0 " "
 *   insn=0x00000000003036D0 string=0x00000000003036D4 "`"
 *   insn=0x00000000003036E0 string=0x00000000003036E4 "("
 *   insn=0x00000000003036E8 string=0x00000000003036EC "i"
 *   insn=0x00000000003036EC string=0x00000000003036F0 "?"
 *   insn=0x00000000003036F4 string=0x00000000003036F8 "*"
 *   insn=0x00000000003036F8 string=0x00000000003036FC "_"
 *   insn=0x00000000003036FC string=0x0000000000303700 "A"
 *   insn=0x0000000000303700 string=0x0000000000303704 ")"
 *   insn=0x0000000000303704 string=0x0000000000303708 "i"
 *   insn=0x000000000030370C string=0x0000000000303710 ""
 *   insn=0x0000000000303718 string=0x0000000000303730 "h"
 *   insn=0x0000000000303728 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000303738 string=0x000000000030373C "\t"
 *   insn=0x0000000000303740 string=0x0000000000303744 ")"
 *   insn=0x0000000000303744 string=0x0000000000303748 ""
 *   insn=0x000000000030374C string=0x0000000000303750 "h"
 *   insn=0x0000000000303754 string=0x00000000003037C4 "h&G)\n"
 *   insn=0x0000000000303760 string=0x0000000000303764 "6"
 *   insn=0x000000000030376C string=0x0000000000303770 "i"
 *   insn=0x0000000000303770 string=0x0000000000303774 "?"
 *   insn=0x0000000000303774 string=0x0000000000303778 """
 *   insn=0x0000000000303778 string=0x000000000030377C "*"
 *   insn=0x0000000000303780 string=0x0000000000303784 "J"
 *   insn=0x0000000000303784 string=0x0000000000303788 ")"
 *   insn=0x000000000030378C string=0x0000000000303790 "i"
 *   insn=0x0000000000303790 string=0x0000000000303794 "h"
 *   insn=0x000000000030379C string=0x00000000003037A0 "@"
 *   insn=0x00000000003037A4 string=0x00000000003037A8 "J"
 *   insn=0x00000000003037A8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003037B8 string=0x00000000003037BC "%"
 *   insn=0x00000000003037BC string=0x00000000001F9050 "0'"
 *   insn=0x00000000003037C4 string=0x00000000003037C8 "\n"
 *   insn=0x00000000003037CC string=0x00000000003037D0 "j:"
 *   insn=0x00000000003037D0 string=0x00000000003037D4 "j"
 *   insn=0x00000000003037DC string=0x00000000003037E0 "h"
 *   insn=0x00000000003037EC string=0x00000000003037F0 "@"
 *   insn=0x00000000003037F0 string=0x00000000003037F4 "`"
 *   insn=0x00000000003037F4 string=0x00000000003037F8 "h"
 *   insn=0x00000000003037F8 string=0x00000000003037FC "("
 *   insn=0x0000000000303808 string=0x000000000030380C "h:@"
 *   insn=0x000000000030380C string=0x0000000000303810 ""
 *   insn=0x0000000000303810 string=0x0000000000303814 "K"
 *   insn=0x0000000000303814 string=0x0000000000303818 "h:"
 *   insn=0x0000000000303814 string=0x000000000030381C "h"
 *   insn=0x0000000000303820 string=0x0000000000303824 """
 *   insn=0x0000000000303824 string=0x0000000000303828 "\t"
 *   insn=0x0000000000303828 string=0x000000000030382C "?"
 *   insn=0x0000000000303830 string=0x0000000000303834 ""
 *   insn=0x0000000000303834 string=0x0000000000303838 "h"
 *   insn=0x0000000000303840 string=0x0000000000303844 ""
 *   insn=0x000000000030384C string=0x0000000000303864 "h"
 *   insn=0x0000000000303850 string=0x0000000000303854 "c"
 *   insn=0x000000000030385C string=0x00000000001FAF50 "0'"
 *   insn=0x000000000030386C string=0x0000000000303870 "\t"
 *   insn=0x0000000000303874 string=0x0000000000303878 ")"
 *   insn=0x0000000000303878 string=0x000000000030387C ""
 *   insn=0x0000000000303880 string=0x0000000000303884 "h"
 *   insn=0x0000000000303888 string=0x000000000030389C "h&G)\n"
 *   insn=0x0000000000303894 string=0x0000000000303898 "@"
 *   insn=0x000000000030389C string=0x00000000003038A0 "\n"
 *   insn=0x00000000003038A4 string=0x00000000003038A8 "j:"
 *   insn=0x00000000003038B4 string=0x00000000003038B8 "2"
 *   insn=0x00000000003038C4 string=0x00000000003038C8 """
 *   insn=0x00000000003038C8 string=0x00000000001F6150 "0'"
 *   insn=0x00000000003038CC string=0x00000000003038D0 "h"
 *   insn=0x00000000003038D0 string=0x00000000003038D4 "h"
 *   insn=0x00000000003038DC string=0x00000000003038E0 "L"
 *   insn=0x00000000003038E0 string=0x00000000003038E4 "h:@"
 *   insn=0x00000000003038E4 string=0x00000000003038E8 ""
 *   insn=0x00000000003038E8 string=0x00000000003038EC "K"
 *   insn=0x00000000003038EC string=0x00000000003038F0 "h:"
 *   insn=0x00000000003038EC string=0x00000000003038F4 "i"
 *   insn=0x00000000003038F4 string=0x00000000003038F8 "?"
 *   insn=0x00000000003038F8 string=0x00000000003038FC "b"
 *   insn=0x00000000003038FC string=0x0000000000303900 "*"
 *   insn=0x0000000000303900 string=0x0000000000303904 "_"
 *   insn=0x0000000000303908 string=0x000000000030390C ")"
 *   insn=0x000000000030390C string=0x0000000000303910 "i"
 *   insn=0x0000000000303910 string=0x0000000000303914 "?"
 *   insn=0x0000000000303914 string=0x0000000000303918 "#"
 *   insn=0x000000000030392C string=0x0000000000303930 "i"
 *   insn=0x0000000000303934 string=0x0000000000303938 "_"
 *   insn=0x0000000000303940 string=0x0000000000303944 "j"
 *   insn=0x0000000000303944 string=0x0000000000303948 "?"
 *   insn=0x0000000000303950 string=0x0000000000303954 "("
 *   insn=0x0000000000303958 string=0x000000000030395C "a"
 *   insn=0x000000000030395C string=0x0000000000303960 "("
 *   insn=0x0000000000303960 string=0x0000000000303964 "h"
 *   insn=0x0000000000303968 string=0x000000000030396C "H"
 *   insn=0x0000000000303974 string=0x000000000030398C "h"
 *   insn=0x0000000000303980 string=0x0000000000303984 "g"
 *   insn=0x0000000000303994 string=0x0000000000303998 "\t"
 *   insn=0x000000000030399C string=0x00000000003039A0 ")"
 *   insn=0x00000000003039A0 string=0x00000000003039A4 ""
 *   insn=0x00000000003039A8 string=0x00000000003039AC "h"
 *   insn=0x00000000003039B0 string=0x00000000003039C4 "h&G)\n"
 *   insn=0x00000000003039C4 string=0x00000000003039C8 "\n"
 *   insn=0x00000000003039CC string=0x00000000003039D0 "j:"
 *   insn=0x00000000003039D0 string=0x00000000003039D4 "j"
 *   insn=0x00000000003039F0 string=0x00000000003039F4 "`"
 *   insn=0x00000000003039F4 string=0x00000000003039F8 "h"
 *   insn=0x00000000003039F8 string=0x00000000003039FC "("
 *   insn=0x0000000000303A08 string=0x0000000000303A0C "h:@"
 *   insn=0x0000000000303A0C string=0x0000000000303A10 ""
 *   insn=0x0000000000303A10 string=0x0000000000303A14 "K"
 *   insn=0x0000000000303A14 string=0x0000000000303A18 "h:"
 *   insn=0x0000000000303A14 string=0x0000000000303A1C "h"
 *   insn=0x0000000000303A20 string=0x0000000000303A24 "!"
 *   insn=0x0000000000303A24 string=0x0000000000303A28 "h.@"
 *   insn=0x0000000000303A34 string=0x0000000000303A38 "`"
 *   insn=0x0000000000303A78 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000303A88 string=0x0000000000303A8C "\t"
 *   insn=0x0000000000303A8C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelComponent::MergePartialFromCodedStream(
        Caver::Proto::ModelComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  _BYTE *v11; // x8
  int v12; // w8
  int v13; // w10
  int v14; // w9
  _BYTE *v15; // x8
  int v16; // w9
  _BYTE *v17; // x8
  int v18; // w9
  _BYTE *v19; // x9
  Caver::Proto::FloatColor *v20; // x21
  char *v21; // x8
  unsigned __int64 v22; // x8
  char *v23; // x9
  unsigned int v24; // w10
  _BYTE *v25; // x9
  int v26; // w8
  int v27; // w9
  int v28; // w22
  int v29; // w8
  bool v30; // vf
  int v31; // w8
  _BYTE *v32; // x8
  Caver::Proto::Vector3 *v33; // x21
  char *v34; // x8
  int v35; // w8
  int v36; // w9
  int v37; // w22
  int v38; // w8
  int v39; // w8
  _BYTE *v40; // x9
  int v41; // w11
  Caver::Proto::FloatColor *v42; // x21
  char *v43; // x8
  int v44; // w8
  int v45; // w9
  int v46; // w22
  int v47; // w8
  int v48; // w8
  __int64 result; // x0
  unsigned int v50; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v51; // [xsp+8h] [xbp-48h]

  v51 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && (*v5 & 0x80000000) == 0 )
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v6 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_48;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 18) |= 1u;
        if ( v9 == &Caver::Proto::ModelComponent::_default_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 != 21 )
          continue;
        *((_QWORD *)a2 + 1) = v11 + 1;
        goto LABEL_24;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_48;
LABEL_24:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v50) & 1) == 0 )
          return 0;
        v14 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 9) = v50;
        *((_DWORD *)this + 18) = v14 | 8;
        v15 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v15 >= *((_QWORD *)a2 + 2) || *v15 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_28:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v50) & 1) == 0 )
          return 0;
        v16 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 10) = v50;
        *((_DWORD *)this + 18) = v16 | 0x10;
        v17 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v17 >= *((_QWORD *)a2 + 2) || *v17 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v17 + 1;
LABEL_32:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v50) & 1) == 0 )
          return 0;
        v18 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 8) = v50;
        v12 = v18 | 4;
        *((_DWORD *)this + 18) = v18 | 4;
        v19 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v19 >= *((_QWORD *)a2 + 2) || *v19 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v19 + 1;
LABEL_36:
        v20 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 6);
        *((_DWORD *)this + 18) = v12 | 0x20;
        if ( !v20 )
        {
          v20 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v20);
          *((_QWORD *)this + 6) = v20;
        }
        v21 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v21 >= *((_QWORD *)a2 + 2) || *v21 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v50) & 1) == 0 )
            return 0;
        }
        else
        {
          v50 = (unsigned __int8)*v21;
          *((_QWORD *)a2 + 1) = v21 + 1;
        }
        v26 = *((_DWORD *)a2 + 14);
        v27 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v26 + 1;
        if ( v26 >= v27 )
          return 0;
        v28 = google::protobuf::io::CodedInputStream::PushLimit(a2, v50);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v20, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v28);
        v29 = *((_DWORD *)a2 + 14);
        v30 = __OFSUB__(v29, 1);
        v31 = v29 - 1;
        if ( v31 < 0 == v30 )
          *((_DWORD *)a2 + 14) = v31;
        v32 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v32 >= *((_QWORD *)a2 + 2) || *v32 != 50 )
          continue;
        *((_QWORD *)a2 + 1) = v32 + 1;
LABEL_60:
        v33 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 18) |= 2u;
        if ( !v33 )
        {
          v33 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v33);
          *((_QWORD *)this + 3) = v33;
        }
        v34 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v34 >= *((_QWORD *)a2 + 2) || *v34 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v50) & 1) == 0 )
            return 0;
        }
        else
        {
          v50 = (unsigned __int8)*v34;
          *((_QWORD *)a2 + 1) = v34 + 1;
        }
        v35 = *((_DWORD *)a2 + 14);
        v36 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v35 + 1;
        if ( v35 >= v36 )
          return 0;
        v37 = google::protobuf::io::CodedInputStream::PushLimit(a2, v50);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v33, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v37);
        v38 = *((_DWORD *)a2 + 14);
        v30 = __OFSUB__(v38, 1);
        v39 = v38 - 1;
        if ( v39 < 0 == v30 )
          *((_DWORD *)a2 + 14) = v39;
        v40 = (_BYTE *)*((_QWORD *)a2 + 1);
        v22 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v40 >= v22 || *v40 != 56 )
          continue;
        v23 = v40 + 1;
        *((_QWORD *)a2 + 1) = v23;
        if ( (unsigned __int64)v23 >= v22 )
          goto LABEL_74;
LABEL_45:
        if ( *v23 < 0 )
        {
LABEL_74:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v50) & 1) == 0 )
            return 0;
          v24 = v50;
          v25 = (_BYTE *)*((_QWORD *)a2 + 1);
          v22 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v24 = (unsigned __int8)*v23;
          v25 = v23 + 1;
          v50 = v24;
          *((_QWORD *)a2 + 1) = v25;
        }
        v41 = *((_DWORD *)this + 18);
        *((_BYTE *)this + 56) = v24 != 0;
        v13 = v41 | 0x40;
        *((_DWORD *)this + 18) = v41 | 0x40;
        if ( (unsigned __int64)v25 >= v22 || *v25 != 66 )
          continue;
        *((_QWORD *)a2 + 1) = v25 + 1;
LABEL_79:
        v42 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 8);
        *((_DWORD *)this + 18) = v13 | 0x80;
        if ( !v42 )
        {
          v42 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v42);
          *((_QWORD *)this + 8) = v42;
        }
        v43 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v43 >= *((_QWORD *)a2 + 2) || *v43 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v50) & 1) == 0 )
            return 0;
        }
        else
        {
          v50 = (unsigned __int8)*v43;
          *((_QWORD *)a2 + 1) = v43 + 1;
        }
        v44 = *((_DWORD *)a2 + 14);
        v45 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v44 + 1;
        if ( v44 >= v45 )
          return 0;
        v46 = google::protobuf::io::CodedInputStream::PushLimit(a2, v50);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v42, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v46);
        v47 = *((_DWORD *)a2 + 14);
        v30 = __OFSUB__(v47, 1);
        v48 = v47 - 1;
        if ( v48 < 0 == v30 )
          *((_DWORD *)a2 + 14) = v48;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_48;
        goto LABEL_28;
      case 4u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_48;
        goto LABEL_32;
      case 5u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_48;
        v12 = *((_DWORD *)this + 18);
        goto LABEL_36;
      case 6u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_60;
        goto LABEL_48;
      case 7u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_48;
        v23 = (char *)*((_QWORD *)a2 + 1);
        v22 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v23 < v22 )
          goto LABEL_45;
        goto LABEL_74;
      case 8u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_48;
        v13 = *((_DWORD *)this + 18);
        goto LABEL_79;
      default:
        v8 = v6 & 7;
LABEL_48:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

