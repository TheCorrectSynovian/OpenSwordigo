/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314818
 * Mangled: _ZN5Caver5Proto15EntityComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::EntityComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 52
 *   insn=0x0000000000314828 string=0x000000000031482C "U"
 *   insn=0x000000000031483C string=0x0000000000314840 "h"
 *   insn=0x0000000000314844 string=0x0000000000314848 """
 *   insn=0x0000000000314848 string=0x000000000031484C "\t"
 *   insn=0x0000000000314850 string=0x0000000000314854 "!"
 *   insn=0x0000000000314854 string=0x0000000000314858 ""
 *   insn=0x0000000000314858 string=0x000000000031485C "a""
 *   insn=0x000000000031485C string=0x0000000000314860 "h"
 *   insn=0x0000000000314864 string=0x0000000000314868 "Q"
 *   insn=0x0000000000314864 string=0x0000000000314880 "(|"
 *   insn=0x000000000031486C string=0x0000000000314870 "t"
 *   insn=0x0000000000314870 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000314874 string=0x0000000000314878 "a""
 *   insn=0x0000000000314888 string=0x00000000003148C4 "("
 *   insn=0x000000000031488C string=0x0000000000314890 "!"
 *   insn=0x0000000000314890 string=0x0000000000314894 "("
 *   insn=0x0000000000314890 string=0x00000000003148F4 "("
 *   insn=0x0000000000314898 string=0x000000000031489C "j"
 *   insn=0x000000000031489C string=0x00000000003148A0 "_"
 *   insn=0x00000000003148A4 string=0x00000000003148A8 "I"
 *   insn=0x00000000003148AC string=0x00000000003148B0 ")"
 *   insn=0x00000000003148B0 string=0x00000000003148B4 "J"
 *   insn=0x00000000003148B8 string=0x00000000003148BC "j"
 *   insn=0x00000000003148BC string=0x00000000003148C0 "-"
 *   insn=0x00000000003148C8 string=0x00000000003148CC "i"
 *   insn=0x00000000003148CC string=0x00000000003148D0 "?"
 *   insn=0x00000000003148D4 string=0x00000000003148D8 "*"
 *   insn=0x00000000003148DC string=0x00000000003148E0 "J"
 *   insn=0x00000000003148E0 string=0x00000000003148E4 ")"
 *   insn=0x00000000003148E8 string=0x00000000003148EC "i"
 *   insn=0x0000000000314904 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000314908 string=0x000000000031490C "*"
 *   insn=0x0000000000314918 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000314920 string=0x0000000000314924 "i"
 *   insn=0x000000000031492C string=0x0000000000314930 "?"
 *   insn=0x0000000000314930 string=0x0000000000314934 "j"
 *   insn=0x0000000000314938 string=0x000000000031493C """
 *   insn=0x000000000031493C string=0x0000000000314940 "*"
 *   insn=0x0000000000314940 string=0x0000000000314944 "_A"
 *   insn=0x0000000000314948 string=0x000000000031494C "*"
 *   insn=0x000000000031494C string=0x0000000000314950 "j"
 *   insn=0x0000000000314950 string=0x0000000000314954 "_"
 *   insn=0x0000000000314964 string=0x0000000000314968 "`"
 *   insn=0x000000000031496C string=0x0000000000314970 "j"
 *   insn=0x0000000000314974 string=0x0000000000314978 "?"
 *   insn=0x0000000000314980 string=0x0000000000314984 "i"
 *   insn=0x0000000000314984 string=0x0000000000314988 "_"
 *   insn=0x0000000000314990 string=0x0000000000314994 "h.@"
 *   insn=0x0000000000314994 string=0x0000000000314998 "H"
 *   insn=0x00000000003149A0 string=0x00000000003149A4 "`"
 *   insn=0x00000000003149C4 string=0x00000000003149DC "="
 *   insn=0x00000000003149DC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityComponent::MergePartialFromCodedStream(
        Caver::Proto::EntityComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  unsigned __int64 v9; // x8
  char *v10; // x10
  unsigned int v11; // w9
  unsigned __int8 *v12; // x10
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  int v16; // w11
  int v17; // w11
  __int64 result; // x0
  unsigned int v19; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v20; // [xsp+8h] [xbp-28h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
  {
    while ( 1 )
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
      if ( (unsigned int)v6 >> 3 != 1 )
        break;
      v8 = v6 & 7;
      if ( (v6 & 7) != 0 )
        goto LABEL_18;
      v13 = (char *)*((_QWORD *)a2 + 1);
      v9 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v13 >= v9 || *v13 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v19) & 1) == 0 )
          return 0;
        v14 = v19;
        v15 = (_BYTE *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
      }
      else
      {
        v14 = (unsigned __int8)*v13;
        v15 = v13 + 1;
        v19 = v14;
        *((_QWORD *)a2 + 1) = v15;
      }
      v16 = *((_DWORD *)this + 5);
      *((_DWORD *)this + 3) = v14;
      *((_DWORD *)this + 5) = v16 | 1;
      if ( (unsigned __int64)v15 < v9 && *v15 == 16 )
      {
        v10 = v15 + 1;
        *((_QWORD *)a2 + 1) = v15 + 1;
        if ( (unsigned __int64)(v15 + 1) >= v9 )
          goto LABEL_26;
LABEL_11:
        if ( (*v10 & 0x80000000) == 0 )
        {
          v11 = (unsigned __int8)*v10;
          v12 = (unsigned __int8 *)(v10 + 1);
          v19 = v11;
          *((_QWORD *)a2 + 1) = v12;
          goto LABEL_28;
        }
LABEL_26:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v19) & 1) == 0 )
          return 0;
        v11 = v19;
        v12 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
LABEL_28:
        v17 = *((_DWORD *)this + 5);
        *((_BYTE *)this + 16) = v11 != 0;
        *((_DWORD *)this + 5) = v17 | 2;
        if ( v12 == (unsigned __int8 *)v9 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
      }
    }
    if ( (unsigned int)v6 >> 3 == 2 )
    {
      v8 = v6 & 7;
      if ( (v6 & 7) == 0 )
      {
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_26;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = v6 & 7;
    }
LABEL_18:
    if ( v8 == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}

