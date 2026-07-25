/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032E58C
 * Mangled: _ZN5Caver5Proto24CollectableItemComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::CollectableItemComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000032E9F8  Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 147
 *   insn=0x000000000032E5A8 string=0x000000000032E5AC "W"
 *   insn=0x000000000032E5B8 string=0x000000000032E5BC "9"
 *   insn=0x000000000032E5BC string=0x000000000032E5C0 "Z"
 *   insn=0x000000000032E5D0 string=0x000000000058B8F4 "$-"
 *   insn=0x000000000032E5DC string=0x000000000032E5E0 "[c"
 *   insn=0x000000000032E5E4 string=0x000000000032E96C "h"
 *   insn=0x000000000032E5EC string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032E5F0 string=0x000000000032E5F4 "a""
 *   insn=0x000000000032E5F8 string=0x000000000032E5FC "(|"
 *   insn=0x000000000032E5FC string=0x000000000032E600 ""
 *   insn=0x000000000032E604 string=0x000000000032E608 ""
 *   insn=0x000000000032E608 string=0x000000000032E60C "{"
 *   insn=0x000000000032E608 string=0x000000000032E7A8 "("
 *   insn=0x000000000032E60C string=0x000000000032E610 ""
 *   insn=0x000000000032E614 string=0x000000000032E618 "("
 *   insn=0x000000000032E614 string=0x000000000032E6A0 "("
 *   insn=0x000000000032E614 string=0x000000000032E6B0 "("
 *   insn=0x000000000032E614 string=0x000000000032E6C4 "("
 *   insn=0x000000000032E614 string=0x000000000032E6D4 "("
 *   insn=0x000000000032E614 string=0x000000000032E778 "("
 *   insn=0x000000000032E61C string=0x000000000032E620 "i"
 *   insn=0x000000000032E620 string=0x000000000032E624 "?"
 *   insn=0x000000000032E624 string=0x000000000032E628 """
 *   insn=0x000000000032E628 string=0x000000000032E62C "("
 *   insn=0x000000000032E630 string=0x000000000032E634 ""
 *   insn=0x000000000032E634 string=0x000000000032E638 ")"
 *   insn=0x000000000032E63C string=0x000000000032E640 "i"
 *   insn=0x000000000032E648 string=0x000000000032E65C "i"
 *   insn=0x000000000032E650 string=0x000000000032E654 ")"
 *   insn=0x000000000032E65C string=0x000000000032E660 "?"
 *   insn=0x000000000032E660 string=0x000000000032E664 "B"
 *   insn=0x000000000032E664 string=0x000000000032E668 "*"
 *   insn=0x000000000032E668 string=0x000000000032E66C "_A"
 *   insn=0x000000000032E670 string=0x000000000032E674 ")"
 *   insn=0x000000000032E674 string=0x000000000032E678 "i"
 *   insn=0x000000000032E678 string=0x000000000032E67C "?"
 *   insn=0x000000000032E67C string=0x000000000032E680 "B"
 *   insn=0x000000000032E680 string=0x000000000032E684 "*"
 *   insn=0x000000000032E684 string=0x000000000032E688 "\n"
 *   insn=0x000000000032E688 string=0x000000000032E68C "J"
 *   insn=0x000000000032E68C string=0x000000000032E690 ")"
 *   insn=0x000000000032E694 string=0x000000000032E698 "i"
 *   insn=0x000000000032E6A4 string=0x000000000032E6A8 "!"
 *   insn=0x000000000032E6A8 string=0x000000000032E6AC "~"
 *   insn=0x000000000032E6BC string=0x000000000032E6C0 ""
 *   insn=0x000000000032E6CC string=0x000000000032E6D0 "_"
 *   insn=0x000000000032E6D8 string=0x000000000032E6DC "i"
 *   insn=0x000000000032E6DC string=0x000000000032E6E0 "?"
 *   insn=0x000000000032E6EC string=0x000000000032E6F0 "X*"
 *   insn=0x000000000032E6F0 string=0x000000000032E6F4 "@"
 *   insn=0x000000000032E6F0 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032E6F8 string=0x000000000032E6FC "i"
 *   insn=0x000000000032E704 string=0x000000000032E708 "?"
 *   insn=0x000000000032E708 string=0x000000000032E70C "j"
 *   insn=0x000000000032E714 string=0x000000000032E718 "("
 *   insn=0x000000000032E71C string=0x000000000032E720 "a"
 *   insn=0x000000000032E720 string=0x000000000032E724 "("
 *   insn=0x000000000032E724 string=0x000000000032E728 "h"
 *   insn=0x000000000032E72C string=0x000000000032E730 "H"
 *   insn=0x000000000032E738 string=0x000000000032E750 "h"
 *   insn=0x000000000032E740 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032E744 string=0x000000000032E748 "."
 *   insn=0x000000000032E748 string=0x00000000001F5000 "P'"
 *   insn=0x000000000032E754 string=0x000000000032E758 "b"
 *   insn=0x000000000032E758 string=0x000000000032E75C "\t"
 *   insn=0x000000000032E75C string=0x000000000032E760 ")"
 *   insn=0x000000000032E760 string=0x000000000032E764 ")"
 *   insn=0x000000000032E764 string=0x000000000032E768 ""
 *   insn=0x000000000032E76C string=0x000000000032E770 "h"
 *   insn=0x000000000032E774 string=0x000000000032E7D4 "h&G)\n"
 *   insn=0x000000000032E77C string=0x000000000032E780 "j"
 *   insn=0x000000000032E780 string=0x000000000032E784 "_"
 *   insn=0x000000000032E788 string=0x000000000032E78C "I"
 *   insn=0x000000000032E790 string=0x000000000032E794 ")"
 *   insn=0x000000000032E794 string=0x000000000032E798 "J"
 *   insn=0x000000000032E79C string=0x000000000032E7A0 "j"
 *   insn=0x000000000032E7A0 string=0x000000000032E7A4 "_"
 *   insn=0x000000000032E7AC string=0x000000000032E7B0 " "
 *   insn=0x000000000032E7B4 string=0x000000000032E7B8 "F<"
 *   insn=0x000000000032E7B8 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000032E7BC string=0x000000000032E7C0 "w"
 *   insn=0x000000000032E7C8 string=0x000000000032E7CC "!*"
 *   insn=0x000000000032E7CC string=0x000000000032E7D0 "`"
 *   insn=0x000000000032E7D4 string=0x000000000032E7D8 "\n"
 *   insn=0x000000000032E7DC string=0x000000000032E7E0 "j:"
 *   insn=0x000000000032E7EC string=0x000000000032E7F0 "dP"
 *   insn=0x000000000032E7FC string=0x000000000032E800 "H)"
 *   insn=0x000000000032E800 string=0x00000000001F8D20 "0'"
 *   insn=0x000000000032E804 string=0x000000000032E808 "h"
 *   insn=0x000000000032E814 string=0x000000000032E818 "~Q"
 *   insn=0x000000000032E818 string=0x000000000032E81C "h:@"
 *   insn=0x000000000032E81C string=0x000000000032E820 ""
 *   insn=0x000000000032E820 string=0x000000000032E824 "K"
 *   insn=0x000000000032E824 string=0x000000000032E828 "h:"
 *   insn=0x000000000032E824 string=0x000000000032E82C "h"
 *   insn=0x000000000032E834 string=0x000000000032E838 "\t"
 *   insn=0x000000000032E838 string=0x000000000032E83C "?"
 *   insn=0x000000000032E83C string=0x000000000032E840 "a\t"
 *   insn=0x000000000032E840 string=0x000000000032E844 ""
 *   insn=0x000000000032E844 string=0x000000000032E848 "h"
 *   insn=0x000000000032E850 string=0x000000000032E854 ""
 *   insn=0x000000000032E854 string=0x000000000032E858 "?"
 *   insn=0x000000000032E864 string=0x000000000032E868 "^"
 *   insn=0x000000000032E86C string=0x000000000032E870 ";"
 *   insn=0x000000000032E87C string=0x00000000001F97D0 "0'"
 *   insn=0x000000000032E880 string=0x000000000032E884 "h"
 *   insn=0x000000000032E88C string=0x000000000032E890 "\t"
 *   insn=0x000000000032E890 string=0x000000000032E894 "?"
 *   insn=0x000000000032E898 string=0x000000000032E89C ""
 *   insn=0x000000000032E89C string=0x000000000032E8A0 "h"
 *   insn=0x000000000032E8A8 string=0x000000000032E8AC ""
 *   insn=0x000000000032E8AC string=0x000000000032E8B0 "?"
 *   insn=0x000000000032E8BC string=0x000000000032E8C0 "H"
 *   insn=0x000000000032E8C4 string=0x000000000032E8C8 "Hc"
 *   insn=0x000000000032E8C8 string=0x000000000032E8CC "("
 *   insn=0x000000000032E8DC string=0x000000000032E8E0 "i"
 *   insn=0x000000000032E8E0 string=0x000000000032E8E4 "?"
 *   insn=0x000000000032E8E4 string=0x000000000032E8E8 """
 *   insn=0x000000000032E8E8 string=0x000000000032E8EC "*"
 *   insn=0x000000000032E8EC string=0x000000000032E8F0 "_"
 *   insn=0x000000000032E8F4 string=0x000000000032E8F8 "*"
 *   insn=0x000000000032E8F8 string=0x000000000032E8FC "j"
 *   insn=0x000000000032E8FC string=0x000000000032E900 "_"
 *   insn=0x000000000032E900 string=0x000000000032E904 "C"
 *   insn=0x000000000032E910 string=0x000000000032E914 "@"
 *   insn=0x000000000032E918 string=0x000000000032E91C "j"
 *   insn=0x000000000032E920 string=0x000000000032E924 "?"
 *   insn=0x000000000032E92C string=0x000000000032E930 "i"
 *   insn=0x000000000032E930 string=0x000000000032E934 "_"
 *   insn=0x000000000032E93C string=0x000000000032E940 "h.@"
 *   insn=0x000000000032E940 string=0x000000000032E944 "H"
 *   insn=0x000000000032E944 string=0x000000000032E948 """
 *   insn=0x000000000032E954 string=0x000000000032E958 " "
 *   insn=0x000000000032E960 string=0x000000000032E964 "I"
 *   insn=0x000000000032E964 string=0x000000000032E968 "="
 *   insn=0x000000000032E974 string=0x000000000032E978 "\t"
 *   insn=0x000000000032E978 string=0x000000000032E97C "i"
 *   insn=0x000000000032E97C string=0x000000000032E980 "!"
 *   insn=0x000000000032E980 string=0x000000000032E984 ""
 *   insn=0x000000000032E984 string=0x000000000032E988 "a""
 *   insn=0x000000000032E988 string=0x000000000032E98C "h"
 *   insn=0x000000000032E98C string=0x000000000032E990 "a"
 *   insn=0x000000000032E9AC string=0x000000000032E9E0 "<"
 *   insn=0x000000000032E9D4 string=0x000000000032E9D8 "`"
 *   insn=0x000000000032E9E0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032E9E8 string=0x000000000032E9EC "1""
 *   insn=0x000000000032E9EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollectableItemComponent::MergePartialFromCodedStream(
        Caver::Proto::CollectableItemComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned int TagFallback; // w0
  unsigned __int64 v6; // x1
  int v7; // w8
  char *v8; // x9
  unsigned int v9; // w8
  int v10; // w9
  unsigned __int64 v11; // x8
  _BYTE *v12; // x9
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  int v16; // w10
  int v17; // w11
  Caver::Proto::Program *v18; // x21
  char *v19; // x8
  unsigned __int64 v20; // x8
  char *v21; // x10
  unsigned int v22; // w9
  unsigned __int8 *v23; // x10
  int v24; // w8
  int v25; // w9
  int v26; // w22
  int v27; // w8
  bool v28; // vf
  int v29; // w8
  _BYTE *v30; // x8
  __int64 *v31; // x1
  _QWORD *v32; // x0
  _BYTE *v33; // x8
  __int64 *v34; // x1
  _QWORD *v35; // x0
  _BYTE *v36; // x9
  int v37; // w11
  char *v38; // x8
  __int64 result; // x0
  unsigned int v40; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v41; // [xsp+8h] [xbp-58h]

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v38 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v38 >= *((_QWORD *)a2 + 2) || *v38 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v6 = (unsigned __int8)*v38;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v38 + 1;
      if ( !(_DWORD)v6 )
        return 1;
    }
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_37;
        v8 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v8 >= *((_QWORD *)a2 + 2) || *v8 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
          v9 = v40;
          if ( v40 > 5 )
            goto LABEL_9;
        }
        else
        {
          v9 = (unsigned __int8)*v8;
          v40 = v9;
          *((_QWORD *)a2 + 1) = v8 + 1;
          if ( v9 > 5 )
            goto LABEL_9;
        }
        v10 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 3) = v9;
        *((_DWORD *)this + 14) = v10 | 1;
LABEL_9:
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 >= v11 || *v12 != 16 )
          continue;
        v13 = v12 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v11 )
          goto LABEL_22;
        goto LABEL_12;
      case 2u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_37;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 >= v11 )
          goto LABEL_22;
LABEL_12:
        if ( *v13 < 0 )
        {
LABEL_22:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
          v14 = v40;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v40 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v17 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 4) = v14;
        v16 = v17 | 2;
        *((_DWORD *)this + 14) = v17 | 2;
        if ( (unsigned __int64)v15 >= v11 || *v15 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_27:
        v18 = (Caver::Proto::Program *)*((_QWORD *)this + 6);
        *((_DWORD *)this + 14) = v16 | 0x20;
        if ( !v18 )
        {
          v18 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v18);
          *((_QWORD *)this + 6) = v18;
        }
        v19 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v19 >= *((_QWORD *)a2 + 2) || *v19 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
        }
        else
        {
          v40 = (unsigned __int8)*v19;
          *((_QWORD *)a2 + 1) = v19 + 1;
        }
        v24 = *((_DWORD *)a2 + 14);
        v25 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v24 + 1;
        if ( v24 >= v25 )
          return 0;
        v26 = google::protobuf::io::CodedInputStream::PushLimit(a2, v40);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v18, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v26);
        v27 = *((_DWORD *)a2 + 14);
        v28 = __OFSUB__(v27, 1);
        v29 = v27 - 1;
        if ( v29 < 0 == v28 )
          *((_DWORD *)a2 + 14) = v29;
        v30 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v30 >= *((_QWORD *)a2 + 2) || *v30 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v30 + 1;
LABEL_49:
        v31 = (__int64 *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 14) |= 8u;
        if ( v31 == &Caver::Proto::CollectableItemComponent::_default_identifier_ )
        {
          v32 = (_QWORD *)operator new(8u);
          *v32 = &byte_6FD2F8;
          *((_QWORD *)this + 4) = v32;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v33 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v33 >= *((_QWORD *)a2 + 2) || *v33 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v33 + 1;
LABEL_55:
        v34 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 14) |= 4u;
        if ( v34 == &Caver::Proto::CollectableItemComponent::_default_item_name_ )
        {
          v35 = (_QWORD *)operator new(8u);
          *v35 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v35;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v36 = (_BYTE *)*((_QWORD *)a2 + 1);
        v20 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v36 >= v20 || *v36 != 48 )
          continue;
        v21 = v36 + 1;
        *((_QWORD *)a2 + 1) = v36 + 1;
        if ( (unsigned __int64)(v36 + 1) >= v20 )
          goto LABEL_61;
LABEL_34:
        if ( (*v21 & 0x80000000) == 0 )
        {
          v22 = (unsigned __int8)*v21;
          v23 = (unsigned __int8 *)(v21 + 1);
          v40 = v22;
          *((_QWORD *)a2 + 1) = v23;
          goto LABEL_63;
        }
LABEL_61:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) != 0 )
        {
          v22 = v40;
          v23 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v20 = *((_QWORD *)a2 + 2);
LABEL_63:
          v37 = *((_DWORD *)this + 14);
          *((_BYTE *)this + 40) = v22 != 0;
          *((_DWORD *)this + 14) = v37 | 0x10;
          if ( v23 == (unsigned __int8 *)v20 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v7 = v6 & 7;
        if ( v7 != 2 )
          goto LABEL_37;
        v16 = *((_DWORD *)this + 14);
        goto LABEL_27;
      case 4u:
        v7 = v6 & 7;
        if ( v7 == 2 )
          goto LABEL_49;
        goto LABEL_37;
      case 5u:
        v7 = v6 & 7;
        if ( v7 == 2 )
          goto LABEL_55;
        goto LABEL_37;
      case 6u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_37;
        v21 = (char *)*((_QWORD *)a2 + 1);
        v20 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 < v20 )
          goto LABEL_34;
        goto LABEL_61;
      default:
        v7 = v6 & 7;
LABEL_37:
        if ( v7 == 4 )
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

