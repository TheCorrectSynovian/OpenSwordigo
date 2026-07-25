/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003165BC
 * Mangled: _ZN5Caver5Proto23DoorControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::DoorControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 117
 *   insn=0x00000000003165CC string=0x00000000003165D0 "U"
 *   insn=0x00000000003165D8 string=0x000000000058B6EC "\"
 *   insn=0x00000000003165E8 string=0x00000000003165EC "h"
 *   insn=0x00000000003165F0 string=0x00000000003165F4 """
 *   insn=0x00000000003165F4 string=0x00000000003165F8 "\t"
 *   insn=0x00000000003165FC string=0x0000000000316600 "!"
 *   insn=0x0000000000316600 string=0x0000000000316604 ""
 *   insn=0x0000000000316604 string=0x0000000000316608 "a""
 *   insn=0x0000000000316608 string=0x000000000031660C "h"
 *   insn=0x0000000000316610 string=0x000000000031662C "(|"
 *   insn=0x0000000000316618 string=0x000000000031661C "\t"
 *   insn=0x000000000031661C string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000316620 string=0x0000000000316624 "a""
 *   insn=0x000000000031662C string=0x0000000000316630 ""
 *   insn=0x0000000000316634 string=0x0000000000316638 ""
 *   insn=0x0000000000316638 string=0x0000000000316678 "("
 *   insn=0x000000000031663C string=0x0000000000316640 ""
 *   insn=0x0000000000316644 string=0x0000000000316648 "("
 *   insn=0x0000000000316644 string=0x0000000000316688 "("
 *   insn=0x0000000000316644 string=0x00000000003166B8 "("
 *   insn=0x0000000000316644 string=0x00000000003166E8 "("
 *   insn=0x0000000000316644 string=0x0000000000316718 "("
 *   insn=0x000000000031664C string=0x0000000000316650 "i"
 *   insn=0x0000000000316650 string=0x0000000000316654 "?"
 *   insn=0x0000000000316654 string=0x0000000000316658 "B"
 *   insn=0x0000000000316658 string=0x000000000031665C "*"
 *   insn=0x000000000031665C string=0x0000000000316660 "\n"
 *   insn=0x0000000000316660 string=0x0000000000316664 "J"
 *   insn=0x0000000000316664 string=0x0000000000316668 ")"
 *   insn=0x000000000031666C string=0x0000000000316670 "i"
 *   insn=0x0000000000316670 string=0x0000000000316674 "A"
 *   insn=0x000000000031667C string=0x0000000000316680 "A"
 *   insn=0x000000000031668C string=0x0000000000316690 "i"
 *   insn=0x0000000000316690 string=0x0000000000316694 "?"
 *   insn=0x0000000000316698 string=0x000000000031669C "*"
 *   insn=0x00000000003166A0 string=0x00000000003166A4 "J"
 *   insn=0x00000000003166A4 string=0x00000000003166A8 ")"
 *   insn=0x00000000003166AC string=0x00000000003166B0 "i"
 *   insn=0x00000000003166B0 string=0x00000000003166B4 "W"
 *   insn=0x00000000003166B8 string=0x00000000003166BC "!"
 *   insn=0x00000000003166BC string=0x00000000003166C0 "i"
 *   insn=0x00000000003166C0 string=0x00000000003166C4 "?"
 *   insn=0x00000000003166C4 string=0x00000000003166C8 """
 *   insn=0x00000000003166C8 string=0x00000000003166CC "*"
 *   insn=0x00000000003166D0 string=0x00000000003166D4 "J"
 *   insn=0x00000000003166D4 string=0x00000000003166D8 ")"
 *   insn=0x00000000003166DC string=0x00000000003166E0 "i"
 *   insn=0x00000000003166E0 string=0x00000000003166E4 "8"
 *   insn=0x00000000003166EC string=0x00000000003166F0 "i"
 *   insn=0x00000000003166F0 string=0x00000000003166F4 "?"
 *   insn=0x00000000003166F8 string=0x00000000003166FC "*"
 *   insn=0x00000000003166FC string=0x0000000000316700 "j\n"
 *   insn=0x0000000000316700 string=0x0000000000316704 "J"
 *   insn=0x0000000000316704 string=0x0000000000316708 ")"
 *   insn=0x000000000031670C string=0x0000000000316710 "i"
 *   insn=0x0000000000316710 string=0x0000000000316714 "T"
 *   insn=0x000000000031671C string=0x0000000000316738 "i"
 *   insn=0x0000000000316728 string=0x000000000031672C "i"
 *   insn=0x000000000031672C string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000316730 string=0x0000000000316734 "m"
 *   insn=0x0000000000316738 string=0x000000000031673C "?"
 *   insn=0x0000000000316740 string=0x0000000000316744 "*"
 *   insn=0x0000000000316748 string=0x000000000031674C "J"
 *   insn=0x000000000031674C string=0x0000000000316750 ")"
 *   insn=0x0000000000316754 string=0x0000000000316758 "i"
 *   insn=0x0000000000316758 string=0x000000000031675C "U"
 *   insn=0x0000000000316764 string=0x0000000000316768 ":"
 *   insn=0x0000000000316768 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000316770 string=0x0000000000316774 "i"
 *   insn=0x000000000031677C string=0x0000000000316780 "?"
 *   insn=0x0000000000316780 string=0x0000000000316784 "j"
 *   insn=0x000000000031678C string=0x0000000000316790 "*"
 *   insn=0x0000000000316790 string=0x0000000000316794 "_A"
 *   insn=0x0000000000316798 string=0x000000000031679C ")"
 *   insn=0x000000000031679C string=0x00000000003167A0 "i"
 *   insn=0x00000000003167A0 string=0x00000000003167A4 "?"
 *   insn=0x00000000003167A4 string=0x00000000003167A8 "#"
 *   insn=0x00000000003167B0 string=0x00000000003167B4 "'"
 *   insn=0x00000000003167BC string=0x00000000003167C0 "i"
 *   insn=0x00000000003167C8 string=0x00000000003167CC "?"
 *   insn=0x00000000003167CC string=0x00000000003167D0 "j"
 *   insn=0x00000000003167D8 string=0x00000000003167DC "*"
 *   insn=0x00000000003167DC string=0x00000000003167E0 "_"
 *   insn=0x00000000003167E0 string=0x00000000003167E4 "A"
 *   insn=0x00000000003167E4 string=0x00000000003167E8 ")"
 *   insn=0x00000000003167E8 string=0x00000000003167EC "i"
 *   insn=0x00000000003167EC string=0x00000000003167F0 "?"
 *   insn=0x00000000003167F0 string=0x00000000003167F4 "C"
 *   insn=0x0000000000316800 string=0x0000000000316804 " "
 *   insn=0x0000000000316808 string=0x000000000031680C "i"
 *   insn=0x0000000000316810 string=0x0000000000316814 "_"
 *   insn=0x000000000031681C string=0x0000000000316820 "j"
 *   insn=0x0000000000316820 string=0x0000000000316824 "?"
 *   insn=0x000000000031682C string=0x0000000000316830 "*"
 *   insn=0x0000000000316830 string=0x0000000000316834 "_"
 *   insn=0x0000000000316838 string=0x000000000031683C ")"
 *   insn=0x000000000031683C string=0x0000000000316840 "i"
 *   insn=0x0000000000316840 string=0x0000000000316844 "?"
 *   insn=0x000000000031685C string=0x0000000000316860 "i"
 *   insn=0x0000000000316868 string=0x000000000031686C "?"
 *   insn=0x000000000031686C string=0x0000000000316870 "j"
 *   insn=0x0000000000316878 string=0x000000000031687C "*"
 *   insn=0x000000000031687C string=0x0000000000316880 "_"
 *   insn=0x0000000000316880 string=0x0000000000316884 "A"
 *   insn=0x0000000000316884 string=0x0000000000316888 ")"
 *   insn=0x0000000000316888 string=0x000000000031688C "i"
 *   insn=0x000000000031688C string=0x0000000000316890 "?"
 *   insn=0x00000000003168A0 string=0x00000000003168A4 " "
 *   insn=0x00000000003168A8 string=0x00000000003168AC "i"
 *   insn=0x00000000003168B4 string=0x00000000003168B8 "?"
 *   insn=0x00000000003168B8 string=0x00000000003168BC "j"
 *   insn=0x00000000003168C0 string=0x00000000003168C4 "A"
 *   insn=0x00000000003168C4 string=0x00000000003168C8 "h.@"
 *   insn=0x00000000003168C8 string=0x00000000003168CC ""
 *   insn=0x00000000003168D4 string=0x00000000003168D8 "`"
 *   insn=0x00000000003168F8 string=0x0000000000316910 "p~"
 *   insn=0x0000000000316910 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DoorControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::DoorControllerComponent *this,
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
  char *v19; // x9
  unsigned int v20; // w10
  _BYTE *v21; // x9
  char *v22; // x9
  unsigned int v23; // w10
  unsigned __int8 *v24; // x9
  int v25; // w11
  int v26; // w11
  int v27; // w11
  int v28; // w11
  int v29; // w11
  __int64 result; // x0
  unsigned int v31; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v32; // [xsp+8h] [xbp-28h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_27;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v11 = v31;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v31 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v25 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 8) = v25 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v16 = v12 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 < v9 )
          goto LABEL_20;
        goto LABEL_38;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 >= v9 )
          goto LABEL_38;
