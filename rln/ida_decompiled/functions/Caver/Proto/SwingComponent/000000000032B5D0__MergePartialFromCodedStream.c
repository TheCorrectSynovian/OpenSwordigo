/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B5D0
 * Mangled: _ZN5Caver5Proto14SwingComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SwingComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 101
 *   insn=0x000000000032B5E0 string=0x000000000032B5E4 "U"
 *   insn=0x000000000032B5FC string=0x000000000032B600 "h"
 *   insn=0x000000000032B604 string=0x000000000032B608 """
 *   insn=0x000000000032B608 string=0x000000000032B60C "\t"
 *   insn=0x000000000032B610 string=0x000000000032B614 "!"
 *   insn=0x000000000032B614 string=0x000000000032B618 ""
 *   insn=0x000000000032B618 string=0x000000000032B61C "a""
 *   insn=0x000000000032B61C string=0x000000000032B620 "h"
 *   insn=0x000000000032B624 string=0x000000000032B640 "(|"
 *   insn=0x000000000032B630 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032B634 string=0x000000000032B638 "a""
 *   insn=0x000000000032B638 string=0x000000000032B63C "a"
 *   insn=0x000000000032B640 string=0x000000000032B644 ""
 *   insn=0x000000000032B648 string=0x000000000032B64C ""
 *   insn=0x000000000032B64C string=0x000000000032B68C "("
 *   insn=0x000000000032B650 string=0x000000000032B654 ""
 *   insn=0x000000000032B658 string=0x000000000032B65C "("
 *   insn=0x000000000032B658 string=0x000000000032B69C "("
 *   insn=0x000000000032B658 string=0x000000000032B6CC "("
 *   insn=0x000000000032B658 string=0x000000000032B6FC "("
 *   insn=0x000000000032B658 string=0x000000000032B70C "("
 *   insn=0x000000000032B660 string=0x000000000032B664 "i"
 *   insn=0x000000000032B664 string=0x000000000032B668 "?"
 *   insn=0x000000000032B668 string=0x000000000032B66C """
 *   insn=0x000000000032B66C string=0x000000000032B670 "*"
 *   insn=0x000000000032B674 string=0x000000000032B678 "J"
 *   insn=0x000000000032B678 string=0x000000000032B67C ")"
 *   insn=0x000000000032B680 string=0x000000000032B684 "i"
 *   insn=0x000000000032B684 string=0x000000000032B688 "0"
 *   insn=0x000000000032B690 string=0x000000000032B694 "a"
 *   insn=0x000000000032B6A0 string=0x000000000032B6A4 "i"
 *   insn=0x000000000032B6A4 string=0x000000000032B6A8 "?"
 *   insn=0x000000000032B6A8 string=0x000000000032B6AC ""\t"
 *   insn=0x000000000032B6AC string=0x000000000032B6B0 "*"
 *   insn=0x000000000032B6B4 string=0x000000000032B6B8 "J"
 *   insn=0x000000000032B6B8 string=0x000000000032B6BC ")"
 *   insn=0x000000000032B6C0 string=0x000000000032B6C4 "i"
 *   insn=0x000000000032B6C4 string=0x000000000032B6C8 "H"
 *   insn=0x000000000032B6CC string=0x000000000032B6D0 "A"
 *   insn=0x000000000032B6D0 string=0x000000000032B6D4 "i"
 *   insn=0x000000000032B6D4 string=0x000000000032B6D8 "?"
 *   insn=0x000000000032B6DC string=0x000000000032B6E0 "*"
 *   insn=0x000000000032B6E4 string=0x000000000032B6E8 "J"
 *   insn=0x000000000032B6E8 string=0x000000000032B6EC ")"
 *   insn=0x000000000032B6F0 string=0x000000000032B6F4 "i"
 *   insn=0x000000000032B6F4 string=0x000000000032B6F8 "'"
 *   insn=0x000000000032B704 string=0x000000000032B708 "E"
 *   insn=0x000000000032B710 string=0x000000000032B714 "`\n"
 *   insn=0x000000000032B718 string=0x000000000032B71C "`"
 *   insn=0x000000000032B720 string=0x000000000032B724 "kH"
 *   insn=0x000000000032B724 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000032B728 string=0x000000000032B72C "a"
 *   insn=0x000000000032B734 string=0x000000000032B738 "F6"
 *   insn=0x000000000032B738 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032B740 string=0x000000000032B744 "i"
 *   insn=0x000000000032B74C string=0x000000000032B750 "?"
 *   insn=0x000000000032B750 string=0x000000000032B754 "j"
 *   insn=0x000000000032B758 string=0x000000000032B75C """
 *   insn=0x000000000032B75C string=0x000000000032B760 "*"
 *   insn=0x000000000032B760 string=0x000000000032B764 "_A"
 *   insn=0x000000000032B768 string=0x000000000032B76C ")"
 *   insn=0x000000000032B76C string=0x000000000032B770 "i"
 *   insn=0x000000000032B770 string=0x000000000032B774 "?"
 *   insn=0x000000000032B774 string=0x000000000032B778 "C"
 *   insn=0x000000000032B780 string=0x000000000032B784 "36"
 *   insn=0x000000000032B784 string=0x000000000032B788 "@\t"
 *   insn=0x000000000032B78C string=0x000000000032B790 "i"
 *   insn=0x000000000032B794 string=0x000000000032B798 "_"
 *   insn=0x000000000032B7A0 string=0x000000000032B7A4 "j"
 *   insn=0x000000000032B7A4 string=0x000000000032B7A8 "?"
 *   insn=0x000000000032B7B0 string=0x000000000032B7B4 "*"
 *   insn=0x000000000032B7B4 string=0x000000000032B7B8 "_a"
 *   insn=0x000000000032B7B8 string=0x000000000032B7BC "!"
 *   insn=0x000000000032B7BC string=0x000000000032B7C0 ")"
 *   insn=0x000000000032B7C0 string=0x000000000032B7C4 "i"
 *   insn=0x000000000032B7C4 string=0x000000000032B7C8 "?"
 *   insn=0x000000000032B7C8 string=0x000000000032B7CC "#"
 *   insn=0x000000000032B7E0 string=0x000000000032B7E4 "i"
 *   insn=0x000000000032B7E8 string=0x000000000032B7EC "_"
 *   insn=0x000000000032B7F4 string=0x000000000032B7F8 "j"
 *   insn=0x000000000032B7F8 string=0x000000000032B7FC "?"
 *   insn=0x000000000032B804 string=0x000000000032B808 "("
 *   insn=0x000000000032B810 string=0x000000000032B814 "("
 *   insn=0x000000000032B814 string=0x000000000032B818 "h"
 *   insn=0x000000000032B824 string=0x000000000032B828 "@"
 *   insn=0x000000000032B824 string=0x00000000001FA750 "0'"
 *   insn=0x000000000032B834 string=0x000000000032B838 "("
 *   insn=0x000000000032B83C string=0x000000000032B840 "h"
 *   insn=0x000000000032B848 string=0x000000000032B84C "\t"
 *   insn=0x000000000032B84C string=0x000000000032B850 "?"
 *   insn=0x000000000032B850 string=0x000000000032B854 "a"
 *   insn=0x000000000032B854 string=0x000000000032B858 ""
 *   insn=0x000000000032B858 string=0x000000000032B85C "h"
 *   insn=0x000000000032B868 string=0x000000000032B86C " "
 *   insn=0x000000000032B878 string=0x000000000032B87C "("
 *   insn=0x000000000032B880 string=0x000000000032B884 "h"
 *   insn=0x000000000032B88C string=0x000000000032B890 "h.@"
 *   insn=0x000000000032B890 string=0x000000000032B894 "h"
 *   insn=0x000000000032B89C string=0x000000000032B8A0 "`"
 *   insn=0x000000000032B8C0 string=0x000000000032B8D8 "~*"
 *   insn=0x000000000032B8D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingComponent::MergePartialFromCodedStream(
        Caver::Proto::SwingComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  unsigned __int64 v9; // x8
  char *v10; // x9
  unsigned int v11; // w10
  _BYTE *v12; // x9
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  int v19; // w11
  int v20; // w11
  int v21; // w11
  int v22; // w9
  _BYTE *v23; // x8
  int v24; // w9
  __int64 result; // x0
  unsigned int v26; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v27; // [xsp+8h] [xbp-28h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 >= *((_QWORD *)a2 + 2) || *v5 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
    }
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v26) & 1) == 0 )
            return 0;
          v11 = v26;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v26 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v19 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 7) = v19 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v16 = v12 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 < v9 )
          goto LABEL_20;
        goto LABEL_33;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 >= v9 )
          goto LABEL_33;
LABEL_20:
        if ( *v16 < 0 )
        {
LABEL_33:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v26) & 1) == 0 )
            return 0;
          v17 = v26;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v26 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v20 = *((_DWORD *)this + 7);
        *((_BYTE *)this + 16) = v17 != 0;
        *((_DWORD *)this + 7) = v20 | 2;
        if ( (unsigned __int64)v18 >= v9 || *v18 != 24 )
          continue;
        v13 = v18 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_38;
LABEL_16:
        if ( *v13 < 0 )
        {
LABEL_38:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v26) & 1) == 0 )
            return 0;
          v14 = v26;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v26 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v21 = *((_DWORD *)this + 7);
        *((_BYTE *)this + 17) = v14 != 0;
        *((_DWORD *)this + 7) = v21 | 4;
        if ( (unsigned __int64)v15 >= v9 || *v15 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_43:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v26) & 1) == 0 )
          return 0;
        v22 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 5) = v26;
        *((_DWORD *)this + 7) = v22 | 8;
        v23 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 != 61 )
          continue;
        *((_QWORD *)a2 + 1) = v23 + 1;
LABEL_47:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v26) & 1) != 0 )
        {
          v24 = *((_DWORD *)this + 7);
          *((_DWORD *)this + 6) = v26;
          *((_DWORD *)this + 7) = v24 | 0x10;
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
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
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_16;
        goto LABEL_38;
      case 6u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_43;
        goto LABEL_25;
      case 7u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_47;
LABEL_25:
        if ( v8 == 4 )
          return 1;
LABEL_26:
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
      default:
        if ( (v6 & 7) == 4 )
          return 1;
        goto LABEL_26;
    }
  }
}

