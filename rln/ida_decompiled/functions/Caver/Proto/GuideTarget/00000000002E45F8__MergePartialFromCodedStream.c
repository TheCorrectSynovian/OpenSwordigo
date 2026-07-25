/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E45F8
 * Mangled: _ZN5Caver5Proto11GuideTarget27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GuideTarget::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F61E0  Caver::Proto::GuideTarget::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000001FE6E0  Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 161
 *   insn=0x00000000002E4614 string=0x00000000002E4618 "X"
 *   insn=0x00000000002E4618 string=0x00000000002E461C " "
 *   insn=0x00000000002E461C string=0x00000000002E4620 "\t "
 *   insn=0x00000000002E4620 string=0x00000000002E4624 "{"
 *   insn=0x00000000002E4624 string=0x00000000002E4628 ""
 *   insn=0x00000000002E4628 string=0x00000000002E462C ")"
 *   insn=0x00000000002E462C string=0x00000000002E4630 "\n "
 *   insn=0x00000000002E4630 string=0x00000000002E4634 "J"
 *   insn=0x00000000002E4638 string=0x00000000002E463C " "
 *   insn=0x00000000002E463C string=0x00000000002E4640 "\t "
 *   insn=0x00000000002E4640 string=0x00000000002E4644 ")"
 *   insn=0x00000000002E4644 string=0x00000000002E4648 "9"
 *   insn=0x00000000002E4650 string=0x00000000002E4654 "9"
 *   insn=0x00000000002E4654 string=0x00000000002E4658 "zc"
 *   insn=0x00000000002E4658 string=0x00000000002E465C "\A"
 *   insn=0x00000000002E465C string=0x00000000002E4660 " "
 *   insn=0x00000000002E4668 string=0x00000000002E466C "h"
 *   insn=0x00000000002E4670 string=0x00000000002E4674 """
 *   insn=0x00000000002E4674 string=0x00000000002E4678 "\t"
 *   insn=0x00000000002E467C string=0x00000000002E4680 "!"
 *   insn=0x00000000002E4680 string=0x00000000002E4684 ""
 *   insn=0x00000000002E4684 string=0x00000000002E4688 "a""
 *   insn=0x00000000002E4688 string=0x00000000002E468C "h"
 *   insn=0x00000000002E4690 string=0x00000000002E4694 """
 *   insn=0x00000000002E4690 string=0x00000000002E46AC "(|"
 *   insn=0x00000000002E469C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002E46A0 string=0x00000000002E46A4 "a""
 *   insn=0x00000000002E46AC string=0x00000000002E46B0 ""
 *   insn=0x00000000002E46B4 string=0x00000000002E46B8 "H"
 *   insn=0x00000000002E46B8 string=0x00000000002E46BC "({"
 *   insn=0x00000000002E46B8 string=0x00000000002E4760 "("
 *   insn=0x00000000002E46BC string=0x00000000002E46C0 ""
 *   insn=0x00000000002E46C4 string=0x00000000002E46C8 "("
 *   insn=0x00000000002E46C4 string=0x00000000002E4730 "("
 *   insn=0x00000000002E46C4 string=0x00000000002E4740 "("
 *   insn=0x00000000002E46C4 string=0x00000000002E4750 "("
 *   insn=0x00000000002E46C4 string=0x00000000002E4770 "("
 *   insn=0x00000000002E46C4 string=0x00000000002E492C "("
 *   insn=0x00000000002E46C4 string=0x00000000002E4988 "("
 *   insn=0x00000000002E46C8 string=0x00000000002E46CC "A"
 *   insn=0x00000000002E46CC string=0x00000000002E46D0 "i"
 *   insn=0x00000000002E46D0 string=0x00000000002E46D4 "?"
 *   insn=0x00000000002E46D8 string=0x00000000002E46DC "("
 *   insn=0x00000000002E46DC string=0x00000000002E46E0 "h"
 *   insn=0x00000000002E46E0 string=0x00000000002E46E4 ""
 *   insn=0x00000000002E46E4 string=0x00000000002E46E8 ")"
 *   insn=0x00000000002E46EC string=0x00000000002E46F0 "i"
 *   insn=0x00000000002E46F8 string=0x00000000002E470C "h"
 *   insn=0x00000000002E4700 string=0x00000000002E4704 ")"
 *   insn=0x00000000002E4714 string=0x00000000002E4718 "\t"
 *   insn=0x00000000002E4718 string=0x00000000002E471C "?I"
 *   insn=0x00000000002E471C string=0x00000000002E4720 "a"
 *   insn=0x00000000002E4720 string=0x00000000002E4724 ""
 *   insn=0x00000000002E4724 string=0x00000000002E4728 "h"
 *   insn=0x00000000002E472C string=0x00000000002E477C "\t "
 *   insn=0x00000000002E4734 string=0x00000000002E4738 "`"
 *   insn=0x00000000002E4738 string=0x00000000002E48A4 "\t "
 *   insn=0x00000000002E4748 string=0x00000000002E47DC "\t "
 *   insn=0x00000000002E4754 string=0x00000000002E4758 "@"
 *   insn=0x00000000002E4758 string=0x00000000002E4840 "\t "
 *   insn=0x00000000002E4784 string=0x00000000002E4788 ")"
 *   insn=0x00000000002E4788 string=0x00000000002E478C ""
 *   insn=0x00000000002E4790 string=0x00000000002E4794 "?"
 *   insn=0x00000000002E47A0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E47A4 string=0x00000000002E47A8 ":"
 *   insn=0x00000000002E47B0 string=0x00000000002E47B4 "T"
 *   insn=0x00000000002E47B4 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002E47B8 string=0x00000000002E47BC "h"
 *   insn=0x00000000002E47C0 string=0x00000000002E47C4 "B"
 *   insn=0x00000000002E47C4 string=0x00000000002E47C8 "\t"
 *   insn=0x00000000002E47C8 string=0x00000000002E47CC "?i"
 *   insn=0x00000000002E47D0 string=0x00000000002E47D4 ""
 *   insn=0x00000000002E47D4 string=0x00000000002E47D8 "h"
 *   insn=0x00000000002E47E4 string=0x00000000002E47E8 ")"
 *   insn=0x00000000002E47E8 string=0x00000000002E47EC ""
 *   insn=0x00000000002E47F0 string=0x00000000002E47F4 "?"
 *   insn=0x00000000002E47FC string=0x00000000002E4800 "xC"
 *   insn=0x00000000002E4804 string=0x00000000002E4808 "hc"
 *   insn=0x00000000002E4808 string=0x00000000002E480C "("
 *   insn=0x00000000002E481C string=0x00000000002E4820 "h"
 *   insn=0x00000000002E4824 string=0x00000000002E4828 """
 *   insn=0x00000000002E4828 string=0x00000000002E482C "\t"
 *   insn=0x00000000002E482C string=0x00000000002E4830 "?"
 *   insn=0x00000000002E4834 string=0x00000000002E4838 ""
 *   insn=0x00000000002E4838 string=0x00000000002E483C "h"
 *   insn=0x00000000002E4848 string=0x00000000002E484C ")"
 *   insn=0x00000000002E484C string=0x00000000002E4850 ""
 *   insn=0x00000000002E4854 string=0x00000000002E4858 "?"
 *   insn=0x00000000002E4860 string=0x00000000002E4864 "_C"
 *   insn=0x00000000002E4868 string=0x00000000002E486C "hc"
 *   insn=0x00000000002E486C string=0x00000000002E4870 "("
 *   insn=0x00000000002E4880 string=0x00000000002E4884 "h"
 *   insn=0x00000000002E488C string=0x00000000002E4890 "\t"
 *   insn=0x00000000002E4890 string=0x00000000002E4894 "?"
 *   insn=0x00000000002E4898 string=0x00000000002E489C ""
 *   insn=0x00000000002E489C string=0x00000000002E48A0 "h"
 *   insn=0x00000000002E48AC string=0x00000000002E48B0 ")"
 *   insn=0x00000000002E48B0 string=0x00000000002E48B4 ""
 *   insn=0x00000000002E48B8 string=0x00000000002E48BC "?"
 *   insn=0x00000000002E48C4 string=0x00000000002E48C8 "FC"
 *   insn=0x00000000002E48CC string=0x00000000002E48D0 "hc"
 *   insn=0x00000000002E48D0 string=0x00000000002E48D4 "("
 *   insn=0x00000000002E48E4 string=0x00000000002E48E8 "i"
 *   insn=0x00000000002E48E8 string=0x00000000002E48EC "?"
 *   insn=0x00000000002E48F0 string=0x00000000002E48F4 "*"
 *   insn=0x00000000002E48F4 string=0x00000000002E48F8 "_"
 *   insn=0x00000000002E48FC string=0x00000000002E4900 ")"
 *   insn=0x00000000002E4900 string=0x00000000002E4904 "i"
 *   insn=0x00000000002E4904 string=0x00000000002E4908 "?"
 *   insn=0x00000000002E490C string=0x00000000002E4910 "*"
 *   insn=0x00000000002E4910 string=0x00000000002E4914 "j"
 *   insn=0x00000000002E4914 string=0x00000000002E4918 "J"
 *   insn=0x00000000002E4918 string=0x00000000002E491C ")"
 *   insn=0x00000000002E4920 string=0x00000000002E4924 "i"
 *   insn=0x00000000002E492C string=0x00000000002E4930 "!"
 *   insn=0x00000000002E4930 string=0x00000000002E4934 "i"
 *   insn=0x00000000002E4934 string=0x00000000002E4938 "?"
 *   insn=0x00000000002E4948 string=0x00000000002E494C "@"
 *   insn=0x00000000002E4948 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002E4950 string=0x00000000002E4954 "i"
 *   insn=0x00000000002E4958 string=0x00000000002E495C "_"
 *   insn=0x00000000002E4964 string=0x00000000002E4968 "j"
 *   insn=0x00000000002E4968 string=0x00000000002E496C "?"
 *   insn=0x00000000002E4974 string=0x00000000002E4978 "("
 *   insn=0x00000000002E497C string=0x00000000002E4980 "a"
 *   insn=0x00000000002E4984 string=0x00000000002E49CC "("
 *   insn=0x00000000002E498C string=0x00000000002E4990 " "
 *   insn=0x00000000002E4994 string=0x00000000002E4998 " "
 *   insn=0x00000000002E49A0 string=0x00000000002E49A4 "@"
 *   insn=0x00000000002E49A0 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002E49A4 string=0x00000000002E49A8 "["
 *   insn=0x00000000002E49C4 string=0x00000000002E49C8 "Q"
 *   insn=0x00000000002E49CC string=0x00000000002E49D0 "h"
 *   insn=0x00000000002E49F4 string=0x00000000002E4A4C "h"
 *   insn=0x00000000002E4A00 string=0x00000000002E4A14 ""
 *   insn=0x00000000002E4A0C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E4A54 string=0x00000000002E4A58 "\t"
 *   insn=0x00000000002E4A5C string=0x00000000002E4A60 ")"
 *   insn=0x00000000002E4A60 string=0x00000000002E4A64 ""
 *   insn=0x00000000002E4A68 string=0x00000000002E4A6C "h"
 *   insn=0x00000000002E4A70 string=0x00000000002E4A84 "h&G)\n"
 *   insn=0x00000000002E4A78 string=0x00000000002E4A7C "uQ"
 *   insn=0x00000000002E4A84 string=0x00000000002E4A88 "\n"
 *   insn=0x00000000002E4A8C string=0x00000000002E4A90 "j:"
 *   insn=0x00000000002E4A90 string=0x00000000002E4A94 "\n"
 *   insn=0x00000000002E4AB4 string=0x00000000002E4AB8 "h"
 *   insn=0x00000000002E4AC8 string=0x00000000002E4ACC "h:@"
 *   insn=0x00000000002E4ACC string=0x00000000002E4AD0 ""
 *   insn=0x00000000002E4AD0 string=0x00000000002E4AD4 "K"
 *   insn=0x00000000002E4AD4 string=0x00000000002E4AD8 "h:"
 *   insn=0x00000000002E4AD4 string=0x00000000002E4ADC "i"
 *   insn=0x00000000002E4ADC string=0x00000000002E4AE0 "?"
 *   insn=0x00000000002E4AE4 string=0x00000000002E4AE8 "*"
 *   insn=0x00000000002E4AE4 string=0x00000000002E4AF4 "?"
 *   insn=0x00000000002E4AE8 string=0x00000000002E4AEC "_"
 *   insn=0x00000000002E4AF8 string=0x00000000002E4AFC "h.@"
 *   insn=0x00000000002E4AFC string=0x00000000002E4B00 "h"
 *   insn=0x00000000002E4B08 string=0x00000000002E4B0C "`"
 *   insn=0x00000000002E4B10 string=0x00000000002E4B20 ""
 *   insn=0x00000000002E4B28 string=0x00000000002E4B2C "!"
 *   insn=0x00000000002E4B50 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget::MergePartialFromCodedStream(
        Caver::Proto::GuideTarget *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v4; // q0
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // x21
  char *v7; // x8
  unsigned __int64 v8; // x1
  unsigned int TagFallback; // w0
  int v10; // w8
  char *v11; // x9
  unsigned int v12; // w8
  int v13; // w9
  _BYTE *v14; // x8
  __int64 *v15; // x1
  _QWORD *v16; // x0
  _BYTE *v17; // x8
  __int64 *v18; // x1
  _QWORD *v19; // x0
  _BYTE *v20; // x8
  __int64 *v21; // x1
  _QWORD *v22; // x0
  _BYTE *v23; // x8
  __int64 *v24; // x1
  _QWORD *v25; // x0
  unsigned __int64 v26; // x8
  _BYTE *v27; // x9
  char *v28; // x9
  unsigned int v29; // w10
  _BYTE *v30; // x9
  int v31; // w11
  int v32; // w8
  int v33; // w23
  __int64 v34; // x8
  __int64 v35; // x22
  __int64 v36; // x8
  char *v37; // x8
  int v38; // w8
  int v39; // w9
  int v40; // w23
  int v41; // w8
  bool v42; // vf
  int v43; // w8
  _BYTE *v44; // x8
  __int64 result; // x0
  __int128 v46; // [xsp+0h] [xbp-70h]
  unsigned int v47; // [xsp+14h] [xbp-5Ch] BYREF
  __int64 v48; // [xsp+18h] [xbp-58h]

  *(_QWORD *)&v4 = &Caver::Proto::GuideTarget_LevelObject::_default_level_name_;
  v6 = (Caver::Proto::GuideTarget *)((char *)this + 56);
  *((_QWORD *)&v4 + 1) = &Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_;
  v48 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v46 = v4;
  while ( 2 )
  {
    v7 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v7 < *((_QWORD *)a2 + 2) && (*v7 & 0x80000000) == 0 )
    {
      v8 = (unsigned __int8)*v7;
      *((_DWORD *)a2 + 8) = v8;
      *((_QWORD *)a2 + 1) = v7 + 1;
      if ( !(_DWORD)v8 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v8 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( TagFallback )
    {
LABEL_7:
      switch ( (unsigned int)v8 >> 3 )
      {
        case 1u:
          v10 = v8 & 7;
          if ( (v8 & 7) != 0 )
            goto LABEL_59;
          v11 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v47) & 1) == 0 )
              return 0;
            v12 = v47;
            if ( v47 > 4 )
              goto LABEL_13;
          }
          else
          {
            v12 = (unsigned __int8)*v11;
            v47 = v12;
            *((_QWORD *)a2 + 1) = v11 + 1;
            if ( v12 > 4 )
            {
LABEL_13:
              v14 = (_BYTE *)*((_QWORD *)a2 + 1);
              if ( (unsigned __int64)v14 < *((_QWORD *)a2 + 2) && *v14 == 18 )
              {
                *((_QWORD *)a2 + 1) = v14 + 1;
                goto LABEL_25;
              }
              continue;
            }
          }
          v13 = *((_DWORD *)this + 28);
          *((_DWORD *)this + 3) = v12;
          *((_DWORD *)this + 28) = v13 | 1;
          goto LABEL_13;
        case 2u:
          v10 = v8 & 7;
          if ( v10 != 2 )
            goto LABEL_59;
LABEL_25:
          v15 = (__int64 *)*((_QWORD *)this + 2);
          *((_DWORD *)this + 28) |= 2u;
          if ( v15 == &Caver::Proto::GuideTarget::_default_name_ )
          {
            v16 = (_QWORD *)operator new(8u);
            *v16 = &byte_6FD2F8;
            *((_QWORD *)this + 2) = v16;
          }
          if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
            return 0;
          v17 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v17 >= *((_QWORD *)a2 + 2) || *v17 != 26 )
            continue;
          *((_QWORD *)a2 + 1) = v17 + 1;
LABEL_31:
          v18 = (__int64 *)*((_QWORD *)this + 3);
          *((_DWORD *)this + 28) |= 4u;
          if ( v18 == &Caver::Proto::GuideTarget::_default_level_name_ )
          {
            v19 = (_QWORD *)operator new(8u);
            *v19 = &byte_6FD2F8;
            *((_QWORD *)this + 3) = v19;
          }
          if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
            return 0;
          v20 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 != 34 )
            continue;
          *((_QWORD *)a2 + 1) = v20 + 1;
LABEL_37:
          v21 = (__int64 *)*((_QWORD *)this + 4);
          *((_DWORD *)this + 28) |= 8u;
          if ( v21 == &Caver::Proto::GuideTarget::_default_object_identifier_ )
          {
            v22 = (_QWORD *)operator new(8u);
            *v22 = &byte_6FD2F8;
            *((_QWORD *)this + 4) = v22;
          }
          if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
            return 0;
          v23 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 != 42 )
            continue;
          *((_QWORD *)a2 + 1) = v23 + 1;
LABEL_43:
          v24 = (__int64 *)*((_QWORD *)this + 5);
          *((_DWORD *)this + 28) |= 0x10u;
          if ( v24 == &Caver::Proto::GuideTarget::_default_carry_object_identifier_ )
          {
            v25 = (_QWORD *)operator new(8u);
            *v25 = &byte_6FD2F8;
            *((_QWORD *)this + 5) = v25;
          }
          if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
            return 0;
          v27 = (_BYTE *)*((_QWORD *)a2 + 1);
          v26 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v27 >= v26 || *v27 != 48 )
            continue;
          v28 = v27 + 1;
          *((_QWORD *)a2 + 1) = v28;
          if ( (unsigned __int64)v28 >= v26 )
            goto LABEL_53;
LABEL_49:
          if ( *v28 < 0 )
          {
LABEL_53:
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v47) & 1) == 0 )
              return 0;
            v29 = v47;
            v30 = (_BYTE *)*((_QWORD *)a2 + 1);
            v26 = *((_QWORD *)a2 + 2);
          }
          else
          {
            v29 = (unsigned __int8)*v28;
            v30 = v28 + 1;
            v47 = v29;
            *((_QWORD *)a2 + 1) = v30;
          }
          v31 = *((_DWORD *)this + 28);
          *((_BYTE *)this + 48) = v29 != 0;
          *((_DWORD *)this + 28) = v31 | 0x20;
          if ( (unsigned __int64)v30 < v26 && *v30 == 58 )
          {
            do
            {
              *((_QWORD *)a2 + 1) = v30 + 1;
LABEL_66:
              v33 = *((_DWORD *)this + 16);
              v32 = *((_DWORD *)this + 17);
              if ( v33 >= v32 )
              {
                if ( v32 == *((_DWORD *)this + 18) )
                {
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v6, v32 + 1);
                  v33 = *((_DWORD *)this + 16);
                  v32 = *((_DWORD *)this + 17);
                }
                *((_DWORD *)this + 17) = v32 + 1;
                v35 = operator new(0x28u);
                *(_QWORD *)v35 = off_6C69D0;
                *(_DWORD *)(v35 + 8) = 0;
                *(_OWORD *)(v35 + 16) = v46;
                *(_DWORD *)(v35 + 32) = 0;
                v36 = *((_QWORD *)this + 7);
                *((_DWORD *)this + 16) = v33 + 1;
                *(_QWORD *)(v36 + 8LL * v33) = v35;
              }
              else
              {
                v34 = *((_QWORD *)this + 7);
                *((_DWORD *)this + 16) = v33 + 1;
                v35 = *(_QWORD *)(v34 + 8LL * v33);
              }
              v37 = (char *)*((_QWORD *)a2 + 1);
              if ( (unsigned __int64)v37 >= *((_QWORD *)a2 + 2) || *v37 < 0 )
              {
                if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v47) & 1) == 0 )
                  return 0;
              }
              else
              {
                v47 = (unsigned __int8)*v37;
                *((_QWORD *)a2 + 1) = v37 + 1;
              }
              v38 = *((_DWORD *)a2 + 14);
              v39 = *((_DWORD *)a2 + 15);
              *((_DWORD *)a2 + 14) = v38 + 1;
              if ( v38 >= v39 )
                return 0;
              v40 = google::protobuf::io::CodedInputStream::PushLimit(a2, v47);
              if ( (Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(
                      (Caver::Proto::GuideTarget_LevelObject *)v35,
                      a2)
                  & 1) == 0
                || !*((_BYTE *)a2 + 36) )
              {
                return 0;
              }
              google::protobuf::io::CodedInputStream::PopLimit(a2, v40);
              v41 = *((_DWORD *)a2 + 14);
              v42 = __OFSUB__(v41, 1);
              v43 = v41 - 1;
              if ( v43 < 0 == v42 )
                *((_DWORD *)a2 + 14) = v43;
              v30 = (_BYTE *)*((_QWORD *)a2 + 1);
              v44 = (_BYTE *)*((_QWORD *)a2 + 2);
            }
            while ( v30 < v44 && *v30 == 58 );
            if ( v30 == v44 && *((_DWORD *)a2 + 11) )
            {
              result = 1;
              *((_DWORD *)a2 + 8) = 0;
              *((_BYTE *)a2 + 36) = 1;
              return result;
            }
          }
          continue;
        case 3u:
          v10 = v8 & 7;
          if ( v10 != 2 )
            goto LABEL_59;
          goto LABEL_31;
        case 4u:
          v10 = v8 & 7;
          if ( v10 != 2 )
            goto LABEL_59;
          goto LABEL_37;
        case 5u:
          v10 = v8 & 7;
          if ( v10 != 2 )
            goto LABEL_59;
          goto LABEL_43;
        case 6u:
          v10 = v8 & 7;
          if ( (v8 & 7) != 0 )
            goto LABEL_59;
          v28 = (char *)*((_QWORD *)a2 + 1);
          v26 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v28 >= v26 )
            goto LABEL_53;
          goto LABEL_49;
        case 7u:
          v10 = v8 & 7;
          if ( v10 == 2 )
            goto LABEL_66;
LABEL_59:
          if ( v10 == 4 )
            return 1;
LABEL_60:
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v8,
                  a3)
              & 1) == 0 )
            return 0;
          continue;
        default:
          if ( (v8 & 7) == 4 )
            return 1;
          goto LABEL_60;
      }
    }
    return 1;
  }
}

