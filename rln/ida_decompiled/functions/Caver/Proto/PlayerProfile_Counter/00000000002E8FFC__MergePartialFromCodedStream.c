/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8FFC
 * Mangled: _ZN5Caver5Proto21PlayerProfile_Counter27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F7B50  Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 54
 *   insn=0x00000000002E9010 string=0x00000000002E9014 "U"
 *   insn=0x00000000002E9024 string=0x00000000002E9028 ")"
 *   insn=0x00000000002E9034 string=0x00000000002E9038 "7a"
 *   insn=0x00000000002E9038 string=0x00000000002E903C "h"
 *   insn=0x00000000002E9040 string=0x00000000002E9044 """
 *   insn=0x00000000002E9044 string=0x00000000002E9048 "\t"
 *   insn=0x00000000002E904C string=0x00000000002E9050 "!"
 *   insn=0x00000000002E9050 string=0x00000000002E9054 ""
 *   insn=0x00000000002E9054 string=0x00000000002E9058 "a""
 *   insn=0x00000000002E9058 string=0x00000000002E905C "h"
 *   insn=0x00000000002E9060 string=0x00000000002E9064 "I"
 *   insn=0x00000000002E9060 string=0x00000000002E907C "(|"
 *   insn=0x00000000002E9068 string=0x00000000002E906C "u:"
 *   insn=0x00000000002E906C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002E9070 string=0x00000000002E9074 "a""
 *   insn=0x00000000002E9084 string=0x00000000002E90C0 "("
 *   insn=0x00000000002E908C string=0x00000000002E9090 "("
 *   insn=0x00000000002E908C string=0x00000000002E9168 "("
 *   insn=0x00000000002E9094 string=0x00000000002E9098 "i"
 *   insn=0x00000000002E9098 string=0x00000000002E909C "?"
 *   insn=0x00000000002E909C string=0x00000000002E90A0 "b"
 *   insn=0x00000000002E90A0 string=0x00000000002E90A4 "*"
 *   insn=0x00000000002E90A4 string=0x00000000002E90A8 "*"
 *   insn=0x00000000002E90A8 string=0x00000000002E90AC "J"
 *   insn=0x00000000002E90AC string=0x00000000002E90B0 ")"
 *   insn=0x00000000002E90B4 string=0x00000000002E90B8 "i"
 *   insn=0x00000000002E90B8 string=0x00000000002E90BC """
 *   insn=0x00000000002E90C4 string=0x00000000002E90C8 "!"
 *   insn=0x00000000002E90D0 string=0x00000000002E90D4 ""
 *   insn=0x00000000002E90D4 string=0x00000000002E90D8 "?"
 *   insn=0x00000000002E90E4 string=0x00000000002E90E8 ">1"
 *   insn=0x00000000002E90E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E90EC string=0x00000000002E90F0 "7"
 *   insn=0x00000000002E90FC string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002E9100 string=0x00000000002E9104 "i"
 *   insn=0x00000000002E9104 string=0x00000000002E9108 "?"
 *   insn=0x00000000002E910C string=0x00000000002E9110 "*"
 *   insn=0x00000000002E9110 string=0x00000000002E9114 "_A"
 *   insn=0x00000000002E9114 string=0x00000000002E9118 "!"
 *   insn=0x00000000002E9118 string=0x00000000002E911C ")"
 *   insn=0x00000000002E911C string=0x00000000002E9120 "i"
 *   insn=0x00000000002E9120 string=0x00000000002E9124 "?"
 *   insn=0x00000000002E9134 string=0x00000000002E9138 "@"
 *   insn=0x00000000002E9134 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002E913C string=0x00000000002E9140 "i"
 *   insn=0x00000000002E9148 string=0x00000000002E914C "?"
 *   insn=0x00000000002E914C string=0x00000000002E9150 "j"
 *   insn=0x00000000002E9154 string=0x00000000002E9158 "!"
 *   insn=0x00000000002E9158 string=0x00000000002E915C "h.@"
 *   insn=0x00000000002E9178 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002E9194 string=0x00000000002E9198 "a"
 *   insn=0x00000000002E9198 string=0x00000000002E91C4 "C4"
 *   insn=0x00000000002E91B8 string=0x00000000002E91BC "`"
 *   insn=0x00000000002E91C4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(
        Caver::Proto::PlayerProfile_Counter *this,
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
  unsigned __int8 *v12; // x9
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
      if ( v13 == &Caver::Proto::PlayerProfile_Counter::_default_name_ )
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
        *((_QWORD *)a2 + 1) = v10;
        if ( (unsigned __int64)v10 >= v9 )
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
        *((_DWORD *)this + 6) = v11;
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

