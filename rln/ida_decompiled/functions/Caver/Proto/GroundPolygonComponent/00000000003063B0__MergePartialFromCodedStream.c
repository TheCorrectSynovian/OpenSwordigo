/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003063B0
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F6030  Caver::Proto::Polygon::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73B0  Caver::Proto::Polygon::Polygon(void)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000003069D4  Caver::Proto::GroundPolygonComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 196
 *   insn=0x00000000003063C8 string=0x00000000003063CC "X"
 *   insn=0x00000000003063CC string=0x00000000003063D0 ""
 *   insn=0x00000000003063D4 string=0x00000000003063D8 "9"
 *   insn=0x00000000003063E0 string=0x00000000003063E4 "9"
 *   insn=0x00000000003063E8 string=0x00000000003063EC "h"
 *   insn=0x00000000003063F0 string=0x00000000003063F4 """
 *   insn=0x00000000003063F4 string=0x00000000003063F8 "\t"
 *   insn=0x00000000003063FC string=0x0000000000306400 "!"
 *   insn=0x0000000000306400 string=0x0000000000306404 ""
 *   insn=0x0000000000306404 string=0x0000000000306408 "a""
 *   insn=0x0000000000306408 string=0x000000000030640C "h"
 *   insn=0x0000000000306410 string=0x0000000000306414 "\"
 *   insn=0x0000000000306410 string=0x000000000030642C "(|"
 *   insn=0x000000000030641C string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000306420 string=0x0000000000306424 "a""
 *   insn=0x000000000030642C string=0x0000000000306430 ""
 *   insn=0x0000000000306438 string=0x000000000030643C "({"
 *   insn=0x0000000000306438 string=0x000000000030668C "("
 *   insn=0x000000000030643C string=0x0000000000306440 ""
 *   insn=0x0000000000306444 string=0x0000000000306448 "("
 *   insn=0x0000000000306444 string=0x000000000030658C "("
 *   insn=0x0000000000306444 string=0x000000000030659C "("
 *   insn=0x0000000000306444 string=0x00000000003065CC "("
 *   insn=0x0000000000306444 string=0x00000000003065DC "("
 *   insn=0x0000000000306444 string=0x000000000030660C "("
 *   insn=0x0000000000306444 string=0x0000000000306668 "("
 *   insn=0x0000000000306444 string=0x000000000030667C "("
 *   insn=0x0000000000306458 string=0x000000000030645C "h"
 *   insn=0x0000000000306460 string=0x0000000000306464 ")}@"
 *   insn=0x0000000000306464 string=0x0000000000306468 "?"
 *   insn=0x0000000000306470 string=0x0000000000306474 "*"
 *   insn=0x0000000000306480 string=0x00000000003064CC "h"
 *   insn=0x000000000030648C string=0x00000000003064A0 ""
 *   insn=0x0000000000306494 string=0x0000000000306498 """
 *   insn=0x0000000000306498 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003064A8 string=0x00000000003064AC "M"
 *   insn=0x00000000003064AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003064B0 string=0x00000000003064B4 ""
 *   insn=0x00000000003064B4 string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000003064BC string=0x00000000003064C0 "\n"
 *   insn=0x00000000003064C4 string=0x00000000003064C8 "6y("
 *   insn=0x00000000003064D4 string=0x00000000003064D8 "\t"
 *   insn=0x00000000003064DC string=0x00000000003064E0 ")"
 *   insn=0x00000000003064E0 string=0x00000000003064E4 ""
 *   insn=0x00000000003064E8 string=0x00000000003064EC "h"
 *   insn=0x00000000003064F0 string=0x0000000000306504 "h&G)\n"
 *   insn=0x00000000003064FC string=0x00000000001F9050 "0'"
 *   insn=0x0000000000306504 string=0x0000000000306508 "\n"
 *   insn=0x000000000030650C string=0x0000000000306510 "j:"
 *   insn=0x0000000000306510 string=0x0000000000306514 "J#"
 *   insn=0x000000000030652C string=0x0000000000306530 "x"
 *   insn=0x0000000000306530 string=0x0000000000306534 "@""
 *   insn=0x0000000000306530 string=0x00000000001F5710 "P'"
 *   insn=0x0000000000306534 string=0x0000000000306538 "h"
 *   insn=0x0000000000306538 string=0x000000000030653C """
 *   insn=0x0000000000306544 string=0x0000000000306548 "2"
 *   insn=0x0000000000306548 string=0x000000000030654C "h:@"
 *   insn=0x000000000030654C string=0x0000000000306550 ""
 *   insn=0x0000000000306550 string=0x0000000000306554 "K"
 *   insn=0x0000000000306554 string=0x0000000000306558 "h:"
 *   insn=0x0000000000306554 string=0x000000000030655C "h"
 *   insn=0x0000000000306560 string=0x0000000000306564 "B"
 *   insn=0x0000000000306564 string=0x0000000000306568 "\t"
 *   insn=0x0000000000306568 string=0x000000000030656C "?)"
 *   insn=0x000000000030656C string=0x0000000000306570 "@"
 *   insn=0x0000000000306570 string=0x0000000000306574 "\t"
 *   insn=0x0000000000306570 string=0x0000000000306458 ""
 *   insn=0x0000000000306574 string=0x0000000000306578 "?I"
 *   insn=0x000000000030657C string=0x0000000000306580 ""
 *   insn=0x0000000000306580 string=0x0000000000306584 "h"
 *   insn=0x0000000000306584 string=0x0000000000306588 "$"
 *   insn=0x00000000003065A0 string=0x00000000003065A4 "i"
 *   insn=0x00000000003065A4 string=0x00000000003065A8 "?"
 *   insn=0x00000000003065A8 string=0x00000000003065AC "b"
 *   insn=0x00000000003065AC string=0x00000000003065B0 "*"
 *   insn=0x00000000003065B0 string=0x00000000003065B4 "*"
 *   insn=0x00000000003065B4 string=0x00000000003065B8 "J"
 *   insn=0x00000000003065B8 string=0x00000000003065BC ")"
 *   insn=0x00000000003065C0 string=0x00000000003065C4 "i"
 *   insn=0x00000000003065C4 string=0x00000000003065C8 "b"
 *   insn=0x00000000003065D4 string=0x00000000003065D8 "k"
 *   insn=0x00000000003065E0 string=0x00000000003065E4 "j"
 *   insn=0x00000000003065E4 string=0x00000000003065E8 "_"
 *   insn=0x00000000003065EC string=0x00000000003065F0 "I"
 *   insn=0x00000000003065F4 string=0x00000000003065F8 ")"
 *   insn=0x00000000003065F8 string=0x00000000003065FC "J"
 *   insn=0x0000000000306600 string=0x0000000000306604 "j"
 *   insn=0x000000000030661C string=0x0000000000306620 ""
 *   insn=0x0000000000306628 string=0x0000000000306640 "h"
 *   insn=0x0000000000306634 string=0x0000000000306638 "^"
 *   insn=0x0000000000306638 string=0x00000000001F73B0 "0'"
 *   insn=0x0000000000306648 string=0x000000000030664C "\t"
 *   insn=0x0000000000306650 string=0x0000000000306654 ")"
 *   insn=0x0000000000306654 string=0x0000000000306658 ""
 *   insn=0x000000000030665C string=0x0000000000306660 "h"
 *   insn=0x0000000000306664 string=0x00000000003066B8 "h&G)\n"
 *   insn=0x0000000000306674 string=0x0000000000306678 "e"
 *   insn=0x0000000000306680 string=0x0000000000306684 "a"
 *   insn=0x000000000030669C string=0x00000000003066A0 "`"
 *   insn=0x000000000030669C string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003066AC string=0x00000000003066B0 "h"
 *   insn=0x00000000003066B0 string=0x00000000003066B4 "@"
 *   insn=0x00000000003066B8 string=0x00000000003066BC "\n"
 *   insn=0x00000000003066C0 string=0x00000000003066C4 "j:"
 *   insn=0x00000000003066E0 string=0x00000000003066E4 "S"
 *   insn=0x00000000003066E4 string=0x00000000001F6030 "0'"
 *   insn=0x00000000003066E8 string=0x00000000003066EC "h"
 *   insn=0x00000000003066EC string=0x00000000003066F0 "h"
 *   insn=0x00000000003066FC string=0x0000000000306700 "h:@"
 *   insn=0x0000000000306700 string=0x0000000000306704 ""
 *   insn=0x0000000000306704 string=0x0000000000306708 "K"
 *   insn=0x0000000000306708 string=0x000000000030670C "h:"
 *   insn=0x0000000000306708 string=0x0000000000306710 "i"
 *   insn=0x0000000000306710 string=0x0000000000306714 "?"
 *   insn=0x0000000000306718 string=0x000000000030671C "*"
 *   insn=0x000000000030671C string=0x0000000000306720 "_a"
 *   insn=0x0000000000306720 string=0x0000000000306724 "A"
 *   insn=0x0000000000306724 string=0x0000000000306728 ")"
 *   insn=0x0000000000306728 string=0x000000000030672C "i"
 *   insn=0x000000000030672C string=0x0000000000306730 "?"
 *   insn=0x000000000030673C string=0x0000000000306740 "D"
 *   insn=0x0000000000306748 string=0x000000000030674C "i"
 *   insn=0x0000000000306750 string=0x0000000000306754 "_"
 *   insn=0x000000000030675C string=0x0000000000306760 "j"
 *   insn=0x0000000000306760 string=0x0000000000306764 "?"
 *   insn=0x000000000030676C string=0x0000000000306770 "("
 *   insn=0x0000000000306778 string=0x000000000030677C "("
 *   insn=0x000000000030677C string=0x0000000000306780 "h"
 *   insn=0x000000000030678C string=0x0000000000306790 "`"
 *   insn=0x000000000030678C string=0x00000000001FA750 "0'"
 *   insn=0x000000000030679C string=0x00000000003067A0 "("
 *   insn=0x00000000003067A4 string=0x00000000003067A8 "h"
 *   insn=0x00000000003067B0 string=0x00000000003067B4 "\t"
 *   insn=0x00000000003067B4 string=0x00000000003067B8 "?"
 *   insn=0x00000000003067BC string=0x00000000003067C0 ""
 *   insn=0x00000000003067C0 string=0x00000000003067C4 "h"
 *   insn=0x00000000003067D0 string=0x00000000003067D4 "@"
 *   insn=0x00000000003067E0 string=0x00000000003067E4 "("
 *   insn=0x00000000003067E8 string=0x00000000003067EC "i"
 *   insn=0x00000000003067EC string=0x00000000003067F0 "?"
 *   insn=0x00000000003067F4 string=0x00000000003067F8 "*"
 *   insn=0x00000000003067F8 string=0x00000000003067FC "_"
 *   insn=0x00000000003067FC string=0x0000000000306800 "a"
 *   insn=0x0000000000306800 string=0x0000000000306804 ")"
 *   insn=0x0000000000306804 string=0x0000000000306808 "i"
 *   insn=0x000000000030680C string=0x0000000000306810 ""
 *   insn=0x0000000000306818 string=0x0000000000306830 "h"
 *   insn=0x000000000030681C string=0x0000000000306820 "p"
 *   insn=0x0000000000306828 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000306838 string=0x000000000030683C "\t"
 *   insn=0x0000000000306840 string=0x0000000000306844 ")"
 *   insn=0x0000000000306844 string=0x0000000000306848 ""
 *   insn=0x000000000030684C string=0x0000000000306850 "h"
 *   insn=0x0000000000306854 string=0x0000000000306868 "h&G)\n"
 *   insn=0x0000000000306868 string=0x000000000030686C "\n"
 *   insn=0x0000000000306870 string=0x0000000000306874 "j:"
 *   insn=0x0000000000306874 string=0x0000000000306878 "*"
 *   insn=0x0000000000306880 string=0x0000000000306884 "?"
 *   insn=0x0000000000306890 string=0x0000000000306894 "#"
 *   insn=0x0000000000306894 string=0x0000000000306898 " "
 *   insn=0x0000000000306894 string=0x00000000001F8D20 "0'"
 *   insn=0x0000000000306898 string=0x000000000030689C "h"
 *   insn=0x00000000003068A8 string=0x00000000003068AC "Y"
 *   insn=0x00000000003068AC string=0x00000000003068B0 "h:@"
 *   insn=0x00000000003068B0 string=0x00000000003068B4 ""
 *   insn=0x00000000003068B4 string=0x00000000003068B8 "K"
 *   insn=0x00000000003068B8 string=0x00000000003068BC "h:"
 *   insn=0x00000000003068B8 string=0x00000000003068C0 "h"
 *   insn=0x00000000003068C4 string=0x00000000003068C8 """
 *   insn=0x00000000003068C8 string=0x00000000003068CC "\t"
 *   insn=0x00000000003068CC string=0x00000000003068D0 "?"
 *   insn=0x00000000003068D4 string=0x00000000003068D8 ""
 *   insn=0x00000000003068D8 string=0x00000000003068DC "h"
 *   insn=0x00000000003068F8 string=0x00000000003068FC "("
 *   insn=0x0000000000306900 string=0x0000000000306904 "i"
 *   insn=0x0000000000306904 string=0x0000000000306908 "?"
 *   insn=0x000000000030690C string=0x0000000000306910 "*"
 *   insn=0x0000000000306910 string=0x0000000000306914 "_"
 *   insn=0x0000000000306918 string=0x000000000030691C "*"
 *   insn=0x000000000030691C string=0x0000000000306920 "j"
 *   insn=0x0000000000306920 string=0x0000000000306924 "_"
 *   insn=0x0000000000306924 string=0x0000000000306928 "C"
 *   insn=0x0000000000306934 string=0x0000000000306938 " "
 *   insn=0x000000000030693C string=0x0000000000306940 "j"
 *   insn=0x0000000000306944 string=0x0000000000306948 "?"
 *   insn=0x0000000000306950 string=0x0000000000306954 "i"
 *   insn=0x0000000000306954 string=0x0000000000306958 "_"
 *   insn=0x000000000030695C string=0x0000000000306960 "a"
 *   insn=0x0000000000306960 string=0x0000000000306964 "h.@"
 *   insn=0x0000000000306964 string=0x0000000000306968 "("
 *   insn=0x0000000000306970 string=0x0000000000306974 "`"
 *   insn=0x0000000000306978 string=0x0000000000306988 ""
 *   insn=0x0000000000306994 string=0x00000000003069B4 "G"
 *   insn=0x00000000003069B4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003069C4 string=0x00000000003069C8 ":"
 *   insn=0x00000000003069C8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(
        Caver::Proto::GroundPolygonComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  int v9; // w8
  int v10; // w8
  __int64 v11; // x9
  __int64 v12; // x8
  Caver::Proto::Vector2 *v13; // x22
  __int64 v14; // x8
  __int64 v15; // x9
  char *v16; // x8
  int v17; // w8
  int v18; // w9
  int v19; // w23
  int v20; // w8
  bool v21; // vf
  int v22; // w8
  _BYTE *v23; // x8
  unsigned __int64 v24; // x8
  char *v25; // x9
  unsigned int v26; // w10
  _BYTE *v27; // x9
  unsigned __int64 v28; // x8
  char *v29; // x10
  unsigned int v30; // w9
  unsigned __int8 *v31; // x10
  Caver::Proto::Polygon *v32; // x22
  char *v33; // x8
  int v34; // w8
  int v35; // w8
  int v36; // w9
  int v37; // w23
  int v38; // w8
  int v39; // w8
  _BYTE *v40; // x9
  int v41; // w11
  int v42; // w9
  _BYTE *v43; // x8
  int v44; // w9
  _BYTE *v45; // x9
  Caver::Proto::Program *v46; // x22
  char *v47; // x8
  int v48; // w8
  int v49; // w9
  int v50; // w23
  int v51; // w8
  int v52; // w8
  _BYTE *v53; // x8
  int v54; // w9
  _BYTE *v55; // x9
  int v56; // w11
  __int64 result; // x0
  unsigned int v58; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v59; // [xsp+8h] [xbp-48h]

  v5 = (Caver::Proto::GroundPolygonComponent *)((char *)this + 24);
  v59 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v7 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_52;
        while ( 1 )
        {
          v10 = *((_DWORD *)this + 9);
          v11 = *((int *)this + 8);
          if ( (int)v11 >= v10 )
          {
            if ( v10 == *((_DWORD *)this + 10) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v10 + 1);
              v10 = *((_DWORD *)this + 9);
            }
            *((_DWORD *)this + 9) = v10 + 1;
            v13 = (Caver::Proto::Vector2 *)operator new(0x18u);
            Caver::Proto::Vector2::Vector2(v13);
            v14 = *((int *)this + 8);
            v15 = *((_QWORD *)this + 3);
            *((_DWORD *)this + 8) = v14 + 1;
            *(_QWORD *)(v15 + 8 * v14) = v13;
          }
          else
          {
            v12 = *((_QWORD *)this + 3);
            *((_DWORD *)this + 8) = v11 + 1;
            v13 = *(Caver::Proto::Vector2 **)(v12 + 8 * v11);
          }
          v16 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v58) & 1) == 0 )
              return 0;
          }
          else
          {
            v58 = (unsigned __int8)*v16;
            *((_QWORD *)a2 + 1) = v16 + 1;
          }
          v17 = *((_DWORD *)a2 + 14);
          v18 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v17 + 1;
          if ( v17 >= v18 )
            return 0;
          v19 = google::protobuf::io::CodedInputStream::PushLimit(a2, v58);
          if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v13, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
            return 0;
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
        goto LABEL_42;
      case 2u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_52;
