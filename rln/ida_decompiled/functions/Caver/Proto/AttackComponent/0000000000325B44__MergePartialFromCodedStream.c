/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000325B44
 * Mangled: _ZN5Caver5Proto15AttackComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::AttackComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   0x00000000003261B4  Caver::Proto::AttackComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 205
 *   insn=0x0000000000325B58 string=0x0000000000325B5C "W"
 *   insn=0x0000000000325B60 string=0x0000000000325B64 "8"
 *   insn=0x0000000000325B74 string=0x0000000000325B78 "h"
 *   insn=0x0000000000325B7C string=0x0000000000325B80 """
 *   insn=0x0000000000325B80 string=0x0000000000325B84 "\t"
 *   insn=0x0000000000325B88 string=0x0000000000325B8C "!"
 *   insn=0x0000000000325B8C string=0x0000000000325B90 ""
 *   insn=0x0000000000325B90 string=0x0000000000325B94 "a""
 *   insn=0x0000000000325B94 string=0x0000000000325B98 "h"
 *   insn=0x0000000000325B9C string=0x0000000000325BA0 "r"
 *   insn=0x0000000000325B9C string=0x0000000000325BB8 "(|"
 *   insn=0x0000000000325BA8 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000325BAC string=0x0000000000325BB0 "a""
 *   insn=0x0000000000325BB8 string=0x0000000000325BBC ""
 *   insn=0x0000000000325BC4 string=0x0000000000325BC8 "{"
 *   insn=0x0000000000325BC4 string=0x0000000000325CF4 "("
 *   insn=0x0000000000325BC8 string=0x0000000000325BCC ""
 *   insn=0x0000000000325BD0 string=0x0000000000325BD4 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325C04 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325C14 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325C24 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325C34 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325C44 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325C74 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325CA4 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325CB4 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325CE4 "("
 *   insn=0x0000000000325BD0 string=0x0000000000325CFC "("
 *   insn=0x0000000000325BD0 string=0x0000000000325D0C "("
 *   insn=0x0000000000325BD0 string=0x0000000000325D1C "("
 *   insn=0x0000000000325BD8 string=0x0000000000325BDC "i"
 *   insn=0x0000000000325BDC string=0x0000000000325BE0 "?"
 *   insn=0x0000000000325BE0 string=0x0000000000325BE4 """
 *   insn=0x0000000000325BE4 string=0x0000000000325BE8 "*"
 *   insn=0x0000000000325BEC string=0x0000000000325BF0 "J"
 *   insn=0x0000000000325BF0 string=0x0000000000325BF4 ")"
 *   insn=0x0000000000325BF8 string=0x0000000000325BFC "i"
 *   insn=0x0000000000325BFC string=0x0000000000325C00 "X"
 *   insn=0x0000000000325C0C string=0x0000000000325C10 "H"
 *   insn=0x0000000000325C28 string=0x0000000000325C2C "!"
 *   insn=0x0000000000325C2C string=0x0000000000325C30 "<"
 *   insn=0x0000000000325C44 string=0x0000000000325C48 "A"
 *   insn=0x0000000000325C48 string=0x0000000000325C4C "i"
 *   insn=0x0000000000325C4C string=0x0000000000325C50 "?"
 *   insn=0x0000000000325C50 string=0x0000000000325C54 "b"
 *   insn=0x0000000000325C54 string=0x0000000000325C58 "*"
 *   insn=0x0000000000325C58 string=0x0000000000325C5C "*"
 *   insn=0x0000000000325C5C string=0x0000000000325C60 "J"
 *   insn=0x0000000000325C60 string=0x0000000000325C64 ")"
 *   insn=0x0000000000325C68 string=0x0000000000325C6C "i"
 *   insn=0x0000000000325C6C string=0x0000000000325C70 "b"
 *   insn=0x0000000000325C78 string=0x0000000000325C7C "i"
 *   insn=0x0000000000325C7C string=0x0000000000325C80 "?"
 *   insn=0x0000000000325C80 string=0x0000000000325C84 "B"
 *   insn=0x0000000000325C84 string=0x0000000000325C88 "*"
 *   insn=0x0000000000325C88 string=0x0000000000325C8C "\n"
 *   insn=0x0000000000325C8C string=0x0000000000325C90 "J"
 *   insn=0x0000000000325C90 string=0x0000000000325C94 ")"
 *   insn=0x0000000000325C98 string=0x0000000000325C9C "i"
 *   insn=0x0000000000325C9C string=0x0000000000325CA0 "i"
 *   insn=0x0000000000325CA8 string=0x0000000000325CAC "!"
 *   insn=0x0000000000325CB8 string=0x0000000000325CBC "i"
 *   insn=0x0000000000325CBC string=0x0000000000325CC0 "?"
 *   insn=0x0000000000325CC4 string=0x0000000000325CC8 "*"
 *   insn=0x0000000000325CC8 string=0x0000000000325CCC "J"
 *   insn=0x0000000000325CCC string=0x0000000000325CD0 "J"
 *   insn=0x0000000000325CD0 string=0x0000000000325CD4 ")"
 *   insn=0x0000000000325CD8 string=0x0000000000325CDC "i"
 *   insn=0x0000000000325CDC string=0x0000000000325CE0 "3"
 *   insn=0x0000000000325CE8 string=0x0000000000325CEC "!"
 *   insn=0x0000000000325CEC string=0x0000000000325CF0 "q"
 *   insn=0x0000000000325D00 string=0x0000000000325D04 "a"
 *   insn=0x0000000000325D04 string=0x0000000000325D08 "|"
 *   insn=0x0000000000325D20 string=0x0000000000325D24 "a"
 *   insn=0x0000000000325D3C string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000325D40 string=0x0000000000325D44 ""
 *   insn=0x0000000000325D50 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000325D58 string=0x0000000000325D5C "i"
 *   insn=0x0000000000325D64 string=0x0000000000325D68 "?"
 *   insn=0x0000000000325D68 string=0x0000000000325D6C "j"
 *   insn=0x0000000000325D70 string=0x0000000000325D74 """
 *   insn=0x0000000000325D74 string=0x0000000000325D78 "*"
 *   insn=0x0000000000325D78 string=0x0000000000325D7C "_A"
 *   insn=0x0000000000325D80 string=0x0000000000325D84 ")"
 *   insn=0x0000000000325D84 string=0x0000000000325D88 "i"
 *   insn=0x0000000000325D88 string=0x0000000000325D8C "?"
 *   insn=0x0000000000325DA4 string=0x0000000000325DA8 "i"
 *   insn=0x0000000000325DB0 string=0x0000000000325DB4 "?"
 *   insn=0x0000000000325DB4 string=0x0000000000325DB8 "j"
 *   insn=0x0000000000325DC0 string=0x0000000000325DC4 "*"
 *   insn=0x0000000000325DC4 string=0x0000000000325DC8 "_a"
 *   insn=0x0000000000325DC8 string=0x0000000000325DCC "a"
 *   insn=0x0000000000325DCC string=0x0000000000325DD0 ")"
 *   insn=0x0000000000325DD0 string=0x0000000000325DD4 "i"
 *   insn=0x0000000000325DD4 string=0x0000000000325DD8 "?"
 *   insn=0x0000000000325DE8 string=0x0000000000325DEC " "
 *   insn=0x0000000000325DF0 string=0x0000000000325DF4 "i"
 *   insn=0x0000000000325DFC string=0x0000000000325E00 "?"
 *   insn=0x0000000000325E00 string=0x0000000000325E04 "j"
 *   insn=0x0000000000325E08 string=0x0000000000325E0C "b"
 *   insn=0x0000000000325E0C string=0x0000000000325E10 "*"
 *   insn=0x0000000000325E10 string=0x0000000000325E14 "_"
 *   insn=0x0000000000325E18 string=0x0000000000325E1C ")"
 *   insn=0x0000000000325E1C string=0x0000000000325E20 "i"
 *   insn=0x0000000000325E20 string=0x0000000000325E24 "?"
 *   insn=0x0000000000325E3C string=0x0000000000325E40 "i"
 *   insn=0x0000000000325E48 string=0x0000000000325E4C "?"
 *   insn=0x0000000000325E4C string=0x0000000000325E50 "j"
 *   insn=0x0000000000325E58 string=0x0000000000325E5C "("
 *   insn=0x0000000000325E64 string=0x0000000000325E68 "("
 *   insn=0x0000000000325E68 string=0x0000000000325E6C "h"
 *   insn=0x0000000000325E74 string=0x0000000000325E78 "6R"
 *   insn=0x0000000000325E78 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000325E88 string=0x0000000000325E8C "("
 *   insn=0x0000000000325E90 string=0x0000000000325E94 "h"
 *   insn=0x0000000000325E9C string=0x0000000000325EA0 "\t"
 *   insn=0x0000000000325EA0 string=0x0000000000325EA4 "?"
 *   insn=0x0000000000325EA8 string=0x0000000000325EAC ""
 *   insn=0x0000000000325EAC string=0x0000000000325EB0 "h"
 *   insn=0x0000000000325EB8 string=0x0000000000325EBC "%R"
 *   insn=0x0000000000325ECC string=0x0000000000325ED0 "("
 *   insn=0x0000000000325ED4 string=0x0000000000325ED8 "h"
 *   insn=0x0000000000325EE0 string=0x0000000000325EE4 "\t"
 *   insn=0x0000000000325EE4 string=0x0000000000325EE8 "?"
 *   insn=0x0000000000325EE8 string=0x0000000000325EEC "a"
 *   insn=0x0000000000325EEC string=0x0000000000325EF0 ""
 *   insn=0x0000000000325EF0 string=0x0000000000325EF4 "h"
 *   insn=0x0000000000325F00 string=0x0000000000325F04 "`"
 *   insn=0x0000000000325F10 string=0x0000000000325F14 "("
 *   insn=0x0000000000325F18 string=0x0000000000325F1C "h"
 *   insn=0x0000000000325F24 string=0x0000000000325F28 "\t"
 *   insn=0x0000000000325F28 string=0x0000000000325F2C "?"
 *   insn=0x0000000000325F2C string=0x0000000000325F30 "A"
 *   insn=0x0000000000325F30 string=0x0000000000325F34 ""
 *   insn=0x0000000000325F34 string=0x0000000000325F38 "h"
 *   insn=0x0000000000325F44 string=0x0000000000325F48 "@"
 *   insn=0x0000000000325F54 string=0x0000000000325F58 "("
 *   insn=0x0000000000325F5C string=0x0000000000325F60 "h"
 *   insn=0x0000000000325F68 string=0x0000000000325F6C "\t"
 *   insn=0x0000000000325F6C string=0x0000000000325F70 "?5"
 *   insn=0x0000000000325F70 string=0x0000000000325F74 "!"
 *   insn=0x0000000000325F74 string=0x0000000000325F78 ""
 *   insn=0x0000000000325F78 string=0x0000000000325F7C "h"
 *   insn=0x0000000000325F88 string=0x0000000000325F8C " "
 *   insn=0x0000000000325F98 string=0x0000000000325F9C "("
 *   insn=0x0000000000325FA0 string=0x0000000000325FA4 "h"
 *   insn=0x0000000000325FA8 string=0x0000000000325FAC "b"
 *   insn=0x0000000000325FAC string=0x0000000000325FB0 "\t"
 *   insn=0x0000000000325FB0 string=0x0000000000325FB4 "?U"
 *   insn=0x0000000000325FB8 string=0x0000000000325FBC ""
 *   insn=0x0000000000325FBC string=0x0000000000325FC0 "h"
 *   insn=0x0000000000325FDC string=0x0000000000325FE0 "("
 *   insn=0x0000000000325FE4 string=0x0000000000325FE8 "i"
 *   insn=0x0000000000325FE8 string=0x0000000000325FEC "?"
 *   insn=0x0000000000325FEC string=0x0000000000325FF0 "B"
 *   insn=0x0000000000325FF0 string=0x0000000000325FF4 "*"
 *   insn=0x0000000000325FF4 string=0x0000000000325FF8 "_i"
 *   insn=0x0000000000325FFC string=0x0000000000326000 ")"
 *   insn=0x0000000000326000 string=0x0000000000326004 "i"
 *   insn=0x0000000000326008 string=0x000000000032600C ""
 *   insn=0x0000000000326014 string=0x000000000032602C "h"
 *   insn=0x0000000000326018 string=0x000000000032601C "q="
 *   insn=0x000000000032601C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000326024 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000326034 string=0x0000000000326038 "\t"
 *   insn=0x000000000032603C string=0x0000000000326040 ")"
 *   insn=0x0000000000326040 string=0x0000000000326044 ""
 *   insn=0x0000000000326048 string=0x000000000032604C "h"
 *   insn=0x0000000000326050 string=0x0000000000326064 "h&G)\n"
 *   insn=0x0000000000326064 string=0x0000000000326068 "\n"
 *   insn=0x000000000032606C string=0x0000000000326070 "j:"
 *   insn=0x000000000032607C string=0x0000000000326080 "@r"
 *   insn=0x000000000032608C string=0x0000000000326090 "$K"
 *   insn=0x0000000000326090 string=0x00000000001F8D20 "0'"
 *   insn=0x0000000000326094 string=0x0000000000326098 "h"
 *   insn=0x00000000003260A4 string=0x00000000003260A8 "Zs"
 *   insn=0x00000000003260A8 string=0x00000000003260AC "h:@"
 *   insn=0x00000000003260AC string=0x00000000003260B0 ""
 *   insn=0x00000000003260B0 string=0x00000000003260B4 "K"
 *   insn=0x00000000003260B4 string=0x00000000003260B8 "h:"
 *   insn=0x00000000003260B4 string=0x00000000003260BC "h"
 *   insn=0x00000000003260C4 string=0x00000000003260C8 "\t"
 *   insn=0x00000000003260C8 string=0x00000000003260CC "?"
 *   insn=0x00000000003260CC string=0x00000000003260D0 "A"
 *   insn=0x00000000003260D0 string=0x00000000003260D4 ""
 *   insn=0x00000000003260D4 string=0x00000000003260D8 "h"
 *   insn=0x00000000003260E4 string=0x00000000003260E8 "@"
 *   insn=0x00000000003260F4 string=0x00000000003260F8 "("
 *   insn=0x00000000003260FC string=0x0000000000326100 "h"
 *   insn=0x0000000000326108 string=0x000000000032610C "\t"
 *   insn=0x000000000032610C string=0x0000000000326110 "?"
 *   insn=0x0000000000326110 string=0x0000000000326114 "!"
 *   insn=0x0000000000326114 string=0x0000000000326118 ""
 *   insn=0x0000000000326118 string=0x000000000032611C "h"
 *   insn=0x0000000000326128 string=0x000000000032612C " "
 *   insn=0x0000000000326138 string=0x000000000032613C "("
 *   insn=0x0000000000326140 string=0x0000000000326144 "h"
 *   insn=0x0000000000326148 string=0x000000000032614C "a"
 *   insn=0x000000000032614C string=0x0000000000326150 "h.@"
 *   insn=0x0000000000326150 string=0x0000000000326154 "("
 *   insn=0x000000000032615C string=0x0000000000326160 "`"
 *   insn=0x0000000000326180 string=0x000000000032619C "M@"
 *   insn=0x000000000032619C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003261A4 string=0x00000000003261A8 "BD"
 *   insn=0x00000000003261A8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AttackComponent::MergePartialFromCodedStream(
        Caver::Proto::AttackComponent *this,
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
  _BYTE *v12; // x9
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  char *v19; // x9
  unsigned int v20; // w10
  _BYTE *v21; // x9
  int v22; // w8
  int v23; // w11
  int v24; // w11
  int v25; // w11
  int v26; // w11
  int v27; // w9
  _BYTE *v28; // x8
  int v29; // w9
  _BYTE *v30; // x8
  int v31; // w9
  _BYTE *v32; // x8
  int v33; // w9
  _BYTE *v34; // x8
  int v35; // w9
  _BYTE *v36; // x8
  int v37; // w9
  _BYTE *v38; // x9
  Caver::Proto::Program *v39; // x21
  char *v40; // x8
  int v41; // w8
  int v42; // w9
  int v43; // w22
  int v44; // w8
  bool v45; // vf
  int v46; // w8
  _BYTE *v47; // x8
  int v48; // w9
  _BYTE *v49; // x8
  int v50; // w9
  __int64 result; // x0
  unsigned int v52; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v53; // [xsp+8h] [xbp-38h]

  v53 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
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
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_43;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v52) & 1) == 0 )
            return 0;
          v11 = v52;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v52 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v23 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 18) = v23 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v19 = v12 + 1;
        *((_QWORD *)a2 + 1) = v19;
        if ( (unsigned __int64)v19 < v9 )
          goto LABEL_32;
        goto LABEL_51;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_43;
        v19 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 >= v9 )
          goto LABEL_51;
LABEL_32:
        if ( *v19 < 0 )
        {
LABEL_51:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v52) & 1) == 0 )
            return 0;
          v20 = v52;
          v21 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v20 = (unsigned __int8)*v19;
          v21 = v19 + 1;
          v52 = v20;
          *((_QWORD *)a2 + 1) = v21;
        }
        v24 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 4) = v20;
        *((_DWORD *)this + 18) = v24 | 2;
        if ( (unsigned __int64)v21 >= v9 || *v21 != 24 )
          continue;
        v13 = v21 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_56;
LABEL_22:
        if ( *v13 < 0 )
        {
LABEL_56:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v52) & 1) == 0 )
            return 0;
          v14 = v52;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v52 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v25 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 5) = v14;
        *((_DWORD *)this + 18) = v25 | 4;
        if ( (unsigned __int64)v15 >= v9 || *v15 != 32 )
          continue;
        v16 = v15 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v9 )
          goto LABEL_61;
LABEL_26:
        if ( *v16 < 0 )
        {
LABEL_61:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v52) & 1) == 0 )
            return 0;
          v17 = v52;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v52 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v26 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 6) = v17;
        *((_DWORD *)this + 18) = v26 | 8;
        if ( (unsigned __int64)v18 >= v9 || *v18 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v18 + 1;
LABEL_66:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v52) & 1) == 0 )
          return 0;
        v27 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 10) = v52;
        *((_DWORD *)this + 18) = v27 | 0x20;
        v28 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v28 >= *((_QWORD *)a2 + 2) || *v28 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v28 + 1;
LABEL_70:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v52) & 1) == 0 )
          return 0;
        v29 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 11) = v52;
        *((_DWORD *)this + 18) = v29 | 0x40;
        v30 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v30 >= *((_QWORD *)a2 + 2) || *v30 != 61 )
          continue;
        *((_QWORD *)a2 + 1) = v30 + 1;
LABEL_74:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v52) & 1) == 0 )
          return 0;
        v31 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 12) = v52;
        *((_DWORD *)this + 18) = v31 | 0x80;
        v32 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v32 >= *((_QWORD *)a2 + 2) || *v32 != 69 )
          continue;
        *((_QWORD *)a2 + 1) = v32 + 1;
LABEL_78:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v52) & 1) == 0 )
          return 0;
        v33 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 13) = v52;
        *((_DWORD *)this + 18) = v33 | 0x100;
        v34 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v34 >= *((_QWORD *)a2 + 2) || *v34 != 77 )
          continue;
        *((_QWORD *)a2 + 1) = v34 + 1;
LABEL_82:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v52) & 1) == 0 )
          return 0;
        v35 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 16) = v52;
        *((_DWORD *)this + 18) = v35 | 0x800;
        v36 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v36 >= *((_QWORD *)a2 + 2) || *v36 != 85 )
          continue;
        *((_QWORD *)a2 + 1) = v36 + 1;
LABEL_86:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v52) & 1) == 0 )
          return 0;
        v37 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 17) = v52;
        v22 = v37 | 0x1000;
        *((_DWORD *)this + 18) = v37 | 0x1000;
        v38 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v38 >= *((_QWORD *)a2 + 2) || *v38 != 90 )
          continue;
        *((_QWORD *)a2 + 1) = v38 + 1;
LABEL_90:
        v39 = (Caver::Proto::Program *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 18) = v22 | 0x10;
        if ( !v39 )
        {
          v39 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v39);
          *((_QWORD *)this + 4) = v39;
        }
        v40 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v40 >= *((_QWORD *)a2 + 2) || *v40 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v52) & 1) == 0 )
            return 0;
        }
        else
        {
          v52 = (unsigned __int8)*v40;
          *((_QWORD *)a2 + 1) = v40 + 1;
        }
        v41 = *((_DWORD *)a2 + 14);
        v42 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v41 + 1;
        if ( v41 >= v42 )
          return 0;
        v43 = google::protobuf::io::CodedInputStream::PushLimit(a2, v52);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v39, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v43);
        v44 = *((_DWORD *)a2 + 14);
        v45 = __OFSUB__(v44, 1);
        v46 = v44 - 1;
        if ( v46 < 0 == v45 )
          *((_DWORD *)a2 + 14) = v46;
        v47 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v47 >= *((_QWORD *)a2 + 2) || *v47 != 101 )
          continue;
        *((_QWORD *)a2 + 1) = v47 + 1;
LABEL_104:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v52) & 1) == 0 )
          return 0;
        v48 = *((_DWORD *)this + 18);
        *((_DWORD *)this + 14) = v52;
        *((_DWORD *)this + 18) = v48 | 0x200;
        v49 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v49 >= *((_QWORD *)a2 + 2) || *v49 != 109 )
          continue;
        *((_QWORD *)a2 + 1) = v49 + 1;
LABEL_108:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v52) & 1) != 0 )
        {
          v50 = *((_DWORD *)this + 18);
          *((_DWORD *)this + 15) = v52;
          *((_DWORD *)this + 18) = v50 | 0x400;
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_43;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_22;
        goto LABEL_56;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_43;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v9 )
          goto LABEL_26;
        goto LABEL_61;
      case 5u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_66;
        goto LABEL_43;
      case 6u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_70;
        goto LABEL_43;
      case 7u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_74;
        goto LABEL_43;
      case 8u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_78;
        goto LABEL_43;
      case 9u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_82;
        goto LABEL_43;
      case 0xAu:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_86;
        goto LABEL_43;
      case 0xBu:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_43;
        v22 = *((_DWORD *)this + 18);
        goto LABEL_90;
      case 0xCu:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_43;
        goto LABEL_104;
      case 0xDu:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_108;
        goto LABEL_43;
      default:
        v8 = v6 & 7;
LABEL_43:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

