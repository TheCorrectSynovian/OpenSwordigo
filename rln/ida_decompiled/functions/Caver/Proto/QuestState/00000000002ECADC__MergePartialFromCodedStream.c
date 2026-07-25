/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECADC
 * Mangled: _ZN5Caver5Proto10QuestState27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::QuestState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F8880  Caver::Proto::QuestState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 52
 *   insn=0x00000000002ECAF0 string=0x00000000002ECAF4 "U"
 *   insn=0x00000000002ECB04 string=0x00000000002ECB08 ")"
 *   insn=0x00000000002ECB14 string=0x00000000002ECB18 "7a"
 *   insn=0x00000000002ECB18 string=0x00000000002ECB1C "h"
 *   insn=0x00000000002ECB20 string=0x00000000002ECB24 """
 *   insn=0x00000000002ECB24 string=0x00000000002ECB28 "\t"
 *   insn=0x00000000002ECB2C string=0x00000000002ECB30 "!"
 *   insn=0x00000000002ECB30 string=0x00000000002ECB34 ""
 *   insn=0x00000000002ECB34 string=0x00000000002ECB38 "a""
 *   insn=0x00000000002ECB38 string=0x00000000002ECB3C "h"
 *   insn=0x00000000002ECB40 string=0x00000000002ECB44 "K"
 *   insn=0x00000000002ECB40 string=0x00000000002ECB5C "(|"
 *   insn=0x00000000002ECB4C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002ECB50 string=0x00000000002ECB54 "a""
 *   insn=0x00000000002ECB64 string=0x00000000002ECBA0 "("
 *   insn=0x00000000002ECB68 string=0x00000000002ECB6C "!"
 *   insn=0x00000000002ECB6C string=0x00000000002ECB70 "("
 *   insn=0x00000000002ECB6C string=0x00000000002ECC50 "("
 *   insn=0x00000000002ECB74 string=0x00000000002ECB78 "j"
 *   insn=0x00000000002ECB78 string=0x00000000002ECB7C "_"
 *   insn=0x00000000002ECB7C string=0x00000000002ECB80 "b"
 *   insn=0x00000000002ECB80 string=0x00000000002ECB84 "I"
 *   insn=0x00000000002ECB84 string=0x00000000002ECB88 ")"
 *   insn=0x00000000002ECB88 string=0x00000000002ECB8C ")"
 *   insn=0x00000000002ECB8C string=0x00000000002ECB90 "J"
 *   insn=0x00000000002ECB94 string=0x00000000002ECB98 "j"
 *   insn=0x00000000002ECB98 string=0x00000000002ECB9C """
 *   insn=0x00000000002ECBA4 string=0x00000000002ECBA8 "a"
 *   insn=0x00000000002ECBB0 string=0x00000000002ECBB4 ""
 *   insn=0x00000000002ECBB4 string=0x00000000002ECBB8 "?"
 *   insn=0x00000000002ECBC8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002ECBCC string=0x00000000002ECBD0 "7"
 *   insn=0x00000000002ECBDC string=0x00000000002ECBE0 "@"
 *   insn=0x00000000002ECBDC string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002ECBE0 string=0x00000000002ECBE4 "i"
 *   insn=0x00000000002ECBE4 string=0x00000000002ECBE8 "?"
 *   insn=0x00000000002ECBEC string=0x00000000002ECBF0 "*"
 *   insn=0x00000000002ECBF0 string=0x00000000002ECBF4 "_A"
 *   insn=0x00000000002ECBF4 string=0x00000000002ECBF8 "!"
 *   insn=0x00000000002ECBF8 string=0x00000000002ECBFC "*"
 *   insn=0x00000000002ECBFC string=0x00000000002ECC00 "j"
 *   insn=0x00000000002ECC00 string=0x00000000002ECC04 "_"
 *   insn=0x00000000002ECC14 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002ECC1C string=0x00000000002ECC20 "j"
 *   insn=0x00000000002ECC24 string=0x00000000002ECC28 "?"
 *   insn=0x00000000002ECC30 string=0x00000000002ECC34 "i"
 *   insn=0x00000000002ECC34 string=0x00000000002ECC38 "_"
 *   insn=0x00000000002ECC40 string=0x00000000002ECC44 "h.@"
 *   insn=0x00000000002ECC60 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002ECC7C string=0x00000000002ECC80 "a"
 *   insn=0x00000000002ECCA0 string=0x00000000002ECCA4 "`"
 *   insn=0x00000000002ECCAC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestState::MergePartialFromCodedStream(
        Caver::Proto::QuestState *this,
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
  __int64 *v13; // x1
  _QWORD *v14; // x0
  _BYTE *v15; // x9
  int v16; // w11
  __int64 result; // x0
  unsigned int v18; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v19; // [xsp+8h] [xbp-38h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
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
      if ( v8 != 2 )
        goto LABEL_26;
      v13 = (__int64 *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 7) |= 1u;
      if ( v13 == &Caver::Proto::QuestState::_default_quest_name_ )
      {
        v14 = (_QWORD *)operator new(8u);
        *v14 = &byte_6FD2F8;
        *((_QWORD *)this + 2) = v14;
      }
      if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
        return 0;
      v15 = (_BYTE *)*((_QWORD *)a2 + 1);
      v9 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v15 < v9 && *v15 == 16 )
      {
        v10 = v15 + 1;
        *((_QWORD *)a2 + 1) = v15 + 1;
        if ( (unsigned __int64)(v15 + 1) >= v9 )
          goto LABEL_20;
LABEL_11:
        if ( (*v10 & 0x80000000) == 0 )
        {
          v11 = (unsigned __int8)*v10;
          v12 = (unsigned __int8 *)(v10 + 1);
          v18 = v11;
          *((_QWORD *)a2 + 1) = v12;
          goto LABEL_22;
        }
LABEL_20:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v18) & 1) == 0 )
          return 0;
        v11 = v18;
        v12 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
LABEL_22:
        v16 = *((_DWORD *)this + 7);
        *((_BYTE *)this + 24) = v11 != 0;
        *((_DWORD *)this + 7) = v16 | 2;
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
          goto LABEL_20;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = v6 & 7;
    }
LABEL_26:
    if ( v8 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

