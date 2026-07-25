/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310994
 * Mangled: _ZN5Caver5Proto15ShadowComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ShadowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000310C14  Caver::Proto::ShadowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 71
 *   insn=0x00000000003109A8 string=0x00000000003109AC "W"
 *   insn=0x00000000003109BC string=0x00000000003109C0 "h"
 *   insn=0x00000000003109C4 string=0x00000000003109C8 """
 *   insn=0x00000000003109C8 string=0x00000000003109CC "\t"
 *   insn=0x00000000003109D0 string=0x00000000003109D4 "!"
 *   insn=0x00000000003109D4 string=0x00000000003109D8 ""
 *   insn=0x00000000003109D8 string=0x00000000003109DC "a""
 *   insn=0x00000000003109DC string=0x00000000003109E0 "h"
 *   insn=0x00000000003109E4 string=0x00000000003109E8 "x"
 *   insn=0x00000000003109E4 string=0x0000000000310A00 "(|"
 *   insn=0x00000000003109F0 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003109F4 string=0x00000000003109F8 "a""
 *   insn=0x00000000003109F8 string=0x00000000003109FC "a"
 *   insn=0x0000000000310A08 string=0x0000000000310A40 "("
 *   insn=0x0000000000310A10 string=0x0000000000310A30 "("
 *   insn=0x0000000000310A14 string=0x0000000000310A18 "A"
 *   insn=0x0000000000310A18 string=0x0000000000310A1C "("
 *   insn=0x0000000000310A18 string=0x0000000000310B20 "("
 *   insn=0x0000000000310A28 string=0x0000000000310A2C "*"
 *   insn=0x0000000000310A38 string=0x0000000000310A3C ":"
 *   insn=0x0000000000310A50 string=0x0000000000310A54 "?"
 *   insn=0x0000000000310A54 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000310A64 string=0x0000000000310A68 "("
 *   insn=0x0000000000310A6C string=0x0000000000310A70 "h"
 *   insn=0x0000000000310A74 string=0x0000000000310A78 "B"
 *   insn=0x0000000000310A78 string=0x0000000000310A7C "\t"
 *   insn=0x0000000000310A7C string=0x0000000000310A80 "?U"
 *   insn=0x0000000000310A84 string=0x0000000000310A88 ""
 *   insn=0x0000000000310A88 string=0x0000000000310A8C "h"
 *   insn=0x0000000000310A94 string=0x0000000000310A98 "."
 *   insn=0x0000000000310AA8 string=0x0000000000310AAC "("
 *   insn=0x0000000000310AB0 string=0x0000000000310AB4 "i"
 *   insn=0x0000000000310AB4 string=0x0000000000310AB8 "?"
 *   insn=0x0000000000310AB8 string=0x0000000000310ABC """
 *   insn=0x0000000000310ABC string=0x0000000000310AC0 "*"
 *   insn=0x0000000000310AC0 string=0x0000000000310AC4 "_i"
 *   insn=0x0000000000310AC8 string=0x0000000000310ACC ")"
 *   insn=0x0000000000310ACC string=0x0000000000310AD0 "i"
 *   insn=0x0000000000310AD4 string=0x0000000000310AD8 ""
 *   insn=0x0000000000310AE0 string=0x0000000000310AF8 "h"
 *   insn=0x0000000000310AE8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000310AF0 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000310B00 string=0x0000000000310B04 "\t"
 *   insn=0x0000000000310B08 string=0x0000000000310B0C ")"
 *   insn=0x0000000000310B0C string=0x0000000000310B10 ""
 *   insn=0x0000000000310B14 string=0x0000000000310B18 "h"
 *   insn=0x0000000000310B1C string=0x0000000000310B4C "h&G)\n"
 *   insn=0x0000000000310B2C string=0x0000000000310B30 "h"
 *   insn=0x0000000000310B30 string=0x0000000000310B34 "`"
 *   insn=0x0000000000310B30 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000310B34 string=0x0000000000310B38 "&"
 *   insn=0x0000000000310B40 string=0x0000000000310B44 "C"
 *   insn=0x0000000000310B44 string=0x0000000000310B48 "@"
 *   insn=0x0000000000310B44 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000310B4C string=0x0000000000310B50 "\n"
 *   insn=0x0000000000310B54 string=0x0000000000310B58 "j:"
 *   insn=0x0000000000310B74 string=0x0000000000310B78 "v"
 *   insn=0x0000000000310B78 string=0x00000000001F6150 "0'"
 *   insn=0x0000000000310B7C string=0x0000000000310B80 "h"
 *   insn=0x0000000000310B80 string=0x0000000000310B84 "h"
 *   insn=0x0000000000310B90 string=0x0000000000310B94 "h:@"
 *   insn=0x0000000000310B94 string=0x0000000000310B98 ""
 *   insn=0x0000000000310B98 string=0x0000000000310B9C "K"
 *   insn=0x0000000000310B9C string=0x0000000000310BA0 "h:"
 *   insn=0x0000000000310B9C string=0x0000000000310BA4 "h"
 *   insn=0x0000000000310BAC string=0x0000000000310BB0 "h.@"
 *   insn=0x0000000000310BB0 string=0x0000000000310BB4 "h"
 *   insn=0x0000000000310BBC string=0x0000000000310BC0 "`"
 *   insn=0x0000000000310BFC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000310C08 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000310C0C string=0x0000000000310C10 "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShadowComponent::MergePartialFromCodedStream(
        Caver::Proto::ShadowComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  int v10; // w8
  int v11; // w9
  _BYTE *v12; // x8
  int v13; // w9
  _BYTE *v14; // x9
  Caver::Proto::Vector3 *v15; // x21
  char *v16; // x8
  int v17; // w8
  int v18; // w9
  int v19; // w22
  int v20; // w8
  bool v21; // vf
  int v22; // w8
  __int64 result; // x0
  unsigned int v24; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v25; // [xsp+8h] [xbp-38h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          if ( v9 != 5 )
            goto LABEL_29;
          if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v24) & 1) == 0 )
            return 0;
          v11 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 3) = v24;
          *((_DWORD *)this + 8) = v11 | 1;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v12 < *((_QWORD *)a2 + 2) && *v12 == 21 )
          {
            *((_QWORD *)a2 + 1) = v12 + 1;
            goto LABEL_19;
          }
        }
        if ( v8 == 2 )
          break;
        if ( v8 == 3 )
        {
          v9 = v6 & 7;
          if ( v9 == 2 )
          {
            v10 = *((_DWORD *)this + 8);
            goto LABEL_23;
          }
        }
        else
        {
          v9 = v6 & 7;
        }
