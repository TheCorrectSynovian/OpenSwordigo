/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FD4AC
 * Mangled: _ZN5Caver5Proto13ObjectLibrary27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F8FF0  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 18
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8A90  Caver::Proto::ObjectTemplate::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002009C0  Caver::Proto::Texture::Texture(void)
 *   0x0000000000202140  Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000002FDAC4  Caver::Proto::ObjectLibrary::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 177
 *   insn=0x00000000002FD4D0 string=0x00000000002FD4D4 "["
 *   insn=0x00000000002FD4D8 string=0x00000000002FD4DC "H"
 *   insn=0x00000000002FD4DC string=0x00000000002FD4E0 "J"
 *   insn=0x00000000002FD4E0 string=0x00000000002FD4E4 ""
 *   insn=0x00000000002FD4E4 string=0x00000000002FD4E8 "i"
 *   insn=0x00000000002FD4E8 string=0x00000000002FD4EC "JAG"
 *   insn=0x00000000002FD4EC string=0x00000000002FD4F0 "|"
 *   insn=0x00000000002FD504 string=0x00000000002FD508 "a"
 *   insn=0x00000000002FD508 string=0x00000000002FD50C "XA"
 *   insn=0x00000000002FD514 string=0x00000000002FD518 "h"
 *   insn=0x00000000002FD51C string=0x00000000002FD520 """
 *   insn=0x00000000002FD520 string=0x00000000002FD524 "\t"
 *   insn=0x00000000002FD528 string=0x00000000002FD52C "!"
 *   insn=0x00000000002FD52C string=0x00000000002FD530 ""
 *   insn=0x00000000002FD530 string=0x00000000002FD534 "a""
 *   insn=0x00000000002FD534 string=0x00000000002FD538 "h"
 *   insn=0x00000000002FD53C string=0x00000000002FD540 "M"
 *   insn=0x00000000002FD53C string=0x00000000002FD558 "(|"
 *   insn=0x00000000002FD544 string=0x00000000002FD548 ">"
 *   insn=0x00000000002FD548 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002FD54C string=0x00000000002FD550 "a""
 *   insn=0x00000000002FD558 string=0x00000000002FD55C ""
 *   insn=0x00000000002FD564 string=0x00000000002FD620 "("
 *   insn=0x00000000002FD568 string=0x00000000002FD56C ""
 *   insn=0x00000000002FD570 string=0x00000000002FD574 "("
 *   insn=0x00000000002FD570 string=0x00000000002FD5E0 "("
 *   insn=0x00000000002FD570 string=0x00000000002FD5F0 "("
 *   insn=0x00000000002FD570 string=0x00000000002FD600 "("
 *   insn=0x00000000002FD570 string=0x00000000002FD610 "("
 *   insn=0x00000000002FD578 string=0x00000000002FD57C "A"
 *   insn=0x00000000002FD57C string=0x00000000002FD580 "I"
 *   insn=0x00000000002FD588 string=0x00000000002FD58C ")"
 *   insn=0x00000000002FD58C string=0x00000000002FD590 ""
 *   insn=0x00000000002FD594 string=0x00000000002FD598 "?"
 *   insn=0x00000000002FD5A4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FD5AC string=0x00000000002FD5B0 "("
 *   insn=0x00000000002FD5BC string=0x00000000002FD5C0 "`%"
 *   insn=0x00000000002FD5BC string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002FD5C0 string=0x00000000002FD5C4 "h"
 *   insn=0x00000000002FD5C8 string=0x00000000002FD5CC "b"
 *   insn=0x00000000002FD5CC string=0x00000000002FD5D0 "\t"
 *   insn=0x00000000002FD5D0 string=0x00000000002FD5D4 "?I"
 *   insn=0x00000000002FD5DC string=0x00000000002FD63C ""
 *   insn=0x00000000002FD5F4 string=0x00000000002FD5F8 "a"
 *   insn=0x00000000002FD5F8 string=0x00000000002FD5FC "^"
 *   insn=0x00000000002FD614 string=0x00000000002FD618 "a"
 *   insn=0x00000000002FD618 string=0x00000000002FD61C "\n"
 *   insn=0x00000000002FD624 string=0x00000000002FD628 "`""
 *   insn=0x00000000002FD630 string=0x00000000002FD634 " "
 *   insn=0x00000000002FD630 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002FD634 string=0x00000000002FD638 ""
 *   insn=0x00000000002FD63C string=0x00000000002FD640 "h"
 *   insn=0x00000000002FD644 string=0x00000000002FD648 "_"
 *   insn=0x00000000002FD650 string=0x00000000002FD654 "J"
 *   insn=0x00000000002FD654 string=0x00000000002FD658 "I"
 *   insn=0x00000000002FD664 string=0x00000000002FD6B8 "h"
 *   insn=0x00000000002FD670 string=0x00000000002FD684 ""
 *   insn=0x00000000002FD67C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002FD698 string=0x00000000002FD69C "8"
 *   insn=0x00000000002FD69C string=0x00000000002FD6A0 "?"
 *   insn=0x00000000002FD6A0 string=0x00000000002FD6A4 "?#"
 *   insn=0x00000000002FD6A8 string=0x00000000002FD6AC "I"
 *   insn=0x00000000002FD6C0 string=0x00000000002FD6C4 "\t"
 *   insn=0x00000000002FD6C8 string=0x00000000002FD6CC ")"
 *   insn=0x00000000002FD6CC string=0x00000000002FD6D0 ""
 *   insn=0x00000000002FD6D4 string=0x00000000002FD6D8 "h"
 *   insn=0x00000000002FD6DC string=0x00000000002FD6F0 "h&G)\n"
 *   insn=0x00000000002FD6E4 string=0x00000000002FD6E8 "Z"
 *   insn=0x00000000002FD6E8 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002FD6F0 string=0x00000000002FD6F4 "\n"
 *   insn=0x00000000002FD6F8 string=0x00000000002FD6FC "j:"
 *   insn=0x00000000002FD6FC string=0x00000000002FD700 "j"
 *   insn=0x00000000002FD71C string=0x00000000002FD720 "`"
 *   insn=0x00000000002FD71C string=0x00000000001F8A90 "0'"
 *   insn=0x00000000002FD720 string=0x00000000002FD724 "h"
 *   insn=0x00000000002FD724 string=0x00000000002FD728 "("
 *   insn=0x00000000002FD734 string=0x00000000002FD738 "h:@"
 *   insn=0x00000000002FD738 string=0x00000000002FD73C ""
 *   insn=0x00000000002FD73C string=0x00000000002FD740 "K"
 *   insn=0x00000000002FD740 string=0x00000000002FD744 "h:"
 *   insn=0x00000000002FD740 string=0x00000000002FD748 "h"
 *   insn=0x00000000002FD74C string=0x00000000002FD750 "B"
 *   insn=0x00000000002FD750 string=0x00000000002FD754 "\t"
 *   insn=0x00000000002FD754 string=0x00000000002FD758 "?I"
 *   insn=0x00000000002FD75C string=0x00000000002FD760 "\t"
 *   insn=0x00000000002FD760 string=0x00000000002FD764 "?i"
 *   insn=0x00000000002FD768 string=0x00000000002FD76C ""
 *   insn=0x00000000002FD76C string=0x00000000002FD770 "h"
 *   insn=0x00000000002FD774 string=0x00000000002FD778 ")}@"
 *   insn=0x00000000002FD778 string=0x00000000002FD77C "?"
 *   insn=0x00000000002FD784 string=0x00000000002FD788 "*"
 *   insn=0x00000000002FD7A0 string=0x00000000002FD7B4 ""
 *   insn=0x00000000002FD7A8 string=0x00000000002FD7AC "]"
 *   insn=0x00000000002FD7BC string=0x00000000001F4A00 "P'"
 *   insn=0x00000000002FD7C8 string=0x00000000002FD7CC "\n"
 *   insn=0x00000000002FD7D0 string=0x00000000002FD7D4 "!y("
 *   insn=0x00000000002FD7DC string=0x00000000002FD7E0 "`"
 *   insn=0x00000000002FD7E0 string=0x00000000002FD7E4 "h"
 *   insn=0x00000000002FD7E8 string=0x00000000002FD7EC "b"
 *   insn=0x00000000002FD7EC string=0x00000000002FD7F0 "\t"
 *   insn=0x00000000002FD7F0 string=0x00000000002FD7F4 "?i"
 *   insn=0x00000000002FD7F8 string=0x00000000002FD7FC "\t"
 *   insn=0x00000000002FD7FC string=0x00000000002FD800 "?"
 *   insn=0x00000000002FD804 string=0x00000000002FD808 ""
 *   insn=0x00000000002FD808 string=0x00000000002FD80C "h"
 *   insn=0x00000000002FD810 string=0x00000000002FD814 ")}@"
 *   insn=0x00000000002FD814 string=0x00000000002FD818 "?"
 *   insn=0x00000000002FD820 string=0x00000000002FD824 "*"
 *   insn=0x00000000002FD830 string=0x00000000002FD87C "h"
 *   insn=0x00000000002FD83C string=0x00000000002FD850 ""
 *   insn=0x00000000002FD844 string=0x00000000002FD848 "6"
 *   insn=0x00000000002FD858 string=0x00000000002FD85C "a"
 *   insn=0x00000000002FD860 string=0x00000000002FD864 "W"
 *   insn=0x00000000002FD86C string=0x00000000002FD870 "\n"
 *   insn=0x00000000002FD874 string=0x00000000002FD878 "9y("
 *   insn=0x00000000002FD884 string=0x00000000002FD888 "\t"
 *   insn=0x00000000002FD88C string=0x00000000002FD890 ")"
 *   insn=0x00000000002FD890 string=0x00000000002FD894 ""
 *   insn=0x00000000002FD898 string=0x00000000002FD89C "h"
 *   insn=0x00000000002FD8A0 string=0x00000000002FD8B4 "h&G)\n"
 *   insn=0x00000000002FD8B4 string=0x00000000002FD8B8 "\n"
 *   insn=0x00000000002FD8BC string=0x00000000002FD8C0 "j:"
 *   insn=0x00000000002FD8C0 string=0x00000000002FD8C4 "J"
 *   insn=0x00000000002FD8CC string=0x00000000002FD8D0 ","
 *   insn=0x00000000002FD8E0 string=0x00000000002FD8E4 "@"
 *   insn=0x00000000002FD8E4 string=0x00000000002FD8E8 "h"
 *   insn=0x00000000002FD8E8 string=0x00000000002FD8EC ""
 *   insn=0x00000000002FD8F4 string=0x00000000002FD8F8 "F"
 *   insn=0x00000000002FD8F8 string=0x00000000002FD8FC "h:@"
 *   insn=0x00000000002FD8FC string=0x00000000002FD900 ""
 *   insn=0x00000000002FD900 string=0x00000000002FD904 "K"
 *   insn=0x00000000002FD904 string=0x00000000002FD908 "h:"
 *   insn=0x00000000002FD904 string=0x00000000002FD90C "h"
 *   insn=0x00000000002FD910 string=0x00000000002FD914 """
 *   insn=0x00000000002FD914 string=0x00000000002FD918 "\t"
 *   insn=0x00000000002FD918 string=0x00000000002FD91C "?"
 *   insn=0x00000000002FD91C string=0x00000000002FD920 "@"
 *   insn=0x00000000002FD920 string=0x00000000002FD924 "\t"
 *   insn=0x00000000002FD924 string=0x00000000002FD928 "?"
 *   insn=0x00000000002FD928 string=0x00000000002FD92C "a"
 *   insn=0x00000000002FD92C string=0x00000000002FD930 ""
 *   insn=0x00000000002FD930 string=0x00000000002FD934 "h"
 *   insn=0x00000000002FD938 string=0x00000000002FD93C ")}@"
 *   insn=0x00000000002FD93C string=0x00000000002FD940 "?"
 *   insn=0x00000000002FD948 string=0x00000000002FD94C "*"
 *   insn=0x00000000002FD958 string=0x00000000002FD9A4 "h"
 *   insn=0x00000000002FD964 string=0x00000000002FD978 ""
 *   insn=0x00000000002FD98C string=0x00000000001F5000 "P'"
 *   insn=0x00000000002FD994 string=0x00000000002FD998 "\n"
 *   insn=0x00000000002FD99C string=0x00000000002FD9A0 "9y("
 *   insn=0x00000000002FD9AC string=0x00000000002FD9B0 "\t"
 *   insn=0x00000000002FD9B4 string=0x00000000002FD9B8 ")"
 *   insn=0x00000000002FD9B8 string=0x00000000002FD9BC ""
 *   insn=0x00000000002FD9C0 string=0x00000000002FD9C4 "h"
 *   insn=0x00000000002FD9C8 string=0x00000000002FD9DC "h&G)\n"
 *   insn=0x00000000002FD9DC string=0x00000000002FD9E0 "\n"
 *   insn=0x00000000002FD9E4 string=0x00000000002FD9E8 "j:"
 *   insn=0x00000000002FD9E8 string=0x00000000002FD9EC "\n"
 *   insn=0x00000000002FDA08 string=0x00000000001F8D20 "0'"
 *   insn=0x00000000002FDA0C string=0x00000000002FDA10 "h"
 *   insn=0x00000000002FDA20 string=0x00000000002FDA24 "h:@"
 *   insn=0x00000000002FDA24 string=0x00000000002FDA28 ""
 *   insn=0x00000000002FDA28 string=0x00000000002FDA2C "K"
 *   insn=0x00000000002FDA2C string=0x00000000002FDA30 "h:"
 *   insn=0x00000000002FDA2C string=0x00000000002FDA34 "h"
 *   insn=0x00000000002FDA3C string=0x00000000002FDA40 "\n"
 *   insn=0x00000000002FDA40 string=0x00000000002FDA44 "_"
 *   insn=0x00000000002FDA44 string=0x00000000002FDA48 "@"
 *   insn=0x00000000002FDA4C string=0x00000000002FDA50 "A"
 *   insn=0x00000000002FDA50 string=0x00000000002FDA54 "h.@"
 *   insn=0x00000000002FDA54 string=0x00000000002FDA58 ""
 *   insn=0x00000000002FDA60 string=0x00000000002FDA64 "`"
 *   insn=0x00000000002FDA68 string=0x00000000002FDA78 "h"
 *   insn=0x00000000002FDA80 string=0x00000000002FDA84 "!"
 *   insn=0x00000000002FDA84 string=0x00000000002FDAA8 "\n"
 *   insn=0x00000000002FDAA8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002FDAB8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(
        Caver::Proto::ObjectLibrary *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  Caver::Proto::ObjectLibrary *v3; // x20
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // x22
  google::protobuf::internal::RepeatedPtrFieldBase *v7; // x23
  char *v8; // x8
  unsigned __int64 v9; // x1
  int v10; // w8
  __int64 *v11; // x1
  _QWORD *v12; // x0
  _BYTE *v13; // x8
  int v14; // w8
  int v15; // w26
  __int64 v16; // x8
  __int64 v17; // x25
  __int64 v18; // x8
  char *v19; // x8
  int v20; // w8
  int v21; // w9
  int v22; // w26
  int v23; // w8
  bool v24; // vf
  int v25; // w8
  int v26; // w8
  int v27; // w9
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int v31; // w8
  __int64 v32; // x9
  __int64 v33; // x8
  Caver::Proto::Texture *v34; // x25
  __int64 v35; // x8
  __int64 v36; // x9
  char *v37; // x8
  int v38; // w8
  int v39; // w9
  int v40; // w26
  int v41; // w8
  int v42; // w8
  int v43; // w8
  __int64 v44; // x9
  __int64 v45; // x8
  Caver::Proto::Program *v46; // x25
  __int64 v47; // x8
  __int64 v48; // x9
  char *v49; // x8
  int v50; // w8
  int v51; // w9
  int v52; // w26
  int v53; // w8
  int v54; // w8
  _BYTE *v55; // x9
  __int64 result; // x0
  google::protobuf::internal::RepeatedPtrFieldBase *v57; // [xsp+8h] [xbp-68h]
  unsigned int v58; // [xsp+14h] [xbp-5Ch] BYREF
  __int64 v59; // [xsp+18h] [xbp-58h]

  v3 = this;
  v57 = (Caver::Proto::ObjectLibrary *)((char *)this + 24);
  v5 = (Caver::Proto::ObjectLibrary *)((char *)this + 192);
  v6 = (Caver::Proto::ObjectLibrary *)((char *)this + 136);
  v7 = (Caver::Proto::ObjectLibrary *)((char *)this + 80);
  v59 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_2:
  while ( 2 )
  {
    v8 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v8 >= *((_QWORD *)a2 + 2) || *v8 < 0 )
    {
      this = (Caver::Proto::ObjectLibrary *)google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v9 = (unsigned int)this;
      *((_DWORD *)a2 + 8) = (_DWORD)this;
      if ( !(_DWORD)this )
        return 1;
    }
    else
    {
      v9 = (unsigned __int8)*v8;
      *((_DWORD *)a2 + 8) = v9;
      *((_QWORD *)a2 + 1) = v8 + 1;
      if ( !(_DWORD)v9 )
        return 1;
    }
    switch ( (unsigned int)v9 >> 3 )
    {
      case 1u:
        v10 = v9 & 7;
        if ( v10 != 2 )
          goto LABEL_24;
        v11 = (__int64 *)*((_QWORD *)v3 + 2);
        *((_DWORD *)v3 + 62) |= 1u;
        if ( v11 == &Caver::Proto::ObjectLibrary::_default_name_ )
        {
          v12 = (_QWORD *)operator new(8u);
          *v12 = &byte_6FD2F8;
          *((_QWORD *)v3 + 2) = v12;
        }
        this = (Caver::Proto::ObjectLibrary *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v13 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) || *v13 != 18 )
          continue;
        goto LABEL_27;
      case 2u:
        v10 = v9 & 7;
        if ( v10 != 2 )
          goto LABEL_24;
        break;
      case 3u:
        v10 = v9 & 7;
        if ( v10 == 2 )
          goto LABEL_46;
        goto LABEL_24;
      case 4u:
        v10 = v9 & 7;
        if ( v10 == 2 )
          goto LABEL_56;
        goto LABEL_24;
      case 5u:
        v10 = v9 & 7;
        if ( v10 == 2 )
          goto LABEL_74;
        goto LABEL_24;
      default:
        v10 = v9 & 7;
LABEL_24:
        if ( v10 == 4 )
          return 1;
        this = (Caver::Proto::ObjectLibrary *)google::protobuf::internal::WireFormatLite::SkipField(
                                                a2,
                                                (google::protobuf::io::CodedInputStream *)v9,
                                                a3);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        continue;
    }
    break;
  }
  while ( 1 )
  {
    v15 = *((_DWORD *)v3 + 8);
    v14 = *((_DWORD *)v3 + 9);
    if ( v15 >= v14 )
    {
      if ( v14 == *((_DWORD *)v3 + 10) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v57, v14 + 1);
        v15 = *((_DWORD *)v3 + 8);
        v14 = *((_DWORD *)v3 + 9);
      }
      *((_DWORD *)v3 + 9) = v14 + 1;
      v17 = operator new(0x20u);
      *(_QWORD *)v17 = off_6C7308;
      *(_DWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 16) = 0;
      *(_QWORD *)(v17 + 24) = 1065353216;
      v18 = *((_QWORD *)v3 + 3);
      *((_DWORD *)v3 + 8) = v15 + 1;
      *(_QWORD *)(v18 + 8LL * v15) = v17;
    }
    else
    {
      v16 = *((_QWORD *)v3 + 3);
      *((_DWORD *)v3 + 8) = v15 + 1;
      v17 = *(_QWORD *)(v16 + 8LL * v15);
    }
    v19 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v19 >= *((_QWORD *)a2 + 2) || *v19 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v58) & 1) == 0 )
        return 0;
    }
    else
    {
      v58 = (unsigned __int8)*v19;
      *((_QWORD *)a2 + 1) = v19 + 1;
    }
    v20 = *((_DWORD *)a2 + 14);
    v21 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v20 + 1;
    if ( v20 >= v21 )
      return 0;
    v22 = google::protobuf::io::CodedInputStream::PushLimit(a2, v58);
    if ( (Caver::Proto::ObjectTemplate::MergePartialFromCodedStream((Caver::Proto::ObjectTemplate *)v17, a2) & 1) == 0
      || !*((_BYTE *)a2 + 36) )
    {
      return 0;
    }
    this = (Caver::Proto::ObjectLibrary *)google::protobuf::io::CodedInputStream::PopLimit(a2, v22);
    v23 = *((_DWORD *)a2 + 14);
    v24 = __OFSUB__(v23, 1);
    v25 = v23 - 1;
    if ( v25 < 0 == v24 )
      *((_DWORD *)a2 + 14) = v25;
    v13 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) )
      goto LABEL_2;
    if ( *v13 != 18 )
    {
      if ( *v13 != 26 )
        goto LABEL_2;
      while ( 1 )
      {
        *((_QWORD *)a2 + 1) = v13 + 1;
LABEL_46:
        v26 = *((_DWORD *)v3 + 23);
        v27 = *((_DWORD *)v3 + 22);
        if ( v27 >= v26 )
        {
          if ( v26 == *((_DWORD *)v3 + 24) )
          {
            this = (Caver::Proto::ObjectLibrary *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v7, v26 + 1);
            v26 = *((_DWORD *)v3 + 23);
          }
          *((_DWORD *)v3 + 23) = v26 + 1;
          v28 = google::protobuf::internal::StringTypeHandlerBase::New(this);
          v29 = *((int *)v3 + 22);
          v30 = *((_QWORD *)v3 + 10);
          *((_DWORD *)v3 + 22) = v29 + 1;
          *(_QWORD *)(v30 + 8 * v29) = v28;
        }
        else
        {
          *((_DWORD *)v3 + 22) = v27 + 1;
        }
        this = (Caver::Proto::ObjectLibrary *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v13 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) )
          goto LABEL_2;
        if ( *v13 != 26 )
        {
          if ( *v13 != 34 )
            goto LABEL_2;
          while ( 1 )
          {
            *((_QWORD *)a2 + 1) = v13 + 1;
LABEL_56:
            v31 = *((_DWORD *)v3 + 37);
            v32 = *((int *)v3 + 36);
            if ( (int)v32 >= v31 )
            {
              if ( v31 == *((_DWORD *)v3 + 38) )
              {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v6, v31 + 1);
                v31 = *((_DWORD *)v3 + 37);
              }
              *((_DWORD *)v3 + 37) = v31 + 1;
              v34 = (Caver::Proto::Texture *)operator new(0x70u);
              Caver::Proto::Texture::Texture(v34);
              v35 = *((int *)v3 + 36);
              v36 = *((_QWORD *)v3 + 17);
              *((_DWORD *)v3 + 36) = v35 + 1;
              *(_QWORD *)(v36 + 8 * v35) = v34;
            }
            else
            {
              v33 = *((_QWORD *)v3 + 17);
              *((_DWORD *)v3 + 36) = v32 + 1;
              v34 = *(Caver::Proto::Texture **)(v33 + 8 * v32);
            }
            v37 = (char *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v37 >= *((_QWORD *)a2 + 2) || *v37 < 0 )
            {
              if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v58) & 1) == 0 )
                return 0;
            }
            else
            {
              v58 = (unsigned __int8)*v37;
              *((_QWORD *)a2 + 1) = v37 + 1;
            }
            v38 = *((_DWORD *)a2 + 14);
            v39 = *((_DWORD *)a2 + 15);
            *((_DWORD *)a2 + 14) = v38 + 1;
            if ( v38 >= v39 )
              return 0;
            v40 = google::protobuf::io::CodedInputStream::PushLimit(a2, v58);
            if ( (Caver::Proto::Texture::MergePartialFromCodedStream(v34, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
              return 0;
            this = (Caver::Proto::ObjectLibrary *)google::protobuf::io::CodedInputStream::PopLimit(a2, v40);
            v41 = *((_DWORD *)a2 + 14);
            v24 = __OFSUB__(v41, 1);
            v42 = v41 - 1;
            if ( v42 < 0 == v24 )
              *((_DWORD *)a2 + 14) = v42;
            v13 = (_BYTE *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) )
              goto LABEL_2;
            if ( *v13 != 34 )
            {
              if ( *v13 != 42 )
                goto LABEL_2;
              while ( 1 )
              {
                *((_QWORD *)a2 + 1) = v13 + 1;
LABEL_74:
                v43 = *((_DWORD *)v3 + 51);
                v44 = *((int *)v3 + 50);
                if ( (int)v44 >= v43 )
                {
                  if ( v43 == *((_DWORD *)v3 + 52) )
                  {
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v43 + 1);
                    v43 = *((_DWORD *)v3 + 51);
                  }
                  *((_DWORD *)v3 + 51) = v43 + 1;
                  v46 = (Caver::Proto::Program *)operator new(0x30u);
                  Caver::Proto::Program::Program(v46);
                  v47 = *((int *)v3 + 50);
                  v48 = *((_QWORD *)v3 + 24);
                  *((_DWORD *)v3 + 50) = v47 + 1;
                  *(_QWORD *)(v48 + 8 * v47) = v46;
                }
                else
                {
                  v45 = *((_QWORD *)v3 + 24);
                  *((_DWORD *)v3 + 50) = v44 + 1;
                  v46 = *(Caver::Proto::Program **)(v45 + 8 * v44);
                }
                v49 = (char *)*((_QWORD *)a2 + 1);
                if ( (unsigned __int64)v49 >= *((_QWORD *)a2 + 2) || *v49 < 0 )
                {
                  if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v58) & 1) == 0 )
                    return 0;
                }
                else
                {
                  v58 = (unsigned __int8)*v49;
                  *((_QWORD *)a2 + 1) = v49 + 1;
                }
                v50 = *((_DWORD *)a2 + 14);
                v51 = *((_DWORD *)a2 + 15);
                *((_DWORD *)a2 + 14) = v50 + 1;
                if ( v50 >= v51 )
                  return 0;
                v52 = google::protobuf::io::CodedInputStream::PushLimit(a2, v58);
                if ( (Caver::Proto::Program::MergePartialFromCodedStream(v46, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
                  return 0;
                this = (Caver::Proto::ObjectLibrary *)google::protobuf::io::CodedInputStream::PopLimit(a2, v52);
                v53 = *((_DWORD *)a2 + 14);
                v24 = __OFSUB__(v53, 1);
                v54 = v53 - 1;
                if ( v54 < 0 == v24 )
                  *((_DWORD *)a2 + 14) = v54;
                v13 = (_BYTE *)*((_QWORD *)a2 + 1);
                v55 = (_BYTE *)*((_QWORD *)a2 + 2);
                if ( v13 >= v55 || *v13 != 42 )
                {
                  if ( v13 == v55 && *((_DWORD *)a2 + 11) )
                  {
                    result = 1;
                    *((_DWORD *)a2 + 8) = 0;
                    *((_BYTE *)a2 + 36) = 1;
                    return result;
                  }
                  goto LABEL_2;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    *((_QWORD *)a2 + 1) = v13 + 1;
  }
}

