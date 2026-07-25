/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FB618
 * Mangled: _ZN5Caver5Proto9Component27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Component::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002017E0  Caver::Proto::Component::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000001FFE20  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::MessageLite const*)
 *
 * Referenced strings: 90
 *   insn=0x00000000002FB634 string=0x00000000002FB638 "V"
 *   insn=0x00000000002FB638 string=0x00000000002FB63C "W"
 *   insn=0x00000000002FB644 string=0x00000000002FB648 "Y"
 *   insn=0x00000000002FB648 string=0x00000000002FB64C "Z"
 *   insn=0x00000000002FB64C string=0x00000000002FB650 "9"
 *   insn=0x00000000002FB650 string=0x00000000002FB654 "Z"
 *   insn=0x00000000002FB658 string=0x00000000002FB65C "\"
 *   insn=0x00000000002FB668 string=0x000000000058B4A0 "8"
 *   insn=0x00000000002FB674 string=0x00000000002FB678 "[c"
 *   insn=0x00000000002FB678 string=0x00000000002FB67C "h"
 *   insn=0x00000000002FB680 string=0x00000000002FB684 """
 *   insn=0x00000000002FB684 string=0x00000000002FB688 "\t"
 *   insn=0x00000000002FB68C string=0x00000000002FB690 "!"
 *   insn=0x00000000002FB690 string=0x00000000002FB694 ""
 *   insn=0x00000000002FB694 string=0x00000000002FB698 "a""
 *   insn=0x00000000002FB698 string=0x00000000002FB69C "h"
 *   insn=0x00000000002FB6A0 string=0x00000000002FB6BC "(|"
 *   insn=0x00000000002FB6AC string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002FB6B0 string=0x00000000002FB6B4 "a""
 *   insn=0x00000000002FB6BC string=0x00000000002FB6C0 ""
 *   insn=0x00000000002FB6C8 string=0x00000000002FB6CC "{"
 *   insn=0x00000000002FB6C8 string=0x00000000002FB898 "("
 *   insn=0x00000000002FB6CC string=0x00000000002FB6D0 ""
 *   insn=0x00000000002FB6D4 string=0x00000000002FB6D8 "("
 *   insn=0x00000000002FB6D4 string=0x00000000002FB760 "("
 *   insn=0x00000000002FB6D4 string=0x00000000002FB774 "("
 *   insn=0x00000000002FB6D4 string=0x00000000002FB7A4 "("
 *   insn=0x00000000002FB6E8 string=0x00000000002FB6EC ""
 *   insn=0x00000000002FB6EC string=0x00000000002FB6F0 "?"
 *   insn=0x00000000002FB700 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FB704 string=0x00000000002FB708 ";"
 *   insn=0x00000000002FB710 string=0x00000000002FB714 "/"
 *   insn=0x00000000002FB714 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002FB718 string=0x00000000002FB71C "i"
 *   insn=0x00000000002FB71C string=0x00000000002FB720 "?"
 *   insn=0x00000000002FB724 string=0x00000000002FB728 "*"
 *   insn=0x00000000002FB728 string=0x00000000002FB72C "_A"
 *   insn=0x00000000002FB72C string=0x00000000002FB730 "a"
 *   insn=0x00000000002FB730 string=0x00000000002FB734 ")"
 *   insn=0x00000000002FB734 string=0x00000000002FB738 "i"
 *   insn=0x00000000002FB738 string=0x00000000002FB73C "?"
 *   insn=0x00000000002FB740 string=0x00000000002FB744 "*"
 *   insn=0x00000000002FB748 string=0x00000000002FB74C "J"
 *   insn=0x00000000002FB74C string=0x00000000002FB750 ")"
 *   insn=0x00000000002FB754 string=0x00000000002FB758 "i"
 *   insn=0x00000000002FB76C string=0x00000000002FB770 "#"
 *   insn=0x00000000002FB774 string=0x00000000002FB778 "!\t"
 *   insn=0x00000000002FB778 string=0x00000000002FB77C "i"
 *   insn=0x00000000002FB77C string=0x00000000002FB780 "?"
 *   insn=0x00000000002FB784 string=0x00000000002FB788 "*"
 *   insn=0x00000000002FB78C string=0x00000000002FB790 "J"
 *   insn=0x00000000002FB790 string=0x00000000002FB794 ")"
 *   insn=0x00000000002FB798 string=0x00000000002FB79C "i"
 *   insn=0x00000000002FB79C string=0x00000000002FB7A0 "5"
 *   insn=0x00000000002FB7A8 string=0x00000000002FB7AC "i"
 *   insn=0x00000000002FB7AC string=0x00000000002FB7B0 "?"
 *   insn=0x00000000002FB7BC string=0x00000000002FB7C0 "$"
 *   insn=0x00000000002FB7C0 string=0x00000000002FB7C4 "`"
 *   insn=0x00000000002FB7C0 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002FB7C8 string=0x00000000002FB7CC "i"
 *   insn=0x00000000002FB7D4 string=0x00000000002FB7D8 "?"
 *   insn=0x00000000002FB7D8 string=0x00000000002FB7DC "j"
 *   insn=0x00000000002FB7E4 string=0x00000000002FB7E8 "("
 *   insn=0x00000000002FB7EC string=0x00000000002FB7F0 "a"
 *   insn=0x00000000002FB7F0 string=0x00000000002FB7F4 "("
 *   insn=0x00000000002FB7F4 string=0x00000000002FB7F8 "h"
 *   insn=0x00000000002FB7FC string=0x00000000002FB800 "H"
 *   insn=0x00000000002FB804 string=0x00000000002FB808 "?"
 *   insn=0x00000000002FB810 string=0x00000000002FB814 "s"
 *   insn=0x00000000002FB818 string=0x00000000002FB81C "Hc"
 *   insn=0x00000000002FB81C string=0x00000000002FB820 "("
 *   insn=0x00000000002FB830 string=0x00000000002FB834 "i"
 *   insn=0x00000000002FB834 string=0x00000000002FB838 "?"
 *   insn=0x00000000002FB83C string=0x00000000002FB840 "*"
 *   insn=0x00000000002FB840 string=0x00000000002FB844 "_"
 *   insn=0x00000000002FB848 string=0x00000000002FB84C ")"
 *   insn=0x00000000002FB84C string=0x00000000002FB850 "i"
 *   insn=0x00000000002FB850 string=0x00000000002FB854 "?"
 *   insn=0x00000000002FB864 string=0x00000000002FB868 "@"
 *   insn=0x00000000002FB86C string=0x00000000002FB870 "i"
 *   insn=0x00000000002FB878 string=0x00000000002FB87C "?"
 *   insn=0x00000000002FB87C string=0x00000000002FB880 "j"
 *   insn=0x00000000002FB888 string=0x00000000002FB88C "h.@"
 *   insn=0x00000000002FB88C string=0x00000000002FB890 "h"
 *   insn=0x00000000002FB8A0 string=0x00000000002FB8A4 "?"
 *   insn=0x00000000002FB8B4 string=0x00000000002FB8B8 "Z"
 *   insn=0x00000000002FB8C8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002FB8E8 string=0x00000000002FB91C "m"
 *   insn=0x00000000002FB910 string=0x00000000002FB914 "`"
 *   insn=0x00000000002FB91C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Component::MergePartialFromCodedStream(
        Caver::Proto::Component *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::ExtensionSet *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  int v9; // w8
  __int64 *v10; // x1
  _QWORD *v11; // x0
  unsigned __int64 v12; // x8
  _BYTE *v13; // x9
  char *v14; // x9
  unsigned int v15; // w10
  _BYTE *v16; // x9
  int v17; // w10
  unsigned __int64 v18; // x8
  char *v19; // x9
  unsigned int v20; // w10
  unsigned __int8 *v21; // x9
  int v22; // w11
  __int64 *v23; // x1
  _QWORD *v24; // x0
  _BYTE *v25; // x9
  int v26; // w11
  char v27; // w0
  __int64 result; // x0
  unsigned int v29; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v30; // [xsp+8h] [xbp-58h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (Caver::Proto::Component *)((char *)this + 8);
  while ( 1 )
  {
    v6 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v6 < *((_QWORD *)a2 + 2) && (*v6 & 0x80000000) == 0 )
    {
      v7 = (unsigned __int8)*v6;
      *((_DWORD *)a2 + 8) = v7;
      *((_QWORD *)a2 + 1) = v6 + 1;
      if ( !(_DWORD)v7 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v7 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_42;
        v10 = (__int64 *)*((_QWORD *)this + 8);
        *((_DWORD *)this + 22) |= 1u;
        if ( v10 == &Caver::Proto::Component::_default_class_name_ )
        {
          v11 = (_QWORD *)operator new(8u);
          *v11 = &byte_6FD2F8;
          *((_QWORD *)this + 8) = v11;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v13 = (_BYTE *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 >= v12 || *v13 != 16 )
          continue;
        v14 = v13 + 1;
        *((_QWORD *)a2 + 1) = v14;
        if ( (unsigned __int64)v14 >= v12 )
          goto LABEL_25;
        goto LABEL_15;
      case 2u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_42;
        v14 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v14 >= v12 )
          goto LABEL_25;
LABEL_15:
        if ( *v14 < 0 )
        {
LABEL_25:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v29) & 1) == 0 )
            return 0;
          v15 = v29;
          v16 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v15 = (unsigned __int8)*v14;
          v16 = v14 + 1;
          v29 = v15;
          *((_QWORD *)a2 + 1) = v16;
        }
        v22 = *((_DWORD *)this + 22);
        *((_DWORD *)this + 18) = v15;
        v17 = v22 | 2;
        *((_DWORD *)this + 22) = v22 | 2;
        if ( (unsigned __int64)v16 >= v12 || *v16 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v16 + 1;
LABEL_30:
        v23 = (__int64 *)*((_QWORD *)this + 10);
        *((_DWORD *)this + 22) = v17 | 8;
        if ( v23 == &Caver::Proto::Component::_default_label_ )
        {
          v24 = (_QWORD *)operator new(8u);
          *v24 = &byte_6FD2F8;
          *((_QWORD *)this + 10) = v24;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v25 = (_BYTE *)*((_QWORD *)a2 + 1);
        v18 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v25 >= v18 || *v25 != 32 )
          continue;
        v19 = v25 + 1;
        *((_QWORD *)a2 + 1) = v19;
        if ( (unsigned __int64)v19 >= v18 )
          goto LABEL_36;
LABEL_21:
        if ( *v19 < 0 )
        {
LABEL_36:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v29) & 1) == 0 )
            return 0;
          v20 = v29;
          v21 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v18 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v20 = (unsigned __int8)*v19;
          v21 = (unsigned __int8 *)(v19 + 1);
          v29 = v20;
          *((_QWORD *)a2 + 1) = v21;
        }
        v26 = *((_DWORD *)this + 22);
        *((_DWORD *)this + 19) = v20;
        *((_DWORD *)this + 22) = v26 | 4;
        if ( v21 != (unsigned __int8 *)v18 || !*((_DWORD *)a2 + 11) )
          continue;
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      case 3u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_42;
        v17 = *((_DWORD *)this + 22);
        goto LABEL_30;
      case 4u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_42;
        v19 = (char *)*((_QWORD *)a2 + 1);
        v18 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 < v18 )
          goto LABEL_21;
        goto LABEL_36;
      default:
        v9 = v7 & 7;
LABEL_42:
        if ( v9 == 4 )
          return 1;
        if ( (unsigned int)v7 < 0x320 )
        {
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v7,
                  a3)
              & 1) == 0 )
            return 0;
        }
        else
        {
          google::protobuf::internal::ExtensionSet::ParseField(
            v5,
            v7,
            a2,
            (const google::protobuf::MessageLite *)Caver::Proto::Component::default_instance_);
          if ( (v27 & 1) == 0 )
            return 0;
        }
        break;
    }
  }
}