LABEL_42:
        v32 = (Caver::Proto::Polygon *)*((_QWORD *)this + 10);
        *((_DWORD *)this + 27) |= 4u;
        if ( !v32 )
        {
          v32 = (Caver::Proto::Polygon *)operator new(0x50u);
          Caver::Proto::Polygon::Polygon(v32);
          *((_QWORD *)this + 10) = v32;
        }
        v33 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v33 >= *((_QWORD *)a2 + 2) || *v33 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v58) & 1) == 0 )
            return 0;
        }
        else
        {
          v58 = (unsigned __int8)*v33;
          *((_QWORD *)a2 + 1) = v33 + 1;
        }
        v35 = *((_DWORD *)a2 + 14);
        v36 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v35 + 1;
        if ( v35 >= v36 )
          return 0;
        v37 = google::protobuf::io::CodedInputStream::PushLimit(a2, v58);
        if ( (Caver::Proto::Polygon::MergePartialFromCodedStream(v32, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v37);
        v38 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v38, 1);
        v39 = v38 - 1;
        if ( v39 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v39;
        v40 = (_BYTE *)*((_QWORD *)a2 + 1);
        v24 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v40 >= v24 || *v40 != 24 )
          continue;
        v25 = v40 + 1;
        *((_QWORD *)a2 + 1) = v25;
        if ( (unsigned __int64)v25 >= v24 )
          goto LABEL_64;
LABEL_33:
        if ( *v25 < 0 )
        {
LABEL_64:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v58) & 1) == 0 )
            return 0;
          v26 = v58;
          v27 = (_BYTE *)*((_QWORD *)a2 + 1);
          v24 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v26 = (unsigned __int8)*v25;
          v27 = v25 + 1;
          v58 = v26;
          *((_QWORD *)a2 + 1) = v27;
        }
        v41 = *((_DWORD *)this + 27);
        *((_BYTE *)this + 88) = v26 != 0;
        *((_DWORD *)this + 27) = v41 | 8;
        if ( (unsigned __int64)v27 >= v24 || *v27 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v27 + 1;
LABEL_69:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v58) & 1) == 0 )
          return 0;
        v42 = *((_DWORD *)this + 27);
        *((_DWORD *)this + 23) = v58;
        *((_DWORD *)this + 27) = v42 | 0x10;
        v43 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v43 >= *((_QWORD *)a2 + 2) || *v43 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v43 + 1;
