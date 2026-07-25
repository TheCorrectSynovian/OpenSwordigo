/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC264
 * Mangled: _ZN5Caver5Proto15StateProperties27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F70A0  Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 5
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 34
 *   insn=0x00000000002EC27C string=0x00000000002EC280 "h"
 *   insn=0x00000000002EC284 string=0x00000000002EC288 """
 *   insn=0x00000000002EC288 string=0x00000000002EC28C "\t"
 *   insn=0x00000000002EC290 string=0x00000000002EC294 "!"
 *   insn=0x00000000002EC294 string=0x00000000002EC298 ""
 *   insn=0x00000000002EC298 string=0x00000000002EC29C "a""
 *   insn=0x00000000002EC29C string=0x00000000002EC2A0 "h"
 *   insn=0x00000000002EC2A0 string=0x00000000002EC2A4 "?("
 *   insn=0x00000000002EC2A4 string=0x00000000002EC2A8 "@"
 *   insn=0x00000000002EC2AC string=0x00000000002EC2B0 "("
 *   insn=0x00000000002EC2C0 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002EC2C4 string=0x00000000002EC2C8 "4"
 *   insn=0x00000000002EC2D0 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002EC2D4 string=0x00000000002EC2D8 "a""
 *   insn=0x00000000002EC2D8 string=0x00000000002EC2DC "?("
 *   insn=0x00000000002EC2DC string=0x00000000002EC2E0 "a"
 *   insn=0x00000000002EC2E8 string=0x00000000002EC2EC "h"
 *   insn=0x00000000002EC2F0 string=0x00000000002EC2F4 ")}@"
 *   insn=0x00000000002EC2F4 string=0x00000000002EC2F8 "?"
 *   insn=0x00000000002EC300 string=0x00000000002EC304 "*"
 *   insn=0x00000000002EC31C string=0x00000000002EC330 ""
 *   insn=0x00000000002EC324 string=0x00000000002EC328 "~:"
 *   insn=0x00000000002EC328 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002EC338 string=0x00000000001F4A00 "P'"
 *   insn=0x00000000002EC344 string=0x00000000002EC348 "\n"
 *   insn=0x00000000002EC34C string=0x00000000002EC350 "!y("
 *   insn=0x00000000002EC358 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002EC35C string=0x00000000002EC360 "h"
 *   insn=0x00000000002EC368 string=0x00000000002EC36C "\n"
 *   insn=0x00000000002EC36C string=0x00000000002EC370 "_)"
 *   insn=0x00000000002EC374 string=0x00000000002EC2E8 ""
 *   insn=0x00000000002EC378 string=0x00000000002EC37C "!"
 *   insn=0x00000000002EC37C string=0x00000000002EC380 "h.@"
 *   insn=0x00000000002EC38C string=0x00000000002EC390 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StateProperties::MergePartialFromCodedStream(
        Caver::Proto::StateProperties *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  Caver::Proto::StateProperties *v3; // x20
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  int v8; // w8
  int v9; // w9
  __int64 v10; // x0
  __int64 v11; // x8
  __int64 v12; // x9
  _BYTE *v13; // x8
  _BYTE *v14; // x9
  __int64 result; // x0

  v3 = this;
  v5 = (Caver::Proto::StateProperties *)((char *)this + 16);
  while ( 1 )
  {
LABEL_2:
    v6 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || *v6 < 0 )
    {
      this = (Caver::Proto::StateProperties *)google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v7 = (unsigned int)this;
      *((_DWORD *)a2 + 8) = (_DWORD)this;
      if ( (_DWORD)this == 10 )
      {
        while ( 1 )
        {
LABEL_12:
          v8 = *((_DWORD *)v3 + 7);
          v9 = *((_DWORD *)v3 + 6);
          if ( v9 >= v8 )
          {
            if ( v8 == *((_DWORD *)v3 + 8) )
            {
              this = (Caver::Proto::StateProperties *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                        v5,
                                                        v8 + 1);
              v8 = *((_DWORD *)v3 + 7);
            }
            *((_DWORD *)v3 + 7) = v8 + 1;
            v10 = google::protobuf::internal::StringTypeHandlerBase::New(this);
            v11 = *((int *)v3 + 6);
            v12 = *((_QWORD *)v3 + 2);
            *((_DWORD *)v3 + 6) = v11 + 1;
            *(_QWORD *)(v12 + 8 * v11) = v10;
          }
          else
          {
            *((_DWORD *)v3 + 6) = v9 + 1;
          }
          this = (Caver::Proto::StateProperties *)google::protobuf::internal::WireFormatLite::ReadString(a2);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v13 = (_BYTE *)*((_QWORD *)a2 + 1);
          v14 = (_BYTE *)*((_QWORD *)a2 + 2);
          if ( v13 >= v14 || *v13 != 10 )
          {
            if ( v13 == v14 && *((_DWORD *)a2 + 11) )
            {
              result = 1;
              *((_DWORD *)a2 + 8) = 0;
              *((_BYTE *)a2 + 36) = 1;
              return result;
            }
            goto LABEL_2;
          }
          *((_QWORD *)a2 + 1) = v13 + 1;
        }
      }
    }
    else
    {
      v7 = (unsigned __int8)*v6;
      *((_DWORD *)a2 + 8) = v7;
      *((_QWORD *)a2 + 1) = v6 + 1;
      if ( (_DWORD)v7 == 10 )
        goto LABEL_12;
    }
    if ( !(_DWORD)v7 || (v7 & 7) == 4 )
      return 1;
    this = (Caver::Proto::StateProperties *)google::protobuf::internal::WireFormatLite::SkipField(
                                              a2,
                                              (google::protobuf::io::CodedInputStream *)v7,
                                              a3);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
  }
}

