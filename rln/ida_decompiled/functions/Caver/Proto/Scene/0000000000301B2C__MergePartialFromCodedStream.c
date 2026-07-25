/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000301B2C
 * Mangled: _ZN5Caver5Proto5Scene27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Scene::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F33F0  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F8FF0  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F9860  Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FCD00  Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000302278  Caver::Proto::Scene::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 199
 *   insn=0x0000000000301B54 string=0x0000000000301B58 "Y"
 *   insn=0x0000000000301B5C string=0x0000000000301B60 "("
 *   insn=0x0000000000301B60 string=0x0000000000301B64 ")"
 *   insn=0x0000000000301B64 string=0x0000000000301B68 "!A"
 *   insn=0x0000000000301B68 string=0x0000000000301B6C ")9@"
 *   insn=0x0000000000301B6C string=0x0000000000301B70 "*"
 *   insn=0x0000000000301B70 string=0x0000000000301B74 "J"
 *   insn=0x0000000000301B74 string=0x0000000000301B78 "+"
 *   insn=0x0000000000301B78 string=0x0000000000301B7C " "
 *   insn=0x0000000000301B7C string=0x0000000000301B80 ")"
 *   insn=0x0000000000301B80 string=0x0000000000301B84 "@"
 *   insn=0x0000000000301B84 string=0x0000000000301B88 "keG"
 *   insn=0x0000000000301B88 string=0x0000000000301B8C ")"
 *   insn=0x0000000000301B90 string=0x0000000000301B94 "*"
 *   insn=0x0000000000301B94 string=0x0000000000301B98 "Z"
 *   insn=0x0000000000301BA0 string=0x0000000000301BA4 "Z"
 *   insn=0x0000000000301BA8 string=0x0000000000301BAC ""
 *   insn=0x0000000000301BB0 string=0x0000000000301BB4 "hA"
 *   insn=0x0000000000301BB4 string=0x0000000000301BB8 "5A"
 *   insn=0x0000000000301BC0 string=0x0000000000301BC4 "h"
 *   insn=0x0000000000301BC8 string=0x0000000000301BCC """
 *   insn=0x0000000000301BCC string=0x0000000000301BD0 "\t"
 *   insn=0x0000000000301BD4 string=0x0000000000301BD8 "!"
 *   insn=0x0000000000301BD8 string=0x0000000000301BDC ""
 *   insn=0x0000000000301BDC string=0x0000000000301BE0 "a""
 *   insn=0x0000000000301BE0 string=0x0000000000301BE4 "h"
 *   insn=0x0000000000301BE8 string=0x0000000000301C04 "(|"
 *   insn=0x0000000000301BF4 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000301BF8 string=0x0000000000301BFC "a""
 *   insn=0x0000000000301BFC string=0x0000000000301C00 "!1"
 *   insn=0x0000000000301C04 string=0x0000000000301C08 ""
 *   insn=0x0000000000301C0C string=0x0000000000301C10 "("
 *   insn=0x0000000000301C10 string=0x0000000000301C14 "H{"
 *   insn=0x0000000000301C10 string=0x0000000000301E74 "("
 *   insn=0x0000000000301C14 string=0x0000000000301C18 ""
 *   insn=0x0000000000301C1C string=0x0000000000301C20 "("
 *   insn=0x0000000000301C1C string=0x0000000000301D94 "("
 *   insn=0x0000000000301C1C string=0x0000000000301DA4 "("
 *   insn=0x0000000000301C1C string=0x0000000000301DB4 "("
 *   insn=0x0000000000301C1C string=0x0000000000301DC4 "("
 *   insn=0x0000000000301C30 string=0x0000000000301C34 "h"
 *   insn=0x0000000000301C44 string=0x0000000000301C48 "\n"
 *   insn=0x0000000000301C48 string=0x0000000000301C4C "\t"
 *   insn=0x0000000000301C58 string=0x0000000000301CD4 "h"
 *   insn=0x0000000000301C64 string=0x0000000000301C78 ""
 *   insn=0x0000000000301C6C string=0x0000000000301C70 ","
 *   insn=0x0000000000301C70 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000301C80 string=0x0000000000301C84 "W"
 *   insn=0x0000000000301C84 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000301CC4 string=0x0000000000301CC8 "\t"
 *   insn=0x0000000000301CDC string=0x0000000000301CE0 "\t"
 *   insn=0x0000000000301CE4 string=0x0000000000301CE8 ")"
 *   insn=0x0000000000301CE8 string=0x0000000000301CEC ""
 *   insn=0x0000000000301CF0 string=0x0000000000301CF4 "h"
 *   insn=0x0000000000301CF8 string=0x0000000000301D0C "h&G)\n"
 *   insn=0x0000000000301D04 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000301D0C string=0x0000000000301D10 "\n"
 *   insn=0x0000000000301D14 string=0x0000000000301D18 "j:"
 *   insn=0x0000000000301D18 string=0x0000000000301D1C "\n("
 *   insn=0x0000000000301D38 string=0x00000000001F33F0 "P'"
 *   insn=0x0000000000301D3C string=0x0000000000301D40 "h"
 *   insn=0x0000000000301D4C string=0x0000000000301D50 "0"
 *   insn=0x0000000000301D50 string=0x0000000000301D54 "h:@"
 *   insn=0x0000000000301D54 string=0x0000000000301D58 ""
 *   insn=0x0000000000301D58 string=0x0000000000301D5C "K"
 *   insn=0x0000000000301D5C string=0x0000000000301D60 "h:"
 *   insn=0x0000000000301D5C string=0x0000000000301D64 "h"
 *   insn=0x0000000000301D6C string=0x0000000000301D70 "\t"
 *   insn=0x0000000000301D70 string=0x0000000000301D74 "?)"
 *   insn=0x0000000000301D78 string=0x0000000000301D7C "\t"
 *   insn=0x0000000000301D78 string=0x0000000000301C30 ""
 *   insn=0x0000000000301D7C string=0x0000000000301D80 "?I"
 *   insn=0x0000000000301D84 string=0x0000000000301D88 ""
 *   insn=0x0000000000301D88 string=0x0000000000301D8C "h"
 *   insn=0x0000000000301DA8 string=0x0000000000301DAC "a"
 *   insn=0x0000000000301DAC string=0x0000000000301DB0 "Z"
 *   insn=0x0000000000301DC8 string=0x0000000000301DCC "a"
 *   insn=0x0000000000301DD4 string=0x0000000000301DD8 ""
 *   insn=0x0000000000301DDC string=0x0000000000301DE0 "w"
 *   insn=0x0000000000301DE0 string=0x0000000000301E4C "h"
 *   insn=0x0000000000301DFC string=0x0000000000301E00 ")"
 *   insn=0x0000000000301E00 string=0x0000000000301E04 ")"
 *   insn=0x0000000000301E54 string=0x0000000000301E58 "\t"
 *   insn=0x0000000000301E5C string=0x0000000000301E60 ")"
 *   insn=0x0000000000301E60 string=0x0000000000301E64 ""
 *   insn=0x0000000000301E68 string=0x0000000000301E6C "h"
 *   insn=0x0000000000301E70 string=0x0000000000301EA0 "h&G)\n"
 *   insn=0x0000000000301E78 string=0x0000000000301E7C "@"
 *   insn=0x0000000000301E84 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000301E94 string=0x0000000000301E98 "n"
 *   insn=0x0000000000301EA0 string=0x0000000000301EA4 "\n"
 *   insn=0x0000000000301EA8 string=0x0000000000301EAC "j:"
 *   insn=0x0000000000301EAC string=0x0000000000301EB0 "j"
 *   insn=0x0000000000301EC8 string=0x0000000000301ECC "I"
 *   insn=0x0000000000301ECC string=0x0000000000301ED0 "`"
 *   insn=0x0000000000301ECC string=0x00000000001F8FF0 "0'"
 *   insn=0x0000000000301ED0 string=0x0000000000301ED4 "h"
 *   insn=0x0000000000301ED4 string=0x0000000000301ED8 "("
 *   insn=0x0000000000301EE4 string=0x0000000000301EE8 "h:@"
 *   insn=0x0000000000301EE8 string=0x0000000000301EEC ""
 *   insn=0x0000000000301EEC string=0x0000000000301EF0 "K"
 *   insn=0x0000000000301EF0 string=0x0000000000301EF4 "h:"
 *   insn=0x0000000000301EF0 string=0x0000000000301EF8 "h"
 *   insn=0x0000000000301EFC string=0x0000000000301F00 """
 *   insn=0x0000000000301F00 string=0x0000000000301F04 "\t"
 *   insn=0x0000000000301F04 string=0x0000000000301F08 "?i"
 *   insn=0x0000000000301F0C string=0x0000000000301F10 ""
 *   insn=0x0000000000301F10 string=0x0000000000301F14 "h"
 *   insn=0x0000000000301F1C string=0x0000000000301F20 ""
 *   insn=0x0000000000301F28 string=0x0000000000301F40 "h"
 *   insn=0x0000000000301F34 string=0x0000000000301F38 "N"
 *   insn=0x0000000000301F38 string=0x00000000001FB070 "0'"
 *   insn=0x0000000000301F48 string=0x0000000000301F4C "\t"
 *   insn=0x0000000000301F50 string=0x0000000000301F54 ")"
 *   insn=0x0000000000301F54 string=0x0000000000301F58 ""
 *   insn=0x0000000000301F5C string=0x0000000000301F60 "h"
 *   insn=0x0000000000301F64 string=0x0000000000301F78 "h&G)\n"
 *   insn=0x0000000000301F6C string=0x0000000000301F70 "8"
 *   insn=0x0000000000301F70 string=0x0000000000301F74 "@"
 *   insn=0x0000000000301F78 string=0x0000000000301F7C "\n"
 *   insn=0x0000000000301F80 string=0x0000000000301F84 "j:"
 *   insn=0x0000000000301F90 string=0x0000000000301F94 "{"
 *   insn=0x0000000000301FA0 string=0x0000000000301FA4 "/"
 *   insn=0x0000000000301FA4 string=0x00000000001F9860 "0'"
 *   insn=0x0000000000301FA8 string=0x0000000000301FAC "h"
 *   insn=0x0000000000301FAC string=0x0000000000301FB0 "h"
 *   insn=0x0000000000301FBC string=0x0000000000301FC0 "h:@"
 *   insn=0x0000000000301FC0 string=0x0000000000301FC4 ""
 *   insn=0x0000000000301FC4 string=0x0000000000301FC8 "K"
 *   insn=0x0000000000301FC8 string=0x0000000000301FCC "h:"
 *   insn=0x0000000000301FC8 string=0x0000000000301FD0 "h"
 *   insn=0x0000000000301FD4 string=0x0000000000301FD8 "b"
 *   insn=0x0000000000301FD8 string=0x0000000000301FDC "\t"
 *   insn=0x0000000000301FDC string=0x0000000000301FE0 "?"
 *   insn=0x0000000000301FE4 string=0x0000000000301FE8 ""
 *   insn=0x0000000000301FE8 string=0x0000000000301FEC "h"
 *   insn=0x0000000000301FFC string=0x0000000000302000 "\n"
 *   insn=0x0000000000302000 string=0x0000000000302004 "\t"
 *   insn=0x0000000000302010 string=0x0000000000302084 "h"
 *   insn=0x000000000030201C string=0x0000000000302030 ""
 *   insn=0x0000000000302024 string=0x0000000000302028 ">"
 *   insn=0x0000000000302038 string=0x000000000030203C "i"
 *   insn=0x000000000030205C string=0x0000000000302060 "\t"
 *   insn=0x0000000000302060 string=0x0000000000302064 ")A"
 *   insn=0x0000000000302074 string=0x0000000000302078 "\t"
 *   insn=0x000000000030208C string=0x0000000000302090 "\t"
 *   insn=0x0000000000302094 string=0x0000000000302098 ")"
 *   insn=0x0000000000302098 string=0x000000000030209C ""
 *   insn=0x00000000003020A0 string=0x00000000003020A4 "h"
 *   insn=0x00000000003020A8 string=0x00000000003020BC "h&G)\n"
 *   insn=0x00000000003020B4 string=0x00000000003020B8 " "
 *   insn=0x00000000003020BC string=0x00000000003020C0 "\n"
 *   insn=0x00000000003020C4 string=0x00000000003020C8 "j:"
 *   insn=0x00000000003020D4 string=0x00000000003020D8 "*"
 *   insn=0x00000000003020E8 string=0x00000000001FCD00 "0'"
 *   insn=0x00000000003020EC string=0x00000000003020F0 "h"
 *   insn=0x00000000003020F0 string=0x00000000003020F4 "H\t"
 *   insn=0x00000000003020FC string=0x0000000000302100 "D"
 *   insn=0x0000000000302100 string=0x0000000000302104 "h:@"
 *   insn=0x0000000000302104 string=0x0000000000302108 ""
 *   insn=0x0000000000302108 string=0x000000000030210C "K"
 *   insn=0x000000000030210C string=0x0000000000302110 "h:"
 *   insn=0x000000000030210C string=0x0000000000302114 "h"
 *   insn=0x0000000000302118 string=0x000000000030211C "B"
 *   insn=0x000000000030211C string=0x0000000000302120 "\t"
 *   insn=0x0000000000302120 string=0x0000000000302124 "?"
 *   insn=0x0000000000302128 string=0x000000000030212C "\t"
 *   insn=0x000000000030212C string=0x0000000000302130 "?"
 *   insn=0x0000000000302134 string=0x0000000000302138 ""
 *   insn=0x0000000000302138 string=0x000000000030213C "h"
 *   insn=0x0000000000302144 string=0x0000000000302148 ""
 *   insn=0x0000000000302150 string=0x0000000000302168 "h"
 *   insn=0x0000000000302154 string=0x0000000000302158 """
 *   insn=0x0000000000302160 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000302170 string=0x0000000000302174 "\t"
 *   insn=0x0000000000302178 string=0x000000000030217C ")"
 *   insn=0x000000000030217C string=0x0000000000302180 ""
 *   insn=0x0000000000302184 string=0x0000000000302188 "h"
 *   insn=0x000000000030218C string=0x00000000003021A0 "h&G)\n"
 *   insn=0x00000000003021A0 string=0x00000000003021A4 "\n"
 *   insn=0x00000000003021A8 string=0x00000000003021AC "j:"
 *   insn=0x00000000003021AC string=0x00000000003021B0 "j"
 *   insn=0x00000000003021CC string=0x00000000003021D0 "`"
 *   insn=0x00000000003021CC string=0x00000000001F8D20 "0'"
 *   insn=0x00000000003021D0 string=0x00000000003021D4 "h"
 *   insn=0x00000000003021D4 string=0x00000000003021D8 "("
 *   insn=0x00000000003021E0 string=0x00000000003021E4 ""
 *   insn=0x00000000003021E4 string=0x00000000003021E8 "h:@"
 *   insn=0x00000000003021E8 string=0x00000000003021EC ""
 *   insn=0x00000000003021EC string=0x00000000003021F0 "K"
 *   insn=0x00000000003021F0 string=0x00000000003021F4 "h:"
 *   insn=0x00000000003021F0 string=0x00000000003021F8 "h"
 *   insn=0x00000000003021FC string=0x0000000000302200 "!"
 *   insn=0x0000000000302200 string=0x0000000000302204 "h.@"
 *   insn=0x0000000000302210 string=0x0000000000302214 "`"
 *   insn=0x0000000000302218 string=0x0000000000302228 "("
 *   insn=0x0000000000302230 string=0x0000000000302234 "A"
 *   insn=0x000000000030225C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030226C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Scene::MergePartialFromCodedStream(
        Caver::Proto::Scene *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v4; // q0
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // x22
  char *v7; // x8
  unsigned __int64 v8; // x1
  unsigned int TagFallback; // w0
  int v10; // w8
  int v11; // w8
  int v12; // w24
  __int64 v13; // x8
  __int64 v14; // x23
  __int64 v15; // x8
  char *v16; // x8
  int v17; // w8
  int v18; // w9
  int v19; // w24
  int v20; // w8
  bool v21; // vf
  int v22; // w8
  _BYTE *v23; // x8
  __int64 v24; // x23
  char *v25; // x8
  int v26; // w8
  int v27; // w9
  int v28; // w24
  int v29; // w8
  int v30; // w8
  _BYTE *v31; // x8
  Caver::Proto::Rectangle *v32; // x23
  char *v33; // x8
  int v34; // w8
  int v35; // w9
  int v36; // w24
  int v37; // w8
  int v38; // w8
  _BYTE *v39; // x8
  int v40; // w8
  int v41; // w24
  __int64 v42; // x8
  __int64 v43; // x23
  __int64 v44; // x8
  char *v45; // x8
  int v46; // w8
  int v47; // w9
  int v48; // w24
  int v49; // w8
  int v50; // w8
  Caver::Proto::Program *v51; // x23
  char *v52; // x8
  int v53; // w8
  int v54; // w9
  int v55; // w24
  int v56; // w8
  int v57; // w8
  __int64 result; // x0
  google::protobuf::internal::RepeatedPtrFieldBase *v59; // [xsp+8h] [xbp-88h]
  __int128 v60; // [xsp+10h] [xbp-80h]
  unsigned int v61; // [xsp+24h] [xbp-6Ch] BYREF
  __int64 v62; // [xsp+28h] [xbp-68h]

  v59 = (Caver::Proto::Scene *)((char *)this + 72);
  *(_QWORD *)&v4 = &Caver::Proto::SceneObject::_default_template_name_;
  *((_QWORD *)&v4 + 1) = &Caver::Proto::SceneObject::_default_identifier_;
  v60 = v4;
  v6 = (Caver::Proto::Scene *)((char *)this + 16);
  v62 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
LABEL_2:
    v7 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v7 < *((_QWORD *)a2 + 2) && (*v7 & 0x80000000) == 0 )
    {
      v8 = (unsigned __int8)*v7;
      *((_DWORD *)a2 + 8) = v8;
      *((_QWORD *)a2 + 1) = v7 + 1;
      if ( !(_DWORD)v8 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v8 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v8 >> 3 )
    {
      case 1u:
        v10 = v8 & 7;
        if ( v10 != 2 )
          goto LABEL_42;
        while ( 1 )
        {
          v12 = *((_DWORD *)this + 6);
          v11 = *((_DWORD *)this + 7);
          if ( v12 >= v11 )
          {
            if ( v11 == *((_DWORD *)this + 8) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v6, v11 + 1);
              v12 = *((_DWORD *)this + 6);
              v11 = *((_DWORD *)this + 7);
            }
            *((_DWORD *)this + 7) = v11 + 1;
            v14 = operator new(0x90u);
            *(_QWORD *)v14 = off_6C73F8;
            *(_QWORD *)(v14 + 32) = v14 + 56;
            *(_QWORD *)(v14 + 40) = 0;
            *(_DWORD *)(v14 + 48) = 4;
            *(_DWORD *)(v14 + 8) = 0;
            *(_OWORD *)(v14 + 16) = v60;
            *(_QWORD *)(v14 + 88) = 0;
            *(_QWORD *)(v14 + 96) = 0;
            *(_DWORD *)(v14 + 104) = 1065353216;
            *(_QWORD *)(v14 + 112) = 0;
            *(_BYTE *)(v14 + 120) = 0;
            *(_QWORD *)(v14 + 128) = 0;
            *(_DWORD *)(v14 + 136) = 0;
            v15 = *((_QWORD *)this + 2);
            *((_DWORD *)this + 6) = v12 + 1;
            *(_QWORD *)(v15 + 8LL * v12) = v14;
          }
          else
          {
            v13 = *((_QWORD *)this + 2);
            *((_DWORD *)this + 6) = v12 + 1;
            v14 = *(_QWORD *)(v13 + 8LL * v12);
          }
          v16 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v61) & 1) == 0 )
              return 0;
          }
          else
          {
            v61 = (unsigned __int8)*v16;
            *((_QWORD *)a2 + 1) = v16 + 1;
          }
          v17 = *((_DWORD *)a2 + 14);
          v18 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v17 + 1;
          if ( v17 >= v18 )
            return 0;
          v19 = google::protobuf::io::CodedInputStream::PushLimit(a2, v61);
          if ( (Caver::Proto::SceneObject::MergePartialFromCodedStream((Caver::Proto::SceneObject *)v14, a2) & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v19);
          v20 = *((_DWORD *)a2 + 14);
          v21 = __OFSUB__(v20, 1);
          v22 = v20 - 1;
          if ( v22 < 0 == v21 )
            *((_DWORD *)a2 + 14) = v22;
          v23 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) )
            goto LABEL_2;
          if ( *v23 != 10 )
            break;
          *((_QWORD *)a2 + 1) = v23 + 1;
        }
        if ( *v23 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v23 + 1;
        goto LABEL_36;
      case 2u:
        v10 = v8 & 7;
        if ( v10 != 2 )
          goto LABEL_42;
LABEL_36:
        v24 = *((_QWORD *)this + 16);
        *((_DWORD *)this + 38) |= 4u;
        if ( !v24 )
        {
          v24 = operator new(0x100u);
          *(_QWORD *)(v24 + 32) = 0;
          *(_DWORD *)(v24 + 40) = 4;
          *(_QWORD *)v24 = off_6C7380;
          *(_QWORD *)(v24 + 88) = 0;
          *(_DWORD *)(v24 + 96) = 4;
          *(_QWORD *)(v24 + 16) = &Caver::Proto::ObjectLibrary::_default_name_;
          *(_QWORD *)(v24 + 24) = v24 + 48;
          *(_QWORD *)(v24 + 80) = v24 + 104;
          *(_QWORD *)(v24 + 136) = v24 + 160;
          *(_QWORD *)(v24 + 144) = 0;
          *(_DWORD *)(v24 + 152) = 4;
          *(_QWORD *)(v24 + 200) = 0;
          *(_DWORD *)(v24 + 208) = 4;
          *(_DWORD *)(v24 + 8) = 0;
          *(_DWORD *)(v24 + 248) = 0;
          *(_QWORD *)(v24 + 192) = v24 + 216;
          *((_QWORD *)this + 16) = v24;
        }
        v25 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v25 >= *((_QWORD *)a2 + 2) || *v25 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v61) & 1) == 0 )
            return 0;
        }
        else
        {
          v61 = (unsigned __int8)*v25;
          *((_QWORD *)a2 + 1) = v25 + 1;
        }
        v26 = *((_DWORD *)a2 + 14);
        v27 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v26 + 1;
        if ( v26 >= v27 )
          return 0;
        v28 = google::protobuf::io::CodedInputStream::PushLimit(a2, v61);
        if ( (Caver::Proto::ObjectLibrary::MergePartialFromCodedStream((Caver::Proto::ObjectLibrary *)v24, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v28);
        v29 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v29, 1);
        v30 = v29 - 1;
        if ( v30 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v30;
        v31 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_54:
        v32 = (Caver::Proto::Rectangle *)*((_QWORD *)this + 17);
        *((_DWORD *)this + 38) |= 8u;
        if ( !v32 )
        {
          v32 = (Caver::Proto::Rectangle *)operator new(0x20u);
          Caver::Proto::Rectangle::Rectangle(v32);
          *((_QWORD *)this + 17) = v32;
        }
        v33 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v33 >= *((_QWORD *)a2 + 2) || *v33 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v61) & 1) == 0 )
            return 0;
        }
        else
        {
          v61 = (unsigned __int8)*v33;
          *((_QWORD *)a2 + 1) = v33 + 1;
        }
        v34 = *((_DWORD *)a2 + 14);
        v35 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v34 + 1;
        if ( v34 >= v35 )
          return 0;
        v36 = google::protobuf::io::CodedInputStream::PushLimit(a2, v61);
        if ( (Caver::Proto::Rectangle::MergePartialFromCodedStream(v32, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v36);
        v37 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v37, 1);
        v38 = v37 - 1;
        if ( v38 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v38;
        v39 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v39 >= *((_QWORD *)a2 + 2) || *v39 != 34 )
          continue;
        do
        {
          *((_QWORD *)a2 + 1) = v39 + 1;
LABEL_68:
          v41 = *((_DWORD *)this + 20);
          v40 = *((_DWORD *)this + 21);
          if ( v41 >= v40 )
          {
            if ( v40 == *((_DWORD *)this + 22) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v59, v40 + 1);
              v41 = *((_DWORD *)this + 20);
              v40 = *((_DWORD *)this + 21);
            }
            *((_DWORD *)this + 21) = v40 + 1;
            v43 = operator new(0x68u);
            *(_QWORD *)v43 = off_6C7470;
            *(_QWORD *)(v43 + 32) = 0;
            *(_DWORD *)(v43 + 40) = 4;
            *(_DWORD *)(v43 + 8) = 0;
            *(_WORD *)(v43 + 80) = 0;
            *(_BYTE *)(v43 + 82) = 0;
            *(_QWORD *)(v43 + 88) = 0;
            *(_DWORD *)(v43 + 96) = 0;
            *(_QWORD *)(v43 + 16) = &Caver::Proto::SceneObjectGroup::_default_identifier_;
            *(_QWORD *)(v43 + 24) = v43 + 48;
            v44 = *((_QWORD *)this + 9);
            *((_DWORD *)this + 20) = v41 + 1;
            *(_QWORD *)(v44 + 8LL * v41) = v43;
          }
          else
          {
            v42 = *((_QWORD *)this + 9);
            *((_DWORD *)this + 20) = v41 + 1;
            v43 = *(_QWORD *)(v42 + 8LL * v41);
          }
          v45 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v45 >= *((_QWORD *)a2 + 2) || *v45 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v61) & 1) == 0 )
              return 0;
          }
          else
          {
            v61 = (unsigned __int8)*v45;
            *((_QWORD *)a2 + 1) = v45 + 1;
          }
          v46 = *((_DWORD *)a2 + 14);
          v47 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v46 + 1;
          if ( v46 >= v47 )
            return 0;
          v48 = google::protobuf::io::CodedInputStream::PushLimit(a2, v61);
          if ( (Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream((Caver::Proto::SceneObjectGroup *)v43, a2)
              & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v48);
          v49 = *((_DWORD *)a2 + 14);
          v21 = __OFSUB__(v49, 1);
          v50 = v49 - 1;
          if ( v50 < 0 == v21 )
            *((_DWORD *)a2 + 14) = v50;
          v39 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v39 >= *((_QWORD *)a2 + 2) )
            goto LABEL_2;
        }
        while ( *v39 == 34 );
        if ( *v39 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v39 + 1;
LABEL_86:
        v51 = (Caver::Proto::Program *)*((_QWORD *)this + 18);
        *((_DWORD *)this + 38) |= 0x10u;
        if ( !v51 )
        {
          v51 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v51);
          *((_QWORD *)this + 18) = v51;
        }
        v52 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v52 >= *((_QWORD *)a2 + 2) || *v52 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v61) & 1) == 0 )
            return 0;
        }
        else
        {
          v61 = (unsigned __int8)*v52;
          *((_QWORD *)a2 + 1) = v52 + 1;
        }
        v53 = *((_DWORD *)a2 + 14);
        v54 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v53 + 1;
        if ( v53 >= v54 )
          return 0;
        v55 = google::protobuf::io::CodedInputStream::PushLimit(a2, v61);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v51, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v55);
        v56 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v56, 1);
        v57 = v56 - 1;
        if ( v57 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v57;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v10 = v8 & 7;
        if ( v10 == 2 )
          goto LABEL_54;
        goto LABEL_42;
      case 4u:
        v10 = v8 & 7;
        if ( v10 == 2 )
          goto LABEL_68;
        goto LABEL_42;
      case 5u:
        v10 = v8 & 7;
        if ( v10 == 2 )
          goto LABEL_86;
        goto LABEL_42;
      default:
        v10 = v8 & 7;
LABEL_42:
        if ( v10 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v8,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

