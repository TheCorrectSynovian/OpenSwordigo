/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003009C8
 * Mangled: _ZN5Caver5Proto16SceneObjectGroup27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001FCD00  Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 15
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000300E74  Caver::Proto::SceneObjectGroup::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 147
 *   insn=0x00000000003009E4 string=0x00000000003009E8 "X"
 *   insn=0x00000000003009E8 string=0x00000000003009EC ":"
 *   insn=0x00000000003009EC string=0x00000000003009F0 ")"
 *   insn=0x00000000003009F0 string=0x00000000003009F4 ""
 *   insn=0x00000000003009F4 string=0x00000000003009F8 "Z"
 *   insn=0x00000000003009F8 string=0x00000000003009FC ")"
 *   insn=0x0000000000300A00 string=0x0000000000300A04 "Y"
 *   insn=0x0000000000300A0C string=0x0000000000300A10 "9"
 *   insn=0x0000000000300A10 string=0x0000000000300A14 ";a"
 *   insn=0x0000000000300A18 string=0x0000000000300A1C "h"
 *   insn=0x0000000000300A20 string=0x0000000000300A24 """
 *   insn=0x0000000000300A24 string=0x0000000000300A28 "\t"
 *   insn=0x0000000000300A2C string=0x0000000000300A30 "!"
 *   insn=0x0000000000300A30 string=0x0000000000300A34 ""
 *   insn=0x0000000000300A34 string=0x0000000000300A38 "a""
 *   insn=0x0000000000300A38 string=0x0000000000300A3C "h"
 *   insn=0x0000000000300A40 string=0x0000000000300A5C "(|"
 *   insn=0x0000000000300A4C string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000300A50 string=0x0000000000300A54 "a""
 *   insn=0x0000000000300A54 string=0x0000000000300A58 "A"
 *   insn=0x0000000000300A5C string=0x0000000000300A60 ""
 *   insn=0x0000000000300A64 string=0x0000000000300A68 "(\t"
 *   insn=0x0000000000300A68 string=0x0000000000300A6C "({"
 *   insn=0x0000000000300A68 string=0x0000000000300B8C "("
 *   insn=0x0000000000300A6C string=0x0000000000300A70 ""
 *   insn=0x0000000000300A74 string=0x0000000000300A78 "("
 *   insn=0x0000000000300A74 string=0x0000000000300AD8 "("
 *   insn=0x0000000000300A74 string=0x0000000000300B08 "("
 *   insn=0x0000000000300A74 string=0x0000000000300B38 "("
 *   insn=0x0000000000300A74 string=0x0000000000300B4C "("
 *   insn=0x0000000000300A74 string=0x0000000000300B5C "("
 *   insn=0x0000000000300A88 string=0x0000000000300A8C ""
 *   insn=0x0000000000300A8C string=0x0000000000300A90 "?"
 *   insn=0x0000000000300AA0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000300AA4 string=0x0000000000300AA8 ";"
 *   insn=0x0000000000300AB0 string=0x0000000000300AB4 "G"
 *   insn=0x0000000000300AB4 string=0x00000000001F97D0 "0'"
 *   insn=0x0000000000300AB8 string=0x0000000000300ABC "i"
 *   insn=0x0000000000300ABC string=0x0000000000300AC0 "?"
 *   insn=0x0000000000300AC4 string=0x0000000000300AC8 "("
 *   insn=0x0000000000300ACC string=0x0000000000300AD0 "a"
 *   insn=0x0000000000300AD0 string=0x0000000000300AD4 "5"
 *   insn=0x0000000000300AD4 string=0x0000000000300BA8 "("
 *   insn=0x0000000000300ADC string=0x0000000000300AE0 "i"
 *   insn=0x0000000000300AE0 string=0x0000000000300AE4 "?"
 *   insn=0x0000000000300AE8 string=0x0000000000300AEC "*"
 *   insn=0x0000000000300AEC string=0x0000000000300AF0 "j"
 *   insn=0x0000000000300AF0 string=0x0000000000300AF4 "J"
 *   insn=0x0000000000300AF4 string=0x0000000000300AF8 ")"
 *   insn=0x0000000000300AFC string=0x0000000000300B00 "i"
 *   insn=0x0000000000300B08 string=0x0000000000300B0C "!"
 *   insn=0x0000000000300B0C string=0x0000000000300B10 "i"
 *   insn=0x0000000000300B10 string=0x0000000000300B14 "?"
 *   insn=0x0000000000300B18 string=0x0000000000300B1C "*"
 *   insn=0x0000000000300B20 string=0x0000000000300B24 "J"
 *   insn=0x0000000000300B24 string=0x0000000000300B28 ")"
 *   insn=0x0000000000300B2C string=0x0000000000300B30 "i"
 *   insn=0x0000000000300B30 string=0x0000000000300B34 "N"
 *   insn=0x0000000000300B44 string=0x0000000000300B48 "V"
 *   insn=0x0000000000300B60 string=0x0000000000300B64 "j"
 *   insn=0x0000000000300B64 string=0x0000000000300B68 "_"
 *   insn=0x0000000000300B68 string=0x0000000000300B6C """
 *   insn=0x0000000000300B6C string=0x0000000000300B70 "I"
 *   insn=0x0000000000300B74 string=0x0000000000300B78 ")"
 *   insn=0x0000000000300B78 string=0x0000000000300B7C "J"
 *   insn=0x0000000000300B80 string=0x0000000000300B84 "j"
 *   insn=0x0000000000300B90 string=0x0000000000300B94 "`"
 *   insn=0x0000000000300B98 string=0x0000000000300B9C "M"
 *   insn=0x0000000000300B9C string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000300BA8 string=0x0000000000300BAC "h"
 *   insn=0x0000000000300BB0 string=0x0000000000300BB4 ")}@"
 *   insn=0x0000000000300BB4 string=0x0000000000300BB8 "?"
 *   insn=0x0000000000300BC0 string=0x0000000000300BC4 "*"
 *   insn=0x0000000000300BDC string=0x0000000000300BF0 ""
 *   insn=0x0000000000300BE4 string=0x0000000000300BE8 "N"
 *   insn=0x0000000000300BE8 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000300BF8 string=0x00000000001F4A00 "P'"
 *   insn=0x0000000000300C04 string=0x0000000000300C08 "\n"
 *   insn=0x0000000000300C0C string=0x0000000000300C10 "!y("
 *   insn=0x0000000000300C18 string=0x0000000000300C1C "`"
 *   insn=0x0000000000300C1C string=0x0000000000300C20 "i"
 *   insn=0x0000000000300C20 string=0x0000000000300C24 "?"
 *   insn=0x0000000000300C28 string=0x0000000000300C2C "*"
 *   insn=0x0000000000300C2C string=0x0000000000300C30 "_I"
 *   insn=0x0000000000300C34 string=0x0000000000300C38 "*"
 *   insn=0x0000000000300C38 string=0x0000000000300C3C "_a"
 *   insn=0x0000000000300C40 string=0x0000000000300C44 ")"
 *   insn=0x0000000000300C44 string=0x0000000000300C48 "i"
 *   insn=0x0000000000300C48 string=0x0000000000300C4C "?"
 *   insn=0x0000000000300C4C string=0x0000000000300C50 "c"
 *   insn=0x0000000000300C5C string=0x0000000000300C60 "@"
 *   insn=0x0000000000300C5C string=0x00000000001F9050 "0'"
 *   insn=0x0000000000300C64 string=0x0000000000300C68 "i"
 *   insn=0x0000000000300C6C string=0x0000000000300C70 "_"
 *   insn=0x0000000000300C78 string=0x0000000000300C7C "j"
 *   insn=0x0000000000300C7C string=0x0000000000300C80 "?"
 *   insn=0x0000000000300C88 string=0x0000000000300C8C "("
 *   insn=0x0000000000300C90 string=0x0000000000300C94 "A"
 *   insn=0x0000000000300C94 string=0x0000000000300C98 "("
 *   insn=0x0000000000300C98 string=0x0000000000300C9C "h"
 *   insn=0x0000000000300CA0 string=0x0000000000300CA4 "H"
 *   insn=0x0000000000300CAC string=0x0000000000300CC4 "h"
 *   insn=0x0000000000300CB0 string=0x0000000000300CB4 "K"
 *   insn=0x0000000000300CBC string=0x00000000001F5000 "P'"
 *   insn=0x0000000000300CCC string=0x0000000000300CD0 "\t"
 *   insn=0x0000000000300CD4 string=0x0000000000300CD8 ")"
 *   insn=0x0000000000300CD8 string=0x0000000000300CDC ""
 *   insn=0x0000000000300CE0 string=0x0000000000300CE4 "h"
 *   insn=0x0000000000300CE8 string=0x0000000000300CFC "h&G)\n"
 *   insn=0x0000000000300CFC string=0x0000000000300D00 "\n"
 *   insn=0x0000000000300D04 string=0x0000000000300D08 "j:"
 *   insn=0x0000000000300D28 string=0x00000000001F8D20 "0'"
 *   insn=0x0000000000300D2C string=0x0000000000300D30 "h"
 *   insn=0x0000000000300D3C string=0x0000000000300D40 "4"
 *   insn=0x0000000000300D40 string=0x0000000000300D44 "h:@"
 *   insn=0x0000000000300D44 string=0x0000000000300D48 ""
 *   insn=0x0000000000300D48 string=0x0000000000300D4C "K"
 *   insn=0x0000000000300D4C string=0x0000000000300D50 "h:"
 *   insn=0x0000000000300D4C string=0x0000000000300D54 "i"
 *   insn=0x0000000000300D54 string=0x0000000000300D58 "?"
 *   insn=0x0000000000300D5C string=0x0000000000300D60 "*"
 *   insn=0x0000000000300D60 string=0x0000000000300D64 "_"
 *   insn=0x0000000000300D68 string=0x0000000000300D6C ")"
 *   insn=0x0000000000300D6C string=0x0000000000300D70 "i"
 *   insn=0x0000000000300D70 string=0x0000000000300D74 "?"
 *   insn=0x0000000000300D8C string=0x0000000000300D90 "i"
 *   insn=0x0000000000300D94 string=0x0000000000300D98 "_"
 *   insn=0x0000000000300DA0 string=0x0000000000300DA4 "j"
 *   insn=0x0000000000300DA4 string=0x0000000000300DA8 "?"
 *   insn=0x0000000000300DAC string=0x0000000000300DB0 "b"
 *   insn=0x0000000000300DB0 string=0x0000000000300DB4 "*"
 *   insn=0x0000000000300DB4 string=0x0000000000300DB8 "_"
 *   insn=0x0000000000300DBC string=0x0000000000300DC0 "*"
 *   insn=0x0000000000300DC0 string=0x0000000000300DC4 "j"
 *   insn=0x0000000000300DC4 string=0x0000000000300DC8 "_"
 *   insn=0x0000000000300DC8 string=0x0000000000300DCC "#"
 *   insn=0x0000000000300DD8 string=0x0000000000300DDC "`"
 *   insn=0x0000000000300DE0 string=0x0000000000300DE4 "j"
 *   insn=0x0000000000300DE8 string=0x0000000000300DEC "?"
 *   insn=0x0000000000300DF4 string=0x0000000000300DF8 "i"
 *   insn=0x0000000000300DF8 string=0x0000000000300DFC "_"
 *   insn=0x0000000000300E04 string=0x0000000000300E08 "h.@"
 *   insn=0x0000000000300E14 string=0x0000000000300E18 "`"
 *   insn=0x0000000000300E1C string=0x0000000000300E2C ""
 *   insn=0x0000000000300E34 string=0x0000000000300E38 "!"
 *   insn=0x0000000000300E5C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000300E68 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(
        Caver::Proto::SceneObjectGroup *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  Caver::Proto::SceneObjectGroup *v3; // x20
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  unsigned __int8 *v6; // x8
  unsigned __int64 v7; // x1
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  _BYTE *v11; // x9
  unsigned __int64 v12; // x8
  unsigned __int8 *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  unsigned __int64 v16; // x8
  char *v17; // x9
  unsigned int v18; // w10
  _BYTE *v19; // x9
  int v20; // w10
  char *v21; // x10
  unsigned int v22; // w9
  unsigned __int8 *v23; // x10
  int v24; // w8
  int v25; // w9
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int v29; // w11
  Caver::Proto::Program *v30; // x22
  char *v31; // x8
  int v32; // w8
  int v33; // w9
  int v34; // w23
  int v35; // w8
  bool v36; // vf
  int v37; // w8
  _BYTE *v38; // x9
  int v39; // w11
  int v40; // w11
  __int64 result; // x0
  unsigned int v42; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v43; // [xsp+8h] [xbp-58h]

  v3 = this;
  v5 = (Caver::Proto::SceneObjectGroup *)((char *)this + 24);
  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_2:
  while ( 1 )
  {
    v6 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || (char)*v6 < 0 )
      break;
    v7 = *v6;
    *((_DWORD *)a2 + 8) = v7;
    *((_QWORD *)a2 + 1) = v6 + 1;
    if ( !(_DWORD)v7 )
      return 1;
LABEL_7:
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_32;
        v9 = (__int64 *)*((_QWORD *)v3 + 2);
        *((_DWORD *)v3 + 24) |= 1u;
        if ( v9 == &Caver::Proto::SceneObjectGroup::_default_identifier_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)v3 + 2) = v10;
        }
        this = (Caver::Proto::SceneObjectGroup *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 != 18 )
          continue;
        goto LABEL_35;
      case 2u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_32;
        break;
      case 3u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_32;
        v17 = (char *)*((_QWORD *)a2 + 1);
        v16 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v17 < v16 )
          goto LABEL_21;
        goto LABEL_46;
      case 4u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_32;
        v20 = *((_DWORD *)v3 + 24);
        goto LABEL_51;
      case 5u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_32;
        v13 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v12 )
          goto LABEL_17;
        goto LABEL_65;
      case 6u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_32;
        v21 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 < v12 )
          goto LABEL_29;
        goto LABEL_70;
      default:
        v8 = v7 & 7;
