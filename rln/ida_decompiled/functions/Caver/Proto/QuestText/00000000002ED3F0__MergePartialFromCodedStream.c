/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED3F0
 * Mangled: _ZN5Caver5Proto9QuestText27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::QuestText::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001FC6A0  Caver::Proto::QuestText::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 51
 *   insn=0x00000000002ED40C string=0x00000000002ED410 ""
 *   insn=0x00000000002ED420 string=0x00000000002ED424 "h"
 *   insn=0x00000000002ED428 string=0x00000000002ED42C """
 *   insn=0x00000000002ED42C string=0x00000000002ED430 "\t"
 *   insn=0x00000000002ED434 string=0x00000000002ED438 "!"
 *   insn=0x00000000002ED438 string=0x00000000002ED43C ""
 *   insn=0x00000000002ED43C string=0x00000000002ED440 "a""
 *   insn=0x00000000002ED440 string=0x00000000002ED444 "h"
 *   insn=0x00000000002ED448 string=0x00000000002ED44C "["
 *   insn=0x00000000002ED448 string=0x00000000002ED464 "(|"
 *   insn=0x00000000002ED450 string=0x00000000002ED454 "{)"
 *   insn=0x00000000002ED454 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002ED458 string=0x00000000002ED45C "a""
 *   insn=0x00000000002ED46C string=0x00000000002ED488 "("
 *   insn=0x00000000002ED474 string=0x00000000002ED478 "("
 *   insn=0x00000000002ED474 string=0x00000000002ED4E8 "("
 *   insn=0x00000000002ED47C string=0x00000000002ED480 "a"
 *   insn=0x00000000002ED480 string=0x00000000002ED484 " "
 *   insn=0x00000000002ED498 string=0x00000000002ED49C ""
 *   insn=0x00000000002ED49C string=0x00000000002ED4A0 "?"
 *   insn=0x00000000002ED4AC string=0x00000000002ED4B0 "L "
 *   insn=0x00000000002ED4B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002ED4B4 string=0x00000000002ED4B8 "7"
 *   insn=0x00000000002ED4C4 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002ED4C8 string=0x00000000002ED4CC "h"
 *   insn=0x00000000002ED4D4 string=0x00000000002ED4D8 "\t"
 *   insn=0x00000000002ED4D8 string=0x00000000002ED4DC "?I"
 *   insn=0x00000000002ED4DC string=0x00000000002ED4E0 "!"
 *   insn=0x00000000002ED4E0 string=0x00000000002ED4E4 "*"
 *   insn=0x00000000002ED4E4 string=0x00000000002ED58C ""
 *   insn=0x00000000002ED4EC string=0x00000000002ED4F0 "@"
 *   insn=0x00000000002ED4F8 string=0x00000000002ED4FC "@"
 *   insn=0x00000000002ED4F8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002ED4FC string=0x00000000002ED500 "0"
 *   insn=0x00000000002ED504 string=0x00000000002ED508 ")}@"
 *   insn=0x00000000002ED508 string=0x00000000002ED50C "?"
 *   insn=0x00000000002ED514 string=0x00000000002ED518 "*"
 *   insn=0x00000000002ED530 string=0x00000000002ED544 ""
 *   insn=0x00000000002ED53C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002ED548 string=0x00000000002ED54C "-"
 *   insn=0x00000000002ED54C string=0x00000000001F4A00 "P'"
 *   insn=0x00000000002ED558 string=0x00000000002ED55C "\n"
 *   insn=0x00000000002ED560 string=0x00000000002ED564 "!y("
 *   insn=0x00000000002ED570 string=0x00000000002ED574 "h"
 *   insn=0x00000000002ED57C string=0x00000000002ED580 "\n"
 *   insn=0x00000000002ED580 string=0x00000000002ED584 "_I"
 *   insn=0x00000000002ED58C string=0x00000000002ED590 "h"
 *   insn=0x00000000002ED598 string=0x00000000002ED59C "A"
 *   insn=0x00000000002ED59C string=0x00000000002ED5A0 "h.@"
 *   insn=0x00000000002ED5A0 string=0x00000000002ED5A4 ""
 *   insn=0x00000000002ED5AC string=0x00000000002ED5B0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestText::MergePartialFromCodedStream(
        Caver::Proto::QuestText *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  Caver::Proto::QuestText *v3; // x20
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  _BYTE *v11; // x8
  int v12; // w8
  int v13; // w9
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  _BYTE *v17; // x9
  __int64 result; // x0

  v3 = this;
  v5 = (Caver::Proto::QuestText *)((char *)this + 24);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || *v6 < 0 )
        {
          this = (Caver::Proto::QuestText *)google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
          v7 = (unsigned int)this;
          *((_DWORD *)a2 + 8) = (_DWORD)this;
          if ( !(_DWORD)this )
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
        if ( (unsigned int)v7 >> 3 != 1 )
          break;
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_19;
        v9 = (__int64 *)*((_QWORD *)v3 + 2);
        *((_DWORD *)v3 + 20) |= 1u;
        if ( v9 == &Caver::Proto::QuestText::_default_quest_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)v3 + 2) = v10;
        }
        this = (Caver::Proto::QuestText *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 < *((_QWORD *)a2 + 2) && *v11 == 18 )
          goto LABEL_30;
      }
      if ( (unsigned int)v7 >> 3 != 2 )
        break;
      v8 = v7 & 7;
      if ( v8 != 2 )
        goto LABEL_19;
      while ( 1 )
      {
        v12 = *((_DWORD *)v3 + 9);
        v13 = *((_DWORD *)v3 + 8);
        if ( v13 >= v12 )
        {
          if ( v12 == *((_DWORD *)v3 + 10) )
          {
            this = (Caver::Proto::QuestText *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v12 + 1);
            v12 = *((_DWORD *)v3 + 9);
          }
          *((_DWORD *)v3 + 9) = v12 + 1;
          v14 = google::protobuf::internal::StringTypeHandlerBase::New(this);
          v15 = *((int *)v3 + 8);
          v16 = *((_QWORD *)v3 + 3);
          *((_DWORD *)v3 + 8) = v15 + 1;
          *(_QWORD *)(v16 + 8 * v15) = v14;
        }
        else
        {
          *((_DWORD *)v3 + 8) = v13 + 1;
        }
        this = (Caver::Proto::QuestText *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        v17 = (_BYTE *)*((_QWORD *)a2 + 2);
        if ( v11 >= v17 || *v11 != 18 )
          break;
LABEL_30:
        *((_QWORD *)a2 + 1) = v11 + 1;
      }
      if ( v11 == v17 && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    v8 = v7 & 7;
LABEL_19:
    if ( v8 == 4 )
      return 1;
    this = (Caver::Proto::QuestText *)google::protobuf::internal::WireFormatLite::SkipField(
                                        a2,
                                        (google::protobuf::io::CodedInputStream *)v7,
                                        a3);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
  }
}

