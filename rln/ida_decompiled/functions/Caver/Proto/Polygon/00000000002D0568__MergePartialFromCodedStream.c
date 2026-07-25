/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0568
 * Mangled: _ZN5Caver5Proto7Polygon27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Polygon::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F6030  Caver::Proto::Polygon::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 95
 *   insn=0x00000000002D0580 string=0x00000000002D0584 "X"
 *   insn=0x00000000002D0588 string=0x00000000002D058C ""
 *   insn=0x00000000002D058C string=0x00000000002D0590 ")"
 *   insn=0x00000000002D059C string=0x00000000002D05A0 "9A"
 *   insn=0x00000000002D05A4 string=0x00000000002D05A8 "h"
 *   insn=0x00000000002D05AC string=0x00000000002D05B0 """
 *   insn=0x00000000002D05B0 string=0x00000000002D05B4 "\t"
 *   insn=0x00000000002D05B8 string=0x00000000002D05BC "!"
 *   insn=0x00000000002D05BC string=0x00000000002D05C0 ""
 *   insn=0x00000000002D05C0 string=0x00000000002D05C4 "a""
 *   insn=0x00000000002D05C4 string=0x00000000002D05C8 "h"
 *   insn=0x00000000002D05CC string=0x00000000002D05E8 "(|"
 *   insn=0x00000000002D05D8 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D05DC string=0x00000000002D05E0 "a""
 *   insn=0x00000000002D05F0 string=0x00000000002D0664 "("
 *   insn=0x00000000002D05F8 string=0x00000000002D0634 "("
 *   insn=0x00000000002D05FC string=0x00000000002D0600 "!"
 *   insn=0x00000000002D0600 string=0x00000000002D0604 "("
 *   insn=0x00000000002D0600 string=0x00000000002D0844 "("
 *   insn=0x00000000002D0608 string=0x00000000002D060C "j"
 *   insn=0x00000000002D060C string=0x00000000002D0610 "_"
 *   insn=0x00000000002D0610 string=0x00000000002D0614 "b"
 *   insn=0x00000000002D0614 string=0x00000000002D0618 "I"
 *   insn=0x00000000002D0618 string=0x00000000002D061C ")"
 *   insn=0x00000000002D061C string=0x00000000002D0620 ")"
 *   insn=0x00000000002D0620 string=0x00000000002D0624 "J"
 *   insn=0x00000000002D0628 string=0x00000000002D062C "j"
 *   insn=0x00000000002D062C string=0x00000000002D0630 "z"
 *   insn=0x00000000002D0638 string=0x00000000002D063C "i"
 *   insn=0x00000000002D063C string=0x00000000002D0640 "?"
 *   insn=0x00000000002D0640 string=0x00000000002D0644 "B"
 *   insn=0x00000000002D0644 string=0x00000000002D0648 "*"
 *   insn=0x00000000002D0648 string=0x00000000002D064C "\n"
 *   insn=0x00000000002D064C string=0x00000000002D0650 "J"
 *   insn=0x00000000002D0650 string=0x00000000002D0654 ")"
 *   insn=0x00000000002D0658 string=0x00000000002D065C "i"
 *   insn=0x00000000002D065C string=0x00000000002D0660 "Y"
 *   insn=0x00000000002D066C string=0x00000000002D0670 "v"
 *   insn=0x00000000002D0674 string=0x00000000002D0678 "h"
 *   insn=0x00000000002D069C string=0x00000000002D06E8 "h"
 *   insn=0x00000000002D06A8 string=0x00000000002D06BC ""
 *   insn=0x00000000002D06B4 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D06C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D06F0 string=0x00000000002D06F4 "\t"
 *   insn=0x00000000002D06F8 string=0x00000000002D06FC ")"
 *   insn=0x00000000002D06FC string=0x00000000002D0700 ""
 *   insn=0x00000000002D0704 string=0x00000000002D0708 "h"
 *   insn=0x00000000002D070C string=0x00000000002D0720 "h&G)\n"
 *   insn=0x00000000002D0714 string=0x00000000002D0718 "N"
 *   insn=0x00000000002D0718 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002D0720 string=0x00000000002D0724 "\n"
 *   insn=0x00000000002D0728 string=0x00000000002D072C "j:"
 *   insn=0x00000000002D072C string=0x00000000002D0730 "j\t"
 *   insn=0x00000000002D074C string=0x00000000002D0750 "`"
 *   insn=0x00000000002D074C string=0x00000000001F5710 "P'"
 *   insn=0x00000000002D0750 string=0x00000000002D0754 "h"
 *   insn=0x00000000002D0754 string=0x00000000002D0758 "("
 *   insn=0x00000000002D0764 string=0x00000000002D0768 "h:@"
 *   insn=0x00000000002D0768 string=0x00000000002D076C ""
 *   insn=0x00000000002D076C string=0x00000000002D0770 "K"
 *   insn=0x00000000002D0770 string=0x00000000002D0774 "h:"
 *   insn=0x00000000002D0770 string=0x00000000002D0778 "i"
 *   insn=0x00000000002D0778 string=0x00000000002D077C "?"
 *   insn=0x00000000002D077C string=0x00000000002D0780 "B"
 *   insn=0x00000000002D0780 string=0x00000000002D0784 "*"
 *   insn=0x00000000002D0784 string=0x00000000002D0788 "_)"
 *   insn=0x00000000002D0788 string=0x00000000002D078C "@"
 *   insn=0x00000000002D078C string=0x00000000002D0790 "*"
 *   insn=0x00000000002D078C string=0x00000000002D0674 "("
 *   insn=0x00000000002D0790 string=0x00000000002D0794 "_A"
 *   insn=0x00000000002D0798 string=0x00000000002D079C ")"
 *   insn=0x00000000002D079C string=0x00000000002D07A0 "i"
 *   insn=0x00000000002D07A0 string=0x00000000002D07A4 "?"
 *   insn=0x00000000002D07B0 string=0x00000000002D07B4 "'"
 *   insn=0x00000000002D07B4 string=0x00000000002D07B8 " "
 *   insn=0x00000000002D07BC string=0x00000000002D07C0 "i"
 *   insn=0x00000000002D07C4 string=0x00000000002D07C8 "_"
 *   insn=0x00000000002D07D0 string=0x00000000002D07D4 "j"
 *   insn=0x00000000002D07D4 string=0x00000000002D07D8 "?"
 *   insn=0x00000000002D07DC string=0x00000000002D07E0 "B"
 *   insn=0x00000000002D07E0 string=0x00000000002D07E4 "*"
 *   insn=0x00000000002D07E4 string=0x00000000002D07E8 "_a"
 *   insn=0x00000000002D07EC string=0x00000000002D07F0 "*"
 *   insn=0x00000000002D07F0 string=0x00000000002D07F4 "j"
 *   insn=0x00000000002D07F4 string=0x00000000002D07F8 "_"
 *   insn=0x00000000002D0810 string=0x00000000002D0814 "j"
 *   insn=0x00000000002D0818 string=0x00000000002D081C "?"
 *   insn=0x00000000002D0824 string=0x00000000002D0828 "i"
 *   insn=0x00000000002D0828 string=0x00000000002D082C "_"
 *   insn=0x00000000002D0834 string=0x00000000002D0838 "h.@"
 *   insn=0x00000000002D0838 string=0x00000000002D083C "h"
 *   insn=0x00000000002D0854 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D0860 string=0x00000000002D0868 ""
 *   insn=0x00000000002D0898 string=0x00000000002D089C "`"
 *   insn=0x00000000002D08A4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Polygon::MergePartialFromCodedStream(
        Caver::Proto::Polygon *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  unsigned int v9; // w8
  int v10; // w8
  unsigned __int64 v11; // x8
  char *v12; // x10
  unsigned int v13; // w9
  unsigned __int8 *v14; // x10
  unsigned __int8 *v15; // x9
  unsigned int v16; // w10
  _BYTE *v17; // x9
  int v18; // w8
  int v19; // w23
  __int64 v20; // x8
  Caver::Proto::Vector2 *v21; // x22
  __int64 v22; // x8
  char *v23; // x8
  int v24; // w8
  int v25; // w9
  int v26; // w23
  int v27; // w8
  bool v28; // vf
  int v29; // w8
  _BYTE *v30; // x9
  int v31; // w11
  int v32; // w11
  __int64 result; // x0
  unsigned int v34; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v35; // [xsp+8h] [xbp-48h]

  v5 = (Caver::Proto::Polygon *)((char *)this + 16);
  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      v6 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || *v6 < 0 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
        v7 = TagFallback;
        *((_DWORD *)a2 + 8) = TagFallback;
        if ( !TagFallback )
          return 1;
      }
      else
      {
        v7 = (unsigned __int8)*v6;
        *((_DWORD *)a2 + 8) = v7;
        *((_QWORD *)a2 + 1) = v6 + 1;
        if ( !(_DWORD)v7 )
          return 1;
      }
      v9 = (unsigned int)v7 >> 3;
      if ( (unsigned int)v7 >> 3 == 1 )
      {
        v10 = v7 & 7;
        if ( v10 == 2 )
        {
          while ( 1 )
          {
            v19 = *((_DWORD *)this + 6);
            v18 = *((_DWORD *)this + 7);
            if ( v19 >= v18 )
            {
              if ( v18 == *((_DWORD *)this + 8) )
              {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v18 + 1);
                v19 = *((_DWORD *)this + 6);
                v18 = *((_DWORD *)this + 7);
              }
              *((_DWORD *)this + 7) = v18 + 1;
              v21 = (Caver::Proto::Vector2 *)operator new(0x18u);
              *((_QWORD *)v21 + 1) = 0;
              *((_QWORD *)v21 + 2) = 0;
              *(_QWORD *)v21 = off_6C5A08;
              v22 = *((_QWORD *)this + 2);
              *((_DWORD *)this + 6) = v19 + 1;
              *(_QWORD *)(v22 + 8LL * v19) = v21;
            }
            else
            {
              v20 = *((_QWORD *)this + 2);
              *((_DWORD *)this + 6) = v19 + 1;
              v21 = *(Caver::Proto::Vector2 **)(v20 + 8LL * v19);
            }
            v23 = (char *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 < 0 )
            {
              if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
                return 0;
            }
            else
            {
              v34 = (unsigned __int8)*v23;
              *((_QWORD *)a2 + 1) = v23 + 1;
            }
            v24 = *((_DWORD *)a2 + 14);
            v25 = *((_DWORD *)a2 + 15);
            *((_DWORD *)a2 + 14) = v24 + 1;
            if ( v24 >= v25 )
              return 0;
            v26 = google::protobuf::io::CodedInputStream::PushLimit(a2, v34);
            if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v21, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
              return 0;
            google::protobuf::io::CodedInputStream::PopLimit(a2, v26);
            v27 = *((_DWORD *)a2 + 14);
            v28 = __OFSUB__(v27, 1);
            v29 = v27 - 1;
            if ( v29 < 0 == v28 )
              *((_DWORD *)a2 + 14) = v29;
            v30 = (_BYTE *)*((_QWORD *)a2 + 1);
            v11 = *((_QWORD *)a2 + 2);
            if ( (unsigned __int64)v30 >= v11 )
              goto LABEL_2;
            if ( *v30 != 10 )
            {
              if ( *v30 != 16 )
                goto LABEL_2;
              v15 = v30 + 1;
              *((_QWORD *)a2 + 1) = v15;
              if ( (unsigned __int64)v15 < v11 )
                goto LABEL_16;
              goto LABEL_39;
            }
            *((_QWORD *)a2 + 1) = v30 + 1;
          }
        }
        goto LABEL_50;
      }
      if ( v9 != 2 )
        break;
      v10 = v7 & 7;
      if ( (v7 & 7) != 0 )
        goto LABEL_50;
      v15 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      v11 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v15 >= v11 )
      {
LABEL_39:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
          return 0;
        v16 = v34;
        v17 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        goto LABEL_41;
      }
LABEL_16:
      if ( (char)*v15 < 0 )
        goto LABEL_39;
      v16 = *v15;
      v17 = v15 + 1;
      v34 = v16;
      *((_QWORD *)a2 + 1) = v17;
LABEL_41:
      v31 = *((_DWORD *)this + 19);
      *((_BYTE *)this + 72) = v16 != 0;
      *((_DWORD *)this + 19) = v31 | 2;
      if ( (unsigned __int64)v17 < v11 && *v17 == 24 )
      {
        v12 = v17 + 1;
        *((_QWORD *)a2 + 1) = v17 + 1;
        if ( (unsigned __int64)(v17 + 1) >= v11 )
          goto LABEL_44;
LABEL_12:
        if ( (*v12 & 0x80000000) == 0 )
        {
          v13 = (unsigned __int8)*v12;
          v14 = (unsigned __int8 *)(v12 + 1);
          v34 = v13;
          *((_QWORD *)a2 + 1) = v14;
          goto LABEL_46;
        }
LABEL_44:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
          return 0;
        v13 = v34;
        v14 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
LABEL_46:
        v32 = *((_DWORD *)this + 19);
        *((_BYTE *)this + 73) = v13 != 0;
        *((_DWORD *)this + 19) = v32 | 4;
        if ( v14 == (unsigned __int8 *)v11 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
      }
    }
    if ( v9 == 3 )
    {
      v10 = v7 & 7;
      if ( (v7 & 7) == 0 )
      {
        v12 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 >= v11 )
          goto LABEL_44;
        goto LABEL_12;
      }
    }
    else
    {
      v10 = v7 & 7;
    }
LABEL_50:
    if ( v10 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v7, a3) & 1) == 0 )
      return 0;
  }
}