LABEL_73:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v58) & 1) == 0 )
          return 0;
        v44 = *((_DWORD *)this + 27);
        *((_DWORD *)this + 24) = v58;
        v34 = v44 | 0x20;
        *((_DWORD *)this + 27) = v44 | 0x20;
        v45 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v45 >= *((_QWORD *)a2 + 2) || *v45 != 50 )
          continue;
        *((_QWORD *)a2 + 1) = v45 + 1;
LABEL_77:
        v46 = (Caver::Proto::Program *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 27) = v34 | 1;
        if ( !v46 )
        {
          v46 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v46);
          *((_QWORD *)this + 2) = v46;
        }
        v47 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v47 >= *((_QWORD *)a2 + 2) || *v47 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v58) & 1) == 0 )
            return 0;
        }
        else
        {
          v58 = (unsigned __int8)*v47;
          *((_QWORD *)a2 + 1) = v47 + 1;
        }
        v48 = *((_DWORD *)a2 + 14);
        v49 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v48 + 1;
        if ( v48 >= v49 )
          return 0;
        v50 = google::protobuf::io::CodedInputStream::PushLimit(a2, v58);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v46, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v50);
        v51 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v51, 1);
        v52 = v51 - 1;
        if ( v52 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v52;
        v53 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v53 >= *((_QWORD *)a2 + 2) || *v53 != 61 )
          continue;
        *((_QWORD *)a2 + 1) = v53 + 1;