LABEL_29:
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
        goto LABEL_29;
LABEL_19:
      if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v24) & 1) == 0 )
        return 0;
      v13 = *((_DWORD *)this + 8);
      *((_DWORD *)this + 4) = v24;
      v10 = v13 | 2;
      *((_DWORD *)this + 8) = v13 | 2;
      v14 = (_BYTE *)*((_QWORD *)a2 + 1);
    }
    while ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 26 );
    *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_23:
    v15 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) = v10 | 4;
    if ( !v15 )
    {
      v15 = (Caver::Proto::Vector3 *)operator new(0x20u);
      Caver::Proto::Vector3::Vector3(v15);
      *((_QWORD *)this + 3) = v15;
    }
    v16 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
        return 0;
    }
    else
    {
      v24 = (unsigned __int8)*v16;
      *((_QWORD *)a2 + 1) = v16 + 1;
    }
    v17 = *((_DWORD *)a2 + 14);
    v18 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v17 + 1;
    if ( v17 >= v18 )
      return 0;
    v19 = google::protobuf::io::CodedInputStream::PushLimit(a2, v24);
    if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v15, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v19);
    v20 = *((_DWORD *)a2 + 14);
    v21 = __OFSUB__(v20, 1);
    v22 = v20 - 1;
    if ( v22 < 0 == v21 )
      *((_DWORD *)a2 + 14) = v22;
    if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
    {
      result = 1;
      *((_DWORD *)a2 + 8) = 0;
      *((_BYTE *)a2 + 36) = 1;
      return result;
    }
  }
}

