/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5BE4
 * Mangled: _ZN5Caver5Proto7Program27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FC6E0  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 50
 *   insn=0x00000000002D5C14 string=0x00000000002D5C18 "9"
 *   insn=0x00000000002D5C24 string=0x00000000002D5C28 "h"
 *   insn=0x00000000002D5C2C string=0x00000000002D5C30 """
 *   insn=0x00000000002D5C30 string=0x00000000002D5C34 "\t"
 *   insn=0x00000000002D5C38 string=0x00000000002D5C3C "!"
 *   insn=0x00000000002D5C3C string=0x00000000002D5C40 ""
 *   insn=0x00000000002D5C40 string=0x00000000002D5C44 "a""
 *   insn=0x00000000002D5C44 string=0x00000000002D5C48 "h"
 *   insn=0x00000000002D5C4C string=0x00000000002D5C50 "b"
 *   insn=0x00000000002D5C4C string=0x00000000002D5C68 "(|"
 *   insn=0x00000000002D5C54 string=0x00000000002D5C58 "z"
 *   insn=0x00000000002D5C58 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D5C5C string=0x00000000002D5C60 "a""
 *   insn=0x00000000002D5C6C string=0x00000000002D5C70 " "
 *   insn=0x00000000002D5C70 string=0x00000000002D5C94 "("
 *   insn=0x00000000002D5C74 string=0x00000000002D5C78 " "
 *   insn=0x00000000002D5C78 string=0x00000000002D5CFC "("
 *   insn=0x00000000002D5C80 string=0x00000000002D5C84 "("
 *   insn=0x00000000002D5C80 string=0x00000000002D5DB8 "("
 *   insn=0x00000000002D5C8C string=0x00000000002D5C90 "K"
 *   insn=0x00000000002D5CA4 string=0x00000000002D5CA8 ""
 *   insn=0x00000000002D5CA8 string=0x00000000002D5CAC "?"
 *   insn=0x00000000002D5CB8 string=0x00000000002D5CBC "I~"
 *   insn=0x00000000002D5CBC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D5CC0 string=0x00000000002D5CC4 "8"
 *   insn=0x00000000002D5CD0 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002D5CD4 string=0x00000000002D5CD8 "h"
 *   insn=0x00000000002D5CDC string=0x00000000002D5CE0 "B"
 *   insn=0x00000000002D5CE0 string=0x00000000002D5CE4 "\t"
 *   insn=0x00000000002D5CE4 string=0x00000000002D5CE8 "?I"
 *   insn=0x00000000002D5CEC string=0x00000000002D5CF0 ""
 *   insn=0x00000000002D5CF0 string=0x00000000002D5CF4 "h"
 *   insn=0x00000000002D5D0C string=0x00000000002D5D10 ""
 *   insn=0x00000000002D5D10 string=0x00000000002D5D14 "?"
 *   insn=0x00000000002D5D20 string=0x00000000002D5D24 "/~"
 *   insn=0x00000000002D5D2C string=0x00000000002D5D30 "("
 *   insn=0x00000000002D5D38 string=0x00000000002D5D3C "i"
 *   insn=0x00000000002D5D3C string=0x00000000001FC6E0 "0'"
 *   insn=0x00000000002D5D40 string=0x00000000002D5D44 "h"
 *   insn=0x00000000002D5D4C string=0x00000000002D5D50 "\t"
 *   insn=0x00000000002D5D50 string=0x00000000002D5D54 "?i"
 *   insn=0x00000000002D5D58 string=0x00000000002D5D5C ""
 *   insn=0x00000000002D5D5C string=0x00000000002D5D60 "h"
 *   insn=0x00000000002D5D68 string=0x00000000002D5D6C ""
 *   insn=0x00000000002D5D6C string=0x00000000002D5D70 "?"
 *   insn=0x00000000002D5D88 string=0x00000000002D5D8C "("
 *   insn=0x00000000002D5D9C string=0x00000000002D5DA0 "h"
 *   insn=0x00000000002D5DA8 string=0x00000000002D5DAC "h.@"
 *   insn=0x00000000002D5DC8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D5DF8 string=0x00000000002D5DFC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Program::MergePartialFromCodedStream(
        Caver::Proto::Program *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  __int64 *v10; // x1
  _QWORD *v11; // x0
  _BYTE *v12; // x8
  __int64 *v13; // x1
  _QWORD *v14; // x0
  _BYTE *v15; // x8
  __int64 *v16; // x1
  _QWORD *v17; // x0
  __int64 result; // x0

  while ( 1 )
  {
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
        v8 = (unsigned int)v6 >> 3;
        if ( (unsigned int)v6 >> 3 != 1 )
          break;
        v9 = v6 & 7;
        if ( v9 != 2 )
          goto LABEL_32;
        v10 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 10) |= 2u;
        if ( v10 == &Caver::Proto::Program::_default_string_ )
        {
          v11 = (_QWORD *)operator new(8u);
          *v11 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v11;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 < *((_QWORD *)a2 + 2) && *v12 == 18 )
        {
          *((_QWORD *)a2 + 1) = v12 + 1;
LABEL_19:
          v13 = (__int64 *)*((_QWORD *)this + 4);
          *((_DWORD *)this + 10) |= 4u;
          if ( v13 == &Caver::Proto::Program::_default_bytes_ )
          {
            v14 = (_QWORD *)operator new(8u);
            *v14 = &byte_6FD2F8;
            *((_QWORD *)this + 4) = v14;
          }
          if ( (google::protobuf::internal::WireFormatLite::ReadBytes(a2) & 1) == 0 )
            return 0;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v15 < *((_QWORD *)a2 + 2) && *v15 == 26 )
          {
            *((_QWORD *)a2 + 1) = v15 + 1;
            goto LABEL_25;
          }
        }
      }
      if ( v8 == 2 )
      {
        v9 = v6 & 7;
        if ( v9 != 2 )
          break;
        goto LABEL_19;
      }
      if ( v8 != 3 )
      {
        v9 = v6 & 7;
        break;
      }
      v9 = v6 & 7;
      if ( v9 != 2 )
        break;
LABEL_25:
      v16 = (__int64 *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 10) |= 1u;
      if ( v16 == &Caver::Proto::Program::_default_name_ )
      {
        v17 = (_QWORD *)operator new(8u);
        *v17 = &byte_6FD2F8;
        *((_QWORD *)this + 2) = v17;
      }
      if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
        return 0;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
LABEL_32:
    if ( v9 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

