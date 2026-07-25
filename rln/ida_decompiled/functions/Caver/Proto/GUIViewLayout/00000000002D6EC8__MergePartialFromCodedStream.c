/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6EC8
 * Mangled: _ZN5Caver5Proto13GUIViewLayout27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 2
 *   0x00000000001FB460  Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D6EC8  Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8760  Caver::Proto::GUIMargins::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 104
 *   insn=0x00000000002D6EE4 string=0x00000000002D6EE8 "X"
 *   insn=0x00000000002D6EE8 string=0x00000000002D6EEC "y "
 *   insn=0x00000000002D6EEC string=0x00000000002D6EF0 "h "
 *   insn=0x00000000002D6EF0 string=0x00000000002D6EF4 "i "
 *   insn=0x00000000002D6EF4 string=0x00000000002D6EF8 "k "
 *   insn=0x00000000002D6EF8 string=0x00000000002D6EFC "9[E"
 *   insn=0x00000000002D6EFC string=0x00000000002D6F00 ""
 *   insn=0x00000000002D6F00 string=0x00000000002D6F04 ")"
 *   insn=0x00000000002D6F04 string=0x00000000002D6F08 "\n"
 *   insn=0x00000000002D6F08 string=0x00000000002D6F0C "k"
 *   insn=0x00000000002D6F18 string=0x00000000002D6F1C "a"
 *   insn=0x00000000002D6F1C string=0x00000000002D6F20 "<A"
 *   insn=0x00000000002D6F20 string=0x00000000002D6F24 "zA"
 *   insn=0x00000000002D6F28 string=0x00000000002D6F2C "h"
 *   insn=0x00000000002D6F30 string=0x00000000002D6F34 """
 *   insn=0x00000000002D6F34 string=0x00000000002D6F38 "\t"
 *   insn=0x00000000002D6F3C string=0x00000000002D6F40 "!"
 *   insn=0x00000000002D6F40 string=0x00000000002D6F44 ""
 *   insn=0x00000000002D6F44 string=0x00000000002D6F48 "a""
 *   insn=0x00000000002D6F48 string=0x00000000002D6F4C "h"
 *   insn=0x00000000002D6F50 string=0x00000000002D6F6C "(|"
 *   insn=0x00000000002D6F5C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D6F60 string=0x00000000002D6F64 "a""
 *   insn=0x00000000002D6F74 string=0x00000000002D6FA8 "("
 *   insn=0x00000000002D6F7C string=0x00000000002D6F98 "("
 *   insn=0x00000000002D6F80 string=0x00000000002D6F84 "!"
 *   insn=0x00000000002D6F84 string=0x00000000002D6F88 "("
 *   insn=0x00000000002D6F84 string=0x00000000002D7008 "("
 *   insn=0x00000000002D6F90 string=0x00000000002D6F94 "x"
 *   insn=0x00000000002D6F9C string=0x00000000002D6FA0 "a"
 *   insn=0x00000000002D6FA0 string=0x00000000002D6FA4 " "
 *   insn=0x00000000002D6FB8 string=0x00000000002D6FBC ""
 *   insn=0x00000000002D6FBC string=0x00000000002D6FC0 "?"
 *   insn=0x00000000002D6FD0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D6FD4 string=0x00000000002D6FD8 ";"
 *   insn=0x00000000002D6FE4 string=0x00000000002D6FE8 "`"
 *   insn=0x00000000002D6FE4 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002D6FE8 string=0x00000000002D6FEC "h"
 *   insn=0x00000000002D6FF4 string=0x00000000002D6FF8 "\t"
 *   insn=0x00000000002D6FF8 string=0x00000000002D6FFC "?I"
 *   insn=0x00000000002D6FFC string=0x00000000002D7000 "a"
 *   insn=0x00000000002D7000 string=0x00000000002D7004 "T"
 *   insn=0x00000000002D7004 string=0x00000000002D7154 ""
 *   insn=0x00000000002D700C string=0x00000000002D7010 "`"
 *   insn=0x00000000002D7014 string=0x00000000002D7018 "."
 *   insn=0x00000000002D7018 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D7044 string=0x00000000002D70AC "h"
 *   insn=0x00000000002D7050 string=0x00000000002D7064 ""
 *   insn=0x00000000002D7058 string=0x00000000002D705C "1"
 *   insn=0x00000000002D705C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D706C string=0x00000000002D7070 "\y"
 *   insn=0x00000000002D70B4 string=0x00000000002D70B8 "\t"
 *   insn=0x00000000002D70BC string=0x00000000002D70C0 ")"
 *   insn=0x00000000002D70C0 string=0x00000000002D70C4 ""
 *   insn=0x00000000002D70C8 string=0x00000000002D70CC "h"
 *   insn=0x00000000002D70D0 string=0x00000000002D70E4 "h&G)\n"
 *   insn=0x00000000002D70DC string=0x00000000001F9050 "0'"
 *   insn=0x00000000002D70E4 string=0x00000000002D70E8 "\n"
 *   insn=0x00000000002D70EC string=0x00000000002D70F0 "j:"
 *   insn=0x00000000002D70F0 string=0x00000000002D70F4 "\n"
 *   insn=0x00000000002D70FC string=0x00000000002D7100 " "
 *   insn=0x00000000002D710C string=0x00000000002D7110 "n"
 *   insn=0x00000000002D7114 string=0x00000000002D7118 "h"
 *   insn=0x00000000002D7124 string=0x00000000002D7128 ":"
 *   insn=0x00000000002D7128 string=0x00000000002D712C "h:@"
 *   insn=0x00000000002D712C string=0x00000000002D7130 ""
 *   insn=0x00000000002D7130 string=0x00000000002D7134 "K"
 *   insn=0x00000000002D7134 string=0x00000000002D7138 "h:"
 *   insn=0x00000000002D7134 string=0x00000000002D713C "h"
 *   insn=0x00000000002D7140 string=0x00000000002D7144 "B"
 *   insn=0x00000000002D7144 string=0x00000000002D7148 "\t"
 *   insn=0x00000000002D7148 string=0x00000000002D714C "?I"
 *   insn=0x00000000002D7150 string=0x00000000002D7160 "\t"
 *   insn=0x00000000002D7154 string=0x00000000002D7158 "h"
 *   insn=0x00000000002D7160 string=0x00000000002D7164 "?i"
 *   insn=0x00000000002D7164 string=0x00000000002D7168 "!"
 *   insn=0x00000000002D7168 string=0x00000000002D716C ""
 *   insn=0x00000000002D716C string=0x00000000002D7170 "h"
 *   insn=0x00000000002D7178 string=0x00000000002D717C ""
 *   insn=0x00000000002D7184 string=0x00000000002D71A0 "h"
 *   insn=0x00000000002D71A8 string=0x00000000002D71AC "\t"
 *   insn=0x00000000002D71B0 string=0x00000000002D71B4 ")"
 *   insn=0x00000000002D71B4 string=0x00000000002D71B8 ""
 *   insn=0x00000000002D71BC string=0x00000000002D71C0 "h"
 *   insn=0x00000000002D71C4 string=0x00000000002D71D8 "h&G)\n"
 *   insn=0x00000000002D71D8 string=0x00000000002D71DC "\n"
 *   insn=0x00000000002D71E0 string=0x00000000002D71E4 "j:"
 *   insn=0x00000000002D71E4 string=0x00000000002D71E8 "j"
 *   insn=0x00000000002D7200 string=0x00000000002D7204 "W"
 *   insn=0x00000000002D7204 string=0x00000000002D7208 "`"
 *   insn=0x00000000002D7204 string=0x00000000001F8760 "0'"
 *   insn=0x00000000002D7208 string=0x00000000002D720C "h"
 *   insn=0x00000000002D720C string=0x00000000002D7210 "("
 *   insn=0x00000000002D721C string=0x00000000002D7220 "h:@"
 *   insn=0x00000000002D7220 string=0x00000000002D7224 ""
 *   insn=0x00000000002D7224 string=0x00000000002D7228 "K"
 *   insn=0x00000000002D7228 string=0x00000000002D722C "h:"
 *   insn=0x00000000002D7228 string=0x00000000002D7230 "h"
 *   insn=0x00000000002D7238 string=0x00000000002D723C "h.@"
 *   insn=0x00000000002D723C string=0x00000000002D7240 "h"
 *   insn=0x00000000002D7248 string=0x00000000002D724C "`"
 *   insn=0x00000000002D7250 string=0x00000000002D7260 ""
 *   insn=0x00000000002D7268 string=0x00000000002D726C "!"
 *   insn=0x00000000002D7290 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(
        Caver::Proto::GUIViewLayout *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  unsigned int v9; // w8
  int v10; // w8
  __int64 *v11; // x1
  _QWORD *v12; // x0
  _BYTE *v13; // x8
  int v14; // w8
  int v15; // w23
  __int64 v16; // x8
  __int64 v17; // x22
  __int64 v18; // x8
  char *v19; // x8
  int v20; // w8
  int v21; // w9
  int v22; // w23
  int v23; // w8
  bool v24; // vf
  int v25; // w8
  Caver::Proto::GUIMargins *v26; // x22
  char *v27; // x8
  int v28; // w8
  int v29; // w9
  int v30; // w23
  int v31; // w8
  int v32; // w8
  __int64 result; // x0
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v35; // [xsp+8h] [xbp-58h]

  v5 = (Caver::Proto::GUIViewLayout *)((char *)this + 24);
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
      if ( (unsigned int)v7 >> 3 != 1 )
        break;
      v10 = v7 & 7;
      if ( v10 != 2 )
        goto LABEL_22;
      v11 = (__int64 *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 22) |= 1u;
      if ( v11 == &Caver::Proto::GUIViewLayout::_default_identifier_ )
      {
        v12 = (_QWORD *)operator new(8u);
        *v12 = &byte_6FD2F8;
        *((_QWORD *)this + 2) = v12;
      }
      if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
        return 0;
      v13 = (_BYTE *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v13 < *((_QWORD *)a2 + 2) && *v13 == 18 )
      {
        while ( 1 )
        {
          *((_QWORD *)a2 + 1) = v13 + 1;
LABEL_25:
          v15 = *((_DWORD *)this + 8);
          v14 = *((_DWORD *)this + 9);
          if ( v15 >= v14 )
          {
            if ( v14 == *((_DWORD *)this + 10) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v14 + 1);
              v15 = *((_DWORD *)this + 8);
              v14 = *((_DWORD *)this + 9);
            }
            *((_DWORD *)this + 9) = v14 + 1;
            v17 = operator new(0x60u);
            *(_QWORD *)v17 = off_6C6098;
            *(_QWORD *)(v17 + 24) = v17 + 48;
            *(_QWORD *)(v17 + 32) = 0;
            *(_DWORD *)(v17 + 40) = 4;
            *(_DWORD *)(v17 + 8) = 0;
            *(_QWORD *)(v17 + 80) = 0;
            *(_QWORD *)(v17 + 16) = &Caver::Proto::GUIViewLayout::_default_identifier_;
            *(_DWORD *)(v17 + 88) = 0;
            v18 = *((_QWORD *)this + 3);
            *((_DWORD *)this + 8) = v15 + 1;
            *(_QWORD *)(v18 + 8LL * v15) = v17;
          }
          else
          {
            v16 = *((_QWORD *)this + 3);
            *((_DWORD *)this + 8) = v15 + 1;
            v17 = *(_QWORD *)(v16 + 8LL * v15);
          }
          v19 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v19 >= *((_QWORD *)a2 + 2) || *v19 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
              return 0;
          }
          else
          {
            v34 = (unsigned __int8)*v19;
            *((_QWORD *)a2 + 1) = v19 + 1;
          }
          v20 = *((_DWORD *)a2 + 14);
          v21 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v20 + 1;
          if ( v20 >= v21 )
            return 0;
          v22 = google::protobuf::io::CodedInputStream::PushLimit(a2, v34);
          if ( (Caver::Proto::GUIViewLayout::MergePartialFromCodedStream((Caver::Proto::GUIViewLayout *)v17, a2) & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v22);
          v23 = *((_DWORD *)a2 + 14);
          v24 = __OFSUB__(v23, 1);
          v25 = v23 - 1;
          if ( v25 < 0 == v24 )
            *((_DWORD *)a2 + 14) = v25;
          v13 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) )
            break;
          if ( *v13 != 18 )
          {
            if ( *v13 == 26 )
            {
              *((_QWORD *)a2 + 1) = v13 + 1;
LABEL_44:
              v26 = (Caver::Proto::GUIMargins *)*((_QWORD *)this + 10);
              *((_DWORD *)this + 22) |= 4u;
              if ( !v26 )
              {
                v26 = (Caver::Proto::GUIMargins *)operator new(0x20u);
                *((_QWORD *)v26 + 2) = 0;
                *((_QWORD *)v26 + 3) = 0;
                *(_QWORD *)v26 = off_6C6020;
                *((_QWORD *)v26 + 1) = 0;
                *((_QWORD *)this + 10) = v26;
              }
              v27 = (char *)*((_QWORD *)a2 + 1);
              if ( (unsigned __int64)v27 >= *((_QWORD *)a2 + 2) || *v27 < 0 )
              {
                if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
                  return 0;
              }
              else
              {
                v34 = (unsigned __int8)*v27;
                *((_QWORD *)a2 + 1) = v27 + 1;
              }
              v28 = *((_DWORD *)a2 + 14);
              v29 = *((_DWORD *)a2 + 15);
              *((_DWORD *)a2 + 14) = v28 + 1;
              if ( v28 >= v29 )
                return 0;
              v30 = google::protobuf::io::CodedInputStream::PushLimit(a2, v34);
              if ( (Caver::Proto::GUIMargins::MergePartialFromCodedStream(v26, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
                return 0;
              google::protobuf::io::CodedInputStream::PopLimit(a2, v30);
              v31 = *((_DWORD *)a2 + 14);
              v24 = __OFSUB__(v31, 1);
              v32 = v31 - 1;
              if ( v32 < 0 == v24 )
                *((_DWORD *)a2 + 14) = v32;
              if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
              {
                result = 1;
                *((_DWORD *)a2 + 8) = 0;
                *((_BYTE *)a2 + 36) = 1;
                return result;
              }
            }
            goto LABEL_2;
          }
        }
      }
    }
    if ( v9 == 2 )
    {
      v10 = v7 & 7;
      if ( v10 != 2 )
        goto LABEL_22;
      goto LABEL_25;
    }
    if ( v9 == 3 )
    {
      v10 = v7 & 7;
      if ( v10 == 2 )
        goto LABEL_44;
    }
    else
    {
      v10 = v7 & 7;
    }
LABEL_22:
    if ( v10 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v7, a3) & 1) == 0 )
      return 0;
  }
}