LABEL_32:
        if ( v8 == 4 )
          return 1;
        this = (Caver::Proto::SceneObjectGroup *)google::protobuf::internal::WireFormatLite::SkipField(
                                                   a2,
                                                   (google::protobuf::io::CodedInputStream *)v7,
                                                   a3);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        continue;
    }
    while ( 1 )
    {
      v24 = *((_DWORD *)v3 + 9);
      v25 = *((_DWORD *)v3 + 8);
      if ( v25 >= v24 )
      {
        if ( v24 == *((_DWORD *)v3 + 10) )
        {
          this = (Caver::Proto::SceneObjectGroup *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                     v5,
                                                     v24 + 1);
          v24 = *((_DWORD *)v3 + 9);
        }
        *((_DWORD *)v3 + 9) = v24 + 1;
        v26 = google::protobuf::internal::StringTypeHandlerBase::New(this);
        v27 = *((int *)v3 + 8);
        v28 = *((_QWORD *)v3 + 3);
        *((_DWORD *)v3 + 8) = v27 + 1;
        *(_QWORD *)(v28 + 8 * v27) = v26;
      }
      else
      {
        *((_DWORD *)v3 + 8) = v25 + 1;
      }
      this = (Caver::Proto::SceneObjectGroup *)google::protobuf::internal::WireFormatLite::ReadString(a2);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      v11 = (_BYTE *)*((_QWORD *)a2 + 1);
      v16 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v11 >= v16 )
        goto LABEL_2;
      if ( *v11 != 18 )
        break;