LABEL_91:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v58) & 1) == 0 )
          return 0;
        v54 = *((_DWORD *)this + 27);
        *((_DWORD *)this + 25) = v58;
        *((_DWORD *)this + 27) = v54 | 0x40;
        v55 = (_BYTE *)*((_QWORD *)a2 + 1);
        v28 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v55 >= v28 || *v55 != 64 )
          continue;
        v29 = v55 + 1;
        *((_QWORD *)a2 + 1) = v55 + 1;
        if ( (unsigned __int64)(v55 + 1) >= v28 )
          goto LABEL_95;
LABEL_39:
        if ( *v29 < 0 )
        {
LABEL_95:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v58) & 1) == 0 )
            return 0;
          v30 = v58;
          v31 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v28 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v30 = (unsigned __int8)*v29;
          v31 = (unsigned __int8 *)(v29 + 1);
          v58 = v30;
          *((_QWORD *)a2 + 1) = v31;
        }
        v56 = *((_DWORD *)this + 27);
        *((_BYTE *)this + 104) = v30 != 0;
        *((_DWORD *)this + 27) = v56 | 0x80;
        if ( v31 == (unsigned __int8 *)v28 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_52;
        v25 = (char *)*((_QWORD *)a2 + 1);
        v24 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v25 < v24 )
          goto LABEL_33;
        goto LABEL_64;
      case 4u:
        v9 = v7 & 7;
        if ( v9 == 5 )
          goto LABEL_69;
        goto LABEL_52;
      case 5u:
        v9 = v7 & 7;
        if ( v9 == 5 )
          goto LABEL_73;
        goto LABEL_52;
      case 6u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_52;
        v34 = *((_DWORD *)this + 27);
        goto LABEL_77;
      case 7u:
        v9 = v7 & 7;
        if ( v9 == 5 )
          goto LABEL_91;
        goto LABEL_52;
      case 8u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_52;
        v29 = (char *)*((_QWORD *)a2 + 1);
        v28 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v29 < v28 )
          goto LABEL_39;
        goto LABEL_95;
      default:
        v9 = v7 & 7;
LABEL_52:
        if ( v9 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v7,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

