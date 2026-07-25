/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F104
 * Mangled: _ZN5Caver5Proto18TouchableComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::TouchableComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000032F328  Caver::Proto::TouchableComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x000000000032F118 string=0x000000000032F11C "W"
 *   insn=0x000000000032F12C string=0x000000000032F130 "h"
 *   insn=0x000000000032F134 string=0x000000000032F138 """
 *   insn=0x000000000032F138 string=0x000000000032F13C "\t"
 *   insn=0x000000000032F140 string=0x000000000032F144 "!"
 *   insn=0x000000000032F144 string=0x000000000032F148 ""
 *   insn=0x000000000032F148 string=0x000000000032F14C "a""
 *   insn=0x000000000032F14C string=0x000000000032F150 "h"
 *   insn=0x000000000032F154 string=0x000000000032F158 "a"
 *   insn=0x000000000032F154 string=0x000000000032F170 "(|"
 *   insn=0x000000000032F15C string=0x000000000032F160 "8""
 *   insn=0x000000000032F160 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032F164 string=0x000000000032F168 "a""
 *   insn=0x000000000032F178 string=0x000000000032F198 "("
 *   insn=0x000000000032F180 string=0x000000000032F184 "("
 *   insn=0x000000000032F180 string=0x000000000032F234 "("
 *   insn=0x000000000032F188 string=0x000000000032F18C "a"
 *   insn=0x000000000032F1A8 string=0x000000000032F1AC "i-"
 *   insn=0x000000000032F1AC string=0x00000000001FA750 "0'"
 *   insn=0x000000000032F1BC string=0x000000000032F1C0 "("
 *   insn=0x000000000032F1C4 string=0x000000000032F1C8 "i"
 *   insn=0x000000000032F1C8 string=0x000000000032F1CC "?"
 *   insn=0x000000000032F1D0 string=0x000000000032F1D4 "*"
 *   insn=0x000000000032F1D4 string=0x000000000032F1D8 "_I"
 *   insn=0x000000000032F1DC string=0x000000000032F1E0 ")"
 *   insn=0x000000000032F1E0 string=0x000000000032F1E4 "i"
 *   insn=0x000000000032F1E8 string=0x000000000032F1EC ""
 *   insn=0x000000000032F1F4 string=0x000000000032F20C "h"
 *   insn=0x000000000032F1FC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032F204 string=0x00000000001F5000 "P'"
 *   insn=0x000000000032F214 string=0x000000000032F218 "\t"
 *   insn=0x000000000032F21C string=0x000000000032F220 ")"
 *   insn=0x000000000032F220 string=0x000000000032F224 ""
 *   insn=0x000000000032F228 string=0x000000000032F22C "h"
 *   insn=0x000000000032F230 string=0x000000000032F260 "h&G)\n"
 *   insn=0x000000000032F244 string=0x000000000032F248 "@"
 *   insn=0x000000000032F244 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000032F248 string=0x000000000032F24C "&"
 *   insn=0x000000000032F254 string=0x000000000032F258 "~'"
 *   insn=0x000000000032F258 string=0x000000000032F25C "@"
 *   insn=0x000000000032F258 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032F260 string=0x000000000032F264 "\n"
 *   insn=0x000000000032F268 string=0x000000000032F26C "j:"
 *   insn=0x000000000032F28C string=0x00000000001F8D20 "0'"
 *   insn=0x000000000032F290 string=0x000000000032F294 "h"
 *   insn=0x000000000032F294 string=0x000000000032F298 "h"
 *   insn=0x000000000032F2A4 string=0x000000000032F2A8 "h:@"
 *   insn=0x000000000032F2A8 string=0x000000000032F2AC ""
 *   insn=0x000000000032F2AC string=0x000000000032F2B0 "K"
 *   insn=0x000000000032F2B0 string=0x000000000032F2B4 "h:"
 *   insn=0x000000000032F2B0 string=0x000000000032F2B8 "h"
 *   insn=0x000000000032F2C0 string=0x000000000032F2C4 "h.@"
 *   insn=0x000000000032F2C4 string=0x000000000032F2C8 "H"
 *   insn=0x000000000032F2D0 string=0x000000000032F2D4 "`"
 *   insn=0x000000000032F310 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032F31C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032F320 string=0x000000000032F324 "hI\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TouchableComponent::MergePartialFromCodedStream(
        Caver::Proto::TouchableComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  int v9; // w8
  int v10; // w9
  _BYTE *v11; // x9
  Caver::Proto::Program *v12; // x21
  char *v13; // x8
  int v14; // w8
  int v15; // w9
  int v16; // w22
  int v17; // w8
  bool v18; // vf
  int v19; // w8
  __int64 result; // x0
  unsigned int v21; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v22; // [xsp+8h] [xbp-38h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
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
        if ( (unsigned int)v6 >> 3 == 1 )
          break;
        if ( (unsigned int)v6 >> 3 == 2 )
        {
          v8 = v6 & 7;
          if ( v8 == 2 )
          {
            v9 = *((_DWORD *)this + 6);
            goto LABEL_16;
          }
        }
        else
        {
          v8 = v6 & 7;
        }
LABEL_22:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
      }
      v8 = v6 & 7;
      if ( v8 != 5 )
        goto LABEL_22;
      if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v21) & 1) == 0 )
        return 0;
      v10 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 3) = v21;
      v9 = v10 | 1;
      *((_DWORD *)this + 6) = v10 | 1;
      v11 = (_BYTE *)*((_QWORD *)a2 + 1);
    }
    while ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 != 18 );
    *((_QWORD *)a2 + 1) = v11 + 1;
LABEL_16:
    v12 = (Caver::Proto::Program *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 6) = v9 | 2;
    if ( !v12 )
    {
      v12 = (Caver::Proto::Program *)operator new(0x30u);
      Caver::Proto::Program::Program(v12);
      *((_QWORD *)this + 2) = v12;
    }
    v13 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) || *v13 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v21) & 1) == 0 )
        return 0;
    }
    else
    {
      v21 = (unsigned __int8)*v13;
      *((_QWORD *)a2 + 1) = v13 + 1;
    }
    v14 = *((_DWORD *)a2 + 14);
    v15 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v14 + 1;
    if ( v14 >= v15 )
      return 0;
    v16 = google::protobuf::io::CodedInputStream::PushLimit(a2, v21);
    if ( (Caver::Proto::Program::MergePartialFromCodedStream(v12, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v16);
    v17 = *((_DWORD *)a2 + 14);
    v18 = __OFSUB__(v17, 1);
    v19 = v17 - 1;
    if ( v19 < 0 == v18 )
      *((_DWORD *)a2 + 14) = v19;
    if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
    {
      result = 1;
      *((_DWORD *)a2 + 8) = 0;
      *((_BYTE *)a2 + 36) = 1;
      return result;
    }
  }
}

