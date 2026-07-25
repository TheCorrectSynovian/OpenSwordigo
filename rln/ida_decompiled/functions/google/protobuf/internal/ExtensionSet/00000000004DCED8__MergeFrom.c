/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DCED8
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet9MergeFromERKS2_
 * Demangled: google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *
 * Callers: 1
 *   0x0000000000202450  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *
 * Callees: 21
 *   0x00000000001F3E40  google::protobuf::internal::ExtensionSet::SetFloat(int,uchar,float,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5330  google::protobuf::internal::ExtensionSet::SetDouble(int,uchar,double,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9260  google::protobuf::internal::ExtensionSet::SetUInt32(int,uchar,uint,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F9DA0  google::protobuf::internal::ExtensionSet::MutableString(int,uchar,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAB00  google::protobuf::internal::ExtensionSet::SetBool(int,uchar,bool,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB370  google::protobuf::internal::ExtensionSet::SetInt64(int,uchar,long,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FB3D0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *   0x00000000001FDBF0  google::protobuf::internal::ExtensionSet::SetInt32(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FFCE0  google::protobuf::internal::ExtensionSet::SetUInt64(int,uchar,ulong,google::protobuf::FieldDescriptor const*)
 *   0x0000000000201760  .memcpy
 *   0x0000000000202DE0  google::protobuf::internal::ExtensionSet::SetEnum(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 175
 *   insn=0x00000000004DCEF8 string=0x00000000004DCEFC "H"
 *   insn=0x00000000004DCF00 string=0x00000000004DCF04 ""
 *   insn=0x00000000004DCF0C string=0x00000000004DCF10 "4"
 *   insn=0x00000000004DCF10 string=0x00000000004DCF14 "( "
 *   insn=0x00000000004DCF20 string=0x00000000004DCF24 "i""
 *   insn=0x00000000004DCF28 string=0x00000000004DCF2C "i"
 *   insn=0x00000000004DCF2C string=0x00000000004DCF30 "(9B"
 *   insn=0x00000000004DCF38 string=0x00000000004DCF3C "A"
 *   insn=0x00000000004DCF44 string=0x00000000004DCF48 ""y"
 *   insn=0x00000000004DCF48 string=0x00000000001FB3D0 "0'"
 *   insn=0x00000000004DCF60 string=0x00000000004DCF64 "y"
 *   insn=0x00000000004DCF60 string=0x00000000001F5330 "P'"
 *   insn=0x00000000004DCF74 string=0x00000000004DCF78 "~i"
 *   insn=0x00000000004DCF78 string=0x00000000004DCF7C ""
 *   insn=0x00000000004DCF78 string=0x00000000001F7570 "0'"
 *   insn=0x00000000004DCF80 string=0x00000000004DCF84 ""
 *   insn=0x00000000004DCF88 string=0x00000000004DCF8C "o"
 *   insn=0x00000000004DCFA0 string=0x00000000004DCFA4 "i"
 *   insn=0x00000000004DCFA0 string=0x00000000001F9260 "0'"
 *   insn=0x00000000004DCFB4 string=0x00000000004DCFB8 "J"
 *   insn=0x00000000004DCFB8 string=0x00000000004DCFBC "c"
 *   insn=0x00000000004DCFD0 string=0x00000000004DCFD4 "]"
 *   insn=0x00000000004DCFD0 string=0x00000000001FB370 "0'"
 *   insn=0x00000000004DCFE4 string=0x00000000004DCFE8 "~"
 *   insn=0x00000000004DCFE8 string=0x00000000004DCFEC "W"
 *   insn=0x00000000004DD000 string=0x00000000004DD004 "Q"
 *   insn=0x00000000004DD000 string=0x00000000001F3E40 "P'"
 *   insn=0x00000000004DD018 string=0x00000000004DD01C "K"
 *   insn=0x00000000004DD018 string=0x00000000001FAB00 "0'"
 *   insn=0x00000000004DD02C string=0x00000000004DD030 "\s"
 *   insn=0x00000000004DD030 string=0x00000000001F9DA0 "0'"
 *   insn=0x00000000004DD038 string=0x00000000004DD03C "C"
 *   insn=0x00000000004DD040 string=0x00000000004DD044 "h"
 *   insn=0x00000000004DD054 string=0x00000000004DD058 "i\n@"
 *   insn=0x00000000004DD058 string=0x00000000004DD05C ")"
 *   insn=0x00000000004DD070 string=0x00000000004DD074 "I"
 *   insn=0x00000000004DD074 string=0x00000000004DD078 ")"
 *   insn=0x00000000004DD078 string=0x00000000004DD07C ")"
 *   insn=0x00000000004DD088 string=0x00000000004DD08C ""
 *   insn=0x00000000004DD088 string=0x00000000004DD0E4 "h"
 *   insn=0x00000000004DD08C string=0x00000000004DD0F8 " @"
 *   insn=0x00000000004DD094 string=0x00000000004DD098 "H"
 *   insn=0x00000000004DD09C string=0x00000000004DD0A0 ""
 *   insn=0x00000000004DD0A0 string=0x00000000004DD0A4 "yb"
 *   insn=0x00000000004DD0A4 string=0x00000000004DD0A8 ""
 *   insn=0x00000000004DD0B4 string=0x00000000004DD0BC "(y"
 *   insn=0x00000000004DD0BC string=0x00000000004DD0C0 ""
 *   insn=0x00000000004DD0D8 string=0x00000000004DD0DC ""
 *   insn=0x00000000004DD0D8 string=0x00000000001FDBF0 "0'"
 *   insn=0x00000000004DD0EC string=0x00000000004DD104 "6"
 *   insn=0x00000000004DD0FC string=0x00000000004DD100 "j"
 *   insn=0x00000000004DD110 string=0x00000000004DD114 "`"
 *   insn=0x00000000004DD120 string=0x00000000004DD124 ""
 *   insn=0x00000000004DD12C string=0x00000000004DD130 ""
 *   insn=0x00000000004DD13C string=0x00000000004DD1A4 "I"
 *   insn=0x00000000004DD144 string=0x00000000004DD148 "&a"
 *   insn=0x00000000004DD148 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DD174 string=0x00000000004DD178 "G"
 *   insn=0x00000000004DD17C string=0x00000000004DD180 "i"
 *   insn=0x00000000004DD184 string=0x00000000004DD188 ""
 *   insn=0x00000000004DD188 string=0x00000000004DD18C ")"
 *   insn=0x00000000004DD18C string=0x00000000004DD190 "i"
 *   insn=0x00000000004DD194 string=0x00000000004DD198 "\tC8"
 *   insn=0x00000000004DD19C string=0x00000000004DD1A0 "\t"
 *   insn=0x00000000004DD1A4 string=0x00000000004DD1A8 ""
 *   insn=0x00000000004DD1A8 string=0x00000000004DD1AC ")"
 *   insn=0x00000000004DD1AC string=0x00000000004DD1B0 "(yh"
 *   insn=0x00000000004DD1B0 string=0x00000000004DD1B4 ""
 *   insn=0x00000000004DD1B8 string=0x00000000004DD1BC "h"
 *   insn=0x00000000004DD1C0 string=0x00000000004DD1C8 "(y"
 *   insn=0x00000000004DD1C8 string=0x00000000004DD1CC ""
 *   insn=0x00000000004DD1D0 string=0x00000000004DD1D4 "Z"
 *   insn=0x00000000004DD1D0 string=0x00000000004DD468 "Z"
 *   insn=0x00000000004DD1D4 string=0x00000000004DD21C "v"
 *   insn=0x00000000004DD1EC string=0x00000000004DD1F0 "v"
 *   insn=0x00000000004DD1F0 string=0x00000000004DD1F4 ""
 *   insn=0x00000000004DD1F8 string=0x00000000004DD2B0 "v"
 *   insn=0x00000000004DD210 string=0x00000000004DD214 "v"
 *   insn=0x00000000004DD214 string=0x00000000004DD218 "'"
 *   insn=0x00000000004DD228 string=0x00000000004DD22C "("
 *   insn=0x00000000004DD22C string=0x00000000004DD230 "?"
 *   insn=0x00000000004DD230 string=0x00000000004DD234 "J"
 *   insn=0x00000000004DD234 string=0x00000000004DD238 ")y"
 *   insn=0x00000000004DD238 string=0x00000000004DD23C "?"
 *   insn=0x00000000004DD23C string=0x00000000004DD240 ""
 *   insn=0x00000000004DD240 string=0x00000000004DD244 "\t}@"
 *   insn=0x00000000004DD24C string=0x00000000004DD250 ")}"
 *   insn=0x00000000004DD254 string=0x00000000004DD258 "}~"
 *   insn=0x00000000004DD268 string=0x00000000004DD26C "B"
 *   insn=0x00000000004DD268 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004DD274 string=0x00000000004DD278 ":"
 *   insn=0x00000000004DD28C string=0x00000000004DD290 "4_"
 *   insn=0x00000000004DD290 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004DD2A0 string=0x00000000004DD2A4 """
 *   insn=0x00000000004DD2BC string=0x00000000004DD2C0 "("
 *   insn=0x00000000004DD2C0 string=0x00000000004DD2C4 "?"
 *   insn=0x00000000004DD2C4 string=0x00000000004DD2C8 "J"
 *   insn=0x00000000004DD2C8 string=0x00000000004DD2CC ")y"
 *   insn=0x00000000004DD2CC string=0x00000000004DD2D0 "?"
 *   insn=0x00000000004DD2D0 string=0x00000000004DD2D4 ""
 *   insn=0x00000000004DD2D4 string=0x00000000004DD2D8 "\t}@"
 *   insn=0x00000000004DD2E0 string=0x00000000004DD2E4 ")}"
 *   insn=0x00000000004DD2E8 string=0x00000000004DD2EC "}}"
 *   insn=0x00000000004DD2FC string=0x00000000004DD300 "B"
 *   insn=0x00000000004DD334 string=0x00000000004DD338 """
 *   insn=0x00000000004DD33C string=0x00000000004DD340 "}"
 *   insn=0x00000000004DD34C string=0x00000000004DD350 "`"
 *   insn=0x00000000004DD354 string=0x00000000004DD358 "|"
 *   insn=0x00000000004DD358 string=0x00000000004DD35C "\t"
 *   insn=0x00000000004DD35C string=0x00000000004DD360 "`"
 *   insn=0x00000000004DD364 string=0x00000000004DD368 "(@"
 *   insn=0x00000000004DD374 string=0x00000000004DD378 "h"
 *   insn=0x00000000004DD378 string=0x00000000004DD37C "*"
 *   insn=0x00000000004DD37C string=0x00000000004DD380 "\t-A)Vyu"
 *   insn=0x00000000004DD380 string=0x00000000004DD384 "Vyu"
 *   insn=0x00000000004DD384 string=0x00000000004DD388 ")}@"
 *   insn=0x00000000004DD388 string=0x00000000004DD38C "?"
 *   insn=0x00000000004DD390 string=0x00000000004DD394 "\n"
 *   insn=0x00000000004DD394 string=0x00000000004DD398 "+"
 *   insn=0x00000000004DD398 string=0x00000000004DD39C "\t"
 *   insn=0x00000000004DD39C string=0x00000000004DD3A0 "Wyi"
 *   insn=0x00000000004DD3AC string=0x00000000004DD3B0 "@"
 *   insn=0x00000000004DD3B4 string=0x00000000004DD3B8 "x"
 *   insn=0x00000000004DD3BC string=0x00000000004DD3C0 ""
 *   insn=0x00000000004DD3C0 string=0x00000000004DD3C4 "\n"
 *   insn=0x00000000004DD3CC string=0x00000000004DD3E8 "\t"
 *   insn=0x00000000004DD3D4 string=0x00000000004DD3D8 "Rv"
 *   insn=0x00000000004DD3D8 string=0x00000000004DD3DC ""
 *   insn=0x00000000004DD3D8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000004DD3DC string=0x00000000004DD3E0 ""
 *   insn=0x00000000004DD3E4 string=0x00000000004DD428 ""
 *   insn=0x00000000004DD3E8 string=0x00000000004DD3EC "?"
 *   insn=0x00000000004DD3F0 string=0x00000000004DD3F4 "\t"
 *   insn=0x00000000004DD3F4 string=0x00000000004DD3F8 " yh"
 *   insn=0x00000000004DD3FC string=0x00000000004DD400 ""
 *   insn=0x00000000004DD3FC string=0x00000000004DD42C ""
 *   insn=0x00000000004DD400 string=0x00000000004DD404 ""
 *   insn=0x00000000004DD408 string=0x00000000004DD40C ""
 *   insn=0x00000000004DD414 string=0x00000000004DD418 "\n"
 *   insn=0x00000000004DD414 string=0x00000000004DD424 "("
 *   insn=0x00000000004DD418 string=0x00000000004DD41C "Hyh"
 *   insn=0x00000000004DD41C string=0x00000000004DD420 "Hy)"
 *   insn=0x00000000004DD42C string=0x00000000004DD430 "\t"
 *   insn=0x00000000004DD430 string=0x00000000004DD434 "\n"
 *   insn=0x00000000004DD434 string=0x00000000004DD438 "\n"
 *   insn=0x00000000004DD438 string=0x00000000004DD43C "7y("
 *   insn=0x00000000004DD448 string=0x00000000004DD44C ""
 *   insn=0x00000000004DD450 string=0x00000000004DD454 "("
 *   insn=0x00000000004DD460 string=0x00000000004DD464 "9"
 *   insn=0x00000000004DD468 string=0x00000000004DD4B0 "v"
 *   insn=0x00000000004DD46C string=0x00000000004DD470 "\`"
 *   insn=0x00000000004DD480 string=0x00000000004DD484 "v"
 *   insn=0x00000000004DD484 string=0x00000000004DD488 ""
 *   insn=0x00000000004DD48C string=0x00000000004DCF40 "`"
 *   insn=0x00000000004DD490 string=0x00000000004DD494 "S`"
 *   insn=0x00000000004DD494 string=0x00000000004DD498 "`"
 *   insn=0x00000000004DD49C string=0x00000000004DD4A0 "|"
 *   insn=0x00000000004DD4A0 string=0x00000000004DD4A4 "\t"
 *   insn=0x00000000004DD4A4 string=0x00000000004DD4A8 "`"
 *   insn=0x00000000004DD4BC string=0x00000000004DD4C0 "H"
 *   insn=0x00000000004DD4C0 string=0x00000000004DD4C4 "?"
 *   insn=0x00000000004DD4C8 string=0x00000000004DD4CC ")y"
 *   insn=0x00000000004DD4CC string=0x00000000004DD4D0 "?"
 *   insn=0x00000000004DD4D0 string=0x00000000004DD4D4 ""
 *   insn=0x00000000004DD4DC string=0x00000000004DD4E0 "}@"
 *   insn=0x00000000004DD4E8 string=0x00000000004DD4EC "8"
 *   insn=0x00000000004DD4EC string=0x00000000004DD4F0 " l"
 *   insn=0x00000000004DD528 string=0x00000000004DD52C "B"
 *   insn=0x00000000004DD53C string=0x00000000004DD540 "("
 *   insn=0x00000000004DD548 string=0x00000000004DD54C "U"
 *   insn=0x00000000004DD558 string=0x00000000004DD55C "!"
 *   insn=0x00000000004DD560 string=0x00000000004DD564 ""
 *   insn=0x00000000004DD56C string=0x00000000004DD570 "A"
 *   insn=0x00000000004DD570 string=0x00000000004DD598 "Nc"
 *   insn=0x00000000004DD598 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall google::protobuf::internal::ExtensionSet::MergeFrom(
        char *this,
        const google::protobuf::internal::ExtensionSet *a2)
{
  char *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x0
  int v6; // w21
  __int64 v7; // x25
  __int64 v8; // x9
  __int64 v9; // x22
  int v10; // w8
  __int64 *v11; // x9
  __int64 v12; // x0
  int v13; // w26
  _BOOL4 v14; // w23
  google::protobuf::internal::RepeatedPtrFieldBase **v15; // x27
  _BYTE *v16; // x8
  __int64 v17; // x24
  char v18; // w9
  __int64 v19; // x22
  __int64 v20; // x21
  int v21; // w9
  int v22; // w24
  int v23; // w25
  int v24; // w8
  int v25; // w9
  void *v26; // x23
  __int64 v27; // x9
  __int64 v28; // x8
  unsigned __int64 v29; // x0
  void *v30; // x0
  const void *v31; // x1
  size_t v32; // x2
  void *v33; // x0
  int v34; // w9
  int v35; // w24
  int v36; // w25
  int v37; // w8
  int v38; // w9
  void *v39; // x23
  __int64 v40; // x9
  __int64 v41; // x8
  unsigned __int64 v42; // x0
  void *v43; // x0
  __int64 v44; // x0
  __int64 v45; // x25
  __int64 v46; // x21
  google::protobuf::internal::RepeatedPtrFieldBase *v47; // x8
  __int64 v48; // x22
  __int64 v49; // x9
  __int64 v50; // x10
  __int64 v51; // x23
  __int64 v52; // x0
  google::protobuf::internal::RepeatedPtrFieldBase *v53; // x24
  __int64 v54; // x8
  int v55; // w10
  int v56; // w8
  __int64 v57; // x9
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x9
  __int64 v61; // x0
  int v62; // w9
  int v63; // w25
  int v64; // w26
  int v65; // w8
  int v66; // w9
  void *v67; // x23
  unsigned __int64 v68; // x0
  void *v69; // x0
  _QWORD *v70; // [xsp+10h] [xbp-A0h]
  char *v71; // [xsp+18h] [xbp-98h]
  _BYTE v72[36]; // [xsp+24h] [xbp-8Ch] BYREF

  v2 = this;
  _ReadStatusReg(TPIDR_EL0);
  v3 = *((_QWORD *)a2 + 3);
  v71 = (char *)a2 + 8;
  if ( (const google::protobuf::internal::ExtensionSet *)v3 != (const google::protobuf::internal::ExtensionSet *)((char *)a2 + 8) )
  {
    v70 = this + 8;
    while ( !*(_BYTE *)(v3 + 49) )
    {
      if ( !*(_BYTE *)(v3 + 50) )
      {
        switch ( *(_BYTE *)(v3 + 48) )
        {
          case 1:
            google::protobuf::internal::ExtensionSet::SetDouble();
            break;
          case 2:
            google::protobuf::internal::ExtensionSet::SetFloat();
            break;
          case 3:
          case 0x10:
          case 0x12:
            google::protobuf::internal::ExtensionSet::SetInt64();
            break;
          case 4:
          case 6:
            google::protobuf::internal::ExtensionSet::SetUInt64();
            break;
          case 5:
          case 0xF:
          case 0x11:
            google::protobuf::internal::ExtensionSet::SetInt32();
            break;
          case 7:
          case 0xD:
            google::protobuf::internal::ExtensionSet::SetUInt32();
            break;
          case 8:
            google::protobuf::internal::ExtensionSet::SetBool();
            break;
          case 9:
          case 0xC:
            v5 = google::protobuf::internal::ExtensionSet::MutableString();
            sub_56A6A8(v5);
            break;
          case 0xA:
          case 0xB:
            v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, *(_QWORD *)(v3 + 40));
            break;
          case 0xE:
            google::protobuf::internal::ExtensionSet::SetEnum();
            break;
          default:
            break;
        }
      }
LABEL_95:
      this = (char *)sub_54C6A0(v3);
      v3 = (__int64)this;
      if ( this == v71 )
        return this;
    }
    v6 = *(_DWORD *)(v3 + 32);
    v7 = *(_QWORD *)(v3 + 56);
    memset(&v72[4], 0, 32);
    v8 = *((_QWORD *)v2 + 2);
    if ( v8 )
    {
      do
      {
        v9 = v8;
        v10 = *(_DWORD *)(v8 + 32);
        v11 = (__int64 *)(v8 + 24);
        if ( v10 > v6 )
          v11 = (__int64 *)(v9 + 16);
        v8 = *v11;
      }
      while ( v8 );
      v12 = v9;
      if ( v10 <= v6 )
        goto LABEL_26;
    }
    else
    {
      v9 = (__int64)v70;
    }
    if ( v9 == *((_QWORD *)v2 + 3) )
    {
LABEL_27:
      if ( v9 )
      {
        v13 = 1;
        v14 = v70 == (_QWORD *)v9 || *(_DWORD *)(v9 + 32) > v6;
        v17 = operator new(0x48u);
        *(_DWORD *)(v17 + 32) = v6;
        *(_OWORD *)(v17 + 36) = *(_OWORD *)v72;
        *(_OWORD *)(v17 + 52) = *(_OWORD *)&v72[16];
        *(_DWORD *)(v17 + 68) = 0;
        sub_54C8A0(v14, v17, v9, v70);
        v15 = (google::protobuf::internal::RepeatedPtrFieldBase **)(v17 + 40);
        ++*((_QWORD *)v2 + 5);
        *(_QWORD *)(v17 + 56) = v7;
        v16 = (_BYTE *)(v3 + 48);
        v18 = *(_BYTE *)(v3 + 48);
        *(_BYTE *)(v17 + 49) = 1;
        *(_BYTE *)(v17 + 48) = v18;
LABEL_34:
        switch ( *v16 )
        {
          case 1:
          case 3:
          case 4:
          case 6:
          case 0x10:
          case 0x12:
            if ( (v13 & 1) != 0 )
            {
              v19 = operator new(0x30u);
              *(_QWORD *)(v19 + 8) = 0x400000000LL;
              *(_QWORD *)v19 = v19 + 16;
              *v15 = (google::protobuf::internal::RepeatedPtrFieldBase *)v19;
            }
            else
            {
              v19 = (__int64)*v15;
            }
            v20 = *(_QWORD *)(v3 + 40);
            v35 = *(_DWORD *)(v19 + 8);
            v34 = *(_DWORD *)(v19 + 12);
            v36 = *(_DWORD *)(v20 + 8);
            v37 = v36 + v35;
            if ( v34 < v36 + v35 )
            {
              v38 = 2 * v34;
              if ( v38 >= v37 )
                v37 = v38;
              v39 = *(void **)v19;
              v40 = ((unsigned __int64)v37 * (unsigned __int128)8uLL) >> 64;
              *(_DWORD *)(v19 + 12) = v37;
              v41 = 8LL * v37;
              if ( v40 )
                v42 = -1;
              else
                v42 = v41;
              v43 = (void *)operator new[](v42);
              *(_QWORD *)v19 = v43;
              memcpy(v43, v39, 8LL * v35);
              if ( v39 != (void *)(v19 + 16) )
              {
                if ( v39 )
                {
                  operator delete[](v39);
                  v35 = *(_DWORD *)(v19 + 8);
                  v36 = *(_DWORD *)(v20 + 8);
                }
              }
            }
            v31 = *(const void **)v20;
            v32 = 8LL * v36;
            v33 = (void *)(*(_QWORD *)v19 + 8LL * v35);
            goto LABEL_94;
          case 2:
          case 5:
          case 7:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x11:
            if ( (v13 & 1) != 0 )
            {
              v19 = operator new(0x20u);
              *(_QWORD *)(v19 + 8) = 0x400000000LL;
              *(_QWORD *)v19 = v19 + 16;
              *v15 = (google::protobuf::internal::RepeatedPtrFieldBase *)v19;
            }
            else
            {
              v19 = (__int64)*v15;
            }
            v20 = *(_QWORD *)(v3 + 40);
            v22 = *(_DWORD *)(v19 + 8);
            v21 = *(_DWORD *)(v19 + 12);
            v23 = *(_DWORD *)(v20 + 8);
            v24 = v23 + v22;
            if ( v21 < v23 + v22 )
            {
              v25 = 2 * v21;
              if ( v25 >= v24 )
                v24 = v25;
              v26 = *(void **)v19;
              v27 = ((unsigned __int64)v24 * (unsigned __int128)4uLL) >> 64;
              *(_DWORD *)(v19 + 12) = v24;
              v28 = 4LL * v24;
              if ( v27 )
                v29 = -1;
              else
                v29 = v28;
              v30 = (void *)operator new[](v29);
              *(_QWORD *)v19 = v30;
              memcpy(v30, v26, 4LL * v22);
              if ( v26 != (void *)(v19 + 16) && v26 )
              {
                operator delete[](v26);
                v22 = *(_DWORD *)(v19 + 8);
                v23 = *(_DWORD *)(v20 + 8);
              }
            }
            v31 = *(const void **)v20;
            v32 = 4LL * v23;
            v33 = (void *)(*(_QWORD *)v19 + 4LL * v22);
            goto LABEL_94;
          case 8:
            if ( (v13 & 1) != 0 )
            {
              v19 = operator new(0x18u);
              *(_QWORD *)(v19 + 8) = 0x400000000LL;
              *(_QWORD *)v19 = v19 + 16;
              *v15 = (google::protobuf::internal::RepeatedPtrFieldBase *)v19;
            }
            else
            {
              v19 = (__int64)*v15;
            }
            v20 = *(_QWORD *)(v3 + 40);
            v63 = *(_DWORD *)(v19 + 8);
            v62 = *(_DWORD *)(v19 + 12);
            v64 = *(_DWORD *)(v20 + 8);
            v65 = v64 + v63;
            if ( v62 < v64 + v63 )
            {
              v66 = 2 * v62;
              if ( v66 >= v65 )
                v65 = v66;
              v67 = *(void **)v19;
              *(_DWORD *)(v19 + 12) = v65;
              if ( v65 < 0LL )
                v68 = -1;
              else
                v68 = v65;
              v69 = (void *)operator new[](v68);
              *(_QWORD *)v19 = v69;
              memcpy(v69, v67, v63);
              if ( v67 != (void *)(v19 + 16) && v67 )
              {
                operator delete[](v67);
                v63 = *(_DWORD *)(v19 + 8);
                v64 = *(_DWORD *)(v20 + 8);
              }
            }
            v31 = *(const void **)v20;
            v32 = v64;
            v33 = (void *)(*(_QWORD *)v19 + v63);
LABEL_94:
            memcpy(v33, v31, v32);
            *(_DWORD *)(v19 + 8) += *(_DWORD *)(v20 + 8);
            goto LABEL_95;
          case 9:
          case 0xC:
            if ( (v13 & 1) != 0 )
            {
              v61 = operator new(0x38u);
              *(_QWORD *)v61 = v61 + 24;
              *(_QWORD *)(v61 + 8) = 0;
              *(_DWORD *)(v61 + 16) = 4;
              *v15 = (google::protobuf::internal::RepeatedPtrFieldBase *)v61;
            }
            google::protobuf::RepeatedPtrField<std::string>::MergeFrom();
            goto LABEL_95;
          case 0xA:
          case 0xB:
            if ( v13 )
            {
              v44 = operator new(0x38u);
              *(_QWORD *)v44 = v44 + 24;
              *(_QWORD *)(v44 + 8) = 0;
              *(_DWORD *)(v44 + 16) = 4;
              *v15 = (google::protobuf::internal::RepeatedPtrFieldBase *)v44;
            }
            v45 = *(_QWORD *)(v3 + 40);
            if ( *(int *)(v45 + 8) < 1 )
              goto LABEL_95;
            v46 = 0;
            break;
          default:
            goto LABEL_95;
        }
        while ( 1 )
        {
          v47 = *v15;
          v48 = *(_QWORD *)(*(_QWORD *)v45 + 8 * v46);
          v49 = *((int *)*v15 + 2);
          if ( (int)v49 < *((_DWORD *)*v15 + 3) )
          {
            v50 = *(_QWORD *)v47;
            *((_DWORD *)v47 + 2) = v49 + 1;
            v51 = *(_QWORD *)(v50 + 8 * v49);
            if ( v51 )
              goto LABEL_77;
          }
          v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 24LL))(v48);
          v53 = *v15;
          v51 = v52;
          v54 = *((int *)*v15 + 2);
          v55 = *((_DWORD *)*v15 + 4);
          if ( (_DWORD)v54 == v55 )
          {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(*v15, v54 + 1);
            v56 = *((_DWORD *)v53 + 3) + 1;
          }
          else
          {
            v57 = *((int *)v53 + 3);
            if ( (_DWORD)v57 == v55 )
            {
              v58 = *(_QWORD *)(*(_QWORD *)v53 + 8 * v54);
              if ( v58 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
              goto LABEL_76;
            }
            if ( (int)v54 < (int)v57 )
              *(_QWORD *)(*(_QWORD *)v53 + 8 * v57) = *(_QWORD *)(*(_QWORD *)v53 + 8 * v54);
            v56 = v57 + 1;
          }
          *((_DWORD *)v53 + 3) = v56;
LABEL_76:
          v59 = *((int *)v53 + 2);
          v60 = *(_QWORD *)v53;
          *((_DWORD *)v53 + 2) = v59 + 1;
          *(_QWORD *)(v60 + 8 * v59) = v51;
LABEL_77:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 56LL))(v51, v48);
          if ( ++v46 >= *(int *)(v45 + 8) )
            goto LABEL_95;
        }
      }
      v12 = 0;
LABEL_31:
      v13 = 0;
      v15 = (google::protobuf::internal::RepeatedPtrFieldBase **)(v12 + 40);
      *(_QWORD *)(v12 + 56) = v7;
      v16 = (_BYTE *)(v3 + 48);
      goto LABEL_34;
    }
    v12 = sub_54C700(v9);
LABEL_26:
    if ( *(_DWORD *)(v12 + 32) >= v6 )
      goto LABEL_31;
    goto LABEL_27;
  }
  return this;
}