LABEL_35:
      *((_QWORD *)a2 + 1) = v11 + 1;
    }
    if ( *v11 != 24 )
      continue;
    v17 = v11 + 1;
    *((_QWORD *)a2 + 1) = v17;
    if ( (unsigned __int64)v17 < v16 )
    {
LABEL_21:
      if ( (*v17 & 0x80000000) == 0 )
      {
        v18 = (unsigned __int8)*v17;
        v19 = v17 + 1;
        v42 = v18;
        *((_QWORD *)a2 + 1) = v19;
        goto LABEL_48;
      }
    }
LABEL_46:
    this = (Caver::Proto::SceneObjectGroup *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v42);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    v18 = v42;
    v19 = (_BYTE *)*((_QWORD *)a2 + 1);
    v16 = *((_QWORD *)a2 + 2);
LABEL_48:
    v29 = *((_DWORD *)v3 + 24);
    *((_BYTE *)v3 + 80) = v18 != 0;
    v20 = v29 | 4;
    *((_DWORD *)v3 + 24) = v29 | 4;
    if ( (unsigned __int64)v19 < v16 && *v19 == 34 )
    {
      *((_QWORD *)a2 + 1) = v19 + 1;
LABEL_51:
      v30 = (Caver::Proto::Program *)*((_QWORD *)v3 + 11);
      *((_DWORD *)v3 + 24) = v20 | 0x20;
      if ( !v30 )
      {
        v30 = (Caver::Proto::Program *)operator new(0x30u);
        Caver::Proto::Program::Program(v30);
        *((_QWORD *)v3 + 11) = v30;
      }
      v31 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v42) & 1) == 0 )
          return 0;
      }
      else
      {
        v42 = (unsigned __int8)*v31;
        *((_QWORD *)a2 + 1) = v31 + 1;
      }
      v32 = *((_DWORD *)a2 + 14);
      v33 = *((_DWORD *)a2 + 15);
      *((_DWORD *)a2 + 14) = v32 + 1;
      if ( v32 >= v33 )
        return 0;
      v34 = google::protobuf::io::CodedInputStream::PushLimit(a2, v42);
      if ( (Caver::Proto::Program::MergePartialFromCodedStream(v30, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
        return 0;
      this = (Caver::Proto::SceneObjectGroup *)google::protobuf::io::CodedInputStream::PopLimit(a2, v34);
      v35 = *((_DWORD *)a2 + 14);
      v36 = __OFSUB__(v35, 1);
      v37 = v35 - 1;
      if ( v37 < 0 == v36 )
        *((_DWORD *)a2 + 14) = v37;
      v38 = (_BYTE *)*((_QWORD *)a2 + 1);
      v12 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v38 < v12 && *v38 == 40 )
      {
        v13 = v38 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v12 )
        {
LABEL_65:
          this = (Caver::Proto::SceneObjectGroup *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
                                                     a2,
                                                     &v42);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v14 = v42;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
          goto LABEL_67;
        }
LABEL_17:
        if ( (char)*v13 < 0 )
          goto LABEL_65;
        v14 = *v13;
        v15 = v13 + 1;
        v42 = v14;
        *((_QWORD *)a2 + 1) = v15;
LABEL_67:
        v39 = *((_DWORD *)v3 + 24);
        *((_BYTE *)v3 + 82) = v14 != 0;
        *((_DWORD *)v3 + 24) = v39 | 0x10;
        if ( (unsigned __int64)v15 < v12 && *v15 == 48 )
        {
          v21 = v15 + 1;
          *((_QWORD *)a2 + 1) = v15 + 1;
          if ( (unsigned __int64)(v15 + 1) < v12 )
          {
LABEL_29:
            if ( (*v21 & 0x80000000) == 0 )
            {
              v22 = (unsigned __int8)*v21;
              v23 = (unsigned __int8 *)(v21 + 1);
              v42 = v22;
              *((_QWORD *)a2 + 1) = v23;
              goto LABEL_72;
            }
          }
LABEL_70:
          this = (Caver::Proto::SceneObjectGroup *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
                                                     a2,
                                                     &v42);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v22 = v42;
          v23 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
LABEL_72:
          v40 = *((_DWORD *)v3 + 24);
          *((_BYTE *)v3 + 81) = v22 != 0;
          *((_DWORD *)v3 + 24) = v40 | 8;
          if ( v23 == (unsigned __int8 *)v12 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
        }
      }
    }
  }
  this = (Caver::Proto::SceneObjectGroup *)google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
  v7 = (unsigned int)this;
  *((_DWORD *)a2 + 8) = (_DWORD)this;
  if ( (_DWORD)this )
    goto LABEL_7;
  return 1;
}

