/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DA884
 * Mangled: _ZN5Caver5Proto15EditorViewState27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::EditorViewState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000002DAE10  Caver::Proto::EditorViewState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 173
 *   insn=0x00000000002DA8A0 string=0x00000000002DA8A4 "X"
 *   insn=0x00000000002DA8A4 string=0x00000000002DA8A8 ""
 *   insn=0x00000000002DA8A8 string=0x00000000002DA8AC "[ "
 *   insn=0x00000000002DA8AC string=0x00000000002DA8B0 "{"
 *   insn=0x00000000002DA8B0 string=0x00000000002DA8B4 "\ "
 *   insn=0x00000000002DA8CC string=0x00000000002DA8D0 "9C&"
 *   insn=0x00000000002DA8D0 string=0x00000000002DA8D4 "zc"
 *   insn=0x00000000002DA8D4 string=0x00000000002DA8D8 "h"
 *   insn=0x00000000002DA8DC string=0x00000000002DA8E0 """
 *   insn=0x00000000002DA8E0 string=0x00000000002DA8E4 "\t"
 *   insn=0x00000000002DA8E8 string=0x00000000002DA8EC "!"
 *   insn=0x00000000002DA8EC string=0x00000000002DA8F0 ""
 *   insn=0x00000000002DA8F0 string=0x00000000002DA8F4 "a""
 *   insn=0x00000000002DA8F4 string=0x00000000002DA8F8 "h"
 *   insn=0x00000000002DA8FC string=0x00000000002DA900 "0"
 *   insn=0x00000000002DA8FC string=0x00000000002DA918 "(|"
 *   insn=0x00000000002DA904 string=0x00000000002DA908 "Nt"
 *   insn=0x00000000002DA908 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002DA90C string=0x00000000002DA910 "a""
 *   insn=0x00000000002DA910 string=0x00000000002DA914 "a%"
 *   insn=0x00000000002DA918 string=0x00000000002DA91C ""
 *   insn=0x00000000002DA924 string=0x00000000002DA928 "({"
 *   insn=0x00000000002DA924 string=0x00000000002DAA3C "("
 *   insn=0x00000000002DA928 string=0x00000000002DA92C ""
 *   insn=0x00000000002DA930 string=0x00000000002DA934 "("
 *   insn=0x00000000002DA930 string=0x00000000002DA9EC "("
 *   insn=0x00000000002DA930 string=0x00000000002DA9FC "("
 *   insn=0x00000000002DA930 string=0x00000000002DAA0C "("
 *   insn=0x00000000002DA930 string=0x00000000002DAA4C "("
 *   insn=0x00000000002DA930 string=0x00000000002DABD4 "("
 *   insn=0x00000000002DA930 string=0x00000000002DAC30 "("
 *   insn=0x00000000002DA944 string=0x00000000002DA948 "h"
 *   insn=0x00000000002DA94C string=0x00000000002DA950 ")}@"
 *   insn=0x00000000002DA950 string=0x00000000002DA954 "?"
 *   insn=0x00000000002DA95C string=0x00000000002DA960 "*"
 *   insn=0x00000000002DA978 string=0x00000000002DA98C ""
 *   insn=0x00000000002DA984 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002DA990 string=0x00000000002DA994 "h"
 *   insn=0x00000000002DA994 string=0x00000000001F4A00 "P'"
 *   insn=0x00000000002DA9A0 string=0x00000000002DA9A4 "\n"
 *   insn=0x00000000002DA9A8 string=0x00000000002DA9AC "!y("
 *   insn=0x00000000002DA9B4 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002DA9B8 string=0x00000000002DA9BC "h"
 *   insn=0x00000000002DA9C4 string=0x00000000002DA9C8 "\t"
 *   insn=0x00000000002DA9C8 string=0x00000000002DA9CC "?)"
 *   insn=0x00000000002DA9D0 string=0x00000000002DA9D4 "\t"
 *   insn=0x00000000002DA9D0 string=0x00000000002DA944 ""
 *   insn=0x00000000002DA9D4 string=0x00000000002DA9D8 "?I"
 *   insn=0x00000000002DA9DC string=0x00000000002DA9E0 ""
 *   insn=0x00000000002DA9E0 string=0x00000000002DA9E4 "h"
 *   insn=0x00000000002DA9E8 string=0x00000000002DAA58 "i "
 *   insn=0x00000000002DA9F0 string=0x00000000002DA9F4 "A"
 *   insn=0x00000000002DA9F4 string=0x00000000002DA9F8 "_"
 *   insn=0x00000000002DAA04 string=0x00000000002DAAB8 "I "
 *   insn=0x00000000002DAA0C string=0x00000000002DAA10 "a"
 *   insn=0x00000000002DAA10 string=0x00000000002DAA14 "h"
 *   insn=0x00000000002DAA18 string=0x00000000002DAA1C "B"
 *   insn=0x00000000002DAA1C string=0x00000000002DAA20 "\t"
 *   insn=0x00000000002DAA20 string=0x00000000002DAA24 "\t"
 *   insn=0x00000000002DAA24 string=0x00000000002DAA28 ")"
 *   insn=0x00000000002DAA28 string=0x00000000002DAA2C ""
 *   insn=0x00000000002DAA30 string=0x00000000002DAA34 "h"
 *   insn=0x00000000002DAA34 string=0x00000000002DAA38 "@"
 *   insn=0x00000000002DAA38 string=0x00000000002DAB38 "("
 *   insn=0x00000000002DAA50 string=0x00000000002DAA54 "A"
 *   insn=0x00000000002DAA60 string=0x00000000002DAA64 ")"
 *   insn=0x00000000002DAA64 string=0x00000000002DAA68 ""
 *   insn=0x00000000002DAA6C string=0x00000000002DAA70 "?"
 *   insn=0x00000000002DAA7C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DAA80 string=0x00000000002DAA84 ":"
 *   insn=0x00000000002DAA8C string=0x00000000002DAA90 "P{"
 *   insn=0x00000000002DAA90 string=0x00000000002DAA94 " "
 *   insn=0x00000000002DAA94 string=0x00000000002DAA98 "h"
 *   insn=0x00000000002DAAA0 string=0x00000000002DAAA4 "\t"
 *   insn=0x00000000002DAAA4 string=0x00000000002DAAA8 "?i"
 *   insn=0x00000000002DAAA8 string=0x00000000002DAAAC "a"
 *   insn=0x00000000002DAAAC string=0x00000000002DAAB0 ""
 *   insn=0x00000000002DAAB0 string=0x00000000002DAAB4 "h"
 *   insn=0x00000000002DAAC0 string=0x00000000002DAAC4 ")"
 *   insn=0x00000000002DAAC4 string=0x00000000002DAAC8 ""
 *   insn=0x00000000002DAACC string=0x00000000002DAAD0 "?"
 *   insn=0x00000000002DAAE0 string=0x00000000002DAAE4 "hc"
 *   insn=0x00000000002DAAE4 string=0x00000000002DAAE8 "("
 *   insn=0x00000000002DAAF0 string=0x00000000002DAAF4 "7{"
 *   insn=0x00000000002DAAF8 string=0x00000000002DAAFC "h"
 *   insn=0x00000000002DAB04 string=0x00000000002DAB08 "\n"
 *   insn=0x00000000002DAB08 string=0x00000000002DAB0C "_"
 *   insn=0x00000000002DAB0C string=0x00000000002DAB10 "A"
 *   insn=0x00000000002DAB10 string=0x00000000002DAB14 ""
 *   insn=0x00000000002DAB14 string=0x00000000002DAB18 "h"
 *   insn=0x00000000002DAB28 string=0x00000000002DAB2C "Iy"
 *   insn=0x00000000002DAB2C string=0x00000000002DAB30 "@"
 *   insn=0x00000000002DAB2C string=0x00000000001F9050 "0'"
 *   insn=0x00000000002DAB40 string=0x00000000002DAB54 "h"
 *   insn=0x00000000002DAB48 string=0x00000000002DAB4C ""
 *   insn=0x00000000002DAB5C string=0x00000000002DAB60 "\t"
 *   insn=0x00000000002DAB60 string=0x00000000002DAB64 "?"
 *   insn=0x00000000002DAB68 string=0x00000000002DAB6C ""
 *   insn=0x00000000002DAB6C string=0x00000000002DAB70 "h"
 *   insn=0x00000000002DAB78 string=0x00000000002DAB7C ""
 *   insn=0x00000000002DAB7C string=0x00000000002DAB80 "?"
 *   insn=0x00000000002DAB94 string=0x00000000002DAB98 "hc"
 *   insn=0x00000000002DAB98 string=0x00000000002DAB9C "("
 *   insn=0x00000000002DABA4 string=0x00000000002DABA8 "\n{"
 *   insn=0x00000000002DABA8 string=0x00000000002DABAC "`"
 *   insn=0x00000000002DABAC string=0x00000000002DABB0 "h"
 *   insn=0x00000000002DABB8 string=0x00000000002DABBC "\t"
 *   insn=0x00000000002DABBC string=0x00000000002DABC0 "?"
 *   insn=0x00000000002DABC4 string=0x00000000002DABC8 ""
 *   insn=0x00000000002DABC8 string=0x00000000002DABCC "h"
 *   insn=0x00000000002DABE4 string=0x00000000002DABE8 ""
 *   insn=0x00000000002DABF0 string=0x00000000002DAC08 "h"
 *   insn=0x00000000002DABF4 string=0x00000000002DABF8 "zj"
 *   insn=0x00000000002DAC00 string=0x00000000001FAF50 "0'"
 *   insn=0x00000000002DAC0C string=0x00000000002DAC10 """
 *   insn=0x00000000002DAC10 string=0x00000000002DAC14 "\t"
 *   insn=0x00000000002DAC18 string=0x00000000002DAC1C ")"
 *   insn=0x00000000002DAC1C string=0x00000000002DAC20 ""
 *   insn=0x00000000002DAC24 string=0x00000000002DAC28 "h"
 *   insn=0x00000000002DAC2C string=0x00000000002DAC64 "h&G)\n"
 *   insn=0x00000000002DAC34 string=0x00000000002DAC38 " "
 *   insn=0x00000000002DAC44 string=0x00000000002DAC48 """
 *   insn=0x00000000002DAC48 string=0x00000000002DAC4C "`"
 *   insn=0x00000000002DAC48 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002DAC4C string=0x00000000002DAC50 "Z"
 *   insn=0x00000000002DAC64 string=0x00000000002DAC68 "\n"
 *   insn=0x00000000002DAC6C string=0x00000000002DAC70 "j:"
 *   insn=0x00000000002DAC70 string=0x00000000002DAC74 "*\n"
 *   insn=0x00000000002DAC7C string=0x00000000002DAC80 "@"
 *   insn=0x00000000002DAC8C string=0x00000000002DAC90 "0m"
 *   insn=0x00000000002DAC90 string=0x00000000002DAC94 " \t"
 *   insn=0x00000000002DAC90 string=0x00000000001F6150 "0'"
 *   insn=0x00000000002DAC94 string=0x00000000002DAC98 "h"
 *   insn=0x00000000002DACA4 string=0x00000000002DACA8 "Z"
 *   insn=0x00000000002DACA8 string=0x00000000002DACAC "h:@"
 *   insn=0x00000000002DACAC string=0x00000000002DACB0 ""
 *   insn=0x00000000002DACB0 string=0x00000000002DACB4 "K"
 *   insn=0x00000000002DACB4 string=0x00000000002DACB8 "h:"
 *   insn=0x00000000002DACB4 string=0x00000000002DACBC "h"
 *   insn=0x00000000002DACC4 string=0x00000000002DACC8 "\t"
 *   insn=0x00000000002DACC8 string=0x00000000002DACCC "?"
 *   insn=0x00000000002DACCC string=0x00000000002DACD0 "A"
 *   insn=0x00000000002DACD0 string=0x00000000002DACD4 ""
 *   insn=0x00000000002DACD4 string=0x00000000002DACD8 "h"
 *   insn=0x00000000002DACE0 string=0x00000000002DACE4 ""
 *   insn=0x00000000002DACEC string=0x00000000002DAD04 "h"
 *   insn=0x00000000002DACF0 string=0x00000000002DACF4 ";j"
 *   insn=0x00000000002DAD0C string=0x00000000002DAD10 "\t"
 *   insn=0x00000000002DAD14 string=0x00000000002DAD18 ")"
 *   insn=0x00000000002DAD18 string=0x00000000002DAD1C ""
 *   insn=0x00000000002DAD20 string=0x00000000002DAD24 "h"
 *   insn=0x00000000002DAD28 string=0x00000000002DAD3C "h&G)\n"
 *   insn=0x00000000002DAD3C string=0x00000000002DAD40 "\n"
 *   insn=0x00000000002DAD44 string=0x00000000002DAD48 "j:"
 *   insn=0x00000000002DAD48 string=0x00000000002DAD4C "j"
 *   insn=0x00000000002DAD54 string=0x00000000002DAD58 "\n"
 *   insn=0x00000000002DAD68 string=0x00000000002DAD6C "`"
 *   insn=0x00000000002DAD6C string=0x00000000002DAD70 "h"
 *   insn=0x00000000002DAD70 string=0x00000000002DAD74 "("
 *   insn=0x00000000002DAD7C string=0x00000000002DAD80 "$"
 *   insn=0x00000000002DAD80 string=0x00000000002DAD84 "h:@"
 *   insn=0x00000000002DAD84 string=0x00000000002DAD88 ""
 *   insn=0x00000000002DAD88 string=0x00000000002DAD8C "K"
 *   insn=0x00000000002DAD8C string=0x00000000002DAD90 "h:"
 *   insn=0x00000000002DAD8C string=0x00000000002DAD94 "h"
 *   insn=0x00000000002DAD9C string=0x00000000002DADA0 "h.@"
 *   insn=0x00000000002DADAC string=0x00000000002DADB0 "`"
 *   insn=0x00000000002DADB4 string=0x00000000002DADC4 ""
 *   insn=0x00000000002DADCC string=0x00000000002DADD0 "!"
 *   insn=0x00000000002DADD0 string=0x00000000002DADF4 "7m"
 *   insn=0x00000000002DADF4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002DAE00 string=0x00000000002DAE04 "+q"
 *   insn=0x00000000002DAE04 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EditorViewState::MergePartialFromCodedStream(
        Caver::Proto::EditorViewState *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  Caver::Proto::EditorViewState *v3; // x20
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  int v8; // w8
  int v9; // w8
  int v10; // w9
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 v13; // x9
  _BYTE *v14; // x8
  char *v15; // x8
  unsigned int v16; // w9
  __int64 *v17; // x1
  _QWORD *v18; // x0
  _BYTE *v19; // x8
  __int64 *v20; // x1
  _QWORD *v21; // x0
  _BYTE *v22; // x8
  unsigned __int64 v23; // x9
  int v24; // w8
  _BYTE *v25; // x8
  __int64 *v26; // x1
  _QWORD *v27; // x0
  _BYTE *v28; // x8
  Caver::Proto::Vector3 *v29; // x22
  char *v30; // x8
  int v31; // w8
  int v32; // w9
  int v33; // w23
  int v34; // w8
  bool v35; // vf
  int v36; // w8
  _BYTE *v37; // x8
  Caver::Proto::Vector3 *v38; // x22
  char *v39; // x8
  int v40; // w8
  int v41; // w9
  int v42; // w23
  int v43; // w8
  int v44; // w8
  __int64 result; // x0
  unsigned int v46; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v47; // [xsp+8h] [xbp-58h]

  v47 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = this;
  v5 = (Caver::Proto::EditorViewState *)((char *)this + 24);
  while ( 1 )
  {
LABEL_2:
    v6 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v6 < *((_QWORD *)a2 + 2) && (*v6 & 0x80000000) == 0 )
    {
      v7 = (unsigned __int8)*v6;
      *((_DWORD *)a2 + 8) = v7;
      *((_QWORD *)a2 + 1) = v6 + 1;
      if ( !(_DWORD)v7 )
        return 1;
      goto LABEL_7;
    }
    this = (Caver::Proto::EditorViewState *)google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v7 = (unsigned int)this;
    *((_DWORD *)a2 + 8) = (_DWORD)this;
    if ( !(_DWORD)this )
      return 1;
LABEL_7:
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_64;
        while ( 1 )
        {
          v9 = *((_DWORD *)v3 + 9);
          v10 = *((_DWORD *)v3 + 8);
          if ( v10 >= v9 )
          {
            if ( v9 == *((_DWORD *)v3 + 10) )
            {
              this = (Caver::Proto::EditorViewState *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                        v5,
                                                        v9 + 1);
              v9 = *((_DWORD *)v3 + 9);
            }
            *((_DWORD *)v3 + 9) = v9 + 1;
            v11 = google::protobuf::internal::StringTypeHandlerBase::New(this);
            v12 = *((int *)v3 + 8);
            v13 = *((_QWORD *)v3 + 3);
            *((_DWORD *)v3 + 8) = v12 + 1;
            *(_QWORD *)(v13 + 8 * v12) = v11;
          }
          else
          {
            *((_DWORD *)v3 + 8) = v10 + 1;
          }
          this = (Caver::Proto::EditorViewState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v14 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) )
            goto LABEL_2;
          if ( *v14 != 10 )
            break;
          *((_QWORD *)a2 + 1) = v14 + 1;
        }
        if ( *v14 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
        goto LABEL_32;
      case 2u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_64;
LABEL_32:
        v17 = (__int64 *)*((_QWORD *)v3 + 10);
        *((_DWORD *)v3 + 30) |= 4u;
        if ( v17 == &Caver::Proto::EditorViewState::_default_inspected_object_identifier_ )
        {
          v18 = (_QWORD *)operator new(8u);
          *v18 = &byte_6FD2F8;
          *((_QWORD *)v3 + 10) = v18;
        }
        this = (Caver::Proto::EditorViewState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v19 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v19 >= *((_QWORD *)a2 + 2) || *v19 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v19 + 1;
LABEL_38:
        v20 = (__int64 *)*((_QWORD *)v3 + 11);
        *((_DWORD *)v3 + 30) |= 8u;
        if ( v20 == &Caver::Proto::EditorViewState::_default_inspected_template_identifier_ )
        {
          v21 = (_QWORD *)operator new(8u);
          *v21 = &byte_6FD2F8;
          *((_QWORD *)v3 + 11) = v21;
        }
        this = (Caver::Proto::EditorViewState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v22 = (_BYTE *)*((_QWORD *)a2 + 1);
        v23 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v22 >= v23 || *v22 != 32 )
          continue;
        v15 = v22 + 1;
        *((_QWORD *)a2 + 1) = v15;
        if ( (unsigned __int64)v15 >= v23 )
          goto LABEL_44;
LABEL_27:
        if ( *v15 < 0 )
        {
LABEL_44:
          this = (Caver::Proto::EditorViewState *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v16 = v46;
        }
        else
        {
          v16 = (unsigned __int8)*v15;
          v46 = v16;
          *((_QWORD *)a2 + 1) = v15 + 1;
        }
        if ( v16 - 1 <= 1 )
        {
          v24 = *((_DWORD *)v3 + 30);
          *((_DWORD *)v3 + 24) = v16;
          *((_DWORD *)v3 + 30) = v24 | 0x10;
        }
        v25 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v25 >= *((_QWORD *)a2 + 2) || *v25 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v25 + 1;
LABEL_51:
        v26 = (__int64 *)*((_QWORD *)v3 + 2);
        *((_DWORD *)v3 + 30) |= 1u;
        if ( v26 == &Caver::Proto::EditorViewState::_default_file_path_ )
        {
          v27 = (_QWORD *)operator new(8u);
          *v27 = &byte_6FD2F8;
          *((_QWORD *)v3 + 2) = v27;
        }
        this = (Caver::Proto::EditorViewState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v28 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v28 >= *((_QWORD *)a2 + 2) || *v28 != 50 )
          continue;
        *((_QWORD *)a2 + 1) = v28 + 1;
LABEL_58:
        v29 = (Caver::Proto::Vector3 *)*((_QWORD *)v3 + 13);
        *((_DWORD *)v3 + 30) |= 0x20u;
        if ( !v29 )
        {
          v29 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v29);
          *((_QWORD *)v3 + 13) = v29;
        }
        v30 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v30 >= *((_QWORD *)a2 + 2) || *v30 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46) & 1) == 0 )
            return 0;
        }
        else
        {
          v46 = (unsigned __int8)*v30;
          *((_QWORD *)a2 + 1) = v30 + 1;
        }
        v31 = *((_DWORD *)a2 + 14);
        v32 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v31 + 1;
        if ( v31 >= v32 )
          return 0;
        v33 = google::protobuf::io::CodedInputStream::PushLimit(a2, v46);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v29, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        this = (Caver::Proto::EditorViewState *)google::protobuf::io::CodedInputStream::PopLimit(a2, v33);
        v34 = *((_DWORD *)a2 + 14);
        v35 = __OFSUB__(v34, 1);
        v36 = v34 - 1;
        if ( v36 < 0 == v35 )
          *((_DWORD *)a2 + 14) = v36;
        v37 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v37 >= *((_QWORD *)a2 + 2) || *v37 != 58 )
          continue;
        *((_QWORD *)a2 + 1) = v37 + 1;
LABEL_76:
        v38 = (Caver::Proto::Vector3 *)*((_QWORD *)v3 + 14);
        *((_DWORD *)v3 + 30) |= 0x40u;
        if ( !v38 )
        {
          v38 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v38);
          *((_QWORD *)v3 + 14) = v38;
        }
        v39 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v39 >= *((_QWORD *)a2 + 2) || *v39 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46) & 1) == 0 )
            return 0;
        }
        else
        {
          v46 = (unsigned __int8)*v39;
          *((_QWORD *)a2 + 1) = v39 + 1;
        }
        v40 = *((_DWORD *)a2 + 14);
        v41 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v40 + 1;
        if ( v40 >= v41 )
          return 0;
        v42 = google::protobuf::io::CodedInputStream::PushLimit(a2, v46);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v38, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        this = (Caver::Proto::EditorViewState *)google::protobuf::io::CodedInputStream::PopLimit(a2, v42);
        v43 = *((_DWORD *)a2 + 14);
        v35 = __OFSUB__(v43, 1);
        v44 = v43 - 1;
        if ( v44 < 0 == v35 )
          *((_DWORD *)a2 + 14) = v44;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_64;
        goto LABEL_38;
      case 4u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_64;
        v15 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v15 < *((_QWORD *)a2 + 2) )
          goto LABEL_27;
        goto LABEL_44;
      case 5u:
        v8 = v7 & 7;
        if ( v8 == 2 )
          goto LABEL_51;
        goto LABEL_64;
      case 6u:
        v8 = v7 & 7;
        if ( v8 == 2 )
          goto LABEL_58;
        goto LABEL_64;
      case 7u:
        v8 = v7 & 7;
        if ( v8 == 2 )
          goto LABEL_76;
LABEL_64:
        if ( v8 == 4 )
          return 1;
LABEL_65:
        this = (Caver::Proto::EditorViewState *)google::protobuf::internal::WireFormatLite::SkipField(
                                                  a2,
                                                  (google::protobuf::io::CodedInputStream *)v7,
                                                  a3);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        continue;
      default:
        if ( (v7 & 7) == 4 )
          return 1;
        goto LABEL_65;
    }
  }
}

