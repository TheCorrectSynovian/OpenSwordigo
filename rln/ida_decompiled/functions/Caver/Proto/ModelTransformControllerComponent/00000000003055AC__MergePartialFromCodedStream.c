/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003055AC
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ModelTransformControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000305998  Caver::Proto::ModelTransformControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 111
 *   insn=0x00000000003055C0 string=0x00000000003055C4 "W"
 *   insn=0x00000000003055C8 string=0x00000000003055CC "8"
 *   insn=0x00000000003055DC string=0x00000000003055E0 "h"
 *   insn=0x00000000003055E4 string=0x00000000003055E8 """
 *   insn=0x00000000003055E8 string=0x00000000003055EC "\t"
 *   insn=0x00000000003055F0 string=0x00000000003055F4 "!"
 *   insn=0x00000000003055F4 string=0x00000000003055F8 ""
 *   insn=0x00000000003055F8 string=0x00000000003055FC "a""
 *   insn=0x00000000003055FC string=0x0000000000305600 "h"
 *   insn=0x0000000000305604 string=0x0000000000305620 "(|"
 *   insn=0x0000000000305610 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000305614 string=0x0000000000305618 "a""
 *   insn=0x0000000000305620 string=0x0000000000305624 ""
 *   insn=0x0000000000305628 string=0x000000000030562C "("
 *   insn=0x000000000030562C string=0x0000000000305630 "{"
 *   insn=0x000000000030562C string=0x00000000003056B0 "("
 *   insn=0x0000000000305630 string=0x0000000000305634 ""
 *   insn=0x0000000000305638 string=0x000000000030563C "("
 *   insn=0x0000000000305638 string=0x000000000030566C "("
 *   insn=0x0000000000305638 string=0x000000000030567C "("
 *   insn=0x0000000000305638 string=0x000000000030568C "("
 *   insn=0x0000000000305638 string=0x000000000030569C "("
 *   insn=0x0000000000305640 string=0x0000000000305644 "i"
 *   insn=0x0000000000305644 string=0x0000000000305648 "?"
 *   insn=0x000000000030564C string=0x0000000000305650 "*"
 *   insn=0x0000000000305654 string=0x0000000000305658 "J"
 *   insn=0x0000000000305658 string=0x000000000030565C ")"
 *   insn=0x0000000000305660 string=0x0000000000305664 "i"
 *   insn=0x0000000000305684 string=0x0000000000305688 "W"
 *   insn=0x00000000003056C0 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003056D0 string=0x00000000003056D4 "_"
 *   insn=0x00000000003056D4 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003056DC string=0x00000000003056E0 "i"
 *   insn=0x00000000003056E8 string=0x00000000003056EC "?"
 *   insn=0x00000000003056EC string=0x00000000003056F0 "j"
 *   insn=0x00000000003056F4 string=0x00000000003056F8 "B"
 *   insn=0x00000000003056F8 string=0x00000000003056FC "("
 *   insn=0x0000000000305704 string=0x0000000000305708 "("
 *   insn=0x0000000000305708 string=0x000000000030570C "h"
 *   insn=0x0000000000305710 string=0x0000000000305714 "H"
 *   insn=0x000000000030571C string=0x0000000000305734 "h"
 *   insn=0x0000000000305724 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000305728 string=0x000000000030572C "\t"
 *   insn=0x000000000030572C string=0x00000000001FAF50 "0'"
 *   insn=0x000000000030573C string=0x0000000000305740 "\t"
 *   insn=0x0000000000305744 string=0x0000000000305748 ")"
 *   insn=0x0000000000305748 string=0x000000000030574C ""
 *   insn=0x0000000000305750 string=0x0000000000305754 "h"
 *   insn=0x0000000000305758 string=0x000000000030576C "h&G)\n"
 *   insn=0x0000000000305760 string=0x0000000000305764 ";"
 *   insn=0x000000000030576C string=0x0000000000305770 "\n"
 *   insn=0x0000000000305774 string=0x0000000000305778 "j:"
 *   insn=0x0000000000305778 string=0x000000000030577C "j"
 *   insn=0x0000000000305784 string=0x0000000000305788 "~"
 *   insn=0x0000000000305794 string=0x0000000000305798 "n"
 *   insn=0x0000000000305798 string=0x000000000030579C "`"
 *   insn=0x0000000000305798 string=0x00000000001F6150 "0'"
 *   insn=0x000000000030579C string=0x00000000003057A0 "h"
 *   insn=0x00000000003057A0 string=0x00000000003057A4 "("
 *   insn=0x00000000003057B0 string=0x00000000003057B4 "h:@"
 *   insn=0x00000000003057B4 string=0x00000000003057B8 ""
 *   insn=0x00000000003057B8 string=0x00000000003057BC "K"
 *   insn=0x00000000003057BC string=0x00000000003057C0 "h:"
 *   insn=0x00000000003057BC string=0x00000000003057C4 "h"
 *   insn=0x00000000003057CC string=0x00000000003057D0 "\t"
 *   insn=0x00000000003057D0 string=0x00000000003057D4 "?i"
 *   insn=0x00000000003057D4 string=0x00000000003057D8 "A"
 *   insn=0x00000000003057D8 string=0x00000000003057DC ""
 *   insn=0x00000000003057DC string=0x00000000003057E0 "h"
 *   insn=0x00000000003057E8 string=0x00000000003057EC ""
 *   insn=0x00000000003057F4 string=0x000000000030580C "h"
 *   insn=0x00000000003057F8 string=0x00000000003057FC "y"
 *   insn=0x0000000000305814 string=0x0000000000305818 "\t"
 *   insn=0x000000000030581C string=0x0000000000305820 ")"
 *   insn=0x0000000000305820 string=0x0000000000305824 ""
 *   insn=0x0000000000305828 string=0x000000000030582C "h"
 *   insn=0x0000000000305830 string=0x0000000000305844 "h&G)\n"
 *   insn=0x000000000030583C string=0x0000000000305840 "@"
 *   insn=0x0000000000305844 string=0x0000000000305848 "\n"
 *   insn=0x000000000030584C string=0x0000000000305850 "j:"
 *   insn=0x000000000030585C string=0x0000000000305860 "H"
 *   insn=0x000000000030586C string=0x0000000000305870 "8"
 *   insn=0x0000000000305874 string=0x0000000000305878 "h"
 *   insn=0x0000000000305878 string=0x000000000030587C "h"
 *   insn=0x0000000000305884 string=0x0000000000305888 "b"
 *   insn=0x0000000000305888 string=0x000000000030588C "h:@"
 *   insn=0x000000000030588C string=0x0000000000305890 ""
 *   insn=0x0000000000305890 string=0x0000000000305894 "K"
 *   insn=0x0000000000305894 string=0x0000000000305898 "h:"
 *   insn=0x0000000000305894 string=0x000000000030589C "h"
 *   insn=0x00000000003058A4 string=0x00000000003058A8 "\t"
 *   insn=0x00000000003058A8 string=0x00000000003058AC "?"
 *   insn=0x00000000003058B0 string=0x00000000003058B4 ""
 *   insn=0x00000000003058B4 string=0x00000000003058B8 "h"
 *   insn=0x00000000003058C4 string=0x00000000001FA750 "0'"
 *   insn=0x00000000003058D4 string=0x00000000003058D8 "("
 *   insn=0x00000000003058DC string=0x00000000003058E0 "h"
 *   insn=0x00000000003058E8 string=0x00000000003058EC "\t"
 *   insn=0x00000000003058EC string=0x00000000003058F0 "?"
 *   insn=0x00000000003058F0 string=0x00000000003058F4 "a"
 *   insn=0x00000000003058F4 string=0x00000000003058F8 ""
 *   insn=0x00000000003058F8 string=0x00000000003058FC "h"
 *   insn=0x0000000000305918 string=0x000000000030591C "("
 *   insn=0x0000000000305920 string=0x0000000000305924 "h"
 *   insn=0x000000000030592C string=0x0000000000305930 "h.@"
 *   insn=0x0000000000305930 string=0x0000000000305934 "h"
 *   insn=0x000000000030593C string=0x0000000000305940 "`"
 *   insn=0x0000000000305960 string=0x000000000030597C "U"
 *   insn=0x000000000030597C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000305988 string=0x000000000030598C "I"
 *   insn=0x000000000030598C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelTransformControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::ModelTransformControllerComponent *this,
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
  int v13; // w10
  int v14; // w11
  Caver::Proto::Vector3 *v15; // x21
  char *v16; // x8
  int v17; // w8
  int v18; // w9
  int v19; // w22
  int v20; // w8
  bool v21; // vf
  int v22; // w8
  _BYTE *v23; // x8
  Caver::Proto::Vector3 *v24; // x21
  char *v25; // x8
  int v26; // w8
  int v27; // w9
  int v28; // w22
  int v29; // w8
  int v30; // w8
  _BYTE *v31; // x8
  int v32; // w9
  _BYTE *v33; // x8
  int v34; // w9
  __int64 result; // x0
  unsigned int v36; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v37; // [xsp+8h] [xbp-38h]

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
          v11 = v36;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v36 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v14 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 3) = v11;
        v13 = v14 | 1;
        *((_DWORD *)this + 10) = v14 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
        goto LABEL_29;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_21;
        v13 = *((_DWORD *)this + 10);
LABEL_29:
        v15 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 10) = v13 | 2;
        if ( !v15 )
        {
          v15 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v15);
          *((_QWORD *)this + 2) = v15;
        }
        v16 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
        }
        else
        {
          v36 = (unsigned __int8)*v16;
          *((_QWORD *)a2 + 1) = v16 + 1;
        }
        v17 = *((_DWORD *)a2 + 14);
        v18 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v17 + 1;
        if ( v17 >= v18 )
          return 0;
        v19 = google::protobuf::io::CodedInputStream::PushLimit(a2, v36);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v15, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v19);
        v20 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v20, 1);
        v22 = v20 - 1;
        if ( v22 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v22;
        v23 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v23 + 1;
LABEL_43:
        v24 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 10) |= 4u;
        if ( !v24 )
        {
          v24 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v24);
          *((_QWORD *)this + 3) = v24;
        }
        v25 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v25 >= *((_QWORD *)a2 + 2) || *v25 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
        }
        else
        {
          v36 = (unsigned __int8)*v25;
          *((_QWORD *)a2 + 1) = v25 + 1;
        }
        v26 = *((_DWORD *)a2 + 14);
        v27 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v26 + 1;
        if ( v26 >= v27 )
          return 0;
        v28 = google::protobuf::io::CodedInputStream::PushLimit(a2, v36);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v24, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v28);
        v29 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v29, 1);
        v30 = v29 - 1;
        if ( v30 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v30;
        v31 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_57:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v36) & 1) == 0 )
          return 0;
        v32 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 8) = v36;
        *((_DWORD *)this + 10) = v32 | 8;
        v33 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v33 >= *((_QWORD *)a2 + 2) || *v33 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v33 + 1;
LABEL_61:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v36) & 1) == 0 )
          return 0;
        v34 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 9) = v36;
        *((_DWORD *)this + 10) = v34 | 0x10;
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
        if ( v8 == 2 )
          goto LABEL_43;
        goto LABEL_21;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_57;
        goto LABEL_21;
      case 5u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_61;
        goto LABEL_21;
      default:
        v8 = v6 & 7;
LABEL_21:
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

