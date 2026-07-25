/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309A5C
 * Mangled: _ZN5Caver5Proto23TextureMappingComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::TextureMappingComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000309D0C  Caver::Proto::TextureMappingComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 74
 *   insn=0x0000000000309A74 string=0x0000000000309A78 "W"
 *   insn=0x0000000000309A88 string=0x0000000000309A8C ")"
 *   insn=0x0000000000309A98 string=0x0000000000309A9C "9a"
 *   insn=0x0000000000309A9C string=0x0000000000309AA0 "h"
 *   insn=0x0000000000309AA4 string=0x0000000000309AA8 """
 *   insn=0x0000000000309AA8 string=0x0000000000309AAC "\t"
 *   insn=0x0000000000309AB0 string=0x0000000000309AB4 "!"
 *   insn=0x0000000000309AB4 string=0x0000000000309AB8 ""
 *   insn=0x0000000000309AB8 string=0x0000000000309ABC "a""
 *   insn=0x0000000000309ABC string=0x0000000000309AC0 "h"
 *   insn=0x0000000000309AC4 string=0x0000000000309AC8 "}"
 *   insn=0x0000000000309AC4 string=0x0000000000309AE0 "(|"
 *   insn=0x0000000000309AD0 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000309AD4 string=0x0000000000309AD8 "a""
 *   insn=0x0000000000309AE8 string=0x0000000000309B20 "("
 *   insn=0x0000000000309AF0 string=0x0000000000309B10 "("
 *   insn=0x0000000000309AF8 string=0x0000000000309AFC "("
 *   insn=0x0000000000309AF8 string=0x0000000000309C14 "("
 *   insn=0x0000000000309B08 string=0x0000000000309B0C "/"
 *   insn=0x0000000000309B14 string=0x0000000000309B18 "`"
 *   insn=0x0000000000309B18 string=0x0000000000309B1C "?"
 *   insn=0x0000000000309B30 string=0x0000000000309B34 ""
 *   insn=0x0000000000309B34 string=0x0000000000309B38 "?"
 *   insn=0x0000000000309B48 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000309B4C string=0x0000000000309B50 "9"
 *   insn=0x0000000000309B5C string=0x0000000000309B60 " "
 *   insn=0x0000000000309B5C string=0x00000000001F97D0 "0'"
 *   insn=0x0000000000309B60 string=0x0000000000309B64 "h"
 *   insn=0x0000000000309B6C string=0x0000000000309B70 "\t"
 *   insn=0x0000000000309B70 string=0x0000000000309B74 "?U"
 *   insn=0x0000000000309B74 string=0x0000000000309B78 "A"
 *   insn=0x0000000000309B78 string=0x0000000000309B7C ""
 *   insn=0x0000000000309B7C string=0x0000000000309B80 "h"
 *   insn=0x0000000000309B8C string=0x00000000001FA750 "0'"
 *   insn=0x0000000000309B9C string=0x0000000000309BA0 "("
 *   insn=0x0000000000309BA4 string=0x0000000000309BA8 "i"
 *   insn=0x0000000000309BA8 string=0x0000000000309BAC "?"
 *   insn=0x0000000000309BB0 string=0x0000000000309BB4 "*"
 *   insn=0x0000000000309BB4 string=0x0000000000309BB8 "_i"
 *   insn=0x0000000000309BB8 string=0x0000000000309BBC "!"
 *   insn=0x0000000000309BBC string=0x0000000000309BC0 ")"
 *   insn=0x0000000000309BC0 string=0x0000000000309BC4 "i"
 *   insn=0x0000000000309BC8 string=0x0000000000309BCC ""
 *   insn=0x0000000000309BD4 string=0x0000000000309BEC "h"
 *   insn=0x0000000000309BE0 string=0x0000000000309BE4 ";"
 *   insn=0x0000000000309BE4 string=0x00000000001F7CD0 "0'"
 *   insn=0x0000000000309BF4 string=0x0000000000309BF8 "\t"
 *   insn=0x0000000000309BFC string=0x0000000000309C00 ")"
 *   insn=0x0000000000309C00 string=0x0000000000309C04 ""
 *   insn=0x0000000000309C08 string=0x0000000000309C0C "h"
 *   insn=0x0000000000309C10 string=0x0000000000309C40 "h&G)\n"
 *   insn=0x0000000000309C20 string=0x0000000000309C24 "+"
 *   insn=0x0000000000309C24 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000309C28 string=0x0000000000309C2C "&"
 *   insn=0x0000000000309C38 string=0x0000000000309C3C "@"
 *   insn=0x0000000000309C38 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000309C40 string=0x0000000000309C44 "\n"
 *   insn=0x0000000000309C48 string=0x0000000000309C4C "j:"
 *   insn=0x0000000000309C58 string=0x0000000000309C5C "I"
 *   insn=0x0000000000309C6C string=0x00000000001F5710 "P'"
 *   insn=0x0000000000309C70 string=0x0000000000309C74 "h"
 *   insn=0x0000000000309C74 string=0x0000000000309C78 "h"
 *   insn=0x0000000000309C80 string=0x0000000000309C84 "c"
 *   insn=0x0000000000309C84 string=0x0000000000309C88 "h:@"
 *   insn=0x0000000000309C88 string=0x0000000000309C8C ""
 *   insn=0x0000000000309C8C string=0x0000000000309C90 "K"
 *   insn=0x0000000000309C90 string=0x0000000000309C94 "h:"
 *   insn=0x0000000000309C90 string=0x0000000000309C98 "h"
 *   insn=0x0000000000309CA0 string=0x0000000000309CA4 "h.@"
 *   insn=0x0000000000309CB0 string=0x0000000000309CB4 "`"
 *   insn=0x0000000000309CD4 string=0x0000000000309CF4 "w"
 *   insn=0x0000000000309CF4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000309CFC string=0x0000000000309D00 "l"
 *   insn=0x0000000000309D00 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::MergePartialFromCodedStream(
        Caver::Proto::TextureMappingComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  int v10; // w8
  __int64 *v11; // x1
  _QWORD *v12; // x0
  _BYTE *v13; // x8
  int v14; // w9
  _BYTE *v15; // x9
  Caver::Proto::Vector2 *v16; // x21
  char *v17; // x8
  int v18; // w8
  int v19; // w9
  int v20; // w22
  int v21; // w8
  bool v22; // vf
  int v23; // w8
  __int64 result; // x0
  unsigned int v25; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v26; // [xsp+8h] [xbp-48h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    do
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
            goto LABEL_31;
          v11 = (__int64 *)*((_QWORD *)this + 2);
          *((_DWORD *)this + 10) |= 1u;
          if ( v11 == &Caver::Proto::TextureMappingComponent::_default_texture_name_ )
          {
            v12 = (_QWORD *)operator new(8u);
            *v12 = &byte_6FD2F8;
            *((_QWORD *)this + 2) = v12;
          }
          if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
            return 0;
          v13 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v13 < *((_QWORD *)a2 + 2) && *v13 == 21 )
          {
            *((_QWORD *)a2 + 1) = v13 + 1;
            goto LABEL_21;
          }
        }
        if ( v8 == 2 )
          break;
        if ( v8 == 3 )
        {
          v9 = v6 & 7;
          if ( v9 == 2 )
          {
            v10 = *((_DWORD *)this + 10);
            goto LABEL_25;
          }
        }
        else
        {
          v9 = v6 & 7;
        }
LABEL_31:
        if ( v9 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
      }
      v9 = v6 & 7;
      if ( v9 != 5 )
        goto LABEL_31;
LABEL_21:
      if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v25) & 1) == 0 )
        return 0;
      v14 = *((_DWORD *)this + 10);
      *((_DWORD *)this + 6) = v25;
      v10 = v14 | 2;
      *((_DWORD *)this + 10) = v14 | 2;
      v15 = (_BYTE *)*((_QWORD *)a2 + 1);
    }
    while ( (unsigned __int64)v15 >= *((_QWORD *)a2 + 2) || *v15 != 26 );
    *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_25:
    v16 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 4);
    *((_DWORD *)this + 10) = v10 | 4;
    if ( !v16 )
    {
      v16 = (Caver::Proto::Vector2 *)operator new(0x18u);
      Caver::Proto::Vector2::Vector2(v16);
      *((_QWORD *)this + 4) = v16;
    }
    v17 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v17 >= *((_QWORD *)a2 + 2) || *v17 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v25) & 1) == 0 )
        return 0;
    }
    else
    {
      v25 = (unsigned __int8)*v17;
      *((_QWORD *)a2 + 1) = v17 + 1;
    }
    v18 = *((_DWORD *)a2 + 14);
    v19 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v18 + 1;
    if ( v18 >= v19 )
      return 0;
    v20 = google::protobuf::io::CodedInputStream::PushLimit(a2, v25);
    if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v16, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v20);
    v21 = *((_DWORD *)a2 + 14);
    v22 = __OFSUB__(v21, 1);
    v23 = v21 - 1;
    if ( v23 < 0 == v22 )
      *((_DWORD *)a2 + 14) = v23;
    if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
    {
      result = 1;
      *((_DWORD *)a2 + 8) = 0;
      *((_BYTE *)a2 + 36) = 1;
      return result;
    }
  }
}