LABEL_20:
        if ( *v16 < 0 )
        {
LABEL_38:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v17 = v31;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v31 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v26 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 4) = v17;
        *((_DWORD *)this + 8) = v26 | 2;
        if ( (unsigned __int64)v18 >= v9 || *v18 != 32 )
          continue;
        v13 = v18 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_43;
LABEL_16:
        if ( *v13 < 0 )
        {
LABEL_43:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v14 = v31;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v31 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v27 = *((_DWORD *)this + 8);
        *((_BYTE *)this + 28) = v14 != 0;
        *((_DWORD *)this + 8) = v27 | 0x10;
        if ( (unsigned __int64)v15 >= v9 || *v15 != 40 )
          continue;
        v19 = v15 + 1;
        *((_QWORD *)a2 + 1) = v19;
        if ( (unsigned __int64)v19 >= v9 )
          goto LABEL_48;
LABEL_24:
        if ( *v19 < 0 )
        {
LABEL_48:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v20 = v31;
          v21 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v20 = (unsigned __int8)*v19;
          v21 = v19 + 1;
          v31 = v20;
          *((_QWORD *)a2 + 1) = v21;
        }
        v28 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 5) = v20;
        *((_DWORD *)this + 8) = v28 | 4;
        if ( (unsigned __int64)v21 >= v9 || *v21 != 48 )
          continue;
        v22 = v21 + 1;
        *((_QWORD *)a2 + 1) = v22;
        if ( (unsigned __int64)v22 >= v9 )
          goto LABEL_53;
        goto LABEL_31;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_16;
        goto LABEL_43;
      case 5u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v19 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 < v9 )
          goto LABEL_24;
        goto LABEL_48;
      case 6u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
        {
LABEL_27:
          if ( v8 == 4 )
            return 1;
LABEL_28:
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v6,
                  a3)
              & 1) == 0 )
            return 0;
          continue;
        }
        v22 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v22 < v9 )
        {
LABEL_31:
          if ( (*v22 & 0x80000000) == 0 )
          {
            v23 = (unsigned __int8)*v22;
            v24 = (unsigned __int8 *)(v22 + 1);
            v31 = v23;
            *((_QWORD *)a2 + 1) = v24;
            goto LABEL_55;
          }
        }
LABEL_53:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) != 0 )
        {
          v23 = v31;
          v24 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
LABEL_55:
          v29 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 6) = v23;
          *((_DWORD *)this + 8) = v29 | 8;
          if ( v24 == (unsigned __int8 *)v9 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      default:
        if ( (v6 & 7) == 4 )
          return 1;
        goto LABEL_28;
    }
  }
}

